// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSBarrelData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSBarrelData() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSBarrelData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSBarrelData();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSAttachmentData();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister();
// End Cross Module References
	void UFPSBarrelData::StaticRegisterNativesUFPSBarrelData()
	{
	}
	UClass* Z_Construct_UClass_UFPSBarrelData_NoRegister()
	{
		return UFPSBarrelData::StaticClass();
	}
	struct Z_Construct_UClass_UFPSBarrelData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecoilMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoudnessMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoudnessMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSuppressed_MetaData[];
#endif
		static void NewProp_bIsSuppressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSuppressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCompensator_MetaData[];
#endif
		static void NewProp_bIsCompensator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCompensator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideMuzzleFlashParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideMuzzleFlashParticle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFPSBarrelData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFPSAttachmentData,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSBarrelData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSBarrelData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSBarrelData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_RecoilMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSBarrelData" },
		{ "ModuleRelativePath", "Public/FPSBarrelData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_RecoilMultiplier = { "RecoilMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSBarrelData, RecoilMultiplier), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_RecoilMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_RecoilMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_LoudnessMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSBarrelData" },
		{ "ModuleRelativePath", "Public/FPSBarrelData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_LoudnessMultiplier = { "LoudnessMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSBarrelData, LoudnessMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_LoudnessMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_LoudnessMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_Length_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSBarrelData" },
		{ "ModuleRelativePath", "Public/FPSBarrelData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSBarrelData, Length), METADATA_PARAMS(Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_bIsSuppressed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSBarrelData" },
		{ "ModuleRelativePath", "Public/FPSBarrelData.h" },
	};
#endif
	void Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_bIsSuppressed_SetBit(void* Obj)
	{
		((UFPSBarrelData*)Obj)->bIsSuppressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_bIsSuppressed = { "bIsSuppressed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSBarrelData), &Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_bIsSuppressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_bIsSuppressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_bIsSuppressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_bIsCompensator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSBarrelData" },
		{ "ModuleRelativePath", "Public/FPSBarrelData.h" },
	};
#endif
	void Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_bIsCompensator_SetBit(void* Obj)
	{
		((UFPSBarrelData*)Obj)->bIsCompensator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_bIsCompensator = { "bIsCompensator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSBarrelData), &Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_bIsCompensator_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_bIsCompensator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_bIsCompensator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_OverrideMuzzleFlashParticle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSBarrelData" },
		{ "ModuleRelativePath", "Public/FPSBarrelData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_OverrideMuzzleFlashParticle = { "OverrideMuzzleFlashParticle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSBarrelData, OverrideMuzzleFlashParticle), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_OverrideMuzzleFlashParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_OverrideMuzzleFlashParticle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFPSBarrelData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_RecoilMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_LoudnessMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_bIsSuppressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_bIsCompensator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSBarrelData_Statics::NewProp_OverrideMuzzleFlashParticle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFPSBarrelData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSBarrelData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFPSBarrelData_Statics::ClassParams = {
		&UFPSBarrelData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFPSBarrelData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFPSBarrelData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFPSBarrelData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSBarrelData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFPSBarrelData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFPSBarrelData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFPSBarrelData, 783836722);
	template<> FPSCONTROLLER_API UClass* StaticClass<UFPSBarrelData>()
	{
		return UFPSBarrelData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFPSBarrelData(Z_Construct_UClass_UFPSBarrelData, &UFPSBarrelData::StaticClass, TEXT("/Script/FPSController"), TEXT("UFPSBarrelData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSBarrelData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
