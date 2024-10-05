// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSGameplayConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSGameplayConfig() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FFPSGameplayConfig();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
class UScriptStruct* FFPSGameplayConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FFPSGameplayConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFPSGameplayConfig, Z_Construct_UPackage__Script_FPSController(), TEXT("FPSGameplayConfig"), sizeof(FFPSGameplayConfig), Get_Z_Construct_UScriptStruct_FFPSGameplayConfig_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FFPSGameplayConfig>()
{
	return FFPSGameplayConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFPSGameplayConfig(FFPSGameplayConfig::StaticStruct, TEXT("/Script/FPSController"), TEXT("FPSGameplayConfig"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFFPSGameplayConfig
{
	FScriptStruct_FPSController_StaticRegisterNativesFFPSGameplayConfig()
	{
		UScriptStruct::DeferCppStructOps<FFPSGameplayConfig>(FName(TEXT("FPSGameplayConfig")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFFPSGameplayConfig;
	struct Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaults_MetaData[];
#endif
		static void NewProp_bOverrideDefaults_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoilMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpreadMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanSprint_MetaData[];
#endif
		static void NewProp_bCanSprint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanSprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterDamageMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CharacterDamageMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterHealthMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CharacterHealthMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandingSprintDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LandingSprintDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandingJumpDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LandingJumpDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceFreeAimMultiplier_MetaData[];
#endif
		static void NewProp_bForceFreeAimMultiplier_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceFreeAimMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeAimMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FreeAimMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ADSFreeAimMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ADSFreeAimMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceCanReloadWhileAiming_MetaData[];
#endif
		static void NewProp_bForceCanReloadWhileAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceCanReloadWhileAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceNoReloadWhileSprinting_MetaData[];
#endif
		static void NewProp_bForceNoReloadWhileSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceNoReloadWhileSprinting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ADSSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ADSSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothAimMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothAimMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanADSInNightVision_MetaData[];
#endif
		static void NewProp_bCanADSInNightVision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanADSInNightVision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBracedAim_MetaData[];
#endif
		static void NewProp_bCanBracedAim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBracedAim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHeightOverBore_MetaData[];
#endif
		static void NewProp_bUseHeightOverBore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHeightOverBore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FPSGameplayConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFPSGameplayConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bOverrideDefaults_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGameplayConfig" },
		{ "ModuleRelativePath", "Public/FPSGameplayConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bOverrideDefaults_SetBit(void* Obj)
	{
		((FFPSGameplayConfig*)Obj)->bOverrideDefaults = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bOverrideDefaults = { "bOverrideDefaults", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFPSGameplayConfig), &Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bOverrideDefaults_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bOverrideDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bOverrideDefaults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_RecoilMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGameplayConfig" },
		{ "ModuleRelativePath", "Public/FPSGameplayConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_RecoilMultiplier = { "RecoilMultiplier", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSGameplayConfig, RecoilMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_RecoilMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_RecoilMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_SpreadMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGameplayConfig" },
		{ "ModuleRelativePath", "Public/FPSGameplayConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_SpreadMultiplier = { "SpreadMultiplier", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSGameplayConfig, SpreadMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_SpreadMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_SpreadMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bCanSprint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGameplayConfig" },
		{ "ModuleRelativePath", "Public/FPSGameplayConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bCanSprint_SetBit(void* Obj)
	{
		((FFPSGameplayConfig*)Obj)->bCanSprint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bCanSprint = { "bCanSprint", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFPSGameplayConfig), &Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bCanSprint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bCanSprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bCanSprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_MovementSpeedMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGameplayConfig" },
		{ "ModuleRelativePath", "Public/FPSGameplayConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_MovementSpeedMultiplier = { "MovementSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSGameplayConfig, MovementSpeedMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_MovementSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_MovementSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_CharacterDamageMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGameplayConfig" },
		{ "ModuleRelativePath", "Public/FPSGameplayConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_CharacterDamageMultiplier = { "CharacterDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSGameplayConfig, CharacterDamageMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_CharacterDamageMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_CharacterDamageMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_CharacterHealthMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGameplayConfig" },
		{ "ModuleRelativePath", "Public/FPSGameplayConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_CharacterHealthMultiplier = { "CharacterHealthMultiplier", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSGameplayConfig, CharacterHealthMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_CharacterHealthMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_CharacterHealthMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_LandingSprintDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGameplayConfig" },
		{ "ModuleRelativePath", "Public/FPSGameplayConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_LandingSprintDelay = { "LandingSprintDelay", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSGameplayConfig, LandingSprintDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_LandingSprintDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_LandingSprintDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_LandingJumpDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGameplayConfig" },
		{ "ModuleRelativePath", "Public/FPSGameplayConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_LandingJumpDelay = { "LandingJumpDelay", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSGameplayConfig, LandingJumpDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_LandingJumpDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_LandingJumpDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bForceFreeAimMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGameplayConfig" },
		{ "ModuleRelativePath", "Public/FPSGameplayConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bForceFreeAimMultiplier_SetBit(void* Obj)
	{
		((FFPSGameplayConfig*)Obj)->bForceFreeAimMultiplier = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bForceFreeAimMultiplier = { "bForceFreeAimMultiplier", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFPSGameplayConfig), &Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bForceFreeAimMultiplier_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bForceFreeAimMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bForceFreeAimMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_FreeAimMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGameplayConfig" },
		{ "ModuleRelativePath", "Public/FPSGameplayConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_FreeAimMultiplier = { "FreeAimMultiplier", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSGameplayConfig, FreeAimMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_FreeAimMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_FreeAimMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_ADSFreeAimMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGameplayConfig" },
		{ "ModuleRelativePath", "Public/FPSGameplayConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_ADSFreeAimMultiplier = { "ADSFreeAimMultiplier", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSGameplayConfig, ADSFreeAimMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_ADSFreeAimMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_ADSFreeAimMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bForceCanReloadWhileAiming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGameplayConfig" },
		{ "ModuleRelativePath", "Public/FPSGameplayConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bForceCanReloadWhileAiming_SetBit(void* Obj)
	{
		((FFPSGameplayConfig*)Obj)->bForceCanReloadWhileAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bForceCanReloadWhileAiming = { "bForceCanReloadWhileAiming", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFPSGameplayConfig), &Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bForceCanReloadWhileAiming_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bForceCanReloadWhileAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bForceCanReloadWhileAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bForceNoReloadWhileSprinting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGameplayConfig" },
		{ "ModuleRelativePath", "Public/FPSGameplayConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bForceNoReloadWhileSprinting_SetBit(void* Obj)
	{
		((FFPSGameplayConfig*)Obj)->bForceNoReloadWhileSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bForceNoReloadWhileSprinting = { "bForceNoReloadWhileSprinting", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFPSGameplayConfig), &Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bForceNoReloadWhileSprinting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bForceNoReloadWhileSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bForceNoReloadWhileSprinting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_ReloadSpeedMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGameplayConfig" },
		{ "ModuleRelativePath", "Public/FPSGameplayConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_ReloadSpeedMultiplier = { "ReloadSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSGameplayConfig, ReloadSpeedMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_ReloadSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_ReloadSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_ADSSpeedMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGameplayConfig" },
		{ "ModuleRelativePath", "Public/FPSGameplayConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_ADSSpeedMultiplier = { "ADSSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSGameplayConfig, ADSSpeedMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_ADSSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_ADSSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_SmoothAimMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGameplayConfig" },
		{ "ModuleRelativePath", "Public/FPSGameplayConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_SmoothAimMultiplier = { "SmoothAimMultiplier", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSGameplayConfig, SmoothAimMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_SmoothAimMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_SmoothAimMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bCanADSInNightVision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGameplayConfig" },
		{ "ModuleRelativePath", "Public/FPSGameplayConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bCanADSInNightVision_SetBit(void* Obj)
	{
		((FFPSGameplayConfig*)Obj)->bCanADSInNightVision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bCanADSInNightVision = { "bCanADSInNightVision", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFPSGameplayConfig), &Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bCanADSInNightVision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bCanADSInNightVision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bCanADSInNightVision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bCanBracedAim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGameplayConfig" },
		{ "ModuleRelativePath", "Public/FPSGameplayConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bCanBracedAim_SetBit(void* Obj)
	{
		((FFPSGameplayConfig*)Obj)->bCanBracedAim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bCanBracedAim = { "bCanBracedAim", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFPSGameplayConfig), &Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bCanBracedAim_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bCanBracedAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bCanBracedAim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bUseHeightOverBore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGameplayConfig" },
		{ "ModuleRelativePath", "Public/FPSGameplayConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bUseHeightOverBore_SetBit(void* Obj)
	{
		((FFPSGameplayConfig*)Obj)->bUseHeightOverBore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bUseHeightOverBore = { "bUseHeightOverBore", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFPSGameplayConfig), &Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bUseHeightOverBore_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bUseHeightOverBore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bUseHeightOverBore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bOverrideDefaults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_RecoilMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_SpreadMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bCanSprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_MovementSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_CharacterDamageMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_CharacterHealthMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_LandingSprintDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_LandingJumpDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bForceFreeAimMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_FreeAimMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_ADSFreeAimMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bForceCanReloadWhileAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bForceNoReloadWhileSprinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_ReloadSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_ADSSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_SmoothAimMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bCanADSInNightVision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bCanBracedAim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::NewProp_bUseHeightOverBore,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"FPSGameplayConfig",
		sizeof(FFPSGameplayConfig),
		alignof(FFPSGameplayConfig),
		Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFPSGameplayConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFPSGameplayConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FPSGameplayConfig"), sizeof(FFPSGameplayConfig), Get_Z_Construct_UScriptStruct_FFPSGameplayConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFPSGameplayConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFPSGameplayConfig_Hash() { return 2052439366U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
