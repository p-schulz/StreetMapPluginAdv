// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STREETMAPRUNTIME_StreetMap_generated_h
#error "StreetMap.generated.h already included, missing '#pragma once' in StreetMap.h"
#endif
#define STREETMAPRUNTIME_StreetMap_generated_h

#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_391_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreetMapTree_Statics; \
	static class UScriptStruct* StaticStruct();


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_353_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreetMapBarrier_Statics; \
	static class UScriptStruct* StaticStruct();


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_315_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreetMapAmenity_Statics; \
	static class UScriptStruct* StaticStruct();


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_277_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreetMapBuilding_Statics; \
	static class UScriptStruct* StaticStruct();


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_238_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreetMapNode_Statics; \
	static class UScriptStruct* StaticStruct();


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_222_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics; \
	static class UScriptStruct* StaticStruct();


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_145_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreetMapRoad_Statics; \
	static class UScriptStruct* StaticStruct();


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics; \
	static class UScriptStruct* StaticStruct();


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics; \
	static class UScriptStruct* StaticStruct();


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_428_RPC_WRAPPERS
#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_428_RPC_WRAPPERS_NO_PURE_DECLS
#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_428_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStreetMap(); \
	friend struct Z_Construct_UClass_UStreetMap_Statics; \
public: \
	DECLARE_CLASS(UStreetMap, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StreetMapRuntime"), NO_API) \
	DECLARE_SERIALIZER(UStreetMap)


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_428_INCLASS \
private: \
	static void StaticRegisterNativesUStreetMap(); \
	friend struct Z_Construct_UClass_UStreetMap_Statics; \
public: \
	DECLARE_CLASS(UStreetMap, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StreetMapRuntime"), NO_API) \
	DECLARE_SERIALIZER(UStreetMap)


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_428_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStreetMap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreetMap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreetMap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreetMap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStreetMap(UStreetMap&&); \
	NO_API UStreetMap(const UStreetMap&); \
public:


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_428_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStreetMap(UStreetMap&&); \
	NO_API UStreetMap(const UStreetMap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreetMap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreetMap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStreetMap)


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_428_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Roads() { return STRUCT_OFFSET(UStreetMap, Roads); } \
	FORCEINLINE static uint32 __PPO__Nodes() { return STRUCT_OFFSET(UStreetMap, Nodes); } \
	FORCEINLINE static uint32 __PPO__Buildings() { return STRUCT_OFFSET(UStreetMap, Buildings); } \
	FORCEINLINE static uint32 __PPO__Amenities() { return STRUCT_OFFSET(UStreetMap, Amenities); } \
	FORCEINLINE static uint32 __PPO__Barriers() { return STRUCT_OFFSET(UStreetMap, Barriers); } \
	FORCEINLINE static uint32 __PPO__Trees() { return STRUCT_OFFSET(UStreetMap, Trees); } \
	FORCEINLINE static uint32 __PPO__BoundsMin() { return STRUCT_OFFSET(UStreetMap, BoundsMin); } \
	FORCEINLINE static uint32 __PPO__BoundsMax() { return STRUCT_OFFSET(UStreetMap, BoundsMax); }


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_425_PROLOG
#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_428_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_428_PRIVATE_PROPERTY_OFFSET \
	UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_428_RPC_WRAPPERS \
	UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_428_INCLASS \
	UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_428_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_428_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_428_PRIVATE_PROPERTY_OFFSET \
	UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_428_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_428_INCLASS_NO_PURE_DECLS \
	UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_428_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4Plugins_compiled_StreetMap_HostProject_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h


#define FOREACH_ENUM_ESTREETMAPROADTYPE(op) \
	op(Street) \
	op(MajorRoad) \
	op(Highway) \
	op(Other) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
