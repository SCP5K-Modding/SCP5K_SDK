// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/NightVisionCameraModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNightVisionCameraModifier() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UNightVisionCameraModifier_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UNightVisionCameraModifier();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
// End Cross Module References
	void UNightVisionCameraModifier::StaticRegisterNativesUNightVisionCameraModifier()
	{
	}
	UClass* Z_Construct_UClass_UNightVisionCameraModifier_NoRegister()
	{
		return UNightVisionCameraModifier::StaticClass();
	}
	struct Z_Construct_UClass_UNightVisionCameraModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NightVisionMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NightVisionMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldAperature_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldAperature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFocalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFocalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aberration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Aberration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vignette_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Vignette;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNightVisionCameraModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNightVisionCameraModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NightVisionCameraModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NightVisionCameraModifier.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_NightVisionMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NightVisionCameraModifier" },
		{ "ModuleRelativePath", "Public/NightVisionCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_NightVisionMaterial = { "NightVisionMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNightVisionCameraModifier, NightVisionMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_NightVisionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_NightVisionMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_BloomAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NightVisionCameraModifier" },
		{ "ModuleRelativePath", "Public/NightVisionCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_BloomAmount = { "BloomAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNightVisionCameraModifier, BloomAmount), METADATA_PARAMS(Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_BloomAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_BloomAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_DepthOfFieldAperature_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NightVisionCameraModifier" },
		{ "ModuleRelativePath", "Public/NightVisionCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_DepthOfFieldAperature = { "DepthOfFieldAperature", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNightVisionCameraModifier, DepthOfFieldAperature), METADATA_PARAMS(Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_DepthOfFieldAperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_DepthOfFieldAperature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_DepthOfFieldFocalDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NightVisionCameraModifier" },
		{ "ModuleRelativePath", "Public/NightVisionCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_DepthOfFieldFocalDistance = { "DepthOfFieldFocalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNightVisionCameraModifier, DepthOfFieldFocalDistance), METADATA_PARAMS(Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_DepthOfFieldFocalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_DepthOfFieldFocalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_Aberration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NightVisionCameraModifier" },
		{ "ModuleRelativePath", "Public/NightVisionCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_Aberration = { "Aberration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNightVisionCameraModifier, Aberration), METADATA_PARAMS(Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_Aberration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_Aberration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_Vignette_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NightVisionCameraModifier" },
		{ "ModuleRelativePath", "Public/NightVisionCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_Vignette = { "Vignette", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNightVisionCameraModifier, Vignette), METADATA_PARAMS(Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_Vignette_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_Vignette_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNightVisionCameraModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_NightVisionMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_BloomAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_DepthOfFieldAperature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_DepthOfFieldFocalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_Aberration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNightVisionCameraModifier_Statics::NewProp_Vignette,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNightVisionCameraModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNightVisionCameraModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNightVisionCameraModifier_Statics::ClassParams = {
		&UNightVisionCameraModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNightVisionCameraModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNightVisionCameraModifier_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNightVisionCameraModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNightVisionCameraModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNightVisionCameraModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNightVisionCameraModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNightVisionCameraModifier, 4192533372);
	template<> FPSCONTROLLER_API UClass* StaticClass<UNightVisionCameraModifier>()
	{
		return UNightVisionCameraModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNightVisionCameraModifier(Z_Construct_UClass_UNightVisionCameraModifier, &UNightVisionCameraModifier::StaticClass, TEXT("/Script/FPSController"), TEXT("UNightVisionCameraModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNightVisionCameraModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
