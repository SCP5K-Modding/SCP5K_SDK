// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSSightData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSSightData() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSSightData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSSightData();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSAttachmentData();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
	void UFPSSightData::StaticRegisterNativesUFPSSightData()
	{
	}
	UClass* Z_Construct_UClass_UFPSSightData_NoRegister()
	{
		return UFPSSightData::StaticClass();
	}
	struct Z_Construct_UClass_UFPSSightData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingSensitivityMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingSensitivityMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingKickMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingKickMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingFireAnimationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingFireAnimationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RingSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ADSOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ADSOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFPSSightData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFPSAttachmentData,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSSightData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSSightData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSSightData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSSightData_Statics::NewProp_AimingSensitivityMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSSightData" },
		{ "ModuleRelativePath", "Public/FPSSightData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSSightData_Statics::NewProp_AimingSensitivityMultiplier = { "AimingSensitivityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSSightData, AimingSensitivityMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFPSSightData_Statics::NewProp_AimingSensitivityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSSightData_Statics::NewProp_AimingSensitivityMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSSightData_Statics::NewProp_AimingKickMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSSightData" },
		{ "ModuleRelativePath", "Public/FPSSightData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSSightData_Statics::NewProp_AimingKickMultiplier = { "AimingKickMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSSightData, AimingKickMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFPSSightData_Statics::NewProp_AimingKickMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSSightData_Statics::NewProp_AimingKickMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSSightData_Statics::NewProp_AimingFireAnimationMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSSightData" },
		{ "ModuleRelativePath", "Public/FPSSightData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSSightData_Statics::NewProp_AimingFireAnimationMultiplier = { "AimingFireAnimationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSSightData, AimingFireAnimationMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFPSSightData_Statics::NewProp_AimingFireAnimationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSSightData_Statics::NewProp_AimingFireAnimationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSSightData_Statics::NewProp_ZoomMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSSightData" },
		{ "ModuleRelativePath", "Public/FPSSightData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSSightData_Statics::NewProp_ZoomMultiplier = { "ZoomMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSSightData, ZoomMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFPSSightData_Statics::NewProp_ZoomMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSSightData_Statics::NewProp_ZoomMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSSightData_Statics::NewProp_RingSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSSightData" },
		{ "ModuleRelativePath", "Public/FPSSightData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSSightData_Statics::NewProp_RingSize = { "RingSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSSightData, RingSize), METADATA_PARAMS(Z_Construct_UClass_UFPSSightData_Statics::NewProp_RingSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSSightData_Statics::NewProp_RingSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSSightData_Statics::NewProp_ADSOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSSightData" },
		{ "ModuleRelativePath", "Public/FPSSightData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSSightData_Statics::NewProp_ADSOffset = { "ADSOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSSightData, ADSOffset), METADATA_PARAMS(Z_Construct_UClass_UFPSSightData_Statics::NewProp_ADSOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSSightData_Statics::NewProp_ADSOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFPSSightData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSSightData_Statics::NewProp_AimingSensitivityMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSSightData_Statics::NewProp_AimingKickMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSSightData_Statics::NewProp_AimingFireAnimationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSSightData_Statics::NewProp_ZoomMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSSightData_Statics::NewProp_RingSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSSightData_Statics::NewProp_ADSOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFPSSightData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSSightData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFPSSightData_Statics::ClassParams = {
		&UFPSSightData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFPSSightData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFPSSightData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFPSSightData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSSightData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFPSSightData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFPSSightData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFPSSightData, 930653613);
	template<> FPSCONTROLLER_API UClass* StaticClass<UFPSSightData>()
	{
		return UFPSSightData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFPSSightData(Z_Construct_UClass_UFPSSightData, &UFPSSightData::StaticClass, TEXT("/Script/FPSController"), TEXT("UFPSSightData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSSightData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
