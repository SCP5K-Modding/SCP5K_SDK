// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/AimingCameraModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimingCameraModifier() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UAimingCameraModifier_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UAimingCameraModifier();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UAimingCameraModifier::StaticRegisterNativesUAimingCameraModifier()
	{
	}
	UClass* Z_Construct_UClass_UAimingCameraModifier_NoRegister()
	{
		return UAimingCameraModifier::StaticClass();
	}
	struct Z_Construct_UClass_UAimingCameraModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingBlurMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimingBlurMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingScopeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimingScopeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldAperature_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldAperature;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAimingCameraModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimingCameraModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AimingCameraModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AimingCameraModifier.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimingCameraModifier_Statics::NewProp_AimingBlurMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AimingCameraModifier" },
		{ "ModuleRelativePath", "Public/AimingCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAimingCameraModifier_Statics::NewProp_AimingBlurMaterial = { "AimingBlurMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimingCameraModifier, AimingBlurMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAimingCameraModifier_Statics::NewProp_AimingBlurMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimingCameraModifier_Statics::NewProp_AimingBlurMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimingCameraModifier_Statics::NewProp_AimingScopeMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AimingCameraModifier" },
		{ "ModuleRelativePath", "Public/AimingCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAimingCameraModifier_Statics::NewProp_AimingScopeMaterial = { "AimingScopeMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimingCameraModifier, AimingScopeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAimingCameraModifier_Statics::NewProp_AimingScopeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimingCameraModifier_Statics::NewProp_AimingScopeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimingCameraModifier_Statics::NewProp_DepthOfFieldAperature_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AimingCameraModifier" },
		{ "ModuleRelativePath", "Public/AimingCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimingCameraModifier_Statics::NewProp_DepthOfFieldAperature = { "DepthOfFieldAperature", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimingCameraModifier, DepthOfFieldAperature), METADATA_PARAMS(Z_Construct_UClass_UAimingCameraModifier_Statics::NewProp_DepthOfFieldAperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimingCameraModifier_Statics::NewProp_DepthOfFieldAperature_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAimingCameraModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimingCameraModifier_Statics::NewProp_AimingBlurMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimingCameraModifier_Statics::NewProp_AimingScopeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimingCameraModifier_Statics::NewProp_DepthOfFieldAperature,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAimingCameraModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAimingCameraModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAimingCameraModifier_Statics::ClassParams = {
		&UAimingCameraModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAimingCameraModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAimingCameraModifier_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAimingCameraModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAimingCameraModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAimingCameraModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAimingCameraModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAimingCameraModifier, 1867843036);
	template<> FPSCONTROLLER_API UClass* StaticClass<UAimingCameraModifier>()
	{
		return UAimingCameraModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAimingCameraModifier(Z_Construct_UClass_UAimingCameraModifier, &UAimingCameraModifier::StaticClass, TEXT("/Script/FPSController"), TEXT("UAimingCameraModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAimingCameraModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
