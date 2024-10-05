// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularAssets/Public/WallStripeMetadata.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWallStripeMetadata() {}
// Cross Module References
	MODULARASSETS_API UClass* Z_Construct_UClass_UWallStripeMetadata_NoRegister();
	MODULARASSETS_API UClass* Z_Construct_UClass_UWallStripeMetadata();
	ENGINE_API UClass* Z_Construct_UClass_USplineMetadata();
	UPackage* Z_Construct_UPackage__Script_ModularAssets();
	MODULARASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FWallStripePointParams();
// End Cross Module References
	void UWallStripeMetadata::StaticRegisterNativesUWallStripeMetadata()
	{
	}
	UClass* Z_Construct_UClass_UWallStripeMetadata_NoRegister()
	{
		return UWallStripeMetadata::StaticClass();
	}
	struct Z_Construct_UClass_UWallStripeMetadata_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointParams_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PointParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWallStripeMetadata_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineMetadata,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularAssets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallStripeMetadata_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WallStripeMetadata.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WallStripeMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWallStripeMetadata_Statics::NewProp_PointParams_Inner = { "PointParams", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWallStripePointParams, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallStripeMetadata_Statics::NewProp_PointParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WallStripeMetadata" },
		{ "ModuleRelativePath", "Public/WallStripeMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWallStripeMetadata_Statics::NewProp_PointParams = { "PointParams", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallStripeMetadata, PointParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWallStripeMetadata_Statics::NewProp_PointParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallStripeMetadata_Statics::NewProp_PointParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWallStripeMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallStripeMetadata_Statics::NewProp_PointParams_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallStripeMetadata_Statics::NewProp_PointParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWallStripeMetadata_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWallStripeMetadata>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWallStripeMetadata_Statics::ClassParams = {
		&UWallStripeMetadata::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWallStripeMetadata_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWallStripeMetadata_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWallStripeMetadata_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWallStripeMetadata_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWallStripeMetadata()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWallStripeMetadata_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWallStripeMetadata, 3336717721);
	template<> MODULARASSETS_API UClass* StaticClass<UWallStripeMetadata>()
	{
		return UWallStripeMetadata::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWallStripeMetadata(Z_Construct_UClass_UWallStripeMetadata, &UWallStripeMetadata::StaticClass, TEXT("/Script/ModularAssets"), TEXT("UWallStripeMetadata"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWallStripeMetadata);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
