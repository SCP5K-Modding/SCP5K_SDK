// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/Map.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMap() {}
// Cross Module References
	USERINTERFACE_API UClass* Z_Construct_UClass_AMap_NoRegister();
	USERINTERFACE_API UClass* Z_Construct_UClass_AMap();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	USERINTERFACE_API UClass* Z_Construct_UClass_UMapComponent_NoRegister();
// End Cross Module References
	void AMap::StaticRegisterNativesAMap()
	{
	}
	UClass* Z_Construct_UClass_AMap_NoRegister()
	{
		return AMap::StaticClass();
	}
	struct Z_Construct_UClass_AMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Map.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Map.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMap_Statics::NewProp_MapComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Map.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMap_Statics::NewProp_MapComponent = { "MapComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMap, MapComponent), Z_Construct_UClass_UMapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMap_Statics::NewProp_MapComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMap_Statics::NewProp_MapComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMap_Statics::NewProp_MapComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMap_Statics::ClassParams = {
		&AMap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMap, 230491073);
	template<> USERINTERFACE_API UClass* StaticClass<AMap>()
	{
		return AMap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMap(Z_Construct_UClass_AMap, &AMap::StaticClass, TEXT("/Script/UserInterface"), TEXT("AMap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
