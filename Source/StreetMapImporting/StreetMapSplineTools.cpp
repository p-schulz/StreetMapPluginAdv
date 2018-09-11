
#include "StreetMapImporting.h"
#include "StreetMapSplineTools.h"
#include "StreetMapComponent.h"

#include "GraphAStar.h"
#include "CameraRig_Rail.h"
#include "Components/SplineComponent.h"

ULandscapeSplinesComponent* FStreetMapSplineTools::ConditionallyCreateSplineComponent(ALandscapeProxy* Landscape, FVector Scale3D)
{
	Landscape->Modify();

	if (Landscape->SplineComponent == nullptr)
	{
		Landscape->SplineComponent = NewObject<ULandscapeSplinesComponent>(Landscape, NAME_None, RF_Transactional);
		Landscape->SplineComponent->RelativeScale3D = Scale3D;
		Landscape->SplineComponent->AttachToComponent(Landscape->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	}  
	Landscape->SplineComponent->ShowSplineEditorMesh(true);

	return Landscape->SplineComponent;
}

// For ways / links we want to add separate ULandscapeSplinesComponents for better control for editing 
ULandscapeSplinesComponent* FStreetMapSplineTools::CreateLinkSplineComponent(ALandscapeProxy* Landscape, FVector Scale3D)
{
	Landscape->Modify();

	if (Landscape->SplineComponent != nullptr)
	{
		ULandscapeSplinesComponent * LinkSpline = NewObject<ULandscapeSplinesComponent>(Landscape, NAME_None, RF_Transactional);
		Landscape->SplineComponent->RelativeScale3D = Scale3D;
		LinkSpline->AttachToComponent(Landscape->SplineComponent, FAttachmentTransformRules::KeepRelativeTransform);
		Landscape->SplineComponent->ShowSplineEditorMesh(true);

		return LinkSpline;
	}
	return nullptr;
}

ULandscapeSplineControlPoint* FStreetMapSplineTools::AddControlPoint(ULandscapeSplinesComponent* SplinesComponent,
	const FVector& LocalLocation,
	const float& Width,
	const float& ZOffset,
	const float& SideFalloff,
	const float& EndFalloff,
	const ALandscapeProxy* Landscape,
	ULandscapeSplineControlPoint* PreviousPoint)
{
	SplinesComponent->Modify();

	ULandscapeSplineControlPoint* NewControlPoint = NewObject<ULandscapeSplineControlPoint>(SplinesComponent, NAME_None, RF_Transactional);
	SplinesComponent->ControlPoints.Add(NewControlPoint);

	// Apply scaling between world and landscape
	FTransform LandscapeToWorld = Landscape->ActorToWorld();

	NewControlPoint->Location = LocalLocation; // has been scaled before calling this function
	NewControlPoint->Width = Width;
	NewControlPoint->SideFalloff = SideFalloff;
	NewControlPoint->EndFalloff = EndFalloff;
	NewControlPoint->LayerName = "Soil";
	NewControlPoint->SegmentMeshOffset = ZOffset;

	if (PreviousPoint)
	{
		NewControlPoint->Rotation = (NewControlPoint->Location - PreviousPoint->Location).Rotation();
		NewControlPoint->Width = PreviousPoint->Width;
		NewControlPoint->SideFalloff = PreviousPoint->SideFalloff;
		NewControlPoint->EndFalloff = PreviousPoint->EndFalloff;
		NewControlPoint->Mesh = PreviousPoint->Mesh;
		NewControlPoint->MeshScale = PreviousPoint->MeshScale;
		NewControlPoint->bPlaceSplineMeshesInStreamingLevels = PreviousPoint->bPlaceSplineMeshesInStreamingLevels;
		NewControlPoint->bEnableCollision = PreviousPoint->bEnableCollision;
		NewControlPoint->bCastShadow = PreviousPoint->bCastShadow;
	}
	else
	{
		// required to make control point visible
		NewControlPoint->UpdateSplinePoints();
	}

	if (!SplinesComponent->IsRegistered())
	{
		SplinesComponent->RegisterComponent();
	}
	else
	{
		SplinesComponent->MarkRenderStateDirty();
	}

	return NewControlPoint;
}

ULandscapeSplineSegment* FStreetMapSplineTools::AddSegment(ULandscapeSplineControlPoint* Start, ULandscapeSplineControlPoint* End, bool bAutoRotateStart, bool bAutoRotateEnd)
{
	ULandscapeSplinesComponent* SplinesComponent = Start->GetOuterULandscapeSplinesComponent();
	SplinesComponent->Modify();
	Start->Modify();
	End->Modify();

	ULandscapeSplineSegment* NewSegment = NewObject<ULandscapeSplineSegment>(SplinesComponent, NAME_None, RF_Transactional);
	SplinesComponent->Segments.Add(NewSegment);

	NewSegment->Connections[0].ControlPoint = Start;
	NewSegment->Connections[1].ControlPoint = End;

	NewSegment->Connections[0].SocketName = Start->GetBestConnectionTo(End->Location);
	NewSegment->Connections[1].SocketName = End->GetBestConnectionTo(Start->Location);

	FVector StartLocation; FRotator StartRotation;
	Start->GetConnectionLocationAndRotation(NewSegment->Connections[0].SocketName, StartLocation, StartRotation);
	FVector EndLocation; FRotator EndRotation;
	End->GetConnectionLocationAndRotation(NewSegment->Connections[1].SocketName, EndLocation, EndRotation);

	// Set up tangent lengths
	NewSegment->Connections[0].TangentLen = (EndLocation - StartLocation).Size();
	NewSegment->Connections[1].TangentLen = NewSegment->Connections[0].TangentLen;

	NewSegment->AutoFlipTangents();

	// set up other segment options
	ULandscapeSplineSegment* CopyFromSegment = nullptr;
	if (Start->ConnectedSegments.Num() > 0)
	{
		CopyFromSegment = Start->ConnectedSegments[0].Segment;
	}
	else if (End->ConnectedSegments.Num() > 0)
	{
		CopyFromSegment = End->ConnectedSegments[0].Segment;
	}
	else
	{
		// Use defaults
	}

	if (CopyFromSegment != nullptr)
	{
		NewSegment->LayerName = CopyFromSegment->LayerName;
		NewSegment->SplineMeshes = CopyFromSegment->SplineMeshes;
		NewSegment->LDMaxDrawDistance = CopyFromSegment->LDMaxDrawDistance;
		NewSegment->bRaiseTerrain = CopyFromSegment->bRaiseTerrain;
		NewSegment->bLowerTerrain = CopyFromSegment->bLowerTerrain;
		NewSegment->bPlaceSplineMeshesInStreamingLevels = CopyFromSegment->bPlaceSplineMeshesInStreamingLevels;
		NewSegment->bEnableCollision = CopyFromSegment->bEnableCollision;
		NewSegment->bCastShadow = CopyFromSegment->bCastShadow;
	}

	Start->ConnectedSegments.Add(FLandscapeSplineConnection(NewSegment, 0));
	End->ConnectedSegments.Add(FLandscapeSplineConnection(NewSegment, 1));

	bool bUpdatedStart = false;
	bool bUpdatedEnd = false;
	if (bAutoRotateStart)
	{
		Start->AutoCalcRotation();
		Start->UpdateSplinePoints();
		bUpdatedStart = true;
	}
	if (bAutoRotateEnd)
	{
		End->AutoCalcRotation();
		End->UpdateSplinePoints();
		bUpdatedEnd = true;
	}

	// Control points' points are currently based on connected segments, so need to be updated.
	if (!bUpdatedStart && Start->Mesh)
	{
		Start->UpdateSplinePoints();
	}
	if (!bUpdatedEnd && End->Mesh)
	{
		End->UpdateSplinePoints();
	}

	// If we've called UpdateSplinePoints on either control point it will already have called UpdateSplinePoints on the new segment
	if (!(bUpdatedStart || bUpdatedEnd))
	{
		NewSegment->UpdateSplinePoints();
	}

	return NewSegment;
}

float FStreetMapSplineTools::GetLandscapeElevation(const ALandscapeProxy* Landscape, const FVector2D& Location)
{
	UWorld* World = Landscape->GetWorld();
	const FVector RayOrigin(Location, 1000000.0f);
	const FVector RayEndPoint(Location, -1000000.0f);

	static FName TraceTag = FName(TEXT("LandscapeTrace"));
	TArray<FHitResult> Results;
	// Each landscape component has 2 collision shapes, 1 of them is specific to landscape editor
	// Trace only ECC_Visibility channel, so we do hit only Editor specific shape
	World->LineTraceMultiByObjectType(Results, RayOrigin, RayEndPoint, FCollisionObjectQueryParams(ECollisionChannel::ECC_Visibility), FCollisionQueryParams(TraceTag, true));

	bool bHitLandscape = false;
	FVector FinalHitLocation;
	for (const FHitResult& HitResult : Results)
	{
		ULandscapeHeightfieldCollisionComponent* CollisionComponent = Cast<ULandscapeHeightfieldCollisionComponent>(HitResult.Component.Get());
		if (CollisionComponent)
		{
			ALandscapeProxy* HitLandscape = CollisionComponent->GetLandscapeProxy();
			if (HitLandscape)
			{
				FinalHitLocation = HitResult.Location;
				bHitLandscape = true;
				break;
			}
		}
	}

	if (bHitLandscape)
	{
		return FinalHitLocation.Z;
	}

	return 0.0f;
}

void FStreetMapSplineTools::CleanSplines(ULandscapeSplinesComponent* SplinesComponent,
					const UStaticMesh* Mesh,
					UWorld* World)
{
	TArray< ULandscapeSplineControlPoint* > SplineControlPointsToDelete;

	const int32 NumSegments = SplinesComponent->Segments.Num();
	for (int32 SegmentIndex = NumSegments - 1; SegmentIndex >= 0; SegmentIndex--)
	{
		ULandscapeSplineSegment* Segment = SplinesComponent->Segments[SegmentIndex];
		if (Segment->SplineMeshes.Num() == 1 &&
			Segment->SplineMeshes[0].Mesh == Mesh)
		{
			SplineControlPointsToDelete.AddUnique(Segment->Connections[0].ControlPoint);
			SplineControlPointsToDelete.AddUnique(Segment->Connections[1].ControlPoint);

			Segment->DeleteSplinePoints();

			SplinesComponent->Segments.RemoveAtSwap(SegmentIndex);
		}
	}

	SplinesComponent->ControlPoints.RemoveAllSwap([&SplineControlPointsToDelete](ULandscapeSplineControlPoint* OtherControlPoint)
	{
		const bool DeleteThisSplineControlPoint = SplineControlPointsToDelete.Contains(OtherControlPoint);
		if (DeleteThisSplineControlPoint)
		{
			OtherControlPoint->DeleteSplinePoints();
		}
		return DeleteThisSplineControlPoint;
	});

	SplinesComponent->Modify();

	World->ForceGarbageCollection(true);
}


ULandscapeSplineControlPoint* FStreetMapSplineTools::FindNearestSplineControlPoint(const AActor* Actor, ALandscapeProxy* Landscape)
{
	const FTransform LandscapeTransform = Landscape->GetActorTransform();
	const FVector ActorLocation = Actor->GetTransform().GetLocation();

	float DistSquaredMin = TNumericLimits<float>::Max();
	ULandscapeSplineControlPoint* NearestControlPoint = nullptr;

	const int32 NumControlPoints = Landscape->SplineComponent->ControlPoints.Num();
	for (int32 ControlPointIndex = 0; ControlPointIndex < NumControlPoints; ControlPointIndex++)
	{
		ULandscapeSplineControlPoint* ControlPoint = Landscape->SplineComponent->ControlPoints[ControlPointIndex];
		const FVector ControlPointInWorldSpace = LandscapeTransform.TransformPositionNoScale(ControlPoint->Location);

		float DistSquared = FVector::DistSquared(ActorLocation, ControlPointInWorldSpace);

		if (DistSquaredMin > DistSquared)
		{
			DistSquaredMin = DistSquared;
			NearestControlPoint = ControlPoint;
		}
	}

	return NearestControlPoint;
}


template<typename TGraph>
struct FGraphAStarNode
{
	typedef typename TGraph::FNodeRef FGraphNodeRef;

	const FGraphNodeRef NodeRef;
	FGraphNodeRef ParentRef;
	float TraversalCost;
	float TotalCost;
	int32 SearchNodeIndex;
	int32 ParentNodeIndex;
	uint8 bIsOpened : 1;
	uint8 bIsClosed : 1;

	FGraphAStarNode(const FGraphNodeRef& InNodeRef)
		: NodeRef(InNodeRef)
		, ParentRef(nullptr)
		, TraversalCost(FLT_MAX)
		, TotalCost(FLT_MAX)
		, SearchNodeIndex(INDEX_NONE)
		, ParentNodeIndex(INDEX_NONE)
		, bIsOpened(false)
		, bIsClosed(false)
	{}

	FORCEINLINE void MarkOpened() { bIsOpened = true; }
	FORCEINLINE void MarkNotOpened() { bIsOpened = false; }
	FORCEINLINE void MarkClosed() { bIsClosed = true; }
	FORCEINLINE void MarkNotClosed() { bIsClosed = false; }
	FORCEINLINE bool IsOpened() const { return bIsOpened; }
	FORCEINLINE bool IsClosed() const { return bIsClosed; }
};

/**
 *	TQueryFilter (FindPath's parameter) filter class is what decides which graph edges can be used and at what cost. It needs to implement following functions:
 *		float GetHeuristicScale() const;														- used as GetHeuristicCost's multiplier
 *		float GetHeuristicCost(const FNodeRef StartNodeRef, const FNodeRef EndNodeRef) const;	- estimate of cost from StartNodeRef to EndNodeRef
 *		float GetTraversalCost(const FNodeRef StartNodeRef, const FNodeRef EndNodeRef) const;	- real cost of traveling from StartNodeRef directly to EndNodeRef
 *		bool IsTraversalAllowed(const FNodeRef NodeA, const FNodeRef NodeB) const;				- whether traversing given edge is allowed
 *		bool WantsPartialSolution() const;														- whether to accept solutions that do not reach the goal
 */
struct FLandscapeSplineQueryFilter
{
	typedef const ULandscapeSplineControlPoint* FNodeRef;

	FLandscapeSplineQueryFilter() {}

	float GetHeuristicScale() const
	{
		return 1.0f;
	}

	float GetHeuristicCost(const FNodeRef StartNodeRef, const FNodeRef EndNodeRef) const
	{
		return GetTraversalCost(StartNodeRef, EndNodeRef);
	}

	float GetTraversalCost(const FNodeRef StartNodeRef, const FNodeRef EndNodeRef) const
	{
		return FVector::Distance(StartNodeRef->Location, EndNodeRef->Location);
	}

	bool IsTraversalAllowed(const FNodeRef NodeA, const FNodeRef NodeB) const
	{
		return true; // only traversable neigbours are disclosed by the graph
	}

	bool WantsPartialSolution() const
	{
		return true; // if not possible otherwise take best result
	}
};

struct FLandscapeSplineGraph // implements FGraphAStar: TGraph
{
	typedef const ULandscapeSplineControlPoint* FNodeRef;

	int32 GetNeighbourCount(FNodeRef NodeRef) const 
	{ 
		return NodeRef->ConnectedSegments.Num();
	}

	bool IsValidRef(FNodeRef NodeRef) const 
	{ 
		return NodeRef != nullptr; 
	}

	FNodeRef GetNeighbour(const FNodeRef NodeRef, const int32 NeiIndex) const
	{
		return NodeRef->ConnectedSegments[NeiIndex].GetFarConnection().ControlPoint;
	}
};

TArray<const ULandscapeSplineControlPoint*> FStreetMapSplineTools::FindShortestRoute(
	ALandscapeProxy* Landscape, 
	const ULandscapeSplineControlPoint* Start, 
	const ULandscapeSplineControlPoint* End)
{
	TArray<const ULandscapeSplineControlPoint*> PathCoords;
	FLandscapeSplineGraph LandscapeSplineGraph;

	// use AStar to find shortest route
	FGraphAStar<FLandscapeSplineGraph, FGraphAStarDefaultPolicy, FGraphAStarNode<FLandscapeSplineGraph>> Pathfinder(LandscapeSplineGraph);
	Pathfinder.FindPath(Start, End, FLandscapeSplineQueryFilter(), PathCoords);

	return PathCoords;
}

float GetTangentLength(const TArray<const ULandscapeSplineControlPoint*>& SplinePoints, int32 Index, int32 Offset)
{
	if ((Index + Offset < 0) || (Index + Offset >= SplinePoints.Num()))
	{
		return 0.0f;
	}

	const ULandscapeSplineControlPoint* ConnectedSplineControlPoint = SplinePoints[Index + Offset];
	const TArray<FLandscapeSplineConnection>& Connections = SplinePoints[Index]->ConnectedSegments;

	for (int32 ConnectionIndex = 0; ConnectionIndex < Connections.Num(); ConnectionIndex++)
	{
		if (Connections[ConnectionIndex].GetFarConnection().ControlPoint == ConnectedSplineControlPoint)
		{
			return FMath::Abs(Connections[ConnectionIndex].GetNearConnection().TangentLen);
		}
	}

	return 0.0f;
}

void BuildSplines(class UStreetMapComponent* StreetMapComponent, const FStreetMapSplineBuildSettings& BuildSettings, ALandscapeProxy* Landscape)
{
	const ULandscapeSplineControlPoint* Start = FStreetMapSplineTools::FindNearestSplineControlPoint(BuildSettings.Start, Landscape);
	const ULandscapeSplineControlPoint* End   = FStreetMapSplineTools::FindNearestSplineControlPoint(BuildSettings.End, Landscape);

	TArray<const ULandscapeSplineControlPoint*> ShortestRoute = FStreetMapSplineTools::FindShortestRoute(Landscape, Start, End);
	
	if(ShortestRoute.Num() > 0)
	{
		ShortestRoute.Insert(Start, 0);

		FVector ActorLocation = ShortestRoute[0]->Location;

		FActorSpawnParameters ActorSpawnParameters;
		ActorSpawnParameters.OverrideLevel = BuildSettings.Start->GetLevel();
		ACameraRig_Rail* CameraRigRail = BuildSettings.Start->GetWorld()->SpawnActor<ACameraRig_Rail>(ActorLocation, FRotator(0.0f), ActorSpawnParameters);

		USplineComponent* SplineComponent = CameraRigRail->GetRailSplineComponent();

		// ensure we rotate the first point if we start off in opposite direction
		FRotator PreviousRotation = ShortestRoute[0]->Rotation;
		FVector InitialDirection = (ShortestRoute[1]->Location - ShortestRoute[0]->Location).GetSafeNormal();
		if (FVector::DotProduct(PreviousRotation.Vector(), InitialDirection) < 0.0f)
		{
			PreviousRotation += FRotator(0.0f, 180.0f, 0.0f); 
		}

		TArray<FSplinePoint> Points;
		Points.Reserve(ShortestRoute.Num());
		for (int32 ControlPointIndex = 0; ControlPointIndex < ShortestRoute.Num(); ControlPointIndex++)
		{
			const ULandscapeSplineControlPoint* SplineControlPoint = ShortestRoute[ControlPointIndex];

			FRotator CurrentRotation = SplineControlPoint->Rotation;
			FVector RotationDelta = (CurrentRotation - PreviousRotation).Vector();

			if (RotationDelta.X < 0.0)
			{
				CurrentRotation = CurrentRotation + FRotator(0.0f, 180.0f, 0.0f);
			}

			const FVector Direction = CurrentRotation.Vector();
			FVector LeaveTangent = Direction * GetTangentLength(ShortestRoute, ControlPointIndex, 1);
			FVector ArriveTangent = Direction * GetTangentLength(ShortestRoute, ControlPointIndex, -1);

			Points.Add(FSplinePoint(ControlPointIndex,
									SplineControlPoint->Location - ActorLocation,
									ArriveTangent, LeaveTangent, CurrentRotation));

			PreviousRotation = CurrentRotation;
		}

		SplineComponent->ClearSplinePoints();
		SplineComponent->AddPoints(Points, true);
	}
	else
	{
		GWarn->Logf(ELogVerbosity::Error, TEXT("BuildSplines: Was unable to find a path between the given points."));
	}
}
