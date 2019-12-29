// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreetMapRuntime/Public/StreetMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreetMap() {}
// Cross Module References
	STREETMAPRUNTIME_API UEnum* Z_Construct_UEnum_StreetMapRuntime_EStreetMapRoadType();
	UPackage* Z_Construct_UPackage__Script_StreetMapRuntime();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapTree();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBarrier();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapAmenity();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBuilding();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapNode();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadRef();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoad();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapCollisionSettings();
	STREETMAPRUNTIME_API UClass* Z_Construct_UClass_UStreetMap_NoRegister();
	STREETMAPRUNTIME_API UClass* Z_Construct_UClass_UStreetMap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
// End Cross Module References
	static UEnum* EStreetMapRoadType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StreetMapRuntime_EStreetMapRoadType, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("EStreetMapRoadType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStreetMapRoadType(EStreetMapRoadType_StaticEnum, TEXT("/Script/StreetMapRuntime"), TEXT("EStreetMapRoadType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StreetMapRuntime_EStreetMapRoadType_CRC() { return 216069791U; }
	UEnum* Z_Construct_UEnum_StreetMapRuntime_EStreetMapRoadType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStreetMapRoadType"), 0, Get_Z_Construct_UEnum_StreetMapRuntime_EStreetMapRoadType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Street", (int64)Street },
				{ "MajorRoad", (int64)MajorRoad },
				{ "Highway", (int64)Highway },
				{ "Other", (int64)Other },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Highway.ToolTip", "Highway" },
				{ "MajorRoad.ToolTip", "Major road or minor state highway" },
				{ "ModuleRelativePath", "Public/StreetMap.h" },
				{ "Other.ToolTip", "Other (path, bus route, etc)" },
				{ "Street.ToolTip", "Small road or residential street" },
				{ "ToolTip", "Types of roads" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StreetMapRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EStreetMapRoadType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EStreetMapRoadType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FStreetMapTree::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapTree_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapTree, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapTree"), sizeof(FStreetMapTree), Get_Z_Construct_UScriptStruct_FStreetMapTree_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapTree(FStreetMapTree::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapTree"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapTree
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapTree()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapTree")),new UScriptStruct::TCppStructOps<FStreetMapTree>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapTree;
	struct Z_Construct_UScriptStruct_FStreetMapTree_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BuildingLevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BuildingPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuildingPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildingName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapTree_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "A tree" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapTree>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BoundsMax_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "2D bounds (max) of this building's points" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BoundsMax = { UE4CodeGen_Private::EPropertyClass::Struct, "BoundsMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapTree, BoundsMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BoundsMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BoundsMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BoundsMin_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "2D bounds (min) of this building's points" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BoundsMin = { UE4CodeGen_Private::EPropertyClass::Struct, "BoundsMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapTree, BoundsMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BoundsMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BoundsMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BuildingLevels_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Levels of the building (if known, otherwise zero)" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BuildingLevels = { UE4CodeGen_Private::EPropertyClass::Int, "BuildingLevels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapTree, BuildingLevels), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BuildingLevels_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BuildingLevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Height of the building in meters (if known, otherwise zero)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Float, "Height", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapTree, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BuildingPoints_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Polygon points that define the perimeter of the building" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BuildingPoints = { UE4CodeGen_Private::EPropertyClass::Array, "BuildingPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapTree, BuildingPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BuildingPoints_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BuildingPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BuildingPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BuildingPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Type of the building" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Str, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapTree, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BuildingName_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Name of the building" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BuildingName = { UE4CodeGen_Private::EPropertyClass::Str, "BuildingName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapTree, BuildingName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BuildingName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BuildingName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreetMapTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BoundsMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BoundsMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BuildingLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BuildingPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BuildingPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapTree_Statics::NewProp_BuildingName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreetMapTree_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapRuntime,
		nullptr,
		&NewStructOps,
		"StreetMapTree",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FStreetMapTree),
		alignof(FStreetMapTree),
		Z_Construct_UScriptStruct_FStreetMapTree_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapTree_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapTree_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapTree_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapTree()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapTree_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapTree"), sizeof(FStreetMapTree), Get_Z_Construct_UScriptStruct_FStreetMapTree_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreetMapTree_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapTree_CRC() { return 4086209809U; }
class UScriptStruct* FStreetMapBarrier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapBarrier_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapBarrier, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapBarrier"), sizeof(FStreetMapBarrier), Get_Z_Construct_UScriptStruct_FStreetMapBarrier_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapBarrier(FStreetMapBarrier::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapBarrier"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapBarrier
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapBarrier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapBarrier")),new UScriptStruct::TCppStructOps<FStreetMapBarrier>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapBarrier;
	struct Z_Construct_UScriptStruct_FStreetMapBarrier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BuildingLevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BuildingPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuildingPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildingName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "A barrier" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapBarrier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BoundsMax_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "2D bounds (max) of this building's points" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BoundsMax = { UE4CodeGen_Private::EPropertyClass::Struct, "BoundsMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapBarrier, BoundsMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BoundsMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BoundsMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BoundsMin_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "2D bounds (min) of this building's points" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BoundsMin = { UE4CodeGen_Private::EPropertyClass::Struct, "BoundsMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapBarrier, BoundsMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BoundsMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BoundsMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BuildingLevels_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Levels of the building (if known, otherwise zero)" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BuildingLevels = { UE4CodeGen_Private::EPropertyClass::Int, "BuildingLevels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapBarrier, BuildingLevels), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BuildingLevels_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BuildingLevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Height of the building in meters (if known, otherwise zero)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Float, "Height", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapBarrier, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BuildingPoints_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Polygon points that define the perimeter of the building" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BuildingPoints = { UE4CodeGen_Private::EPropertyClass::Array, "BuildingPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapBarrier, BuildingPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BuildingPoints_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BuildingPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BuildingPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BuildingPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Type of the building" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Str, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapBarrier, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BuildingName_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Name of the building" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BuildingName = { UE4CodeGen_Private::EPropertyClass::Str, "BuildingName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapBarrier, BuildingName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BuildingName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BuildingName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BoundsMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BoundsMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BuildingLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BuildingPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BuildingPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::NewProp_BuildingName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapRuntime,
		nullptr,
		&NewStructOps,
		"StreetMapBarrier",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FStreetMapBarrier),
		alignof(FStreetMapBarrier),
		Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBarrier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapBarrier_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapBarrier"), sizeof(FStreetMapBarrier), Get_Z_Construct_UScriptStruct_FStreetMapBarrier_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreetMapBarrier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapBarrier_CRC() { return 1402475210U; }
class UScriptStruct* FStreetMapAmenity::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapAmenity_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapAmenity, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapAmenity"), sizeof(FStreetMapAmenity), Get_Z_Construct_UScriptStruct_FStreetMapAmenity_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapAmenity(FStreetMapAmenity::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapAmenity"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapAmenity
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapAmenity()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapAmenity")),new UScriptStruct::TCppStructOps<FStreetMapAmenity>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapAmenity;
	struct Z_Construct_UScriptStruct_FStreetMapAmenity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BuildingLevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BuildingPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuildingPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildingName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "A amenity" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapAmenity>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BoundsMax_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "2D bounds (max) of this building's points" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BoundsMax = { UE4CodeGen_Private::EPropertyClass::Struct, "BoundsMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapAmenity, BoundsMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BoundsMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BoundsMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BoundsMin_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "2D bounds (min) of this building's points" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BoundsMin = { UE4CodeGen_Private::EPropertyClass::Struct, "BoundsMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapAmenity, BoundsMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BoundsMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BoundsMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BuildingLevels_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Levels of the building (if known, otherwise zero)" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BuildingLevels = { UE4CodeGen_Private::EPropertyClass::Int, "BuildingLevels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapAmenity, BuildingLevels), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BuildingLevels_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BuildingLevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Height of the building in meters (if known, otherwise zero)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Float, "Height", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapAmenity, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BuildingPoints_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Polygon points that define the perimeter of the building" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BuildingPoints = { UE4CodeGen_Private::EPropertyClass::Array, "BuildingPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapAmenity, BuildingPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BuildingPoints_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BuildingPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BuildingPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BuildingPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Type of the building" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Str, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapAmenity, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BuildingName_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Name of the building" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BuildingName = { UE4CodeGen_Private::EPropertyClass::Str, "BuildingName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapAmenity, BuildingName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BuildingName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BuildingName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BoundsMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BoundsMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BuildingLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BuildingPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BuildingPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::NewProp_BuildingName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapRuntime,
		nullptr,
		&NewStructOps,
		"StreetMapAmenity",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FStreetMapAmenity),
		alignof(FStreetMapAmenity),
		Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapAmenity()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapAmenity_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapAmenity"), sizeof(FStreetMapAmenity), Get_Z_Construct_UScriptStruct_FStreetMapAmenity_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreetMapAmenity_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapAmenity_CRC() { return 1787597783U; }
class UScriptStruct* FStreetMapBuilding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapBuilding_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapBuilding, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapBuilding"), sizeof(FStreetMapBuilding), Get_Z_Construct_UScriptStruct_FStreetMapBuilding_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapBuilding(FStreetMapBuilding::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapBuilding"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapBuilding
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapBuilding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapBuilding")),new UScriptStruct::TCppStructOps<FStreetMapBuilding>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapBuilding;
	struct Z_Construct_UScriptStruct_FStreetMapBuilding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BuildingLevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BuildingPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuildingPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildingName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "A building" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapBuilding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BoundsMax_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "2D bounds (max) of this building's points" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BoundsMax = { UE4CodeGen_Private::EPropertyClass::Struct, "BoundsMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapBuilding, BoundsMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BoundsMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BoundsMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BoundsMin_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "2D bounds (min) of this building's points" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BoundsMin = { UE4CodeGen_Private::EPropertyClass::Struct, "BoundsMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapBuilding, BoundsMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BoundsMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BoundsMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingLevels_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Levels of the building (if known, otherwise zero)" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingLevels = { UE4CodeGen_Private::EPropertyClass::Int, "BuildingLevels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapBuilding, BuildingLevels), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingLevels_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingLevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Height of the building in meters (if known, otherwise zero)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Float, "Height", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapBuilding, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingPoints_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Polygon points that define the perimeter of the building" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingPoints = { UE4CodeGen_Private::EPropertyClass::Array, "BuildingPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapBuilding, BuildingPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingPoints_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BuildingPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Type of the building" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Str, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapBuilding, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingName_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Name of the building" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingName = { UE4CodeGen_Private::EPropertyClass::Str, "BuildingName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapBuilding, BuildingName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BoundsMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BoundsMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapRuntime,
		nullptr,
		&NewStructOps,
		"StreetMapBuilding",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FStreetMapBuilding),
		alignof(FStreetMapBuilding),
		Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBuilding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapBuilding_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapBuilding"), sizeof(FStreetMapBuilding), Get_Z_Construct_UScriptStruct_FStreetMapBuilding_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapBuilding_CRC() { return 3849373976U; }
class UScriptStruct* FStreetMapNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapNode_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapNode, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapNode"), sizeof(FStreetMapNode), Get_Z_Construct_UScriptStruct_FStreetMapNode_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapNode(FStreetMapNode::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapNode"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapNode
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapNode")),new UScriptStruct::TCppStructOps<FStreetMapNode>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapNode;
	struct Z_Construct_UScriptStruct_FStreetMapNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadRefs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoadRefs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoadRefs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Describes a node on a road.  Nodes usually connect at least two roads together, but they might also exist at the end of a dead-end street.  They are sort of like an \"intersection\"." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreetMapNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapNode_Statics::NewProp_RoadRefs_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "All of the roads that intersect this node.  We have references to each of these roads, as well as the point along each\n          road where this node exists" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStreetMapNode_Statics::NewProp_RoadRefs = { UE4CodeGen_Private::EPropertyClass::Array, "RoadRefs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapNode, RoadRefs), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapNode_Statics::NewProp_RoadRefs_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapNode_Statics::NewProp_RoadRefs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapNode_Statics::NewProp_RoadRefs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "RoadRefs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStreetMapRoadRef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreetMapNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapNode_Statics::NewProp_RoadRefs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapNode_Statics::NewProp_RoadRefs_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreetMapNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapRuntime,
		nullptr,
		&NewStructOps,
		"StreetMapNode",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FStreetMapNode),
		alignof(FStreetMapNode),
		Z_Construct_UScriptStruct_FStreetMapNode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapNode_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapNode_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapNode"), sizeof(FStreetMapNode), Get_Z_Construct_UScriptStruct_FStreetMapNode_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreetMapNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapNode_CRC() { return 1918825194U; }
class UScriptStruct* FStreetMapRoadRef::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapRoadRef_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapRoadRef, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapRoadRef"), sizeof(FStreetMapRoadRef), Get_Z_Construct_UScriptStruct_FStreetMapRoadRef_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapRoadRef(FStreetMapRoadRef::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapRoadRef"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapRoadRef
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapRoadRef()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapRoadRef")),new UScriptStruct::TCppStructOps<FStreetMapRoadRef>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapRoadRef;
	struct Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadPointIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RoadPointIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RoadIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Nodes have a list of road refs, one for each road that intersects this node.  Each road ref references a road and also the\n   point along that road where this node exists." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapRoadRef>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewProp_RoadPointIndex_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Index of the point along road where this node exists" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewProp_RoadPointIndex = { UE4CodeGen_Private::EPropertyClass::Int, "RoadPointIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapRoadRef, RoadPointIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewProp_RoadPointIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewProp_RoadPointIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewProp_RoadIndex_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Index of road in the list of all roads in this street map" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewProp_RoadIndex = { UE4CodeGen_Private::EPropertyClass::Int, "RoadIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapRoadRef, RoadIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewProp_RoadIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewProp_RoadIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewProp_RoadPointIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewProp_RoadIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapRuntime,
		nullptr,
		&NewStructOps,
		"StreetMapRoadRef",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FStreetMapRoadRef),
		alignof(FStreetMapRoadRef),
		Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadRef()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapRoadRef_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapRoadRef"), sizeof(FStreetMapRoadRef), Get_Z_Construct_UScriptStruct_FStreetMapRoadRef_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapRoadRef_CRC() { return 920771337U; }
class UScriptStruct* FStreetMapRoad::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapRoad_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapRoad, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapRoad"), sizeof(FStreetMapRoad), Get_Z_Construct_UScriptStruct_FStreetMapRoad_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapRoad(FStreetMapRoad::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapRoad"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapRoad
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapRoad()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapRoad")),new UScriptStruct::TCppStructOps<FStreetMapRoad>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapRoad;
	struct Z_Construct_UScriptStruct_FStreetMapRoad_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOneWay_MetaData[];
#endif
		static void NewProp_bIsOneWay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOneWay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoadPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoadPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NodeIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoadType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoadName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoad_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "A road" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapRoad>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_bIsOneWay_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "True if this node is a one way.  One way nodes are only traversable in the order the nodes are listed in the above array." },
	};
#endif
	void Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_bIsOneWay_SetBit(void* Obj)
	{
		((FStreetMapRoad*)Obj)->bIsOneWay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_bIsOneWay = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsOneWay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FStreetMapRoad), &Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_bIsOneWay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_bIsOneWay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_bIsOneWay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_BoundsMax_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "2D bounds (max) of this road's points" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_BoundsMax = { UE4CodeGen_Private::EPropertyClass::Struct, "BoundsMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapRoad, BoundsMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_BoundsMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_BoundsMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_BoundsMin_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "2D bounds (min) of this road's points" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_BoundsMin = { UE4CodeGen_Private::EPropertyClass::Struct, "BoundsMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapRoad, BoundsMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_BoundsMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_BoundsMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadPoints_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "List of all of the points on this road, one for each node in the NodeIndices list" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadPoints = { UE4CodeGen_Private::EPropertyClass::Array, "RoadPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapRoad, RoadPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadPoints_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "RoadPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_NodeIndices_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Nodes along this road, one at each point in the RoadPoints list" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_NodeIndices = { UE4CodeGen_Private::EPropertyClass::Array, "NodeIndices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapRoad, NodeIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_NodeIndices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_NodeIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_NodeIndices_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "NodeIndices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadType_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Type of road" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadType = { UE4CodeGen_Private::EPropertyClass::Byte, "RoadType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapRoad, RoadType), Z_Construct_UEnum_StreetMapRuntime_EStreetMapRoadType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadName_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Name of the road" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadName = { UE4CodeGen_Private::EPropertyClass::Str, "RoadName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStreetMapRoad, RoadName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreetMapRoad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_bIsOneWay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_BoundsMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_BoundsMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_NodeIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_NodeIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreetMapRoad_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapRuntime,
		nullptr,
		&NewStructOps,
		"StreetMapRoad",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FStreetMapRoad),
		alignof(FStreetMapRoad),
		Z_Construct_UScriptStruct_FStreetMapRoad_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoad()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapRoad_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapRoad"), sizeof(FStreetMapRoad), Get_Z_Construct_UScriptStruct_FStreetMapRoad_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreetMapRoad_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapRoad_CRC() { return 2369492564U; }
class UScriptStruct* FStreetMapMeshBuildSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapMeshBuildSettings"), sizeof(FStreetMapMeshBuildSettings), Get_Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapMeshBuildSettings(FStreetMapMeshBuildSettings::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapMeshBuildSettings"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapMeshBuildSettings
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapMeshBuildSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapMeshBuildSettings")),new UScriptStruct::TCppStructOps<FStreetMapMeshBuildSettings>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapMeshBuildSettings;
	struct Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingBorderZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuildingBorderZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingBorderLinearColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuildingBorderLinearColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingBorderThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuildingBorderThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighwayColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HighwayColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighwayThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighwayThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MajorRoadColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MajorRoadColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MajorRoadThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MajorRoadThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreetColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StreetColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreetThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StreetThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantLitBuildings_MetaData[];
#endif
		static void NewProp_bWantLitBuildings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantLitBuildings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingLevelFloorFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuildingLevelFloorFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWant3DBuildings_MetaData[];
#endif
		static void NewProp_bWant3DBuildings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWant3DBuildings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadOffesetZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoadOffesetZ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Mesh generation settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapMeshBuildSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderZ_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Buildings border vertical offset" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderZ = { UE4CodeGen_Private::EPropertyClass::Float, "BuildingBorderZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FStreetMapMeshBuildSettings, BuildingBorderZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderZ_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderLinearColor_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Building border vertex color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderLinearColor = { UE4CodeGen_Private::EPropertyClass::Struct, "BuildingBorderLinearColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FStreetMapMeshBuildSettings, BuildingBorderLinearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderLinearColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderLinearColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderThickness_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Streets Thickness" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderThickness = { UE4CodeGen_Private::EPropertyClass::Float, "BuildingBorderThickness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FStreetMapMeshBuildSettings, BuildingBorderThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderThickness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_HighwayColor_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Highway vertex color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_HighwayColor = { UE4CodeGen_Private::EPropertyClass::Struct, "HighwayColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FStreetMapMeshBuildSettings, HighwayColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_HighwayColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_HighwayColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_HighwayThickness_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Highway thickness" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_HighwayThickness = { UE4CodeGen_Private::EPropertyClass::Float, "HighwayThickness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FStreetMapMeshBuildSettings, HighwayThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_HighwayThickness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_HighwayThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_MajorRoadColor_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Major road vertex color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_MajorRoadColor = { UE4CodeGen_Private::EPropertyClass::Struct, "MajorRoadColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FStreetMapMeshBuildSettings, MajorRoadColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_MajorRoadColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_MajorRoadColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_MajorRoadThickness_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Major road thickness" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_MajorRoadThickness = { UE4CodeGen_Private::EPropertyClass::Float, "MajorRoadThickness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FStreetMapMeshBuildSettings, MajorRoadThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_MajorRoadThickness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_MajorRoadThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_StreetColor_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Street vertex color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_StreetColor = { UE4CodeGen_Private::EPropertyClass::Struct, "StreetColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FStreetMapMeshBuildSettings, StreetColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_StreetColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_StreetColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_StreetThickness_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Streets thickness" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_StreetThickness = { UE4CodeGen_Private::EPropertyClass::Float, "StreetThickness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FStreetMapMeshBuildSettings, StreetThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_StreetThickness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_StreetThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWantLitBuildings_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "DisplayName", "Lit buildings" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "If true, buildings mesh will receive light information.\nLit buildings can't share vertices beyond quads (all quads have their own face normals), so this uses a lot more geometry." },
	};
#endif
	void Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWantLitBuildings_SetBit(void* Obj)
	{
		((FStreetMapMeshBuildSettings*)Obj)->bWantLitBuildings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWantLitBuildings = { UE4CodeGen_Private::EPropertyClass::Bool, "bWantLitBuildings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FStreetMapMeshBuildSettings), &Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWantLitBuildings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWantLitBuildings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWantLitBuildings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingLevelFloorFactor_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "DisplayName", "Building Level Floor Factor" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "building level floor conversion factor in centimeters\n              @todo: harmonize with OSMToCentimetersScaleFactor refactoring" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingLevelFloorFactor = { UE4CodeGen_Private::EPropertyClass::Float, "BuildingLevelFloorFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FStreetMapMeshBuildSettings, BuildingLevelFloorFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingLevelFloorFactor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingLevelFloorFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWant3DBuildings_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "DisplayName", "Create 3D Buildings" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "if true buildings mesh will be 3D instead of flat representation." },
	};
#endif
	void Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWant3DBuildings_SetBit(void* Obj)
	{
		((FStreetMapMeshBuildSettings*)Obj)->bWant3DBuildings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWant3DBuildings = { UE4CodeGen_Private::EPropertyClass::Bool, "bWant3DBuildings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FStreetMapMeshBuildSettings), &Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWant3DBuildings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWant3DBuildings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWant3DBuildings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_RoadOffesetZ_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Road Vertical Offset" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Roads base vertical offset" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_RoadOffesetZ = { UE4CodeGen_Private::EPropertyClass::Float, "RoadOffesetZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FStreetMapMeshBuildSettings, RoadOffesetZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_RoadOffesetZ_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_RoadOffesetZ_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderLinearColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_HighwayColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_HighwayThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_MajorRoadColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_MajorRoadThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_StreetColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_StreetThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWantLitBuildings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingLevelFloorFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWant3DBuildings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_RoadOffesetZ,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapRuntime,
		nullptr,
		&NewStructOps,
		"StreetMapMeshBuildSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FStreetMapMeshBuildSettings),
		alignof(FStreetMapMeshBuildSettings),
		Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapMeshBuildSettings"), sizeof(FStreetMapMeshBuildSettings), Get_Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_CRC() { return 2568550366U; }
class UScriptStruct* FStreetMapCollisionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapCollisionSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapCollisionSettings, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapCollisionSettings"), sizeof(FStreetMapCollisionSettings), Get_Z_Construct_UScriptStruct_FStreetMapCollisionSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapCollisionSettings(FStreetMapCollisionSettings::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapCollisionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapCollisionSettings
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapCollisionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapCollisionSettings")),new UScriptStruct::TCppStructOps<FStreetMapCollisionSettings>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapCollisionSettings;
	struct Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowDoubleSidedGeometry_MetaData[];
#endif
		static void NewProp_bAllowDoubleSidedGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowDoubleSidedGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateCollision_MetaData[];
#endif
		static void NewProp_bGenerateCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "#include \"OSMFile.h\"" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapCollisionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bAllowDoubleSidedGeometry_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "editcondition", "bGenerateCollision" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "If true, the physics triangle mesh will use double sided faces when doing scene queries.\nThis is useful for planes and single sided meshes that need traces to work on both sides." },
	};
#endif
	void Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bAllowDoubleSidedGeometry_SetBit(void* Obj)
	{
		((FStreetMapCollisionSettings*)Obj)->bAllowDoubleSidedGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bAllowDoubleSidedGeometry = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowDoubleSidedGeometry", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FStreetMapCollisionSettings), &Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bAllowDoubleSidedGeometry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bAllowDoubleSidedGeometry_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bAllowDoubleSidedGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bGenerateCollision_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Uses triangle mesh data for collision data. (Cannot be used for physics simulation)." },
	};
#endif
	void Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bGenerateCollision_SetBit(void* Obj)
	{
		((FStreetMapCollisionSettings*)Obj)->bGenerateCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bGenerateCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FStreetMapCollisionSettings), &Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bGenerateCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bGenerateCollision_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bGenerateCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bAllowDoubleSidedGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bGenerateCollision,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapRuntime,
		nullptr,
		&NewStructOps,
		"StreetMapCollisionSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FStreetMapCollisionSettings),
		alignof(FStreetMapCollisionSettings),
		Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapCollisionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapCollisionSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapCollisionSettings"), sizeof(FStreetMapCollisionSettings), Get_Z_Construct_UScriptStruct_FStreetMapCollisionSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapCollisionSettings_CRC() { return 738399134U; }
	void UStreetMap::StaticRegisterNativesUStreetMap()
	{
	}
	UClass* Z_Construct_UClass_UStreetMap_NoRegister()
	{
		return UStreetMap::StaticClass();
	}
	struct Z_Construct_UClass_UStreetMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trees_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Trees;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Trees_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Barriers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Barriers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Barriers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amenities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Amenities;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Amenities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Buildings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Buildings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Buildings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roads_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Roads;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Roads_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreetMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StreetMap.h" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "A loaded street map" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMap_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Importing data and options used for this mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_AssetImportData = { UE4CodeGen_Private::EPropertyClass::Object, "AssetImportData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00220808000a0009, 1, nullptr, STRUCT_OFFSET(UStreetMap, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStreetMap_Statics::NewProp_AssetImportData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreetMap_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMap_Statics::NewProp_BoundsMax_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "2D bounds (max) of this map's roads and buildings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_BoundsMax = { UE4CodeGen_Private::EPropertyClass::Struct, "BoundsMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020001, 1, nullptr, STRUCT_OFFSET(UStreetMap, BoundsMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UStreetMap_Statics::NewProp_BoundsMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreetMap_Statics::NewProp_BoundsMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMap_Statics::NewProp_BoundsMin_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "2D bounds (min) of this map's roads and buildings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_BoundsMin = { UE4CodeGen_Private::EPropertyClass::Struct, "BoundsMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020001, 1, nullptr, STRUCT_OFFSET(UStreetMap, BoundsMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UStreetMap_Statics::NewProp_BoundsMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreetMap_Statics::NewProp_BoundsMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMap_Statics::NewProp_Trees_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "List of all trees on the street map" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_Trees = { UE4CodeGen_Private::EPropertyClass::Array, "Trees", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020001, 1, nullptr, STRUCT_OFFSET(UStreetMap, Trees), METADATA_PARAMS(Z_Construct_UClass_UStreetMap_Statics::NewProp_Trees_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreetMap_Statics::NewProp_Trees_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_Trees_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Trees", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStreetMapTree, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMap_Statics::NewProp_Barriers_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "List of all barriers on the street map" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_Barriers = { UE4CodeGen_Private::EPropertyClass::Array, "Barriers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020001, 1, nullptr, STRUCT_OFFSET(UStreetMap, Barriers), METADATA_PARAMS(Z_Construct_UClass_UStreetMap_Statics::NewProp_Barriers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreetMap_Statics::NewProp_Barriers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_Barriers_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Barriers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStreetMapBarrier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMap_Statics::NewProp_Amenities_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "List of all amenities on the street map" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_Amenities = { UE4CodeGen_Private::EPropertyClass::Array, "Amenities", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020001, 1, nullptr, STRUCT_OFFSET(UStreetMap, Amenities), METADATA_PARAMS(Z_Construct_UClass_UStreetMap_Statics::NewProp_Amenities_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreetMap_Statics::NewProp_Amenities_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_Amenities_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Amenities", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStreetMapAmenity, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMap_Statics::NewProp_Buildings_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "List of all buildings on the street map" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_Buildings = { UE4CodeGen_Private::EPropertyClass::Array, "Buildings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020001, 1, nullptr, STRUCT_OFFSET(UStreetMap, Buildings), METADATA_PARAMS(Z_Construct_UClass_UStreetMap_Statics::NewProp_Buildings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreetMap_Statics::NewProp_Buildings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_Buildings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Buildings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStreetMapBuilding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMap_Statics::NewProp_Nodes_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "List of nodes on this map.  Nodes describe interesting points along roads, usually where roads intersect or at the end of a dead-end street" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_Nodes = { UE4CodeGen_Private::EPropertyClass::Array, "Nodes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020001, 1, nullptr, STRUCT_OFFSET(UStreetMap, Nodes), METADATA_PARAMS(Z_Construct_UClass_UStreetMap_Statics::NewProp_Nodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreetMap_Statics::NewProp_Nodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_Nodes_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Nodes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStreetMapNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMap_Statics::NewProp_Roads_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "List of roads" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_Roads = { UE4CodeGen_Private::EPropertyClass::Array, "Roads", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020001, 1, nullptr, STRUCT_OFFSET(UStreetMap, Roads), METADATA_PARAMS(Z_Construct_UClass_UStreetMap_Statics::NewProp_Roads_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreetMap_Statics::NewProp_Roads_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_Roads_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Roads", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStreetMapRoad, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreetMap_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_BoundsMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_BoundsMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_Trees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_Trees_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_Barriers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_Barriers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_Amenities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_Amenities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_Buildings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_Buildings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_Nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_Nodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_Roads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_Roads_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreetMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreetMap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStreetMap_Statics::ClassParams = {
		&UStreetMap::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_UStreetMap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UStreetMap_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UStreetMap_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStreetMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreetMap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStreetMap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreetMap, 3580794069);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreetMap(Z_Construct_UClass_UStreetMap, &UStreetMap::StaticClass, TEXT("/Script/StreetMapRuntime"), TEXT("UStreetMap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreetMap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
