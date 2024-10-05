// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/ThirdPersonAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonAnimInstance() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UThirdPersonAnimInstance_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UThirdPersonAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSCharacterBase_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSItemData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSWeaponData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSThrowableData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSMeleeWeaponData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSRangedWeaponData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSAnimationInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UThirdPersonAnimInstance::execStartTurning)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTurning(Z_Param_Montage,Z_Param_PlayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThirdPersonAnimInstance::execStopTurning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopTurning();
		P_NATIVE_END;
	}
	void UThirdPersonAnimInstance::StaticRegisterNativesUThirdPersonAnimInstance()
	{
		UClass* Class = UThirdPersonAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartTurning", &UThirdPersonAnimInstance::execStartTurning },
			{ "StopTurning", &UThirdPersonAnimInstance::execStopTurning },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UThirdPersonAnimInstance_StartTurning_Statics
	{
		struct ThirdPersonAnimInstance_eventStartTurning_Parms
		{
			UAnimMontage* Montage;
			float PlayRate;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UThirdPersonAnimInstance_StartTurning_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThirdPersonAnimInstance_eventStartTurning_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UThirdPersonAnimInstance_StartTurning_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThirdPersonAnimInstance_eventStartTurning_Parms, PlayRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThirdPersonAnimInstance_StartTurning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThirdPersonAnimInstance_StartTurning_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThirdPersonAnimInstance_StartTurning_Statics::NewProp_PlayRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThirdPersonAnimInstance_StartTurning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UThirdPersonAnimInstance_StartTurning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThirdPersonAnimInstance, nullptr, "StartTurning", nullptr, nullptr, sizeof(ThirdPersonAnimInstance_eventStartTurning_Parms), Z_Construct_UFunction_UThirdPersonAnimInstance_StartTurning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThirdPersonAnimInstance_StartTurning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThirdPersonAnimInstance_StartTurning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UThirdPersonAnimInstance_StartTurning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThirdPersonAnimInstance_StartTurning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UThirdPersonAnimInstance_StartTurning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThirdPersonAnimInstance_StopTurning_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThirdPersonAnimInstance_StopTurning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UThirdPersonAnimInstance_StopTurning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThirdPersonAnimInstance, nullptr, "StopTurning", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThirdPersonAnimInstance_StopTurning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UThirdPersonAnimInstance_StopTurning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThirdPersonAnimInstance_StopTurning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UThirdPersonAnimInstance_StopTurning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UThirdPersonAnimInstance_NoRegister()
	{
		return UThirdPersonAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UThirdPersonAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThrowableData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeleeData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangedWeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RangedWeaponData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePoseAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BasePoseAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintingAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SprintingAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadyBasePoseAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReadyBasePoseAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GripPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadyRightPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReadyRightPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadyLeftPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReadyLeftPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandIK_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftHandIK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandIK_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightHandIK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateDistanceToGround_MetaData[];
#endif
		static void NewProp_bUpdateDistanceToGround_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateDistanceToGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToGround_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReadyRight_MetaData[];
#endif
		static void NewProp_bIsReadyRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReadyRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReadyLeft_MetaData[];
#endif
		static void NewProp_bIsReadyLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReadyLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBallisticHit_MetaData[];
#endif
		static void NewProp_bIsBallisticHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBallisticHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFrontHit_MetaData[];
#endif
		static void NewProp_bIsFrontHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFrontHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Recoil_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Recoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothRotationDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothRotationDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothRotationAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothRotationAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmoothMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMounted_MetaData[];
#endif
		static void NewProp_bIsMounted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMounted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MountAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MountAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MountLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MountLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothLean_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothLean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeanAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeanAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmoothRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemForward_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AimingPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTimeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTimeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintingPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SprintingPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoilMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BracedAimPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BracedAimPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeanElbowInfluence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeanElbowInfluence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowReadyPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LowReadyPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneHandedAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OneHandedAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewDataClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PreviewDataClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[];
#endif
		static void NewProp_bIsDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReady_MetaData[];
#endif
		static void NewProp_bIsReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[];
#endif
		static void NewProp_bIsFalling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCrouching_MetaData[];
#endif
		static void NewProp_bIsCrouching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCrouching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchingAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchingAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[];
#endif
		static void NewProp_bIsAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[];
#endif
		static void NewProp_bIsSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintingAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintingAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLowReady_MetaData[];
#endif
		static void NewProp_bIsLowReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLowReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowReadyAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowReadyAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[];
#endif
		static void NewProp_bIsMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReadyToThrow_MetaData[];
#endif
		static void NewProp_bIsReadyToThrow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReadyToThrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBracedAiming_MetaData[];
#endif
		static void NewProp_bIsBracedAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBracedAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BracedAimAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BracedAimAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTurning_MetaData[];
#endif
		static void NewProp_bIsTurning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTurning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnRight90Anim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurnRight90Anim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnRight180Anim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurnRight180Anim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnLeft90Anim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurnLeft90Anim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnLeft180Anim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurnLeft180Anim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThirdPersonAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UThirdPersonAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UThirdPersonAnimInstance_StartTurning, "StartTurning" }, // 2033070902
		{ &Z_Construct_UFunction_UThirdPersonAnimInstance_StopTurning, "StopTurning" }, // 1860363109
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ThirdPersonAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_FPSCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_FPSCharacter = { "FPSCharacter", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, FPSCharacter), Z_Construct_UClass_AFPSCharacterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_FPSCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_FPSCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ItemData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, ItemData), Z_Construct_UClass_UFPSItemData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ItemData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_WeaponData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, WeaponData), Z_Construct_UClass_UFPSWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_WeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_WeaponData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ThrowableData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ThrowableData = { "ThrowableData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, ThrowableData), Z_Construct_UClass_UFPSThrowableData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ThrowableData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ThrowableData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MeleeData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MeleeData = { "MeleeData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, MeleeData), Z_Construct_UClass_UFPSMeleeWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MeleeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MeleeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RangedWeaponData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RangedWeaponData = { "RangedWeaponData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, RangedWeaponData), Z_Construct_UClass_UFPSRangedWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RangedWeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RangedWeaponData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_BasePoseAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_BasePoseAnimation = { "BasePoseAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, BasePoseAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_BasePoseAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_BasePoseAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SprintingAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SprintingAnimation = { "SprintingAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, SprintingAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SprintingAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SprintingAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_IdleAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_IdleAnimation = { "IdleAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, IdleAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_IdleAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_IdleAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MovementAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MovementAnimation = { "MovementAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, MovementAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MovementAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MovementAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ReadyBasePoseAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ReadyBasePoseAnimation = { "ReadyBasePoseAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, ReadyBasePoseAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ReadyBasePoseAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ReadyBasePoseAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_GripPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_GripPose = { "GripPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, GripPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_GripPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_GripPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ReadyRightPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ReadyRightPose = { "ReadyRightPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, ReadyRightPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ReadyRightPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ReadyRightPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ReadyLeftPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ReadyLeftPose = { "ReadyLeftPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, ReadyLeftPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ReadyLeftPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ReadyLeftPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LeftHandIK_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LeftHandIK = { "LeftHandIK", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, LeftHandIK), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LeftHandIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LeftHandIK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RightHandIK_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RightHandIK = { "RightHandIK", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, RightHandIK), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RightHandIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RightHandIK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bUpdateDistanceToGround_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bUpdateDistanceToGround_SetBit(void* Obj)
	{
		((UThirdPersonAnimInstance*)Obj)->bUpdateDistanceToGround = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bUpdateDistanceToGround = { "bUpdateDistanceToGround", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThirdPersonAnimInstance), &Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bUpdateDistanceToGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bUpdateDistanceToGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bUpdateDistanceToGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_DistanceToGround_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_DistanceToGround = { "DistanceToGround", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, DistanceToGround), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_DistanceToGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_DistanceToGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReadyRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReadyRight_SetBit(void* Obj)
	{
		((UThirdPersonAnimInstance*)Obj)->bIsReadyRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReadyRight = { "bIsReadyRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThirdPersonAnimInstance), &Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReadyRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReadyRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReadyRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReadyLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReadyLeft_SetBit(void* Obj)
	{
		((UThirdPersonAnimInstance*)Obj)->bIsReadyLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReadyLeft = { "bIsReadyLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThirdPersonAnimInstance), &Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReadyLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReadyLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReadyLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsBallisticHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsBallisticHit_SetBit(void* Obj)
	{
		((UThirdPersonAnimInstance*)Obj)->bIsBallisticHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsBallisticHit = { "bIsBallisticHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThirdPersonAnimInstance), &Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsBallisticHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsBallisticHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsBallisticHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsFrontHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsFrontHit_SetBit(void* Obj)
	{
		((UThirdPersonAnimInstance*)Obj)->bIsFrontHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsFrontHit = { "bIsFrontHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThirdPersonAnimInstance), &Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsFrontHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsFrontHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsFrontHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_HitLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_HitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_HitLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_HitVector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_HitVector = { "HitVector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, HitVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_HitVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_HitVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_DamageDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_DamageDelay = { "DamageDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, DamageDelay), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_DamageDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_DamageDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_Recoil_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_Recoil = { "Recoil", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, Recoil), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_Recoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_Recoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, Speed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LastSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LastSpeed = { "LastSpeed", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, LastSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LastSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LastSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothRotationDelta_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothRotationDelta = { "SmoothRotationDelta", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, SmoothRotationDelta), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothRotationDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothRotationDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RotationRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, RotationRate), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RotationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LastRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LastRotation = { "LastRotation", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, LastRotation), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LastRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LastRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothRotationAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothRotationAmount = { "SmoothRotationAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, SmoothRotationAmount), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothRotationAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothRotationAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothMovement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothMovement = { "SmoothMovement", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, SmoothMovement), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RelativeRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RelativeRotation = { "RelativeRotation", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RelativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RelativeRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_GripAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_GripAlpha = { "GripAlpha", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, GripAlpha), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_GripAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_GripAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_GripPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_GripPosition = { "GripPosition", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, GripPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_GripPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_GripPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_GripRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_GripRotation = { "GripRotation", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, GripRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_GripRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_GripRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsMounted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsMounted_SetBit(void* Obj)
	{
		((UThirdPersonAnimInstance*)Obj)->bIsMounted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsMounted = { "bIsMounted", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThirdPersonAnimInstance), &Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsMounted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsMounted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsMounted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MountAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MountAlpha = { "MountAlpha", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, MountAlpha), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MountAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MountAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MountLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MountLocation = { "MountLocation", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, MountLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MountLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MountLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LookAtPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LookAtPosition = { "LookAtPosition", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, LookAtPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LookAtPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LookAtPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothLean_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothLean = { "SmoothLean", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, SmoothLean), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothLean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothLean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LeanAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LeanAmount = { "LeanAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, LeanAmount), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LeanAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LeanAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ReloadSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ReloadSpeed = { "ReloadSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, ReloadSpeed), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ReloadSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ReloadSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MovementAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MovementAlpha = { "MovementAlpha", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, MovementAlpha), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MovementAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MovementAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ItemPositionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ItemPositionOffset = { "ItemPositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, ItemPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ItemPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ItemPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothRotation = { "SmoothRotation", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, SmoothRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ItemForward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ItemForward = { "ItemForward", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, ItemForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ItemForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ItemForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ItemUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ItemUp = { "ItemUp", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, ItemUp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ItemUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ItemUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_AimingPositionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_AimingPositionOffset = { "AimingPositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, AimingPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_AimingPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_AimingPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_DeltaTimeX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_DeltaTimeX = { "DeltaTimeX", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, DeltaTimeX), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_DeltaTimeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_DeltaTimeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SprintingPositionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SprintingPositionOffset = { "SprintingPositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, SprintingPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SprintingPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SprintingPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RecoilMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RecoilMultiplier = { "RecoilMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, RecoilMultiplier), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RecoilMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RecoilMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_BracedAimPositionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_BracedAimPositionOffset = { "BracedAimPositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, BracedAimPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_BracedAimPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_BracedAimPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LeanElbowInfluence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LeanElbowInfluence = { "LeanElbowInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, LeanElbowInfluence), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LeanElbowInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LeanElbowInfluence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LowReadyPositionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LowReadyPositionOffset = { "LowReadyPositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, LowReadyPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LowReadyPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LowReadyPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LookYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LookYaw = { "LookYaw", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, LookYaw), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LookYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LookYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LookPitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LookPitch = { "LookPitch", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, LookPitch), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LookPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LookPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_OneHandedAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_OneHandedAlpha = { "OneHandedAlpha", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, OneHandedAlpha), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_OneHandedAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_OneHandedAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_PreviewDataClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_PreviewDataClass = { "PreviewDataClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, PreviewDataClass), Z_Construct_UClass_UFPSItemData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_PreviewDataClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_PreviewDataClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsDead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsDead_SetBit(void* Obj)
	{
		((UThirdPersonAnimInstance*)Obj)->bIsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThirdPersonAnimInstance), &Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReady_SetBit(void* Obj)
	{
		((UThirdPersonAnimInstance*)Obj)->bIsReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReady = { "bIsReady", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThirdPersonAnimInstance), &Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsFalling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsFalling_SetBit(void* Obj)
	{
		((UThirdPersonAnimInstance*)Obj)->bIsFalling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThirdPersonAnimInstance), &Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsCrouching_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsCrouching_SetBit(void* Obj)
	{
		((UThirdPersonAnimInstance*)Obj)->bIsCrouching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsCrouching = { "bIsCrouching", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThirdPersonAnimInstance), &Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsCrouching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_CrouchingAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_CrouchingAlpha = { "CrouchingAlpha", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, CrouchingAlpha), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_CrouchingAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_CrouchingAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsAiming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsAiming_SetBit(void* Obj)
	{
		((UThirdPersonAnimInstance*)Obj)->bIsAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThirdPersonAnimInstance), &Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsSprinting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
	{
		((UThirdPersonAnimInstance*)Obj)->bIsSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsSprinting = { "bIsSprinting", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThirdPersonAnimInstance), &Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsSprinting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SprintingAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SprintingAlpha = { "SprintingAlpha", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, SprintingAlpha), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SprintingAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SprintingAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsLowReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsLowReady_SetBit(void* Obj)
	{
		((UThirdPersonAnimInstance*)Obj)->bIsLowReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsLowReady = { "bIsLowReady", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThirdPersonAnimInstance), &Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsLowReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsLowReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsLowReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LowReadyAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LowReadyAlpha = { "LowReadyAlpha", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, LowReadyAlpha), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LowReadyAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LowReadyAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsMoving_SetBit(void* Obj)
	{
		((UThirdPersonAnimInstance*)Obj)->bIsMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThirdPersonAnimInstance), &Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReadyToThrow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReadyToThrow_SetBit(void* Obj)
	{
		((UThirdPersonAnimInstance*)Obj)->bIsReadyToThrow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReadyToThrow = { "bIsReadyToThrow", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThirdPersonAnimInstance), &Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReadyToThrow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReadyToThrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReadyToThrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsBracedAiming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsBracedAiming_SetBit(void* Obj)
	{
		((UThirdPersonAnimInstance*)Obj)->bIsBracedAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsBracedAiming = { "bIsBracedAiming", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThirdPersonAnimInstance), &Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsBracedAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsBracedAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsBracedAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_BracedAimAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_BracedAimAlpha = { "BracedAimAlpha", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, BracedAimAlpha), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_BracedAimAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_BracedAimAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_AimAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_AimAlpha = { "AimAlpha", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, AimAlpha), METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_AimAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_AimAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsTurning_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsTurning_SetBit(void* Obj)
	{
		((UThirdPersonAnimInstance*)Obj)->bIsTurning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsTurning = { "bIsTurning", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThirdPersonAnimInstance), &Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsTurning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsTurning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsTurning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_TurnRight90Anim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_TurnRight90Anim = { "TurnRight90Anim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, TurnRight90Anim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_TurnRight90Anim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_TurnRight90Anim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_TurnRight180Anim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_TurnRight180Anim = { "TurnRight180Anim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, TurnRight180Anim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_TurnRight180Anim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_TurnRight180Anim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_TurnLeft90Anim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_TurnLeft90Anim = { "TurnLeft90Anim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, TurnLeft90Anim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_TurnLeft90Anim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_TurnLeft90Anim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_TurnLeft180Anim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/ThirdPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_TurnLeft180Anim = { "TurnLeft180Anim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPersonAnimInstance, TurnLeft180Anim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_TurnLeft180Anim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_TurnLeft180Anim_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThirdPersonAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_FPSCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_WeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ThrowableData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MeleeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RangedWeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_BasePoseAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SprintingAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_IdleAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MovementAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ReadyBasePoseAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_GripPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ReadyRightPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ReadyLeftPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LeftHandIK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RightHandIK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bUpdateDistanceToGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_DistanceToGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReadyRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReadyLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsBallisticHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsFrontHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_HitVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_DamageDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_Recoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LastSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothRotationDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RotationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LastRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothRotationAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RelativeRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_GripAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_GripPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_GripRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsMounted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MountAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MountLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LookAtPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothLean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LeanAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ReloadSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_MovementAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ItemPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SmoothRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ItemForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_ItemUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_AimingPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_DeltaTimeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SprintingPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_RecoilMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_BracedAimPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LeanElbowInfluence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LowReadyPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LookYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LookPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_OneHandedAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_PreviewDataClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsCrouching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_CrouchingAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsSprinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_SprintingAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsLowReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_LowReadyAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsReadyToThrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsBracedAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_BracedAimAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_AimAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_bIsTurning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_TurnRight90Anim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_TurnRight180Anim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_TurnLeft90Anim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPersonAnimInstance_Statics::NewProp_TurnLeft180Anim,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFPSAnimationInstance_NoRegister, (int32)VTABLE_OFFSET(UThirdPersonAnimInstance, IFPSAnimationInstance), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThirdPersonAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThirdPersonAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::ClassParams = {
		&UThirdPersonAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UThirdPersonAnimInstance_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UThirdPersonAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UThirdPersonAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UThirdPersonAnimInstance, 317284627);
	template<> FPSCONTROLLER_API UClass* StaticClass<UThirdPersonAnimInstance>()
	{
		return UThirdPersonAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UThirdPersonAnimInstance(Z_Construct_UClass_UThirdPersonAnimInstance, &UThirdPersonAnimInstance::StaticClass, TEXT("/Script/FPSController"), TEXT("UThirdPersonAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThirdPersonAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
