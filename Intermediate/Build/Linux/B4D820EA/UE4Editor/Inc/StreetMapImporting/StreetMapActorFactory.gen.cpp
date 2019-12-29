// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreetMapImporting/StreetMapActorFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreetMapActorFactory() {}
// Cross Module References
	STREETMAPIMPORTING_API UClass* Z_Construct_UClass_UStreetMapActorFactory_NoRegister();
	STREETMAPIMPORTING_API UClass* Z_Construct_UClass_UStreetMapActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_StreetMapImporting();
// End Cross Module References
	void UStreetMapActorFactory::StaticRegisterNativesUStreetMapActorFactory()
	{
	}
	UClass* Z_Construct_UClass_UStreetMapActorFactory_NoRegister()
	{
		return UStreetMapActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UStreetMapActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreetMapActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapImporting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMapActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "StreetMapActorFactory.h" },
		{ "ModuleRelativePath", "StreetMapActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreetMapActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreetMapActorFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStreetMapActorFactory_Statics::ClassParams = {
		&UStreetMapActorFactory::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000030ACu,
		nullptr, 0,
		nullptr, 0,
		"Editor",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UStreetMapActorFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStreetMapActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreetMapActorFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStreetMapActorFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreetMapActorFactory, 4077014378);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreetMapActorFactory(Z_Construct_UClass_UStreetMapActorFactory, &UStreetMapActorFactory::StaticClass, TEXT("/Script/StreetMapImporting"), TEXT("UStreetMapActorFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreetMapActorFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
