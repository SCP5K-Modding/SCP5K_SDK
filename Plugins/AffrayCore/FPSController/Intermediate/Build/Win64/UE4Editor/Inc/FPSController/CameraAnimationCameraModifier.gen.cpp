// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/CameraAnimationCameraModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraAnimationCameraModifier() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UCameraAnimationCameraModifier_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UCameraAnimationCameraModifier();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
	void UCameraAnimationCameraModifier::StaticRegisterNativesUCameraAnimationCameraModifier()
	{
	}
	UClass* Z_Construct_UClass_UCameraAnimationCameraModifier_NoRegister()
	{
		return UCameraAnimationCameraModifier::StaticClass();
	}
	struct Z_Construct_UClass_UCameraAnimationCameraModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraAnimationStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraAnimationStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingCameraAnimationStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingCameraAnimationStrength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CameraAnimationCameraModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_CameraAnimationStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CameraAnimationCameraModifier" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_CameraAnimationStrength = { "CameraAnimationStrength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnimationCameraModifier, CameraAnimationStrength), METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_CameraAnimationStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_CameraAnimationStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_AimingCameraAnimationStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CameraAnimationCameraModifier" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_AimingCameraAnimationStrength = { "AimingCameraAnimationStrength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnimationCameraModifier, AimingCameraAnimationStrength), METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_AimingCameraAnimationStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_AimingCameraAnimationStrength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_CameraAnimationStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_AimingCameraAnimationStrength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAnimationCameraModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::ClassParams = {
		&UCameraAnimationCameraModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraAnimationCameraModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraAnimationCameraModifier, 4005801103);
	template<> FPSCONTROLLER_API UClass* StaticClass<UCameraAnimationCameraModifier>()
	{
		return UCameraAnimationCameraModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraAnimationCameraModifier(Z_Construct_UClass_UCameraAnimationCameraModifier, &UCameraAnimationCameraModifier::StaticClass, TEXT("/Script/FPSController"), TEXT("UCameraAnimationCameraModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnimationCameraModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
