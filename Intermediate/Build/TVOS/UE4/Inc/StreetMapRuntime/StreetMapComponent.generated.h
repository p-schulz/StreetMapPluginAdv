// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStreetMap;
struct FVector2D;
struct FStreetMapTree;
struct FStreetMapAmenity;
struct FStreetMapBarrier;
struct FStreetMapBuilding;
struct FStreetMapNode;
struct FStreetMapRoad;
#ifdef STREETMAPRUNTIME_StreetMapComponent_generated_h
#error "StreetMapComponent.generated.h already included, missing '#pragma once' in StreetMapComponent.h"
#endif
#define STREETMAPRUNTIME_StreetMapComponent_generated_h

#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMapComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetStreetMap) \
	{ \
		P_GET_OBJECT(UStreetMap,Z_Param_NewStreetMap); \
		P_GET_UBOOL(Z_Param_bClearPreviousMeshIfAny); \
		P_GET_UBOOL(Z_Param_bRebuildMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStreetMap(Z_Param_NewStreetMap,Z_Param_bClearPreviousMeshIfAny,Z_Param_bRebuildMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundsMaxOSM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetBoundsMaxOSM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundsMinOSM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetBoundsMinOSM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTreesOSM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FStreetMapTree>*)Z_Param__Result=P_THIS->GetTreesOSM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAmenitiesOSM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FStreetMapAmenity>*)Z_Param__Result=P_THIS->GetAmenitiesOSM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBarriersOSM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FStreetMapBarrier>*)Z_Param__Result=P_THIS->GetBarriersOSM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildingsOSM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FStreetMapBuilding>*)Z_Param__Result=P_THIS->GetBuildingsOSM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNodesOSM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FStreetMapNode>*)Z_Param__Result=P_THIS->GetNodesOSM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRoadsOSM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FStreetMapRoad>*)Z_Param__Result=P_THIS->GetRoadsOSM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStreetMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStreetMap**)Z_Param__Result=P_THIS->GetStreetMap(); \
		P_NATIVE_END; \
	}


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMapComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetStreetMap) \
	{ \
		P_GET_OBJECT(UStreetMap,Z_Param_NewStreetMap); \
		P_GET_UBOOL(Z_Param_bClearPreviousMeshIfAny); \
		P_GET_UBOOL(Z_Param_bRebuildMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStreetMap(Z_Param_NewStreetMap,Z_Param_bClearPreviousMeshIfAny,Z_Param_bRebuildMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundsMaxOSM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetBoundsMaxOSM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundsMinOSM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetBoundsMinOSM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTreesOSM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FStreetMapTree>*)Z_Param__Result=P_THIS->GetTreesOSM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAmenitiesOSM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FStreetMapAmenity>*)Z_Param__Result=P_THIS->GetAmenitiesOSM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBarriersOSM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FStreetMapBarrier>*)Z_Param__Result=P_THIS->GetBarriersOSM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildingsOSM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FStreetMapBuilding>*)Z_Param__Result=P_THIS->GetBuildingsOSM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNodesOSM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FStreetMapNode>*)Z_Param__Result=P_THIS->GetNodesOSM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRoadsOSM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FStreetMapRoad>*)Z_Param__Result=P_THIS->GetRoadsOSM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStreetMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStreetMap**)Z_Param__Result=P_THIS->GetStreetMap(); \
		P_NATIVE_END; \
	}


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMapComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStreetMapComponent(); \
	friend struct Z_Construct_UClass_UStreetMapComponent_Statics; \
public: \
	DECLARE_CLASS(UStreetMapComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StreetMapRuntime"), NO_API) \
	DECLARE_SERIALIZER(UStreetMapComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UStreetMapComponent*>(this); }


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMapComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUStreetMapComponent(); \
	friend struct Z_Construct_UClass_UStreetMapComponent_Statics; \
public: \
	DECLARE_CLASS(UStreetMapComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StreetMapRuntime"), NO_API) \
	DECLARE_SERIALIZER(UStreetMapComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UStreetMapComponent*>(this); }


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMapComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStreetMapComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreetMapComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreetMapComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreetMapComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStreetMapComponent(UStreetMapComponent&&); \
	NO_API UStreetMapComponent(const UStreetMapComponent&); \
public:


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMapComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStreetMapComponent(UStreetMapComponent&&); \
	NO_API UStreetMapComponent(const UStreetMapComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreetMapComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreetMapComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreetMapComponent)


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMapComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StreetMap() { return STRUCT_OFFSET(UStreetMapComponent, StreetMap); } \
	FORCEINLINE static uint32 __PPO__MeshBuildSettings() { return STRUCT_OFFSET(UStreetMapComponent, MeshBuildSettings); } \
	FORCEINLINE static uint32 __PPO__CollisionSettings() { return STRUCT_OFFSET(UStreetMapComponent, CollisionSettings); } \
	FORCEINLINE static uint32 __PPO__StreetMapBodySetup() { return STRUCT_OFFSET(UStreetMapComponent, StreetMapBodySetup); } \
	FORCEINLINE static uint32 __PPO__Vertices() { return STRUCT_OFFSET(UStreetMapComponent, Vertices); } \
	FORCEINLINE static uint32 __PPO__Indices() { return STRUCT_OFFSET(UStreetMapComponent, Indices); } \
	FORCEINLINE static uint32 __PPO__CachedLocalBounds() { return STRUCT_OFFSET(UStreetMapComponent, CachedLocalBounds); } \
	FORCEINLINE static uint32 __PPO__StreetMapDefaultMaterial() { return STRUCT_OFFSET(UStreetMapComponent, StreetMapDefaultMaterial); }


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMapComponent_h_17_PROLOG
#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMapComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMapComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMapComponent_h_20_RPC_WRAPPERS \
	UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMapComponent_h_20_INCLASS \
	UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMapComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMapComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMapComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMapComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMapComponent_h_20_INCLASS_NO_PURE_DECLS \
	UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMapComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMapComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
