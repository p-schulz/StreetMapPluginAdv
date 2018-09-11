#pragma once
#include "LandscapeProxy.h"
#include "LandscapeSplinesComponent.h"
#include "LandscapeHeightfieldCollisionComponent.h"
#include "LandscapeSplineSegment.h"
#include "LandscapeSplineControlPoint.h"
#include "ControlPointMeshComponent.h"

class FStreetMapSplineTools
{
public:
	static ULandscapeSplinesComponent* ConditionallyCreateSplineComponent(ALandscapeProxy* Landscape, FVector Scale3D);
	static ULandscapeSplinesComponent* CreateLinkSplineComponent(ALandscapeProxy* Landscape, FVector Scale3D);
	static ULandscapeSplineControlPoint* AddControlPoint(ULandscapeSplinesComponent* SplinesComponent,
			const FVector& LocalLocation,
			const float& Width,
			const float& ZOffset,
			const float& SideFalloff,
			const float& EndFalloff,
			const ALandscapeProxy* Landscape,
			ULandscapeSplineControlPoint* PreviousPoint = nullptr);

	static ULandscapeSplineSegment* AddSegment(ULandscapeSplineControlPoint* Start, ULandscapeSplineControlPoint* End, bool bAutoRotateStart, bool bAutoRotateEnd);
	
	static float GetLandscapeElevation(const ALandscapeProxy* Landscape, const FVector2D& Location);

	static void CleanSplines(ULandscapeSplinesComponent* SplinesComponent,
		const UStaticMesh* Mesh,
		UWorld* World);

	static ULandscapeSplineControlPoint* FindNearestSplineControlPoint(const AActor* Actor, ALandscapeProxy* Landscape);
	static TArray<const ULandscapeSplineControlPoint*> FindShortestRoute(ALandscapeProxy* Landscape, const ULandscapeSplineControlPoint* Start, const ULandscapeSplineControlPoint* End);
};


void BuildSplines(
	class UStreetMapComponent* StreetMapComponent, 
	const FStreetMapSplineBuildSettings& BuildSettings,
	ALandscapeProxy* Landscape);
