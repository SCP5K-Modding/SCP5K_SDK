// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/BodyCamCameraModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyCamCameraModifier() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UBodyCamCameraModifier_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UBodyCamCameraModifier();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
// End Cross Module References
	void UBodyCamCameraModifier::StaticRegisterNativesUBodyCamCameraModifier()
	{
	}
	UClass* Z_Construct_UClass_UBodyCamCameraModifier_NoRegister()
	{
		return UBodyCamCameraModifier::StaticClass();
	}
	struct Z_Construct_UClass_UBodyCamCameraModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraPostProcessSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraPostProcessSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodyCamCameraModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyCamCameraModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BodyCamCameraModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BodyCamCameraModifier.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyCamCameraModifier_Statics::NewProp_CameraPostProcessSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BodyCamCameraModifier" },
		{ "ModuleRelativePath", "Public/BodyCamCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodyCamCameraModifier_Statics::NewProp_CameraPostProcessSettings = { "CameraPostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyCamCameraModifier, CameraPostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_UBodyCamCameraModifier_Statics::NewProp_CameraPostProcessSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyCamCameraModifier_Statics::NewProp_CameraPostProcessSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyCamCameraModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyCamCameraModifier_Statics::NewProp_CameraPostProcessSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodyCamCameraModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyCamCameraModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodyCamCameraModifier_Statics::ClassParams = {
		&UBodyCamCameraModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBodyCamCameraModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBodyCamCameraModifier_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBodyCamCameraModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyCamCameraModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodyCamCameraModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodyCamCameraModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodyCamCameraModifier, 3967799925);
	template<> FPSCONTROLLER_API UClass* StaticClass<UBodyCamCameraModifier>()
	{
		return UBodyCamCameraModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodyCamCameraModifier(Z_Construct_UClass_UBodyCamCameraModifier, &UBodyCamCameraModifier::StaticClass, TEXT("/Script/FPSController"), TEXT("UBodyCamCameraModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyCamCameraModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
