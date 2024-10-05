// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSRangedWeaponData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSRangedWeaponData() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSRangedWeaponData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSRangedWeaponData();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSWeaponData();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileData();
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EFireMode();
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EReloadType();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAttachmentSlotData();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSTracer_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_USurfaceDataMap_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FQuickLoadAnimation();
// End Cross Module References
	DEFINE_FUNCTION(UFPSRangedWeaponData::execGetAlternateGripPose)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bWantsAlternateGripPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequence**)Z_Param__Result=P_THIS->GetAlternateGripPose(Z_Param_Out_bWantsAlternateGripPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSRangedWeaponData::execGetFireRate)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_EffectiveFireRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_FireModeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFireRate(Z_Param_Out_EffectiveFireRate,Z_Param_FireModeIndex);
		P_NATIVE_END;
	}
	void UFPSRangedWeaponData::StaticRegisterNativesUFPSRangedWeaponData()
	{
		UClass* Class = UFPSRangedWeaponData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAlternateGripPose", &UFPSRangedWeaponData::execGetAlternateGripPose },
			{ "GetFireRate", &UFPSRangedWeaponData::execGetFireRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFPSRangedWeaponData_GetAlternateGripPose_Statics
	{
		struct FPSRangedWeaponData_eventGetAlternateGripPose_Parms
		{
			bool bWantsAlternateGripPose;
			UAnimSequence* ReturnValue;
		};
		static void NewProp_bWantsAlternateGripPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsAlternateGripPose;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFPSRangedWeaponData_GetAlternateGripPose_Statics::NewProp_bWantsAlternateGripPose_SetBit(void* Obj)
	{
		((FPSRangedWeaponData_eventGetAlternateGripPose_Parms*)Obj)->bWantsAlternateGripPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSRangedWeaponData_GetAlternateGripPose_Statics::NewProp_bWantsAlternateGripPose = { "bWantsAlternateGripPose", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeaponData_eventGetAlternateGripPose_Parms), &Z_Construct_UFunction_UFPSRangedWeaponData_GetAlternateGripPose_Statics::NewProp_bWantsAlternateGripPose_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSRangedWeaponData_GetAlternateGripPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeaponData_eventGetAlternateGripPose_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSRangedWeaponData_GetAlternateGripPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSRangedWeaponData_GetAlternateGripPose_Statics::NewProp_bWantsAlternateGripPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSRangedWeaponData_GetAlternateGripPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSRangedWeaponData_GetAlternateGripPose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSRangedWeaponData_GetAlternateGripPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSRangedWeaponData, nullptr, "GetAlternateGripPose", nullptr, nullptr, sizeof(FPSRangedWeaponData_eventGetAlternateGripPose_Parms), Z_Construct_UFunction_UFPSRangedWeaponData_GetAlternateGripPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSRangedWeaponData_GetAlternateGripPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSRangedWeaponData_GetAlternateGripPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSRangedWeaponData_GetAlternateGripPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSRangedWeaponData_GetAlternateGripPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSRangedWeaponData_GetAlternateGripPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSRangedWeaponData_GetFireRate_Statics
	{
		struct FPSRangedWeaponData_eventGetFireRate_Parms
		{
			int32 EffectiveFireRate;
			int32 FireModeIndex;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EffectiveFireRate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FireModeIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFPSRangedWeaponData_GetFireRate_Statics::NewProp_EffectiveFireRate = { "EffectiveFireRate", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeaponData_eventGetFireRate_Parms, EffectiveFireRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFPSRangedWeaponData_GetFireRate_Statics::NewProp_FireModeIndex = { "FireModeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeaponData_eventGetFireRate_Parms, FireModeIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFPSRangedWeaponData_GetFireRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeaponData_eventGetFireRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSRangedWeaponData_GetFireRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSRangedWeaponData_GetFireRate_Statics::NewProp_EffectiveFireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSRangedWeaponData_GetFireRate_Statics::NewProp_FireModeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSRangedWeaponData_GetFireRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSRangedWeaponData_GetFireRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSRangedWeaponData_GetFireRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSRangedWeaponData, nullptr, "GetFireRate", nullptr, nullptr, sizeof(FPSRangedWeaponData_eventGetFireRate_Parms), Z_Construct_UFunction_UFPSRangedWeaponData_GetFireRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSRangedWeaponData_GetFireRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSRangedWeaponData_GetFireRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSRangedWeaponData_GetFireRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSRangedWeaponData_GetFireRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSRangedWeaponData_GetFireRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFPSRangedWeaponData_NoRegister()
	{
		return UFPSRangedWeaponData::StaticClass();
	}
	struct Z_Construct_UClass_UFPSRangedWeaponData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Calibre_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Calibre;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRecoil_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinRecoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRecoil_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxRecoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KickMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponControl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilNoiseSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoilNoiseSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilNoiseAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoilNoiseAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilNoiseRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoilNoiseRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmmoType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoPerMagazine_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoPerMagazine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Magazines_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Magazines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Projectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProjectileCount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AvailableFireModes_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AvailableFireModes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableFireModes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvailableFireModes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BurstCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterruptableBurst_MetaData[];
#endif
		static void NewProp_InterruptableBurst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InterruptableBurst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuppressionAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuppressionAmount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReloadType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReloadType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyReloadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmptyReloadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartReloadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartReloadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyStartReloadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmptyStartReloadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEmptyStartReloadLoadsRound_MetaData[];
#endif
		static void NewProp_bEmptyStartReloadLoadsRound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEmptyStartReloadLoadsRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndReloadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndReloadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartReloadEmptiesMagazine_MetaData[];
#endif
		static void NewProp_bStartReloadEmptiesMagazine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartReloadEmptiesMagazine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartReloadUnloadsRound_MetaData[];
#endif
		static void NewProp_bStartReloadUnloadsRound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartReloadUnloadsRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEndReloadLoadsRound_MetaData[];
#endif
		static void NewProp_bEndReloadLoadsRound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEndReloadLoadsRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanReloadWhileSprinting_MetaData[];
#endif
		static void NewProp_bCanReloadWhileSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanReloadWhileSprinting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePreFireForAutomaticFire_MetaData[];
#endif
		static void NewProp_bUsePreFireForAutomaticFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePreFireForAutomaticFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxReloadCancelTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxReloadCancelTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClosedBolt_MetaData[];
#endif
		static void NewProp_bClosedBolt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClosedBolt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockOpenOnEmpty_MetaData[];
#endif
		static void NewProp_bLockOpenOnEmpty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockOpenOnEmpty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoubleActionFireDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DoubleActionFireDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumAmmoToReload_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumAmmoToReload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanReloadWhileAiming_MetaData[];
#endif
		static void NewProp_bCanReloadWhileAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanReloadWhileAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanMagCheckWhileAiming_MetaData[];
#endif
		static void NewProp_bCanMagCheckWhileAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanMagCheckWhileAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanNeverReloadWhileAiming_MetaData[];
#endif
		static void NewProp_bCanNeverReloadWhileAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanNeverReloadWhileAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingSightDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingSightDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingMovementMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingMovementMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingRecoilAnimationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingRecoilAnimationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingRecoilKickMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingRecoilKickMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingRecoilMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingRecoilMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingFreeAimMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingFreeAimMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingSmoothAimMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingSmoothAimMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingSwayMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingSwayMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingSensitivityMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingSensitivityMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostMovementSightAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostMovementSightAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostFireSightAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostFireSightAlignment;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachmentSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttachmentSlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlashParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlashParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuppressedMuzzleFlashParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuppressedMuzzleFlashParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CasingParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CasingParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TracerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletCasingDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletCasingDataMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunshotCameraShakeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GunshotCameraShakeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastGunshotCameraShakeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LastGunshotCameraShakeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompensatedShakeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CompensatedShakeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFullAutoAudio_MetaData[];
#endif
		static void NewProp_bUseFullAutoAudio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFullAutoAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionSoundRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerceptionSoundRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loudness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Loudness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FiringSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreFireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreFireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuppressedFiringSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuppressedFiringSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DryFireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DryFireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchFireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwitchFireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuperSonicWhizSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuperSonicWhizSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubsonicWhizSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubsonicWhizSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimInSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimInSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOutSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimOutSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonAimingOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThirdPersonAimingOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonAimingOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirstPersonAimingOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonBracedAimOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirstPersonBracedAimOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonBracedAimOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThirdPersonBracedAimOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BracedAimTilt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BracedAimTilt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysUseAlternateGripPose_MetaData[];
#endif
		static void NewProp_bAlwaysUseAlternateGripPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysUseAlternateGripPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlternateGripPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AlternateGripPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FiringMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartReloadMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_StartReloadMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyStartReloadMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EmptyStartReloadMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndReloadMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EndReloadMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ReloadMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyReloadMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EmptyReloadMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingleMagReloadMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SingleMagReloadMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ActionMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiremodeUpMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FiremodeUpMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiremodeDownMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FiremodeDownMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DryFireMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DryFireMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreFireMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PreFireMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeginADSMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BeginADSMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndADSMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EndADSMontage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuickLoadAnimations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuickLoadAnimations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuickLoadAnimations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadAmmoOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReloadAmmoOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BulletBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CasingBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CasingBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedLoaderBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpeedLoaderBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineFollowerBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MagazineFollowerBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSelectorBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FireSelectorBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MagazineBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondMagazineBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SecondMagazineBoneName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireSelectorRotations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSelectorRotations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FireSelectorRotations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnimateFireSelector_MetaData[];
#endif
		static void NewProp_bAnimateFireSelector_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimateFireSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseReverseBulletOrder_MetaData[];
#endif
		static void NewProp_bUseReverseBulletOrder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseReverseBulletOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadAnimationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadAnimationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemEmptyBasePoseAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemEmptyBasePoseAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSightFoldedPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemSightFoldedPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemFiringMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemFiringMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemStartReloadMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemStartReloadMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemEmptyStartReloadMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemEmptyStartReloadMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemEndReloadMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemEndReloadMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemReloadMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemReloadMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemEmptyReloadMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemEmptyReloadMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSingleReloadMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemSingleReloadMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemActionMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemActionMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPreFireMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemPreFireMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFPSRangedWeaponData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFPSWeaponData,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFPSRangedWeaponData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFPSRangedWeaponData_GetAlternateGripPose, "GetAlternateGripPose" }, // 3114407388
		{ &Z_Construct_UFunction_UFPSRangedWeaponData_GetFireRate, "GetFireRate" }, // 3664096590
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSRangedWeaponData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Calibre_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Calibre = { "Calibre", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, Calibre), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Calibre_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Calibre_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Range_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, Range), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MaxRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, MaxRange), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MinRecoil_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MinRecoil = { "MinRecoil", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, MinRecoil), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MinRecoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MinRecoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MaxRecoil_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MaxRecoil = { "MaxRecoil", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, MaxRecoil), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MaxRecoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MaxRecoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_KickMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_KickMultiplier = { "KickMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, KickMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_KickMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_KickMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_WeaponControl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_WeaponControl = { "WeaponControl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, WeaponControl), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_WeaponControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_WeaponControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_RecoilNoiseSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_RecoilNoiseSpeed = { "RecoilNoiseSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, RecoilNoiseSpeed), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_RecoilNoiseSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_RecoilNoiseSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_RecoilNoiseAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_RecoilNoiseAmount = { "RecoilNoiseAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, RecoilNoiseAmount), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_RecoilNoiseAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_RecoilNoiseAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_RecoilNoiseRoll_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_RecoilNoiseRoll = { "RecoilNoiseRoll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, RecoilNoiseRoll), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_RecoilNoiseRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_RecoilNoiseRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AmmoType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AmmoType = { "AmmoType", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, AmmoType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AmmoType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AmmoType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AmmoPerMagazine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AmmoPerMagazine = { "AmmoPerMagazine", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, AmmoPerMagazine), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AmmoPerMagazine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AmmoPerMagazine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Magazines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Magazines = { "Magazines", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, Magazines), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Magazines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Magazines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Projectile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, Projectile), Z_Construct_UScriptStruct_FProjectileData, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Projectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Projectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ProjectileCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ProjectileCount = { "ProjectileCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ProjectileCount), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ProjectileCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ProjectileCount_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AvailableFireModes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AvailableFireModes_Inner = { "AvailableFireModes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FPSController_EFireMode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AvailableFireModes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AvailableFireModes = { "AvailableFireModes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, AvailableFireModes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AvailableFireModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AvailableFireModes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BurstCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BurstCount = { "BurstCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, BurstCount), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BurstCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BurstCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_InterruptableBurst_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	void Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_InterruptableBurst_SetBit(void* Obj)
	{
		((UFPSRangedWeaponData*)Obj)->InterruptableBurst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_InterruptableBurst = { "InterruptableBurst", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSRangedWeaponData), &Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_InterruptableBurst_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_InterruptableBurst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_InterruptableBurst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SuppressionAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SuppressionAmount = { "SuppressionAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, SuppressionAmount), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SuppressionAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SuppressionAmount_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadType = { "ReloadType", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ReloadType), Z_Construct_UEnum_FPSController_EReloadType, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadTime = { "ReloadTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ReloadTime), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EmptyReloadTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EmptyReloadTime = { "EmptyReloadTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, EmptyReloadTime), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EmptyReloadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EmptyReloadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_StartReloadTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_StartReloadTime = { "StartReloadTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, StartReloadTime), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_StartReloadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_StartReloadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EmptyStartReloadTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EmptyStartReloadTime = { "EmptyStartReloadTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, EmptyStartReloadTime), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EmptyStartReloadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EmptyStartReloadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bEmptyStartReloadLoadsRound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	void Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bEmptyStartReloadLoadsRound_SetBit(void* Obj)
	{
		((UFPSRangedWeaponData*)Obj)->bEmptyStartReloadLoadsRound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bEmptyStartReloadLoadsRound = { "bEmptyStartReloadLoadsRound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSRangedWeaponData), &Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bEmptyStartReloadLoadsRound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bEmptyStartReloadLoadsRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bEmptyStartReloadLoadsRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EndReloadTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EndReloadTime = { "EndReloadTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, EndReloadTime), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EndReloadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EndReloadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bStartReloadEmptiesMagazine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	void Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bStartReloadEmptiesMagazine_SetBit(void* Obj)
	{
		((UFPSRangedWeaponData*)Obj)->bStartReloadEmptiesMagazine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bStartReloadEmptiesMagazine = { "bStartReloadEmptiesMagazine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSRangedWeaponData), &Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bStartReloadEmptiesMagazine_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bStartReloadEmptiesMagazine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bStartReloadEmptiesMagazine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bStartReloadUnloadsRound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	void Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bStartReloadUnloadsRound_SetBit(void* Obj)
	{
		((UFPSRangedWeaponData*)Obj)->bStartReloadUnloadsRound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bStartReloadUnloadsRound = { "bStartReloadUnloadsRound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSRangedWeaponData), &Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bStartReloadUnloadsRound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bStartReloadUnloadsRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bStartReloadUnloadsRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bEndReloadLoadsRound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	void Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bEndReloadLoadsRound_SetBit(void* Obj)
	{
		((UFPSRangedWeaponData*)Obj)->bEndReloadLoadsRound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bEndReloadLoadsRound = { "bEndReloadLoadsRound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSRangedWeaponData), &Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bEndReloadLoadsRound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bEndReloadLoadsRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bEndReloadLoadsRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanReloadWhileSprinting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	void Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanReloadWhileSprinting_SetBit(void* Obj)
	{
		((UFPSRangedWeaponData*)Obj)->bCanReloadWhileSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanReloadWhileSprinting = { "bCanReloadWhileSprinting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSRangedWeaponData), &Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanReloadWhileSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanReloadWhileSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanReloadWhileSprinting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bUsePreFireForAutomaticFire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	void Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bUsePreFireForAutomaticFire_SetBit(void* Obj)
	{
		((UFPSRangedWeaponData*)Obj)->bUsePreFireForAutomaticFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bUsePreFireForAutomaticFire = { "bUsePreFireForAutomaticFire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSRangedWeaponData), &Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bUsePreFireForAutomaticFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bUsePreFireForAutomaticFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bUsePreFireForAutomaticFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MaxReloadCancelTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MaxReloadCancelTime = { "MaxReloadCancelTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, MaxReloadCancelTime), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MaxReloadCancelTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MaxReloadCancelTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bClosedBolt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	void Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bClosedBolt_SetBit(void* Obj)
	{
		((UFPSRangedWeaponData*)Obj)->bClosedBolt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bClosedBolt = { "bClosedBolt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSRangedWeaponData), &Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bClosedBolt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bClosedBolt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bClosedBolt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bLockOpenOnEmpty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	void Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bLockOpenOnEmpty_SetBit(void* Obj)
	{
		((UFPSRangedWeaponData*)Obj)->bLockOpenOnEmpty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bLockOpenOnEmpty = { "bLockOpenOnEmpty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSRangedWeaponData), &Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bLockOpenOnEmpty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bLockOpenOnEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bLockOpenOnEmpty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_DoubleActionFireDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_DoubleActionFireDelay = { "DoubleActionFireDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, DoubleActionFireDelay), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_DoubleActionFireDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_DoubleActionFireDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ActionTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ActionTime = { "ActionTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ActionTime), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ActionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ActionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MinimumAmmoToReload_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MinimumAmmoToReload = { "MinimumAmmoToReload", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, MinimumAmmoToReload), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MinimumAmmoToReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MinimumAmmoToReload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanReloadWhileAiming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	void Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanReloadWhileAiming_SetBit(void* Obj)
	{
		((UFPSRangedWeaponData*)Obj)->bCanReloadWhileAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanReloadWhileAiming = { "bCanReloadWhileAiming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSRangedWeaponData), &Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanReloadWhileAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanReloadWhileAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanReloadWhileAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanMagCheckWhileAiming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	void Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanMagCheckWhileAiming_SetBit(void* Obj)
	{
		((UFPSRangedWeaponData*)Obj)->bCanMagCheckWhileAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanMagCheckWhileAiming = { "bCanMagCheckWhileAiming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSRangedWeaponData), &Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanMagCheckWhileAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanMagCheckWhileAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanMagCheckWhileAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanNeverReloadWhileAiming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	void Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanNeverReloadWhileAiming_SetBit(void* Obj)
	{
		((UFPSRangedWeaponData*)Obj)->bCanNeverReloadWhileAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanNeverReloadWhileAiming = { "bCanNeverReloadWhileAiming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSRangedWeaponData), &Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanNeverReloadWhileAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanNeverReloadWhileAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanNeverReloadWhileAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingSightDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingSightDistance = { "AimingSightDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, AimingSightDistance), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingSightDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingSightDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingMovementMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingMovementMultiplier = { "AimingMovementMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, AimingMovementMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingMovementMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingMovementMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingRecoilAnimationMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingRecoilAnimationMultiplier = { "AimingRecoilAnimationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, AimingRecoilAnimationMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingRecoilAnimationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingRecoilAnimationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingRecoilKickMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingRecoilKickMultiplier = { "AimingRecoilKickMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, AimingRecoilKickMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingRecoilKickMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingRecoilKickMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingRecoilMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingRecoilMultiplier = { "AimingRecoilMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, AimingRecoilMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingRecoilMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingRecoilMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingFOV_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingFOV = { "AimingFOV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, AimingFOV), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingFreeAimMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingFreeAimMultiplier = { "AimingFreeAimMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, AimingFreeAimMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingFreeAimMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingFreeAimMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingSmoothAimMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingSmoothAimMultiplier = { "AimingSmoothAimMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, AimingSmoothAimMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingSmoothAimMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingSmoothAimMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingSwayMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingSwayMultiplier = { "AimingSwayMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, AimingSwayMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingSwayMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingSwayMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingSensitivityMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingSensitivityMultiplier = { "AimingSensitivityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, AimingSensitivityMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingSensitivityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingSensitivityMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PostMovementSightAlignment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PostMovementSightAlignment = { "PostMovementSightAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, PostMovementSightAlignment), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PostMovementSightAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PostMovementSightAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PostFireSightAlignment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PostFireSightAlignment = { "PostFireSightAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, PostFireSightAlignment), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PostFireSightAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PostFireSightAlignment_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AttachmentSlots_Inner = { "AttachmentSlots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttachmentSlotData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AttachmentSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AttachmentSlots = { "AttachmentSlots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, AttachmentSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AttachmentSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AttachmentSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MuzzleFlashParticle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MuzzleFlashParticle = { "MuzzleFlashParticle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, MuzzleFlashParticle), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MuzzleFlashParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MuzzleFlashParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SuppressedMuzzleFlashParticle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SuppressedMuzzleFlashParticle = { "SuppressedMuzzleFlashParticle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, SuppressedMuzzleFlashParticle), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SuppressedMuzzleFlashParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SuppressedMuzzleFlashParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_CasingParticle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_CasingParticle = { "CasingParticle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, CasingParticle), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_CasingParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_CasingParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_TracerClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_TracerClass = { "TracerClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, TracerClass), Z_Construct_UClass_AFPSTracer_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_TracerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_TracerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BulletCasingDataMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BulletCasingDataMap = { "BulletCasingDataMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, BulletCasingDataMap), Z_Construct_UClass_USurfaceDataMap_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BulletCasingDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BulletCasingDataMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_GunshotCameraShakeClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_GunshotCameraShakeClass = { "GunshotCameraShakeClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, GunshotCameraShakeClass), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_GunshotCameraShakeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_GunshotCameraShakeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_LastGunshotCameraShakeClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_LastGunshotCameraShakeClass = { "LastGunshotCameraShakeClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, LastGunshotCameraShakeClass), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_LastGunshotCameraShakeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_LastGunshotCameraShakeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_CompensatedShakeClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_CompensatedShakeClass = { "CompensatedShakeClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, CompensatedShakeClass), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_CompensatedShakeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_CompensatedShakeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bUseFullAutoAudio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	void Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bUseFullAutoAudio_SetBit(void* Obj)
	{
		((UFPSRangedWeaponData*)Obj)->bUseFullAutoAudio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bUseFullAutoAudio = { "bUseFullAutoAudio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSRangedWeaponData), &Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bUseFullAutoAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bUseFullAutoAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bUseFullAutoAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PerceptionSoundRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PerceptionSoundRadius = { "PerceptionSoundRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, PerceptionSoundRadius), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PerceptionSoundRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PerceptionSoundRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Loudness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Loudness = { "Loudness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, Loudness), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Loudness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Loudness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FiringSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FiringSound = { "FiringSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, FiringSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FiringSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FiringSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PreFireSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PreFireSound = { "PreFireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, PreFireSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PreFireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PreFireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SuppressedFiringSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SuppressedFiringSound = { "SuppressedFiringSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, SuppressedFiringSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SuppressedFiringSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SuppressedFiringSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_DryFireSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_DryFireSound = { "DryFireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, DryFireSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_DryFireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_DryFireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SwitchFireSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SwitchFireSound = { "SwitchFireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, SwitchFireSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SwitchFireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SwitchFireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SuperSonicWhizSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SuperSonicWhizSound = { "SuperSonicWhizSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, SuperSonicWhizSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SuperSonicWhizSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SuperSonicWhizSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SubsonicWhizSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SubsonicWhizSound = { "SubsonicWhizSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, SubsonicWhizSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SubsonicWhizSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SubsonicWhizSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimInSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimInSound = { "AimInSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, AimInSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimInSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimInSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimOutSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimOutSound = { "AimOutSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, AimOutSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimOutSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimOutSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ThirdPersonAimingOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ThirdPersonAimingOffset = { "ThirdPersonAimingOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ThirdPersonAimingOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ThirdPersonAimingOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ThirdPersonAimingOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FirstPersonAimingOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FirstPersonAimingOffset = { "FirstPersonAimingOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, FirstPersonAimingOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FirstPersonAimingOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FirstPersonAimingOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FirstPersonBracedAimOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FirstPersonBracedAimOffset = { "FirstPersonBracedAimOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, FirstPersonBracedAimOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FirstPersonBracedAimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FirstPersonBracedAimOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ThirdPersonBracedAimOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ThirdPersonBracedAimOffset = { "ThirdPersonBracedAimOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ThirdPersonBracedAimOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ThirdPersonBracedAimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ThirdPersonBracedAimOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_WeaponLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_WeaponLength = { "WeaponLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, WeaponLength), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_WeaponLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_WeaponLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadSpeedMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadSpeedMultiplier = { "ReloadSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ReloadSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BracedAimTilt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BracedAimTilt = { "BracedAimTilt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, BracedAimTilt), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BracedAimTilt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BracedAimTilt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bAlwaysUseAlternateGripPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	void Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bAlwaysUseAlternateGripPose_SetBit(void* Obj)
	{
		((UFPSRangedWeaponData*)Obj)->bAlwaysUseAlternateGripPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bAlwaysUseAlternateGripPose = { "bAlwaysUseAlternateGripPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSRangedWeaponData), &Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bAlwaysUseAlternateGripPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bAlwaysUseAlternateGripPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bAlwaysUseAlternateGripPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AlternateGripPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AlternateGripPose = { "AlternateGripPose", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, AlternateGripPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AlternateGripPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AlternateGripPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FiringMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FiringMontage = { "FiringMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, FiringMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FiringMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FiringMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_StartReloadMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_StartReloadMontage = { "StartReloadMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, StartReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_StartReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_StartReloadMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EmptyStartReloadMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EmptyStartReloadMontage = { "EmptyStartReloadMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, EmptyStartReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EmptyStartReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EmptyStartReloadMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EndReloadMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EndReloadMontage = { "EndReloadMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, EndReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EndReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EndReloadMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadMontage = { "ReloadMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EmptyReloadMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EmptyReloadMontage = { "EmptyReloadMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, EmptyReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EmptyReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EmptyReloadMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SingleMagReloadMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SingleMagReloadMontage = { "SingleMagReloadMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, SingleMagReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SingleMagReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SingleMagReloadMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ActionMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ActionMontage = { "ActionMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ActionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ActionMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ActionMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FiremodeUpMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FiremodeUpMontage = { "FiremodeUpMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, FiremodeUpMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FiremodeUpMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FiremodeUpMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FiremodeDownMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FiremodeDownMontage = { "FiremodeDownMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, FiremodeDownMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FiremodeDownMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FiremodeDownMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_DryFireMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_DryFireMontage = { "DryFireMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, DryFireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_DryFireMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_DryFireMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PreFireMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PreFireMontage = { "PreFireMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, PreFireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PreFireMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PreFireMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BeginADSMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BeginADSMontage = { "BeginADSMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, BeginADSMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BeginADSMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BeginADSMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EndADSMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EndADSMontage = { "EndADSMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, EndADSMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EndADSMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EndADSMontage_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_QuickLoadAnimations_Inner = { "QuickLoadAnimations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuickLoadAnimation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_QuickLoadAnimations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_QuickLoadAnimations = { "QuickLoadAnimations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, QuickLoadAnimations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_QuickLoadAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_QuickLoadAnimations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadAmmoOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadAmmoOffset = { "ReloadAmmoOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ReloadAmmoOffset), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadAmmoOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadAmmoOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BulletBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BulletBoneName = { "BulletBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, BulletBoneName), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BulletBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BulletBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_CasingBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_CasingBoneName = { "CasingBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, CasingBoneName), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_CasingBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_CasingBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SpeedLoaderBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SpeedLoaderBoneName = { "SpeedLoaderBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, SpeedLoaderBoneName), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SpeedLoaderBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SpeedLoaderBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MagazineFollowerBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MagazineFollowerBoneName = { "MagazineFollowerBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, MagazineFollowerBoneName), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MagazineFollowerBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MagazineFollowerBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FireSelectorBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FireSelectorBoneName = { "FireSelectorBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, FireSelectorBoneName), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FireSelectorBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FireSelectorBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MagazineBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MagazineBoneName = { "MagazineBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, MagazineBoneName), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MagazineBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MagazineBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SecondMagazineBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SecondMagazineBoneName = { "SecondMagazineBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, SecondMagazineBoneName), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SecondMagazineBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SecondMagazineBoneName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FireSelectorRotations_Inner = { "FireSelectorRotations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FireSelectorRotations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FireSelectorRotations = { "FireSelectorRotations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, FireSelectorRotations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FireSelectorRotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FireSelectorRotations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bAnimateFireSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	void Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bAnimateFireSelector_SetBit(void* Obj)
	{
		((UFPSRangedWeaponData*)Obj)->bAnimateFireSelector = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bAnimateFireSelector = { "bAnimateFireSelector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSRangedWeaponData), &Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bAnimateFireSelector_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bAnimateFireSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bAnimateFireSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bUseReverseBulletOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	void Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bUseReverseBulletOrder_SetBit(void* Obj)
	{
		((UFPSRangedWeaponData*)Obj)->bUseReverseBulletOrder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bUseReverseBulletOrder = { "bUseReverseBulletOrder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSRangedWeaponData), &Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bUseReverseBulletOrder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bUseReverseBulletOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bUseReverseBulletOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadAnimationSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadAnimationSpeed = { "ReloadAnimationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ReloadAnimationSpeed), METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadAnimationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadAnimationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemEmptyBasePoseAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemEmptyBasePoseAnimation = { "ItemEmptyBasePoseAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ItemEmptyBasePoseAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemEmptyBasePoseAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemEmptyBasePoseAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemSightFoldedPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemSightFoldedPose = { "ItemSightFoldedPose", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ItemSightFoldedPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemSightFoldedPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemSightFoldedPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemFiringMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemFiringMontage = { "ItemFiringMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ItemFiringMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemFiringMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemFiringMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemStartReloadMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemStartReloadMontage = { "ItemStartReloadMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ItemStartReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemStartReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemStartReloadMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemEmptyStartReloadMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemEmptyStartReloadMontage = { "ItemEmptyStartReloadMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ItemEmptyStartReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemEmptyStartReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemEmptyStartReloadMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemEndReloadMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemEndReloadMontage = { "ItemEndReloadMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ItemEndReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemEndReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemEndReloadMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemReloadMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemReloadMontage = { "ItemReloadMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ItemReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemReloadMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemEmptyReloadMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemEmptyReloadMontage = { "ItemEmptyReloadMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ItemEmptyReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemEmptyReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemEmptyReloadMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemSingleReloadMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemSingleReloadMontage = { "ItemSingleReloadMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ItemSingleReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemSingleReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemSingleReloadMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemActionMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemActionMontage = { "ItemActionMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ItemActionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemActionMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemActionMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemPreFireMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeaponData" },
		{ "ModuleRelativePath", "Public/FPSRangedWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemPreFireMontage = { "ItemPreFireMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSRangedWeaponData, ItemPreFireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemPreFireMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemPreFireMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFPSRangedWeaponData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Calibre,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MinRecoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MaxRecoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_KickMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_WeaponControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_RecoilNoiseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_RecoilNoiseAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_RecoilNoiseRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AmmoType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AmmoPerMagazine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Magazines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Projectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ProjectileCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AvailableFireModes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AvailableFireModes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AvailableFireModes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BurstCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_InterruptableBurst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SuppressionAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EmptyReloadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_StartReloadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EmptyStartReloadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bEmptyStartReloadLoadsRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EndReloadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bStartReloadEmptiesMagazine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bStartReloadUnloadsRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bEndReloadLoadsRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanReloadWhileSprinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bUsePreFireForAutomaticFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MaxReloadCancelTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bClosedBolt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bLockOpenOnEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_DoubleActionFireDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ActionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MinimumAmmoToReload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanReloadWhileAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanMagCheckWhileAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bCanNeverReloadWhileAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingSightDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingMovementMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingRecoilAnimationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingRecoilKickMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingRecoilMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingFreeAimMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingSmoothAimMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingSwayMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimingSensitivityMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PostMovementSightAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PostFireSightAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AttachmentSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AttachmentSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MuzzleFlashParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SuppressedMuzzleFlashParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_CasingParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_TracerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BulletCasingDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_GunshotCameraShakeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_LastGunshotCameraShakeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_CompensatedShakeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bUseFullAutoAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PerceptionSoundRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_Loudness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FiringSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PreFireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SuppressedFiringSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_DryFireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SwitchFireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SuperSonicWhizSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SubsonicWhizSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimInSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AimOutSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ThirdPersonAimingOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FirstPersonAimingOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FirstPersonBracedAimOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ThirdPersonBracedAimOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_WeaponLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BracedAimTilt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bAlwaysUseAlternateGripPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_AlternateGripPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FiringMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_StartReloadMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EmptyStartReloadMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EndReloadMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EmptyReloadMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SingleMagReloadMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ActionMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FiremodeUpMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FiremodeDownMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_DryFireMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_PreFireMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BeginADSMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_EndADSMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_QuickLoadAnimations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_QuickLoadAnimations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadAmmoOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_BulletBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_CasingBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SpeedLoaderBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MagazineFollowerBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FireSelectorBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_MagazineBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_SecondMagazineBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FireSelectorRotations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_FireSelectorRotations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bAnimateFireSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_bUseReverseBulletOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ReloadAnimationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemEmptyBasePoseAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemSightFoldedPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemFiringMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemStartReloadMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemEmptyStartReloadMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemEndReloadMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemReloadMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemEmptyReloadMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemSingleReloadMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemActionMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSRangedWeaponData_Statics::NewProp_ItemPreFireMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFPSRangedWeaponData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSRangedWeaponData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFPSRangedWeaponData_Statics::ClassParams = {
		&UFPSRangedWeaponData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFPSRangedWeaponData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFPSRangedWeaponData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSRangedWeaponData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFPSRangedWeaponData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFPSRangedWeaponData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFPSRangedWeaponData, 1609406692);
	template<> FPSCONTROLLER_API UClass* StaticClass<UFPSRangedWeaponData>()
	{
		return UFPSRangedWeaponData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFPSRangedWeaponData(Z_Construct_UClass_UFPSRangedWeaponData, &UFPSRangedWeaponData::StaticClass, TEXT("/Script/FPSController"), TEXT("UFPSRangedWeaponData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSRangedWeaponData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
