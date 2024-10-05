// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSMeleeWeaponData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSMeleeWeaponData() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSMeleeWeaponData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSMeleeWeaponData();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSWeaponData();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EPrimaryMeleeType();
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_ESecondaryMeleeType();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_USurfaceDataMap_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
// End Cross Module References
	void UFPSMeleeWeaponData::StaticRegisterNativesUFPSMeleeWeaponData()
	{
	}
	UClass* Z_Construct_UClass_UFPSMeleeWeaponData_NoRegister()
	{
		return UFPSMeleeWeaponData::StaticClass();
	}
	struct Z_Construct_UClass_UFPSMeleeWeaponData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PrimaryType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PrimaryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecondaryType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SecondaryType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessfulAttackDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuccessfulAttackDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadyDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReadyDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlowDelayBenefit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlowDelayBenefit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinHitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinHitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHitTimeRemaining_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHitTimeRemaining;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetAttackDirectionOnBash_MetaData[];
#endif
		static void NewProp_bResetAttackDirectionOnBash_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetAttackDirectionOnBash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftBasePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LeftBasePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftReadyPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LeftReadyPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightReadyPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RightReadyPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftAttackMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LeftAttackMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightAttackMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RightAttackMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftCancelMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LeftCancelMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightCancelMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RightCancelMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackShakeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AttackShakeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitShakeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HitShakeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionSoundRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerceptionSoundRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loudness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Loudness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFPSMeleeWeaponData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFPSWeaponData,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSMeleeWeaponData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_PrimaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_PrimaryType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_PrimaryType = { "PrimaryType", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, PrimaryType), Z_Construct_UEnum_FPSController_EPrimaryMeleeType, METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_PrimaryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_PrimaryType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_SecondaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_SecondaryType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_SecondaryType = { "SecondaryType", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, SecondaryType), Z_Construct_UEnum_FPSController_ESecondaryMeleeType, METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_SecondaryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_SecondaryType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_TraceThickness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_TraceThickness = { "TraceThickness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, TraceThickness), METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_TraceThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_TraceThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_SuccessfulAttackDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_SuccessfulAttackDelay = { "SuccessfulAttackDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, SuccessfulAttackDelay), METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_SuccessfulAttackDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_SuccessfulAttackDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_ReadyDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_ReadyDelay = { "ReadyDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, ReadyDelay), METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_ReadyDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_ReadyDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_FlowDelayBenefit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_FlowDelayBenefit = { "FlowDelayBenefit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, FlowDelayBenefit), METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_FlowDelayBenefit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_FlowDelayBenefit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_MinHitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_MinHitTime = { "MinHitTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, MinHitTime), METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_MinHitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_MinHitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_MaxHitTimeRemaining_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_MaxHitTimeRemaining = { "MaxHitTimeRemaining", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, MaxHitTimeRemaining), METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_MaxHitTimeRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_MaxHitTimeRemaining_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_bResetAttackDirectionOnBash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	void Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_bResetAttackDirectionOnBash_SetBit(void* Obj)
	{
		((UFPSMeleeWeaponData*)Obj)->bResetAttackDirectionOnBash = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_bResetAttackDirectionOnBash = { "bResetAttackDirectionOnBash", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSMeleeWeaponData), &Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_bResetAttackDirectionOnBash_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_bResetAttackDirectionOnBash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_bResetAttackDirectionOnBash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_LeftBasePose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_LeftBasePose = { "LeftBasePose", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, LeftBasePose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_LeftBasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_LeftBasePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_LeftReadyPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_LeftReadyPose = { "LeftReadyPose", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, LeftReadyPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_LeftReadyPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_LeftReadyPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_RightReadyPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_RightReadyPose = { "RightReadyPose", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, RightReadyPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_RightReadyPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_RightReadyPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_LeftAttackMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_LeftAttackMontage = { "LeftAttackMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, LeftAttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_LeftAttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_LeftAttackMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_RightAttackMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_RightAttackMontage = { "RightAttackMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, RightAttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_RightAttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_RightAttackMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_LeftCancelMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_LeftCancelMontage = { "LeftCancelMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, LeftCancelMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_LeftCancelMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_LeftCancelMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_RightCancelMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_RightCancelMontage = { "RightCancelMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, RightCancelMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_RightCancelMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_RightCancelMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_AttackShakeClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_AttackShakeClass = { "AttackShakeClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, AttackShakeClass), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_AttackShakeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_AttackShakeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_HitShakeClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_HitShakeClass = { "HitShakeClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, HitShakeClass), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_HitShakeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_HitShakeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_HitData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_HitData = { "HitData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, HitData), Z_Construct_UClass_USurfaceDataMap_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_HitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_HitData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_PerceptionSoundRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_PerceptionSoundRadius = { "PerceptionSoundRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, PerceptionSoundRadius), METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_PerceptionSoundRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_PerceptionSoundRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_Loudness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_Loudness = { "Loudness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, Loudness), METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_Loudness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_Loudness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_AttackSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_AttackSound = { "AttackSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, AttackSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_AttackSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_AttackSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_HitSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeaponData" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_HitSound = { "HitSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSMeleeWeaponData, HitSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_HitSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_HitSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFPSMeleeWeaponData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_PrimaryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_PrimaryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_SecondaryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_SecondaryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_TraceThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_SuccessfulAttackDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_ReadyDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_FlowDelayBenefit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_MinHitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_MaxHitTimeRemaining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_bResetAttackDirectionOnBash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_LeftBasePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_LeftReadyPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_RightReadyPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_LeftAttackMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_RightAttackMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_LeftCancelMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_RightCancelMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_AttackShakeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_HitShakeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_HitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_PerceptionSoundRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_Loudness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_AttackSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMeleeWeaponData_Statics::NewProp_HitSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFPSMeleeWeaponData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSMeleeWeaponData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFPSMeleeWeaponData_Statics::ClassParams = {
		&UFPSMeleeWeaponData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFPSMeleeWeaponData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMeleeWeaponData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFPSMeleeWeaponData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFPSMeleeWeaponData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFPSMeleeWeaponData, 1318958683);
	template<> FPSCONTROLLER_API UClass* StaticClass<UFPSMeleeWeaponData>()
	{
		return UFPSMeleeWeaponData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFPSMeleeWeaponData(Z_Construct_UClass_UFPSMeleeWeaponData, &UFPSMeleeWeaponData::StaticClass, TEXT("/Script/FPSController"), TEXT("UFPSMeleeWeaponData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSMeleeWeaponData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
