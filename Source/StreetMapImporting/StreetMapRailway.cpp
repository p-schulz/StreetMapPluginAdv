#include "StreetMapImporting.h"
#include "StreetMapComponent.h"
#include "StreetMapRailway.h"

#include "StreetMapSplineTools.h"

#include "ScopedTransaction.h"

#define LOCTEXT_NAMESPACE "StreetMapImporting"

static void BuildStreetMapRailways(class UStreetMapComponent* StreetMapComponent, const FStreetMapRailwayBuildSettings& BuildSettings)
{
	const FTransform LandscapeToWorld = BuildSettings.Landscape->ActorToWorld();
	const FVector SplineScaleXYZ = FVector(1.0f) / LandscapeToWorld.GetScale3D();
	ULandscapeSplinesComponent* SplinesComponent = FStreetMapSplineTools::ConditionallyCreateSplineComponent(BuildSettings.Landscape, SplineScaleXYZ);

	FStreetMapSplineTools::CleanSplines(SplinesComponent, BuildSettings.RailwayLineMesh, BuildSettings.Landscape->GetWorld());

	TMap< int32, ULandscapeSplineControlPoint* > NodeIndexToControlPointMap;
	const TArray<FStreetMapRailway>& Railways = StreetMapComponent->GetStreetMap()->GetRailways();

	for(const FStreetMapRailway& Railway : Railways)
	{
		ULandscapeSplineControlPoint* PreviousPoint = nullptr;
		const int32 NumPoints = Railway.Points.Num();
		for (int32 PointIndex = 0; PointIndex < NumPoints; PointIndex++)
		{
			const FVector2D& PointLocation = Railway.Points[PointIndex];
			const int32 NodeIndex = Railway.NodeIndices[PointIndex];

			ULandscapeSplineControlPoint* CurrentPoint = nullptr;

			// Try to find existing control point first
			if (NodeIndex != INDEX_NONE)
			{
				ULandscapeSplineControlPoint** CurrentPointPtr = NodeIndexToControlPointMap.Find(NodeIndex);
				if (CurrentPointPtr)
				{
					CurrentPoint = *CurrentPointPtr;
				}
			}

			// create a new control point
			if(CurrentPoint == nullptr)
			{
				const float WorldElevation = FStreetMapSplineTools::GetLandscapeElevation(BuildSettings.Landscape, PointLocation);
				const float ScaledWorldElevation = WorldElevation;
				const FVector2D& ScaledPointLocation = PointLocation;

				CurrentPoint = FStreetMapSplineTools::AddControlPoint(
											SplinesComponent, 
											FVector(ScaledPointLocation, ScaledWorldElevation), 
											BuildSettings.Width, 
											BuildSettings.ZOffset,
											BuildSettings.SideFalloff,
											BuildSettings.EndFalloff,
											BuildSettings.Landscape,
											PreviousPoint);

				if (NodeIndex != INDEX_NONE)
				{
					NodeIndexToControlPointMap.Add(NodeIndex, CurrentPoint);
				}
			}

			if (PreviousPoint)
			{
				ULandscapeSplineSegment* NewSegment = FStreetMapSplineTools::AddSegment(PreviousPoint, CurrentPoint, true, true);

				if(PointIndex == 1)
				{
					FLandscapeSplineMeshEntry MeshEntry;
					MeshEntry.Mesh = BuildSettings.RailwayLineMesh;
					MeshEntry.bScaleToWidth = BuildSettings.ScaleToWidth;
					MeshEntry.ForwardAxis = BuildSettings.ForwardAxis;
					MeshEntry.UpAxis = BuildSettings.UpAxis;
					MeshEntry.Scale = FVector(1.0f);

					NewSegment->LayerName = "soil";
					NewSegment->LDMaxDrawDistance = 100000.0f;
					NewSegment->bRaiseTerrain = true;
					NewSegment->bLowerTerrain = true;
					NewSegment->bPlaceSplineMeshesInStreamingLevels = true;
					NewSegment->bEnableCollision = false;
					NewSegment->bCastShadow = true;

					if (NewSegment->SplineMeshes.Num() == 0)
					{
						NewSegment->SplineMeshes.Add(MeshEntry);
					}
				}
			}
			PreviousPoint = CurrentPoint;
		}
	}
}

void BuildRailway(class UStreetMapComponent* StreetMapComponent, const FStreetMapRailwayBuildSettings& BuildSettings)
{
	FScopedTransaction Transaction(LOCTEXT("Undo", "Creating Railways"));

	BuildStreetMapRailways(StreetMapComponent, BuildSettings);
}
