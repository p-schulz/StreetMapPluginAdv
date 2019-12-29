// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreetMapImporting/StreetMapReimportFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreetMapReimportFactory() {}
// Cross Module References
	STREETMAPIMPORTING_API UClass* Z_Construct_UClass_UStreetMapReimportFactory_NoRegister();
	STREETMAPIMPORTING_API UClass* Z_Construct_UClass_UStreetMapReimportFactory();
	STREETMAPIMPORTING_API UClass* Z_Construct_UClass_UStreetMapFactory();
	UPackage* Z_Construct_UPackage__Script_StreetMapImporting();
// End Cross Module References
	void UStreetMapReimportFactory::StaticRegisterNativesUStreetMapReimportFactory()
	{
	}
	UClass* Z_Construct_UClass_UStreetMapReimportFactory_NoRegister()
	{
		return UStreetMapReimportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UStreetMapReimportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreetMapReimportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStreetMapFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapImporting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMapReimportFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StreetMapReimportFactory.h" },
		{ "ModuleRelativePath", "StreetMapReimportFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Import factory object for OpenStreetMap assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreetMapReimportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreetMapReimportFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStreetMapReimportFactory_Statics::ClassParams = {
		&UStreetMapReimportFactory::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UStreetMapReimportFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStreetMapReimportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreetMapReimportFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStreetMapReimportFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreetMapReimportFactory, 1939355095);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreetMapReimportFactory(Z_Construct_UClass_UStreetMapReimportFactory, &UStreetMapReimportFactory::StaticClass, TEXT("/Script/StreetMapImporting"), TEXT("UStreetMapReimportFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreetMapReimportFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
