// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreetMapRuntime/Public/StreetMapComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreetMapComponent() {}
// Cross Module References
	STREETMAPRUNTIME_API UClass* Z_Construct_UClass_UStreetMapComponent_NoRegister();
	STREETMAPRUNTIME_API UClass* Z_Construct_UClass_UStreetMapComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	UPackage* Z_Construct_UPackage__Script_StreetMapRuntime();
	STREETMAPRUNTIME_API UFunction* Z_Construct_UFunction_UStreetMapComponent_GetAmenitiesOSM();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapAmenity();
	STREETMAPRUNTIME_API UFunction* Z_Construct_UFunction_UStreetMapComponent_GetBarriersOSM();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBarrier();
	STREETMAPRUNTIME_API UFunction* Z_Construct_UFunction_UStreetMapComponent_GetBoundsMaxOSM();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	STREETMAPRUNTIME_API UFunction* Z_Construct_UFunction_UStreetMapComponent_GetBoundsMinOSM();
	STREETMAPRUNTIME_API UFunction* Z_Construct_UFunction_UStreetMapComponent_GetBuildingsOSM();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBuilding();
	STREETMAPRUNTIME_API UFunction* Z_Construct_UFunction_UStreetMapComponent_GetNodesOSM();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapNode();
	STREETMAPRUNTIME_API UFunction* Z_Construct_UFunction_UStreetMapComponent_GetRoadsOSM();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoad();
	STREETMAPRUNTIME_API UFunction* Z_Construct_UFunction_UStreetMapComponent_GetStreetMap();
	STREETMAPRUNTIME_API UClass* Z_Construct_UClass_UStreetMap_NoRegister();
	STREETMAPRUNTIME_API UFunction* Z_Construct_UFunction_UStreetMapComponent_GetTreesOSM();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapTree();
	STREETMAPRUNTIME_API UFunction* Z_Construct_UFunction_UStreetMapComponent_SetStreetMap();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapVertex();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapCollisionSettings();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
// End Cross Module References
	void UStreetMapComponent::StaticRegisterNativesUStreetMapComponent()
	{
		UClass* Class = UStreetMapComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAmenitiesOSM", &UStreetMapComponent::execGetAmenitiesOSM },
			{ "GetBarriersOSM", &UStreetMapComponent::execGetBarriersOSM },
			{ "GetBoundsMaxOSM", &UStreetMapComponent::execGetBoundsMaxOSM },
			{ "GetBoundsMinOSM", &UStreetMapComponent::execGetBoundsMinOSM },
			{ "GetBuildingsOSM", &UStreetMapComponent::execGetBuildingsOSM },
			{ "GetNodesOSM", &UStreetMapComponent::execGetNodesOSM },
			{ "GetRoadsOSM", &UStreetMapComponent::execGetRoadsOSM },
			{ "GetStreetMap", &UStreetMapComponent::execGetStreetMap },
			{ "GetTreesOSM", &UStreetMapComponent::execGetTreesOSM },
			{ "SetStreetMap", &UStreetMapComponent::execSetStreetMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStreetMapComponent_GetAmenitiesOSM_Statics
	{
		struct StreetMapComponent_eventGetAmenitiesOSM_Parms
		{
			TArray<FStreetMapAmenity> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStreetMapComponent_GetAmenitiesOSM_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StreetMapComponent_eventGetAmenitiesOSM_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStreetMapComponent_GetAmenitiesOSM_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStreetMapAmenity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreetMapComponent_GetAmenitiesOSM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreetMapComponent_GetAmenitiesOSM_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreetMapComponent_GetAmenitiesOSM_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreetMapComponent_GetAmenitiesOSM_Statics::Function_MetaDataParams[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreetMapComponent_GetAmenitiesOSM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreetMapComponent, "GetAmenitiesOSM", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StreetMapComponent_eventGetAmenitiesOSM_Parms), Z_Construct_UFunction_UStreetMapComponent_GetAmenitiesOSM_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_GetAmenitiesOSM_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreetMapComponent_GetAmenitiesOSM_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_GetAmenitiesOSM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreetMapComponent_GetAmenitiesOSM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreetMapComponent_GetAmenitiesOSM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreetMapComponent_GetBarriersOSM_Statics
	{
		struct StreetMapComponent_eventGetBarriersOSM_Parms
		{
			TArray<FStreetMapBarrier> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStreetMapComponent_GetBarriersOSM_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StreetMapComponent_eventGetBarriersOSM_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStreetMapComponent_GetBarriersOSM_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStreetMapBarrier, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreetMapComponent_GetBarriersOSM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreetMapComponent_GetBarriersOSM_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreetMapComponent_GetBarriersOSM_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreetMapComponent_GetBarriersOSM_Statics::Function_MetaDataParams[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreetMapComponent_GetBarriersOSM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreetMapComponent, "GetBarriersOSM", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StreetMapComponent_eventGetBarriersOSM_Parms), Z_Construct_UFunction_UStreetMapComponent_GetBarriersOSM_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_GetBarriersOSM_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreetMapComponent_GetBarriersOSM_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_GetBarriersOSM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreetMapComponent_GetBarriersOSM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreetMapComponent_GetBarriersOSM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreetMapComponent_GetBoundsMaxOSM_Statics
	{
		struct StreetMapComponent_eventGetBoundsMaxOSM_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStreetMapComponent_GetBoundsMaxOSM_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StreetMapComponent_eventGetBoundsMaxOSM_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreetMapComponent_GetBoundsMaxOSM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreetMapComponent_GetBoundsMaxOSM_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreetMapComponent_GetBoundsMaxOSM_Statics::Function_MetaDataParams[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreetMapComponent_GetBoundsMaxOSM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreetMapComponent, "GetBoundsMaxOSM", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(StreetMapComponent_eventGetBoundsMaxOSM_Parms), Z_Construct_UFunction_UStreetMapComponent_GetBoundsMaxOSM_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_GetBoundsMaxOSM_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreetMapComponent_GetBoundsMaxOSM_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_GetBoundsMaxOSM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreetMapComponent_GetBoundsMaxOSM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreetMapComponent_GetBoundsMaxOSM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreetMapComponent_GetBoundsMinOSM_Statics
	{
		struct StreetMapComponent_eventGetBoundsMinOSM_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStreetMapComponent_GetBoundsMinOSM_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StreetMapComponent_eventGetBoundsMinOSM_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreetMapComponent_GetBoundsMinOSM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreetMapComponent_GetBoundsMinOSM_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreetMapComponent_GetBoundsMinOSM_Statics::Function_MetaDataParams[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreetMapComponent_GetBoundsMinOSM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreetMapComponent, "GetBoundsMinOSM", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(StreetMapComponent_eventGetBoundsMinOSM_Parms), Z_Construct_UFunction_UStreetMapComponent_GetBoundsMinOSM_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_GetBoundsMinOSM_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreetMapComponent_GetBoundsMinOSM_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_GetBoundsMinOSM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreetMapComponent_GetBoundsMinOSM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreetMapComponent_GetBoundsMinOSM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreetMapComponent_GetBuildingsOSM_Statics
	{
		struct StreetMapComponent_eventGetBuildingsOSM_Parms
		{
			TArray<FStreetMapBuilding> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStreetMapComponent_GetBuildingsOSM_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StreetMapComponent_eventGetBuildingsOSM_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStreetMapComponent_GetBuildingsOSM_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStreetMapBuilding, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreetMapComponent_GetBuildingsOSM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreetMapComponent_GetBuildingsOSM_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreetMapComponent_GetBuildingsOSM_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreetMapComponent_GetBuildingsOSM_Statics::Function_MetaDataParams[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreetMapComponent_GetBuildingsOSM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreetMapComponent, "GetBuildingsOSM", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StreetMapComponent_eventGetBuildingsOSM_Parms), Z_Construct_UFunction_UStreetMapComponent_GetBuildingsOSM_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_GetBuildingsOSM_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreetMapComponent_GetBuildingsOSM_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_GetBuildingsOSM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreetMapComponent_GetBuildingsOSM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreetMapComponent_GetBuildingsOSM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreetMapComponent_GetNodesOSM_Statics
	{
		struct StreetMapComponent_eventGetNodesOSM_Parms
		{
			TArray<FStreetMapNode> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStreetMapComponent_GetNodesOSM_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StreetMapComponent_eventGetNodesOSM_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStreetMapComponent_GetNodesOSM_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStreetMapNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreetMapComponent_GetNodesOSM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreetMapComponent_GetNodesOSM_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreetMapComponent_GetNodesOSM_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreetMapComponent_GetNodesOSM_Statics::Function_MetaDataParams[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreetMapComponent_GetNodesOSM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreetMapComponent, "GetNodesOSM", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StreetMapComponent_eventGetNodesOSM_Parms), Z_Construct_UFunction_UStreetMapComponent_GetNodesOSM_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_GetNodesOSM_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreetMapComponent_GetNodesOSM_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_GetNodesOSM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreetMapComponent_GetNodesOSM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreetMapComponent_GetNodesOSM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreetMapComponent_GetRoadsOSM_Statics
	{
		struct StreetMapComponent_eventGetRoadsOSM_Parms
		{
			TArray<FStreetMapRoad> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStreetMapComponent_GetRoadsOSM_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StreetMapComponent_eventGetRoadsOSM_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStreetMapComponent_GetRoadsOSM_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStreetMapRoad, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreetMapComponent_GetRoadsOSM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreetMapComponent_GetRoadsOSM_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreetMapComponent_GetRoadsOSM_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreetMapComponent_GetRoadsOSM_Statics::Function_MetaDataParams[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreetMapComponent_GetRoadsOSM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreetMapComponent, "GetRoadsOSM", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StreetMapComponent_eventGetRoadsOSM_Parms), Z_Construct_UFunction_UStreetMapComponent_GetRoadsOSM_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_GetRoadsOSM_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreetMapComponent_GetRoadsOSM_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_GetRoadsOSM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreetMapComponent_GetRoadsOSM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreetMapComponent_GetRoadsOSM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreetMapComponent_GetStreetMap_Statics
	{
		struct StreetMapComponent_eventGetStreetMap_Parms
		{
			UStreetMap* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStreetMapComponent_GetStreetMap_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StreetMapComponent_eventGetStreetMap_Parms, ReturnValue), Z_Construct_UClass_UStreetMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreetMapComponent_GetStreetMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreetMapComponent_GetStreetMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreetMapComponent_GetStreetMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
		{ "ToolTip", "@return Gets the street map object associated with this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreetMapComponent_GetStreetMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreetMapComponent, "GetStreetMap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StreetMapComponent_eventGetStreetMap_Parms), Z_Construct_UFunction_UStreetMapComponent_GetStreetMap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_GetStreetMap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreetMapComponent_GetStreetMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_GetStreetMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreetMapComponent_GetStreetMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreetMapComponent_GetStreetMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreetMapComponent_GetTreesOSM_Statics
	{
		struct StreetMapComponent_eventGetTreesOSM_Parms
		{
			TArray<FStreetMapTree> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStreetMapComponent_GetTreesOSM_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StreetMapComponent_eventGetTreesOSM_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStreetMapComponent_GetTreesOSM_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStreetMapTree, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreetMapComponent_GetTreesOSM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreetMapComponent_GetTreesOSM_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreetMapComponent_GetTreesOSM_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreetMapComponent_GetTreesOSM_Statics::Function_MetaDataParams[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreetMapComponent_GetTreesOSM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreetMapComponent, "GetTreesOSM", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StreetMapComponent_eventGetTreesOSM_Parms), Z_Construct_UFunction_UStreetMapComponent_GetTreesOSM_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_GetTreesOSM_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreetMapComponent_GetTreesOSM_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_GetTreesOSM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreetMapComponent_GetTreesOSM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreetMapComponent_GetTreesOSM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics
	{
		struct StreetMapComponent_eventSetStreetMap_Parms
		{
			UStreetMap* NewStreetMap;
			bool bClearPreviousMeshIfAny;
			bool bRebuildMesh;
		};
		static void NewProp_bRebuildMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildMesh;
		static void NewProp_bClearPreviousMeshIfAny_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearPreviousMeshIfAny;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewStreetMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::NewProp_bRebuildMesh_SetBit(void* Obj)
	{
		((StreetMapComponent_eventSetStreetMap_Parms*)Obj)->bRebuildMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::NewProp_bRebuildMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bRebuildMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(StreetMapComponent_eventSetStreetMap_Parms), &Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::NewProp_bRebuildMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::NewProp_bClearPreviousMeshIfAny_SetBit(void* Obj)
	{
		((StreetMapComponent_eventSetStreetMap_Parms*)Obj)->bClearPreviousMeshIfAny = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::NewProp_bClearPreviousMeshIfAny = { UE4CodeGen_Private::EPropertyClass::Bool, "bClearPreviousMeshIfAny", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(StreetMapComponent_eventSetStreetMap_Parms), &Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::NewProp_bClearPreviousMeshIfAny_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::NewProp_NewStreetMap = { UE4CodeGen_Private::EPropertyClass::Object, "NewStreetMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StreetMapComponent_eventSetStreetMap_Parms, NewStreetMap), Z_Construct_UClass_UStreetMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::NewProp_bRebuildMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::NewProp_bClearPreviousMeshIfAny,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::NewProp_NewStreetMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "StreetMap" },
		{ "CPP_Default_bClearPreviousMeshIfAny", "false" },
		{ "CPP_Default_bRebuildMesh", "false" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
		{ "ToolTip", "Assigns a street map asset to this component.  Render state will be updated immediately.\n\n@param NewStreetMap The street map to use\n\n@param bRebuildMesh : Rebuilds map mesh based on the new map asset\n\n@return Sets the street map object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreetMapComponent, "SetStreetMap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StreetMapComponent_eventSetStreetMap_Parms), Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreetMapComponent_SetStreetMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStreetMapComponent_NoRegister()
	{
		return UStreetMapComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStreetMapComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreetMapDefaultMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StreetMapDefaultMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedLocalBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedLocalBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Indices;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Indices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreetMapBodySetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StreetMapBodySetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshBuildSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshBuildSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StreetMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreetMapComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStreetMapComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStreetMapComponent_GetAmenitiesOSM, "GetAmenitiesOSM" }, // 2864493766
		{ &Z_Construct_UFunction_UStreetMapComponent_GetBarriersOSM, "GetBarriersOSM" }, // 2670938789
		{ &Z_Construct_UFunction_UStreetMapComponent_GetBoundsMaxOSM, "GetBoundsMaxOSM" }, // 3352664963
		{ &Z_Construct_UFunction_UStreetMapComponent_GetBoundsMinOSM, "GetBoundsMinOSM" }, // 2924404204
		{ &Z_Construct_UFunction_UStreetMapComponent_GetBuildingsOSM, "GetBuildingsOSM" }, // 2028010603
		{ &Z_Construct_UFunction_UStreetMapComponent_GetNodesOSM, "GetNodesOSM" }, // 1447837323
		{ &Z_Construct_UFunction_UStreetMapComponent_GetRoadsOSM, "GetRoadsOSM" }, // 675478293
		{ &Z_Construct_UFunction_UStreetMapComponent_GetStreetMap, "GetStreetMap" }, // 3390119208
		{ &Z_Construct_UFunction_UStreetMapComponent_GetTreesOSM, "GetTreesOSM" }, // 3448235291
		{ &Z_Construct_UFunction_UStreetMapComponent_SetStreetMap, "SetStreetMap" }, // 3604197540
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMapComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Physics Mobility Trigger" },
		{ "IncludePath", "StreetMapComponent.h" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Component that represents a section of street map roads and buildings" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMapDefaultMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
		{ "ToolTip", "Cached StreetMap DefaultMaterial" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMapDefaultMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "StreetMapDefaultMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UStreetMapComponent, StreetMapDefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMapDefaultMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMapDefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_CachedLocalBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
		{ "ToolTip", "Cached bounding box" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_CachedLocalBounds = { UE4CodeGen_Private::EPropertyClass::Struct, "CachedLocalBounds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UStreetMapComponent, CachedLocalBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_CachedLocalBounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_CachedLocalBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Indices_MetaData[] = {
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
		{ "ToolTip", "Cached raw mesh triangle indices" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Indices = { UE4CodeGen_Private::EPropertyClass::Array, "Indices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UStreetMapComponent, Indices), METADATA_PARAMS(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Indices_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Indices_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Indices_Inner = { UE4CodeGen_Private::EPropertyClass::UInt32, "Indices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Vertices_MetaData[] = {
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
		{ "ToolTip", "Cached raw mesh vertices" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Vertices = { UE4CodeGen_Private::EPropertyClass::Array, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UStreetMapComponent, Vertices), METADATA_PARAMS(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Vertices_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStreetMapVertex, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMapBodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
		{ "ToolTip", "/ Physics data for mesh collision." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMapBodySetup = { UE4CodeGen_Private::EPropertyClass::Object, "StreetMapBodySetup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UStreetMapComponent, StreetMapBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMapBodySetup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMapBodySetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_CollisionSettings_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_CollisionSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "CollisionSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UStreetMapComponent, CollisionSettings), Z_Construct_UScriptStruct_FStreetMapCollisionSettings, METADATA_PARAMS(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_CollisionSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_CollisionSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_MeshBuildSettings_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_MeshBuildSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "MeshBuildSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UStreetMapComponent, MeshBuildSettings), Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings, METADATA_PARAMS(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_MeshBuildSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_MeshBuildSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMap_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
		{ "ToolTip", "The street map we're representing." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMap = { UE4CodeGen_Private::EPropertyClass::Object, "StreetMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UStreetMapComponent, StreetMap), Z_Construct_UClass_UStreetMap_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreetMapComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMapDefaultMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_CachedLocalBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Indices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Indices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMapBodySetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_CollisionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_MeshBuildSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMap,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStreetMapComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UStreetMapComponent, IInterface_CollisionDataProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreetMapComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreetMapComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStreetMapComponent_Statics::ClassParams = {
		&UStreetMapComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UStreetMapComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UStreetMapComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_UStreetMapComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStreetMapComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreetMapComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStreetMapComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreetMapComponent, 2929668484);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreetMapComponent(Z_Construct_UClass_UStreetMapComponent, &UStreetMapComponent::StaticClass, TEXT("/Script/StreetMapRuntime"), TEXT("UStreetMapComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreetMapComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
