// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/SuppressionCameraModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuppressionCameraModifier() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_USuppressionCameraModifier_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_USuppressionCameraModifier();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void USuppressionCameraModifier::StaticRegisterNativesUSuppressionCameraModifier()
	{
	}
	UClass* Z_Construct_UClass_USuppressionCameraModifier_NoRegister()
	{
		return USuppressionCameraModifier::StaticClass();
	}
	struct Z_Construct_UClass_USuppressionCameraModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuppressionMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuppressionMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSuppression_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSuppression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AberrationIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AberrationIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VignetteIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VignetteIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldAperature_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldAperature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFocalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFocalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthBlurDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthBlurDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthBlurSuppressionLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthBlurSuppressionLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USuppressionCameraModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuppressionCameraModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SuppressionCameraModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SuppressionCameraModifier.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_SuppressionMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SuppressionCameraModifier" },
		{ "ModuleRelativePath", "Public/SuppressionCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_SuppressionMaterial = { "SuppressionMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USuppressionCameraModifier, SuppressionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_SuppressionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_SuppressionMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_MaxSuppression_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SuppressionCameraModifier" },
		{ "ModuleRelativePath", "Public/SuppressionCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_MaxSuppression = { "MaxSuppression", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USuppressionCameraModifier, MaxSuppression), METADATA_PARAMS(Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_MaxSuppression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_MaxSuppression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_AberrationIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SuppressionCameraModifier" },
		{ "ModuleRelativePath", "Public/SuppressionCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_AberrationIntensity = { "AberrationIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USuppressionCameraModifier, AberrationIntensity), METADATA_PARAMS(Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_AberrationIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_AberrationIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_BloomIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SuppressionCameraModifier" },
		{ "ModuleRelativePath", "Public/SuppressionCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_BloomIntensity = { "BloomIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USuppressionCameraModifier, BloomIntensity), METADATA_PARAMS(Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_BloomIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_BloomIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_VignetteIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SuppressionCameraModifier" },
		{ "ModuleRelativePath", "Public/SuppressionCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_VignetteIntensity = { "VignetteIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USuppressionCameraModifier, VignetteIntensity), METADATA_PARAMS(Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_VignetteIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_VignetteIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_DepthOfFieldAperature_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SuppressionCameraModifier" },
		{ "ModuleRelativePath", "Public/SuppressionCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_DepthOfFieldAperature = { "DepthOfFieldAperature", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USuppressionCameraModifier, DepthOfFieldAperature), METADATA_PARAMS(Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_DepthOfFieldAperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_DepthOfFieldAperature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_DepthOfFieldFocalDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SuppressionCameraModifier" },
		{ "ModuleRelativePath", "Public/SuppressionCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_DepthOfFieldFocalDistance = { "DepthOfFieldFocalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USuppressionCameraModifier, DepthOfFieldFocalDistance), METADATA_PARAMS(Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_DepthOfFieldFocalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_DepthOfFieldFocalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_DepthBlurDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SuppressionCameraModifier" },
		{ "ModuleRelativePath", "Public/SuppressionCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_DepthBlurDistance = { "DepthBlurDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USuppressionCameraModifier, DepthBlurDistance), METADATA_PARAMS(Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_DepthBlurDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_DepthBlurDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_DepthBlurSuppressionLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SuppressionCameraModifier" },
		{ "ModuleRelativePath", "Public/SuppressionCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_DepthBlurSuppressionLevel = { "DepthBlurSuppressionLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USuppressionCameraModifier, DepthBlurSuppressionLevel), METADATA_PARAMS(Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_DepthBlurSuppressionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_DepthBlurSuppressionLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USuppressionCameraModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_SuppressionMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_MaxSuppression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_AberrationIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_BloomIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_VignetteIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_DepthOfFieldAperature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_DepthOfFieldFocalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_DepthBlurDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuppressionCameraModifier_Statics::NewProp_DepthBlurSuppressionLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USuppressionCameraModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USuppressionCameraModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USuppressionCameraModifier_Statics::ClassParams = {
		&USuppressionCameraModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USuppressionCameraModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USuppressionCameraModifier_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USuppressionCameraModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USuppressionCameraModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USuppressionCameraModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USuppressionCameraModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USuppressionCameraModifier, 998822863);
	template<> FPSCONTROLLER_API UClass* StaticClass<USuppressionCameraModifier>()
	{
		return USuppressionCameraModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USuppressionCameraModifier(Z_Construct_UClass_USuppressionCameraModifier, &USuppressionCameraModifier::StaticClass, TEXT("/Script/FPSController"), TEXT("USuppressionCameraModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USuppressionCameraModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
