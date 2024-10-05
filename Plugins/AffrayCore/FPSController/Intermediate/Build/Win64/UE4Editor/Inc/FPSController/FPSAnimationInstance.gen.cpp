// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSAnimationInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSAnimationInstance() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSAnimationInstance_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSAnimationInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EMeleeAttackDirection();
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EFireMode();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSItemData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSGripData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSRangedWeapon_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IFPSAnimationInstance::execCancelReloadingAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelReloadingAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayActionAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayActionAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayAttackAnimation)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAttackAnimation_Implementation(EMeleeAttackDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayBashAnimation)
	{
		P_GET_UBOOL(Z_Param_bHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayBashAnimation_Implementation(Z_Param_bHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayBeginADSAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayBeginADSAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayBreachAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayBreachAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayCancelAnimation)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayCancelAnimation_Implementation(EMeleeAttackDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayCheckAmmoAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayCheckAmmoAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayCockAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayCockAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayDamageAnimation)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Bone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayDamageAnimation_Implementation(Z_Param_Bone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayDequipAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayDequipAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayDryFireAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayDryFireAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayEndADSAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayEndADSAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayEquipAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayEquipAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayFiremodeAnimation)
	{
		P_GET_UBOOL(Z_Param_bUp);
		P_GET_ENUM(EFireMode,Z_Param_FireMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayFiremodeAnimation_Implementation(Z_Param_bUp,EFireMode(Z_Param_FireMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayFiringAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayFiringAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayGestureAnimation)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayGestureAnimation_Implementation(Z_Param_Montage,Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayHitAnimation)
	{
		P_GET_OBJECT(UClass,Z_Param_DamageType);
		P_GET_STRUCT(FVector,Z_Param_HitVector);
		P_GET_STRUCT(FVector,Z_Param_HitLocation);
		P_GET_PROPERTY(FNameProperty,Z_Param_InBoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayHitAnimation_Implementation(Z_Param_DamageType,Z_Param_HitVector,Z_Param_HitLocation,Z_Param_InBoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayInspectAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayInspectAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayJiggleAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayJiggleAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayPreFireAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayPreFireAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayReloadingAnimation)
	{
		P_GET_UBOOL(Z_Param_bEmpty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayReloadingAnimation_Implementation(Z_Param_bEmpty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayStartReloadingAnimation)
	{
		P_GET_UBOOL(Z_Param_bEmpty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayStartReloadingAnimation_Implementation(Z_Param_bEmpty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayStopReloadingAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayStopReloadingAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayThrowAnimation)
	{
		P_GET_UBOOL(Z_Param_bUnderhand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayThrowAnimation_Implementation(Z_Param_bUnderhand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execPlayVaultAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayVaultAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execSetupData)
	{
		P_GET_OBJECT(UFPSItemData,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupData_Implementation(Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFPSAnimationInstance::execUpdateGrip)
	{
		P_GET_OBJECT(UFPSGripData,Z_Param_Data);
		P_GET_OBJECT(UClass,Z_Param_WeaponClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGrip_Implementation(Z_Param_Data,Z_Param_WeaponClass);
		P_NATIVE_END;
	}
	void IFPSAnimationInstance::CancelReloadingAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CancelReloadingAnimation instead.");
	}
	void IFPSAnimationInstance::PlayActionAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayActionAnimation instead.");
	}
	void IFPSAnimationInstance::PlayAttackAnimation(EMeleeAttackDirection Direction)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayAttackAnimation instead.");
	}
	void IFPSAnimationInstance::PlayBashAnimation(bool bHit)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayBashAnimation instead.");
	}
	void IFPSAnimationInstance::PlayBeginADSAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayBeginADSAnimation instead.");
	}
	void IFPSAnimationInstance::PlayBreachAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayBreachAnimation instead.");
	}
	void IFPSAnimationInstance::PlayCancelAnimation(EMeleeAttackDirection Direction)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayCancelAnimation instead.");
	}
	void IFPSAnimationInstance::PlayCheckAmmoAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayCheckAmmoAnimation instead.");
	}
	void IFPSAnimationInstance::PlayCockAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayCockAnimation instead.");
	}
	void IFPSAnimationInstance::PlayDamageAnimation(FName Bone)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayDamageAnimation instead.");
	}
	void IFPSAnimationInstance::PlayDequipAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayDequipAnimation instead.");
	}
	void IFPSAnimationInstance::PlayDryFireAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayDryFireAnimation instead.");
	}
	void IFPSAnimationInstance::PlayEndADSAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayEndADSAnimation instead.");
	}
	void IFPSAnimationInstance::PlayEquipAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayEquipAnimation instead.");
	}
	void IFPSAnimationInstance::PlayFiremodeAnimation(bool bUp, EFireMode FireMode)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayFiremodeAnimation instead.");
	}
	void IFPSAnimationInstance::PlayFiringAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayFiringAnimation instead.");
	}
	void IFPSAnimationInstance::PlayGestureAnimation(UAnimMontage* Montage, FVector Location)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayGestureAnimation instead.");
	}
	void IFPSAnimationInstance::PlayHitAnimation(TSubclassOf<UDamageType>  DamageType, FVector HitVector, FVector HitLocation, FName InBoneName)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayHitAnimation instead.");
	}
	void IFPSAnimationInstance::PlayInspectAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayInspectAnimation instead.");
	}
	void IFPSAnimationInstance::PlayJiggleAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayJiggleAnimation instead.");
	}
	void IFPSAnimationInstance::PlayPreFireAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayPreFireAnimation instead.");
	}
	void IFPSAnimationInstance::PlayReloadingAnimation(bool bEmpty)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayReloadingAnimation instead.");
	}
	void IFPSAnimationInstance::PlayStartReloadingAnimation(bool bEmpty)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayStartReloadingAnimation instead.");
	}
	void IFPSAnimationInstance::PlayStopReloadingAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayStopReloadingAnimation instead.");
	}
	void IFPSAnimationInstance::PlayThrowAnimation(bool bUnderhand)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayThrowAnimation instead.");
	}
	void IFPSAnimationInstance::PlayVaultAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayVaultAnimation instead.");
	}
	void IFPSAnimationInstance::SetupData(UFPSItemData* Data)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetupData instead.");
	}
	void IFPSAnimationInstance::UpdateGrip(UFPSGripData* Data, TSubclassOf<AFPSRangedWeapon>  WeaponClass)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateGrip instead.");
	}
	void UFPSAnimationInstance::StaticRegisterNativesUFPSAnimationInstance()
	{
		UClass* Class = UFPSAnimationInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelReloadingAnimation", &IFPSAnimationInstance::execCancelReloadingAnimation },
			{ "PlayActionAnimation", &IFPSAnimationInstance::execPlayActionAnimation },
			{ "PlayAttackAnimation", &IFPSAnimationInstance::execPlayAttackAnimation },
			{ "PlayBashAnimation", &IFPSAnimationInstance::execPlayBashAnimation },
			{ "PlayBeginADSAnimation", &IFPSAnimationInstance::execPlayBeginADSAnimation },
			{ "PlayBreachAnimation", &IFPSAnimationInstance::execPlayBreachAnimation },
			{ "PlayCancelAnimation", &IFPSAnimationInstance::execPlayCancelAnimation },
			{ "PlayCheckAmmoAnimation", &IFPSAnimationInstance::execPlayCheckAmmoAnimation },
			{ "PlayCockAnimation", &IFPSAnimationInstance::execPlayCockAnimation },
			{ "PlayDamageAnimation", &IFPSAnimationInstance::execPlayDamageAnimation },
			{ "PlayDequipAnimation", &IFPSAnimationInstance::execPlayDequipAnimation },
			{ "PlayDryFireAnimation", &IFPSAnimationInstance::execPlayDryFireAnimation },
			{ "PlayEndADSAnimation", &IFPSAnimationInstance::execPlayEndADSAnimation },
			{ "PlayEquipAnimation", &IFPSAnimationInstance::execPlayEquipAnimation },
			{ "PlayFiremodeAnimation", &IFPSAnimationInstance::execPlayFiremodeAnimation },
			{ "PlayFiringAnimation", &IFPSAnimationInstance::execPlayFiringAnimation },
			{ "PlayGestureAnimation", &IFPSAnimationInstance::execPlayGestureAnimation },
			{ "PlayHitAnimation", &IFPSAnimationInstance::execPlayHitAnimation },
			{ "PlayInspectAnimation", &IFPSAnimationInstance::execPlayInspectAnimation },
			{ "PlayJiggleAnimation", &IFPSAnimationInstance::execPlayJiggleAnimation },
			{ "PlayPreFireAnimation", &IFPSAnimationInstance::execPlayPreFireAnimation },
			{ "PlayReloadingAnimation", &IFPSAnimationInstance::execPlayReloadingAnimation },
			{ "PlayStartReloadingAnimation", &IFPSAnimationInstance::execPlayStartReloadingAnimation },
			{ "PlayStopReloadingAnimation", &IFPSAnimationInstance::execPlayStopReloadingAnimation },
			{ "PlayThrowAnimation", &IFPSAnimationInstance::execPlayThrowAnimation },
			{ "PlayVaultAnimation", &IFPSAnimationInstance::execPlayVaultAnimation },
			{ "SetupData", &IFPSAnimationInstance::execSetupData },
			{ "UpdateGrip", &IFPSAnimationInstance::execUpdateGrip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_CancelReloadingAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_CancelReloadingAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_CancelReloadingAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "CancelReloadingAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_CancelReloadingAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_CancelReloadingAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_CancelReloadingAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_CancelReloadingAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayActionAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayActionAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayActionAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayActionAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayActionAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayActionAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayActionAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayActionAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayAttackAnimation_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFPSAnimationInstance_PlayAttackAnimation_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAnimationInstance_eventPlayAttackAnimation_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSAnimationInstance_PlayAttackAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSAnimationInstance_PlayAttackAnimation_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayAttackAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayAttackAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayAttackAnimation", nullptr, nullptr, sizeof(FPSAnimationInstance_eventPlayAttackAnimation_Parms), Z_Construct_UFunction_UFPSAnimationInstance_PlayAttackAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayAttackAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayAttackAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayAttackAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayAttackAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayAttackAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayBashAnimation_Statics
	{
		static void NewProp_bHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFPSAnimationInstance_PlayBashAnimation_Statics::NewProp_bHit_SetBit(void* Obj)
	{
		((FPSAnimationInstance_eventPlayBashAnimation_Parms*)Obj)->bHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSAnimationInstance_PlayBashAnimation_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSAnimationInstance_eventPlayBashAnimation_Parms), &Z_Construct_UFunction_UFPSAnimationInstance_PlayBashAnimation_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSAnimationInstance_PlayBashAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSAnimationInstance_PlayBashAnimation_Statics::NewProp_bHit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayBashAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayBashAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayBashAnimation", nullptr, nullptr, sizeof(FPSAnimationInstance_eventPlayBashAnimation_Parms), Z_Construct_UFunction_UFPSAnimationInstance_PlayBashAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayBashAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayBashAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayBashAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayBashAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayBashAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayBeginADSAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayBeginADSAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayBeginADSAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayBeginADSAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayBeginADSAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayBeginADSAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayBeginADSAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayBeginADSAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayBreachAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayBreachAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayBreachAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayBreachAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayBreachAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayBreachAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayBreachAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayBreachAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayCancelAnimation_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFPSAnimationInstance_PlayCancelAnimation_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAnimationInstance_eventPlayCancelAnimation_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSAnimationInstance_PlayCancelAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSAnimationInstance_PlayCancelAnimation_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayCancelAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayCancelAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayCancelAnimation", nullptr, nullptr, sizeof(FPSAnimationInstance_eventPlayCancelAnimation_Parms), Z_Construct_UFunction_UFPSAnimationInstance_PlayCancelAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayCancelAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayCancelAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayCancelAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayCancelAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayCancelAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayCheckAmmoAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayCheckAmmoAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayCheckAmmoAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayCheckAmmoAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayCheckAmmoAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayCheckAmmoAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayCheckAmmoAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayCheckAmmoAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayCockAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayCockAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayCockAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayCockAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayCockAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayCockAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayCockAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayCockAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayDamageAnimation_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFPSAnimationInstance_PlayDamageAnimation_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAnimationInstance_eventPlayDamageAnimation_Parms, Bone), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSAnimationInstance_PlayDamageAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSAnimationInstance_PlayDamageAnimation_Statics::NewProp_Bone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayDamageAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayDamageAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayDamageAnimation", nullptr, nullptr, sizeof(FPSAnimationInstance_eventPlayDamageAnimation_Parms), Z_Construct_UFunction_UFPSAnimationInstance_PlayDamageAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayDamageAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayDamageAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayDamageAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayDamageAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayDamageAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayDequipAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayDequipAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayDequipAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayDequipAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayDequipAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayDequipAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayDequipAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayDequipAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayDryFireAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayDryFireAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayDryFireAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayDryFireAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayDryFireAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayDryFireAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayDryFireAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayDryFireAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayEndADSAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayEndADSAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayEndADSAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayEndADSAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayEndADSAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayEndADSAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayEndADSAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayEndADSAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayEquipAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayEquipAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayEquipAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayEquipAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayEquipAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayEquipAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayEquipAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayEquipAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayFiremodeAnimation_Statics
	{
		static void NewProp_bUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FireMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FireMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFPSAnimationInstance_PlayFiremodeAnimation_Statics::NewProp_bUp_SetBit(void* Obj)
	{
		((FPSAnimationInstance_eventPlayFiremodeAnimation_Parms*)Obj)->bUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSAnimationInstance_PlayFiremodeAnimation_Statics::NewProp_bUp = { "bUp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSAnimationInstance_eventPlayFiremodeAnimation_Parms), &Z_Construct_UFunction_UFPSAnimationInstance_PlayFiremodeAnimation_Statics::NewProp_bUp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFPSAnimationInstance_PlayFiremodeAnimation_Statics::NewProp_FireMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFPSAnimationInstance_PlayFiremodeAnimation_Statics::NewProp_FireMode = { "FireMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAnimationInstance_eventPlayFiremodeAnimation_Parms, FireMode), Z_Construct_UEnum_FPSController_EFireMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSAnimationInstance_PlayFiremodeAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSAnimationInstance_PlayFiremodeAnimation_Statics::NewProp_bUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSAnimationInstance_PlayFiremodeAnimation_Statics::NewProp_FireMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSAnimationInstance_PlayFiremodeAnimation_Statics::NewProp_FireMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayFiremodeAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayFiremodeAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayFiremodeAnimation", nullptr, nullptr, sizeof(FPSAnimationInstance_eventPlayFiremodeAnimation_Parms), Z_Construct_UFunction_UFPSAnimationInstance_PlayFiremodeAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayFiremodeAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayFiremodeAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayFiremodeAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayFiremodeAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayFiremodeAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayFiringAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayFiringAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayFiringAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayFiringAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayFiringAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayFiringAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayFiringAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayFiringAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayGestureAnimation_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSAnimationInstance_PlayGestureAnimation_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAnimationInstance_eventPlayGestureAnimation_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSAnimationInstance_PlayGestureAnimation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAnimationInstance_eventPlayGestureAnimation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSAnimationInstance_PlayGestureAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSAnimationInstance_PlayGestureAnimation_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSAnimationInstance_PlayGestureAnimation_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayGestureAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayGestureAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayGestureAnimation", nullptr, nullptr, sizeof(FPSAnimationInstance_eventPlayGestureAnimation_Parms), Z_Construct_UFunction_UFPSAnimationInstance_PlayGestureAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayGestureAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayGestureAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayGestureAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayGestureAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayGestureAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayHitAnimation_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitVector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InBoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFPSAnimationInstance_PlayHitAnimation_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAnimationInstance_eventPlayHitAnimation_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSAnimationInstance_PlayHitAnimation_Statics::NewProp_HitVector = { "HitVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAnimationInstance_eventPlayHitAnimation_Parms, HitVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSAnimationInstance_PlayHitAnimation_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAnimationInstance_eventPlayHitAnimation_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFPSAnimationInstance_PlayHitAnimation_Statics::NewProp_InBoneName = { "InBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAnimationInstance_eventPlayHitAnimation_Parms, InBoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSAnimationInstance_PlayHitAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSAnimationInstance_PlayHitAnimation_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSAnimationInstance_PlayHitAnimation_Statics::NewProp_HitVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSAnimationInstance_PlayHitAnimation_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSAnimationInstance_PlayHitAnimation_Statics::NewProp_InBoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayHitAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayHitAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayHitAnimation", nullptr, nullptr, sizeof(FPSAnimationInstance_eventPlayHitAnimation_Parms), Z_Construct_UFunction_UFPSAnimationInstance_PlayHitAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayHitAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayHitAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayHitAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayHitAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayHitAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayInspectAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayInspectAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayInspectAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayInspectAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayInspectAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayInspectAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayInspectAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayInspectAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayJiggleAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayJiggleAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayJiggleAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayJiggleAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayJiggleAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayJiggleAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayJiggleAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayJiggleAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayPreFireAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayPreFireAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayPreFireAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayPreFireAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayPreFireAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayPreFireAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayPreFireAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayPreFireAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayReloadingAnimation_Statics
	{
		static void NewProp_bEmpty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEmpty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFPSAnimationInstance_PlayReloadingAnimation_Statics::NewProp_bEmpty_SetBit(void* Obj)
	{
		((FPSAnimationInstance_eventPlayReloadingAnimation_Parms*)Obj)->bEmpty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSAnimationInstance_PlayReloadingAnimation_Statics::NewProp_bEmpty = { "bEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSAnimationInstance_eventPlayReloadingAnimation_Parms), &Z_Construct_UFunction_UFPSAnimationInstance_PlayReloadingAnimation_Statics::NewProp_bEmpty_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSAnimationInstance_PlayReloadingAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSAnimationInstance_PlayReloadingAnimation_Statics::NewProp_bEmpty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayReloadingAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayReloadingAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayReloadingAnimation", nullptr, nullptr, sizeof(FPSAnimationInstance_eventPlayReloadingAnimation_Parms), Z_Construct_UFunction_UFPSAnimationInstance_PlayReloadingAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayReloadingAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayReloadingAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayReloadingAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayReloadingAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayReloadingAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayStartReloadingAnimation_Statics
	{
		static void NewProp_bEmpty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEmpty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFPSAnimationInstance_PlayStartReloadingAnimation_Statics::NewProp_bEmpty_SetBit(void* Obj)
	{
		((FPSAnimationInstance_eventPlayStartReloadingAnimation_Parms*)Obj)->bEmpty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSAnimationInstance_PlayStartReloadingAnimation_Statics::NewProp_bEmpty = { "bEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSAnimationInstance_eventPlayStartReloadingAnimation_Parms), &Z_Construct_UFunction_UFPSAnimationInstance_PlayStartReloadingAnimation_Statics::NewProp_bEmpty_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSAnimationInstance_PlayStartReloadingAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSAnimationInstance_PlayStartReloadingAnimation_Statics::NewProp_bEmpty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayStartReloadingAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayStartReloadingAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayStartReloadingAnimation", nullptr, nullptr, sizeof(FPSAnimationInstance_eventPlayStartReloadingAnimation_Parms), Z_Construct_UFunction_UFPSAnimationInstance_PlayStartReloadingAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayStartReloadingAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayStartReloadingAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayStartReloadingAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayStartReloadingAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayStartReloadingAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayStopReloadingAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayStopReloadingAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayStopReloadingAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayStopReloadingAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayStopReloadingAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayStopReloadingAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayStopReloadingAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayStopReloadingAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayThrowAnimation_Statics
	{
		static void NewProp_bUnderhand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUnderhand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFPSAnimationInstance_PlayThrowAnimation_Statics::NewProp_bUnderhand_SetBit(void* Obj)
	{
		((FPSAnimationInstance_eventPlayThrowAnimation_Parms*)Obj)->bUnderhand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSAnimationInstance_PlayThrowAnimation_Statics::NewProp_bUnderhand = { "bUnderhand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSAnimationInstance_eventPlayThrowAnimation_Parms), &Z_Construct_UFunction_UFPSAnimationInstance_PlayThrowAnimation_Statics::NewProp_bUnderhand_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSAnimationInstance_PlayThrowAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSAnimationInstance_PlayThrowAnimation_Statics::NewProp_bUnderhand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayThrowAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayThrowAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayThrowAnimation", nullptr, nullptr, sizeof(FPSAnimationInstance_eventPlayThrowAnimation_Parms), Z_Construct_UFunction_UFPSAnimationInstance_PlayThrowAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayThrowAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayThrowAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayThrowAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayThrowAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayThrowAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_PlayVaultAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_PlayVaultAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_PlayVaultAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "PlayVaultAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_PlayVaultAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_PlayVaultAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_PlayVaultAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_PlayVaultAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_SetupData_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSAnimationInstance_SetupData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAnimationInstance_eventSetupData_Parms, Data), Z_Construct_UClass_UFPSItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSAnimationInstance_SetupData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSAnimationInstance_SetupData_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_SetupData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_SetupData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "SetupData", nullptr, nullptr, sizeof(FPSAnimationInstance_eventSetupData_Parms), Z_Construct_UFunction_UFPSAnimationInstance_SetupData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_SetupData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_SetupData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_SetupData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_SetupData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_SetupData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSAnimationInstance_UpdateGrip_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSAnimationInstance_UpdateGrip_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAnimationInstance_eventUpdateGrip_Parms, Data), Z_Construct_UClass_UFPSGripData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFPSAnimationInstance_UpdateGrip_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAnimationInstance_eventUpdateGrip_Parms, WeaponClass), Z_Construct_UClass_AFPSRangedWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSAnimationInstance_UpdateGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSAnimationInstance_UpdateGrip_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSAnimationInstance_UpdateGrip_Statics::NewProp_WeaponClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimationInstance_UpdateGrip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimationInstance_UpdateGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimationInstance, nullptr, "UpdateGrip", nullptr, nullptr, sizeof(FPSAnimationInstance_eventUpdateGrip_Parms), Z_Construct_UFunction_UFPSAnimationInstance_UpdateGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_UpdateGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimationInstance_UpdateGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimationInstance_UpdateGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimationInstance_UpdateGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSAnimationInstance_UpdateGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFPSAnimationInstance_NoRegister()
	{
		return UFPSAnimationInstance::StaticClass();
	}
	struct Z_Construct_UClass_UFPSAnimationInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFPSAnimationInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFPSAnimationInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFPSAnimationInstance_CancelReloadingAnimation, "CancelReloadingAnimation" }, // 450273678
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayActionAnimation, "PlayActionAnimation" }, // 300152645
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayAttackAnimation, "PlayAttackAnimation" }, // 3508308714
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayBashAnimation, "PlayBashAnimation" }, // 2851097518
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayBeginADSAnimation, "PlayBeginADSAnimation" }, // 2257389927
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayBreachAnimation, "PlayBreachAnimation" }, // 2068243255
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayCancelAnimation, "PlayCancelAnimation" }, // 1286944509
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayCheckAmmoAnimation, "PlayCheckAmmoAnimation" }, // 3446901103
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayCockAnimation, "PlayCockAnimation" }, // 2871538219
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayDamageAnimation, "PlayDamageAnimation" }, // 1994468018
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayDequipAnimation, "PlayDequipAnimation" }, // 814994973
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayDryFireAnimation, "PlayDryFireAnimation" }, // 1848936311
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayEndADSAnimation, "PlayEndADSAnimation" }, // 37974211
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayEquipAnimation, "PlayEquipAnimation" }, // 1055454575
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayFiremodeAnimation, "PlayFiremodeAnimation" }, // 159505786
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayFiringAnimation, "PlayFiringAnimation" }, // 684904874
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayGestureAnimation, "PlayGestureAnimation" }, // 1780532202
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayHitAnimation, "PlayHitAnimation" }, // 2226889710
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayInspectAnimation, "PlayInspectAnimation" }, // 1690015599
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayJiggleAnimation, "PlayJiggleAnimation" }, // 1975875674
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayPreFireAnimation, "PlayPreFireAnimation" }, // 1722879599
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayReloadingAnimation, "PlayReloadingAnimation" }, // 1658797629
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayStartReloadingAnimation, "PlayStartReloadingAnimation" }, // 3707741036
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayStopReloadingAnimation, "PlayStopReloadingAnimation" }, // 2506989972
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayThrowAnimation, "PlayThrowAnimation" }, // 1571492992
		{ &Z_Construct_UFunction_UFPSAnimationInstance_PlayVaultAnimation, "PlayVaultAnimation" }, // 1533264969
		{ &Z_Construct_UFunction_UFPSAnimationInstance_SetupData, "SetupData" }, // 61435912
		{ &Z_Construct_UFunction_UFPSAnimationInstance_UpdateGrip, "UpdateGrip" }, // 1104704527
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAnimationInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSAnimationInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFPSAnimationInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFPSAnimationInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFPSAnimationInstance_Statics::ClassParams = {
		&UFPSAnimationInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFPSAnimationInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAnimationInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFPSAnimationInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFPSAnimationInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFPSAnimationInstance, 1001252007);
	template<> FPSCONTROLLER_API UClass* StaticClass<UFPSAnimationInstance>()
	{
		return UFPSAnimationInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFPSAnimationInstance(Z_Construct_UClass_UFPSAnimationInstance, &UFPSAnimationInstance::StaticClass, TEXT("/Script/FPSController"), TEXT("UFPSAnimationInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSAnimationInstance);
	static FName NAME_UFPSAnimationInstance_CancelReloadingAnimation = FName(TEXT("CancelReloadingAnimation"));
	void IFPSAnimationInstance::Execute_CancelReloadingAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_CancelReloadingAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->CancelReloadingAnimation_Implementation();
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayActionAnimation = FName(TEXT("PlayActionAnimation"));
	void IFPSAnimationInstance::Execute_PlayActionAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayActionAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayActionAnimation_Implementation();
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayAttackAnimation = FName(TEXT("PlayAttackAnimation"));
	void IFPSAnimationInstance::Execute_PlayAttackAnimation(UObject* O, EMeleeAttackDirection Direction)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		FPSAnimationInstance_eventPlayAttackAnimation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayAttackAnimation);
		if (Func)
		{
			Parms.Direction=Direction;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayAttackAnimation_Implementation(Direction);
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayBashAnimation = FName(TEXT("PlayBashAnimation"));
	void IFPSAnimationInstance::Execute_PlayBashAnimation(UObject* O, bool bHit)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		FPSAnimationInstance_eventPlayBashAnimation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayBashAnimation);
		if (Func)
		{
			Parms.bHit=bHit;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayBashAnimation_Implementation(bHit);
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayBeginADSAnimation = FName(TEXT("PlayBeginADSAnimation"));
	void IFPSAnimationInstance::Execute_PlayBeginADSAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayBeginADSAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayBeginADSAnimation_Implementation();
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayBreachAnimation = FName(TEXT("PlayBreachAnimation"));
	void IFPSAnimationInstance::Execute_PlayBreachAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayBreachAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayBreachAnimation_Implementation();
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayCancelAnimation = FName(TEXT("PlayCancelAnimation"));
	void IFPSAnimationInstance::Execute_PlayCancelAnimation(UObject* O, EMeleeAttackDirection Direction)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		FPSAnimationInstance_eventPlayCancelAnimation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayCancelAnimation);
		if (Func)
		{
			Parms.Direction=Direction;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayCancelAnimation_Implementation(Direction);
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayCheckAmmoAnimation = FName(TEXT("PlayCheckAmmoAnimation"));
	void IFPSAnimationInstance::Execute_PlayCheckAmmoAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayCheckAmmoAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayCheckAmmoAnimation_Implementation();
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayCockAnimation = FName(TEXT("PlayCockAnimation"));
	void IFPSAnimationInstance::Execute_PlayCockAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayCockAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayCockAnimation_Implementation();
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayDamageAnimation = FName(TEXT("PlayDamageAnimation"));
	void IFPSAnimationInstance::Execute_PlayDamageAnimation(UObject* O, FName Bone)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		FPSAnimationInstance_eventPlayDamageAnimation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayDamageAnimation);
		if (Func)
		{
			Parms.Bone=Bone;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayDamageAnimation_Implementation(Bone);
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayDequipAnimation = FName(TEXT("PlayDequipAnimation"));
	void IFPSAnimationInstance::Execute_PlayDequipAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayDequipAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayDequipAnimation_Implementation();
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayDryFireAnimation = FName(TEXT("PlayDryFireAnimation"));
	void IFPSAnimationInstance::Execute_PlayDryFireAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayDryFireAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayDryFireAnimation_Implementation();
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayEndADSAnimation = FName(TEXT("PlayEndADSAnimation"));
	void IFPSAnimationInstance::Execute_PlayEndADSAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayEndADSAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayEndADSAnimation_Implementation();
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayEquipAnimation = FName(TEXT("PlayEquipAnimation"));
	void IFPSAnimationInstance::Execute_PlayEquipAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayEquipAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayEquipAnimation_Implementation();
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayFiremodeAnimation = FName(TEXT("PlayFiremodeAnimation"));
	void IFPSAnimationInstance::Execute_PlayFiremodeAnimation(UObject* O, bool bUp, EFireMode FireMode)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		FPSAnimationInstance_eventPlayFiremodeAnimation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayFiremodeAnimation);
		if (Func)
		{
			Parms.bUp=bUp;
			Parms.FireMode=FireMode;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayFiremodeAnimation_Implementation(bUp,FireMode);
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayFiringAnimation = FName(TEXT("PlayFiringAnimation"));
	void IFPSAnimationInstance::Execute_PlayFiringAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayFiringAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayFiringAnimation_Implementation();
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayGestureAnimation = FName(TEXT("PlayGestureAnimation"));
	void IFPSAnimationInstance::Execute_PlayGestureAnimation(UObject* O, UAnimMontage* Montage, FVector Location)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		FPSAnimationInstance_eventPlayGestureAnimation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayGestureAnimation);
		if (Func)
		{
			Parms.Montage=Montage;
			Parms.Location=Location;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayGestureAnimation_Implementation(Montage,Location);
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayHitAnimation = FName(TEXT("PlayHitAnimation"));
	void IFPSAnimationInstance::Execute_PlayHitAnimation(UObject* O, TSubclassOf<UDamageType>  DamageType, FVector HitVector, FVector HitLocation, FName InBoneName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		FPSAnimationInstance_eventPlayHitAnimation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayHitAnimation);
		if (Func)
		{
			Parms.DamageType=DamageType;
			Parms.HitVector=HitVector;
			Parms.HitLocation=HitLocation;
			Parms.InBoneName=InBoneName;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayHitAnimation_Implementation(DamageType,HitVector,HitLocation,InBoneName);
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayInspectAnimation = FName(TEXT("PlayInspectAnimation"));
	void IFPSAnimationInstance::Execute_PlayInspectAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayInspectAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayInspectAnimation_Implementation();
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayJiggleAnimation = FName(TEXT("PlayJiggleAnimation"));
	void IFPSAnimationInstance::Execute_PlayJiggleAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayJiggleAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayJiggleAnimation_Implementation();
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayPreFireAnimation = FName(TEXT("PlayPreFireAnimation"));
	void IFPSAnimationInstance::Execute_PlayPreFireAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayPreFireAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayPreFireAnimation_Implementation();
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayReloadingAnimation = FName(TEXT("PlayReloadingAnimation"));
	void IFPSAnimationInstance::Execute_PlayReloadingAnimation(UObject* O, bool bEmpty)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		FPSAnimationInstance_eventPlayReloadingAnimation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayReloadingAnimation);
		if (Func)
		{
			Parms.bEmpty=bEmpty;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayReloadingAnimation_Implementation(bEmpty);
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayStartReloadingAnimation = FName(TEXT("PlayStartReloadingAnimation"));
	void IFPSAnimationInstance::Execute_PlayStartReloadingAnimation(UObject* O, bool bEmpty)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		FPSAnimationInstance_eventPlayStartReloadingAnimation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayStartReloadingAnimation);
		if (Func)
		{
			Parms.bEmpty=bEmpty;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayStartReloadingAnimation_Implementation(bEmpty);
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayStopReloadingAnimation = FName(TEXT("PlayStopReloadingAnimation"));
	void IFPSAnimationInstance::Execute_PlayStopReloadingAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayStopReloadingAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayStopReloadingAnimation_Implementation();
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayThrowAnimation = FName(TEXT("PlayThrowAnimation"));
	void IFPSAnimationInstance::Execute_PlayThrowAnimation(UObject* O, bool bUnderhand)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		FPSAnimationInstance_eventPlayThrowAnimation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayThrowAnimation);
		if (Func)
		{
			Parms.bUnderhand=bUnderhand;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayThrowAnimation_Implementation(bUnderhand);
		}
	}
	static FName NAME_UFPSAnimationInstance_PlayVaultAnimation = FName(TEXT("PlayVaultAnimation"));
	void IFPSAnimationInstance::Execute_PlayVaultAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_PlayVaultAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->PlayVaultAnimation_Implementation();
		}
	}
	static FName NAME_UFPSAnimationInstance_SetupData = FName(TEXT("SetupData"));
	void IFPSAnimationInstance::Execute_SetupData(UObject* O, UFPSItemData* Data)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		FPSAnimationInstance_eventSetupData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_SetupData);
		if (Func)
		{
			Parms.Data=Data;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->SetupData_Implementation(Data);
		}
	}
	static FName NAME_UFPSAnimationInstance_UpdateGrip = FName(TEXT("UpdateGrip"));
	void IFPSAnimationInstance::Execute_UpdateGrip(UObject* O, UFPSGripData* Data, TSubclassOf<AFPSRangedWeapon>  WeaponClass)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFPSAnimationInstance::StaticClass()));
		FPSAnimationInstance_eventUpdateGrip_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFPSAnimationInstance_UpdateGrip);
		if (Func)
		{
			Parms.Data=Data;
			Parms.WeaponClass=WeaponClass;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFPSAnimationInstance*)(O->GetNativeInterfaceAddress(UFPSAnimationInstance::StaticClass())))
		{
			I->UpdateGrip_Implementation(Data,WeaponClass);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
