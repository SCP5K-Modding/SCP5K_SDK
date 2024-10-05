// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FirstPersonAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonAnimInstance() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFirstPersonAnimInstance_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFirstPersonAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSGripData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSRangedWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSCharacterBase_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSItemData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSWeaponData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSThrowableData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSMeleeWeaponData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSRangedWeaponData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSItem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UClimbableComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalLerpDriver();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSAnimationInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFirstPersonAnimInstance::execGetGripPose)
	{
		P_GET_OBJECT(UFPSGripData,Z_Param_GripData);
		P_GET_OBJECT(UClass,Z_Param_WeaponClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequence**)Z_Param__Result=P_THIS->GetGripPose_Implementation(Z_Param_GripData,Z_Param_WeaponClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirstPersonAnimInstance::execSetSwayMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSwayMultiplier(Z_Param_Multiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirstPersonAnimInstance::execUpdateGrabPoint)
	{
		P_GET_UBOOL(Z_Param_bIsLeft);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGrabPoint(Z_Param_bIsLeft);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirstPersonAnimInstance::execUpdateGripAlpha)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGripAlpha();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirstPersonAnimInstance::execUpdateGripPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGripPosition();
		P_NATIVE_END;
	}
	static FName NAME_UFirstPersonAnimInstance_GetGripPose = FName(TEXT("GetGripPose"));
	UAnimSequence* UFirstPersonAnimInstance::GetGripPose(UFPSGripData* GripData, TSubclassOf<AFPSRangedWeapon>  WeaponClass)
	{
		FirstPersonAnimInstance_eventGetGripPose_Parms Parms;
		Parms.GripData=GripData;
		Parms.WeaponClass=WeaponClass;
		ProcessEvent(FindFunctionChecked(NAME_UFirstPersonAnimInstance_GetGripPose),&Parms);
		return Parms.ReturnValue;
	}
	void UFirstPersonAnimInstance::StaticRegisterNativesUFirstPersonAnimInstance()
	{
		UClass* Class = UFirstPersonAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGripPose", &UFirstPersonAnimInstance::execGetGripPose },
			{ "SetSwayMultiplier", &UFirstPersonAnimInstance::execSetSwayMultiplier },
			{ "UpdateGrabPoint", &UFirstPersonAnimInstance::execUpdateGrabPoint },
			{ "UpdateGripAlpha", &UFirstPersonAnimInstance::execUpdateGripAlpha },
			{ "UpdateGripPosition", &UFirstPersonAnimInstance::execUpdateGripPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirstPersonAnimInstance_GetGripPose_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GripData;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirstPersonAnimInstance_GetGripPose_Statics::NewProp_GripData = { "GripData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonAnimInstance_eventGetGripPose_Parms, GripData), Z_Construct_UClass_UFPSGripData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFirstPersonAnimInstance_GetGripPose_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonAnimInstance_eventGetGripPose_Parms, WeaponClass), Z_Construct_UClass_AFPSRangedWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirstPersonAnimInstance_GetGripPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonAnimInstance_eventGetGripPose_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirstPersonAnimInstance_GetGripPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirstPersonAnimInstance_GetGripPose_Statics::NewProp_GripData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirstPersonAnimInstance_GetGripPose_Statics::NewProp_WeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirstPersonAnimInstance_GetGripPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirstPersonAnimInstance_GetGripPose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirstPersonAnimInstance_GetGripPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirstPersonAnimInstance, nullptr, "GetGripPose", nullptr, nullptr, sizeof(FirstPersonAnimInstance_eventGetGripPose_Parms), Z_Construct_UFunction_UFirstPersonAnimInstance_GetGripPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirstPersonAnimInstance_GetGripPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirstPersonAnimInstance_GetGripPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirstPersonAnimInstance_GetGripPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirstPersonAnimInstance_GetGripPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirstPersonAnimInstance_GetGripPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirstPersonAnimInstance_SetSwayMultiplier_Statics
	{
		struct FirstPersonAnimInstance_eventSetSwayMultiplier_Parms
		{
			float Multiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFirstPersonAnimInstance_SetSwayMultiplier_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonAnimInstance_eventSetSwayMultiplier_Parms, Multiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirstPersonAnimInstance_SetSwayMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirstPersonAnimInstance_SetSwayMultiplier_Statics::NewProp_Multiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirstPersonAnimInstance_SetSwayMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirstPersonAnimInstance_SetSwayMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirstPersonAnimInstance, nullptr, "SetSwayMultiplier", nullptr, nullptr, sizeof(FirstPersonAnimInstance_eventSetSwayMultiplier_Parms), Z_Construct_UFunction_UFirstPersonAnimInstance_SetSwayMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirstPersonAnimInstance_SetSwayMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirstPersonAnimInstance_SetSwayMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirstPersonAnimInstance_SetSwayMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirstPersonAnimInstance_SetSwayMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirstPersonAnimInstance_SetSwayMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGrabPoint_Statics
	{
		struct FirstPersonAnimInstance_eventUpdateGrabPoint_Parms
		{
			bool bIsLeft;
		};
		static void NewProp_bIsLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGrabPoint_Statics::NewProp_bIsLeft_SetBit(void* Obj)
	{
		((FirstPersonAnimInstance_eventUpdateGrabPoint_Parms*)Obj)->bIsLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGrabPoint_Statics::NewProp_bIsLeft = { "bIsLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FirstPersonAnimInstance_eventUpdateGrabPoint_Parms), &Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGrabPoint_Statics::NewProp_bIsLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGrabPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGrabPoint_Statics::NewProp_bIsLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGrabPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGrabPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirstPersonAnimInstance, nullptr, "UpdateGrabPoint", nullptr, nullptr, sizeof(FirstPersonAnimInstance_eventUpdateGrabPoint_Parms), Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGrabPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGrabPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGrabPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGrabPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGrabPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGrabPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGripAlpha_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGripAlpha_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGripAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirstPersonAnimInstance, nullptr, "UpdateGripAlpha", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGripAlpha_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGripAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGripAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGripAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGripPosition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGripPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGripPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirstPersonAnimInstance, nullptr, "UpdateGripPosition", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGripPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGripPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGripPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGripPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirstPersonAnimInstance_NoRegister()
	{
		return UFirstPersonAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UFirstPersonAnimInstance_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRangedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentRangedWeapon;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftBasePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftBasePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadyRightPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReadyRightPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadyLeftPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReadyLeftPose;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBasePoseLeft_MetaData[];
#endif
		static void NewProp_bIsBasePoseLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBasePoseLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLeftHandGrabPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentLeftHandGrabPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextLeftHandGrabPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextLeftHandGrabPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRightHandGrabPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentRightHandGrabPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextRightHandGrabPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextRightHandGrabPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentClimbable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentClimbable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsClimbing_MetaData[];
#endif
		static void NewProp_bIsClimbing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsClimbing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandClimbPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftHandClimbPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandClimbPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightHandClimbPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbableLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClimbableLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbableRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClimbableRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxMovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementLeanAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementLeanAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchHeightOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchHeightOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchIdleMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchIdleMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandIKAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightHandIKAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandIKAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftHandIKAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWallOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxWallOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementPitchAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementPitchAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeanElbowInfluence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeanElbowInfluence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GestureLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GestureLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementOffsetAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementOffsetAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilRotationAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoilRotationAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilPositionAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecoilPositionAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingRecoilRotationAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingRecoilRotationAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingRecoilPositionAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingRecoilPositionAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostMovementSightAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostMovementSightAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostFireSightAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostFireSightAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentItemLean_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentItemLean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentItemRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentItemRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentItemPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentItemPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentIdleAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentIdleAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothMovementAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothMovementAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothMovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothMovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeAim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FreeAim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothCrouchOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothCrouchOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothBlockingAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothBlockingAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothWallDistanceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothWallDistanceOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmoothMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RawMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeanAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeanAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothLean_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothLean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLean_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentLean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeanDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeanDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ADSRotationAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ADSRotationAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ADSForwardOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ADSForwardOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BracedAimAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BracedAimAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BracedAimTilt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BracedAimTilt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BracedAimPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BracedAimPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAimingPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentAimingPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SightPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Control;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingActionMovementAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingActionMovementAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentActionMovementAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentActionMovementAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothActionMovementAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothActionMovementAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsingBipod_MetaData[];
#endif
		static void NewProp_bIsUsingBipod_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsingBipod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BipodAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BipodAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MountOffsetAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MountOffsetAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MountItemOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MountItemOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTimeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTimeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Recoil_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Recoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilLeanAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoilLeanAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRecoilKick_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRecoilKick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRecoilAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentRecoilAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRecoilAnimationAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentRecoilAnimationAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRecoilKickAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentRecoilKickAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetKick_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetKick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothKick_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothKick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetNoise_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetNoise;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothNoise_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothNoise;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotNoiseIncrement_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShotNoiseIncrement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingShotNoiseIncrement_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingShotNoiseIncrement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotNoiseDecay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShotNoiseDecay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KickOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KickRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickRotationAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KickRotationAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingKickMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingKickMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingRecoilAnimationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingRecoilAnimationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedsConstantGripUpdate_MetaData[];
#endif
		static void NewProp_bNeedsConstantGripUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedsConstantGripUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSmoothRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSmoothRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothRotationTiltAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothRotationTiltAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSmoothRotationAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentSmoothRotationAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothRotationAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothRotationAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmoothRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothItemRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmoothItemRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmoothRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothRotationOffsetAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothRotationOffsetAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLookX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentLookX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLookY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentLookY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLookZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentLookZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookXDriver_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookXDriver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookYDriver_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookYDriver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookZDriver_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookZDriver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementRollDriver_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementRollDriver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[];
#endif
		static void NewProp_bIsSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCrouching_MetaData[];
#endif
		static void NewProp_bIsCrouching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCrouching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[];
#endif
		static void NewProp_bIsAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBracedAiming_MetaData[];
#endif
		static void NewProp_bIsBracedAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBracedAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBlocking_MetaData[];
#endif
		static void NewProp_bIsBlocking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBlocking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLowReady_MetaData[];
#endif
		static void NewProp_bIsLowReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLowReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLocallyOwned_MetaData[];
#endif
		static void NewProp_bIsLocallyOwned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyOwned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFirstPerson_MetaData[];
#endif
		static void NewProp_bIsFirstPerson_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFirstPerson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReadyToThrow_MetaData[];
#endif
		static void NewProp_bIsReadyToThrow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReadyToThrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShakeAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShakeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShakeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shake_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Shake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeMaxHealthPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShakeMaxHealthPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealthShakeAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealthShakeAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinShakeAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinShakeAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealthShakeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealthShakeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinShakeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinShakeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockShakeAmount_MetaData[];
#endif
		static void NewProp_bLockShakeAmount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockShakeAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirstPersonAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirstPersonAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirstPersonAnimInstance_GetGripPose, "GetGripPose" }, // 631351576
		{ &Z_Construct_UFunction_UFirstPersonAnimInstance_SetSwayMultiplier, "SetSwayMultiplier" }, // 59773543
		{ &Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGrabPoint, "UpdateGrabPoint" }, // 3891501940
		{ &Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGripAlpha, "UpdateGripAlpha" }, // 2925945112
		{ &Z_Construct_UFunction_UFirstPersonAnimInstance_UpdateGripPosition, "UpdateGripPosition" }, // 177911438
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "FirstPersonAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_FPSCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_FPSCharacter = { "FPSCharacter", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, FPSCharacter), Z_Construct_UClass_AFPSCharacterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_FPSCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_FPSCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ItemData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, ItemData), Z_Construct_UClass_UFPSItemData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ItemData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_WeaponData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, WeaponData), Z_Construct_UClass_UFPSWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_WeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_WeaponData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ThrowableData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ThrowableData = { "ThrowableData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, ThrowableData), Z_Construct_UClass_UFPSThrowableData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ThrowableData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ThrowableData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MeleeData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MeleeData = { "MeleeData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, MeleeData), Z_Construct_UClass_UFPSMeleeWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MeleeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MeleeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RangedWeaponData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RangedWeaponData = { "RangedWeaponData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, RangedWeaponData), Z_Construct_UClass_UFPSRangedWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RangedWeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RangedWeaponData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentItem = { "CurrentItem", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CurrentItem), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRangedWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRangedWeapon = { "CurrentRangedWeapon", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CurrentRangedWeapon), Z_Construct_UClass_AFPSRangedWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRangedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRangedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BasePoseAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BasePoseAnimation = { "BasePoseAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, BasePoseAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BasePoseAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BasePoseAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SprintingAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SprintingAnimation = { "SprintingAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, SprintingAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SprintingAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SprintingAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_IdleAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_IdleAnimation = { "IdleAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, IdleAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_IdleAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_IdleAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementAnimation = { "MovementAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, MovementAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ReadyBasePoseAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ReadyBasePoseAnimation = { "ReadyBasePoseAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, ReadyBasePoseAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ReadyBasePoseAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ReadyBasePoseAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GripPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GripPose = { "GripPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, GripPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GripPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GripPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeftBasePose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeftBasePose = { "LeftBasePose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, LeftBasePose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeftBasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeftBasePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ReadyRightPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ReadyRightPose = { "ReadyRightPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, ReadyRightPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ReadyRightPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ReadyRightPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ReadyLeftPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ReadyLeftPose = { "ReadyLeftPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, ReadyLeftPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ReadyLeftPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ReadyLeftPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsReadyRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsReadyRight_SetBit(void* Obj)
	{
		((UFirstPersonAnimInstance*)Obj)->bIsReadyRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsReadyRight = { "bIsReadyRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirstPersonAnimInstance), &Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsReadyRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsReadyRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsReadyRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsReadyLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsReadyLeft_SetBit(void* Obj)
	{
		((UFirstPersonAnimInstance*)Obj)->bIsReadyLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsReadyLeft = { "bIsReadyLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirstPersonAnimInstance), &Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsReadyLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsReadyLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsReadyLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsBasePoseLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsBasePoseLeft_SetBit(void* Obj)
	{
		((UFirstPersonAnimInstance*)Obj)->bIsBasePoseLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsBasePoseLeft = { "bIsBasePoseLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirstPersonAnimInstance), &Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsBasePoseLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsBasePoseLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsBasePoseLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLeftHandGrabPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLeftHandGrabPoint = { "CurrentLeftHandGrabPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CurrentLeftHandGrabPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLeftHandGrabPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLeftHandGrabPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_NextLeftHandGrabPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_NextLeftHandGrabPoint = { "NextLeftHandGrabPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, NextLeftHandGrabPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_NextLeftHandGrabPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_NextLeftHandGrabPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRightHandGrabPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRightHandGrabPoint = { "CurrentRightHandGrabPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CurrentRightHandGrabPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRightHandGrabPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRightHandGrabPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_NextRightHandGrabPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_NextRightHandGrabPoint = { "NextRightHandGrabPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, NextRightHandGrabPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_NextRightHandGrabPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_NextRightHandGrabPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentClimbable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentClimbable = { "CurrentClimbable", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CurrentClimbable), Z_Construct_UClass_UClimbableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentClimbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentClimbable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsClimbing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsClimbing_SetBit(void* Obj)
	{
		((UFirstPersonAnimInstance*)Obj)->bIsClimbing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsClimbing = { "bIsClimbing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirstPersonAnimInstance), &Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsClimbing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsClimbing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsClimbing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeftHandClimbPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeftHandClimbPercent = { "LeftHandClimbPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, LeftHandClimbPercent), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeftHandClimbPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeftHandClimbPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RightHandClimbPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RightHandClimbPercent = { "RightHandClimbPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, RightHandClimbPercent), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RightHandClimbPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RightHandClimbPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ClimbableLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ClimbableLocation = { "ClimbableLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, ClimbableLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ClimbableLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ClimbableLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ClimbableRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ClimbableRotation = { "ClimbableRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, ClimbableRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ClimbableRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ClimbableRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxMovementSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxMovementSpeed = { "MaxMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, MaxMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementLeanAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementLeanAmount = { "MovementLeanAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, MovementLeanAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementLeanAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementLeanAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CrouchHeightOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CrouchHeightOffset = { "CrouchHeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CrouchHeightOffset), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CrouchHeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CrouchHeightOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CrouchIdleMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CrouchIdleMultiplier = { "CrouchIdleMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CrouchIdleMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CrouchIdleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CrouchIdleMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RightHandIKAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RightHandIKAlpha = { "RightHandIKAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, RightHandIKAlpha), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RightHandIKAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RightHandIKAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeftHandIKAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeftHandIKAlpha = { "LeftHandIKAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, LeftHandIKAlpha), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeftHandIKAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeftHandIKAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxWallOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxWallOffset = { "MaxWallOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, MaxWallOffset), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxWallOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxWallOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementPitchAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementPitchAmount = { "MovementPitchAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, MovementPitchAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementPitchAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementPitchAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeanElbowInfluence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeanElbowInfluence = { "LeanElbowInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, LeanElbowInfluence), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeanElbowInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeanElbowInfluence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GestureLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GestureLocation = { "GestureLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, GestureLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GestureLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GestureLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementOffsetAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementOffsetAmount = { "MovementOffsetAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, MovementOffsetAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementOffsetAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementOffsetAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RecoilRotationAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RecoilRotationAmount = { "RecoilRotationAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, RecoilRotationAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RecoilRotationAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RecoilRotationAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RecoilPositionAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RecoilPositionAmount = { "RecoilPositionAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, RecoilPositionAmount), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RecoilPositionAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RecoilPositionAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingRecoilRotationAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingRecoilRotationAmount = { "AimingRecoilRotationAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, AimingRecoilRotationAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingRecoilRotationAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingRecoilRotationAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingRecoilPositionAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingRecoilPositionAmount = { "AimingRecoilPositionAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, AimingRecoilPositionAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingRecoilPositionAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingRecoilPositionAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_PostMovementSightAlignment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_PostMovementSightAlignment = { "PostMovementSightAlignment", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, PostMovementSightAlignment), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_PostMovementSightAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_PostMovementSightAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_PostFireSightAlignment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_PostFireSightAlignment = { "PostFireSightAlignment", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, PostFireSightAlignment), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_PostFireSightAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_PostFireSightAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRotationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRotationOffset = { "CurrentRotationOffset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CurrentRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentItemLean_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentItemLean = { "CurrentItemLean", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CurrentItemLean), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentItemLean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentItemLean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentItemRotationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentItemRotationOffset = { "CurrentItemRotationOffset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CurrentItemRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentItemRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentItemRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentItemPositionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentItemPositionOffset = { "CurrentItemPositionOffset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CurrentItemPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentItemPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentItemPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentIdleAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentIdleAmount = { "CurrentIdleAmount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CurrentIdleAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentIdleAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentIdleAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothMovementAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothMovementAmount = { "SmoothMovementAmount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, SmoothMovementAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothMovementAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothMovementAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothMovementSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothMovementSpeed = { "SmoothMovementSpeed", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, SmoothMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_FreeAim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_FreeAim = { "FreeAim", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, FreeAim), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_FreeAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_FreeAim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothCrouchOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothCrouchOffset = { "SmoothCrouchOffset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, SmoothCrouchOffset), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothCrouchOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothCrouchOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothBlockingAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothBlockingAlpha = { "SmoothBlockingAlpha", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, SmoothBlockingAlpha), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothBlockingAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothBlockingAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothWallDistanceOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothWallDistanceOffset = { "SmoothWallDistanceOffset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, SmoothWallDistanceOffset), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothWallDistanceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothWallDistanceOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothMovement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothMovement = { "SmoothMovement", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, SmoothMovement), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RawMovement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RawMovement = { "RawMovement", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, RawMovement), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RawMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RawMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeanAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeanAmount = { "LeanAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, LeanAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeanAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeanAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothLean_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothLean = { "SmoothLean", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, SmoothLean), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothLean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothLean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLean_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLean = { "CurrentLean", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CurrentLean), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeanDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeanDistance = { "LeanDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, LeanDistance), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeanDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeanDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ADSRotationAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ADSRotationAlpha = { "ADSRotationAlpha", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, ADSRotationAlpha), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ADSRotationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ADSRotationAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ADSForwardOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ADSForwardOffset = { "ADSForwardOffset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, ADSForwardOffset), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ADSForwardOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ADSForwardOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingAlpha = { "AimingAlpha", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, AimingAlpha), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BracedAimAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BracedAimAlpha = { "BracedAimAlpha", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, BracedAimAlpha), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BracedAimAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BracedAimAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BracedAimTilt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BracedAimTilt = { "BracedAimTilt", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, BracedAimTilt), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BracedAimTilt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BracedAimTilt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BracedAimPositionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BracedAimPositionOffset = { "BracedAimPositionOffset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, BracedAimPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BracedAimPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BracedAimPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentAimingPositionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentAimingPositionOffset = { "CurrentAimingPositionOffset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CurrentAimingPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentAimingPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentAimingPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SightPositionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SightPositionOffset = { "SightPositionOffset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, SightPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SightPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SightPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_Control_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, Control), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_Control_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_Control_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingActionMovementAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingActionMovementAmount = { "AimingActionMovementAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, AimingActionMovementAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingActionMovementAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingActionMovementAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentActionMovementAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentActionMovementAmount = { "CurrentActionMovementAmount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CurrentActionMovementAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentActionMovementAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentActionMovementAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothActionMovementAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothActionMovementAmount = { "SmoothActionMovementAmount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, SmoothActionMovementAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothActionMovementAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothActionMovementAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsUsingBipod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsUsingBipod_SetBit(void* Obj)
	{
		((UFirstPersonAnimInstance*)Obj)->bIsUsingBipod = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsUsingBipod = { "bIsUsingBipod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirstPersonAnimInstance), &Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsUsingBipod_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsUsingBipod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsUsingBipod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BipodAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BipodAlpha = { "BipodAlpha", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, BipodAlpha), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BipodAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BipodAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MountOffsetAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MountOffsetAlpha = { "MountOffsetAlpha", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, MountOffsetAlpha), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MountOffsetAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MountOffsetAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MountItemOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MountItemOffset = { "MountItemOffset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, MountItemOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MountItemOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MountItemOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_DeltaTimeX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_DeltaTimeX = { "DeltaTimeX", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, DeltaTimeX), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_DeltaTimeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_DeltaTimeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_Recoil_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_Recoil = { "Recoil", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, Recoil), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_Recoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_Recoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RecoilLeanAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RecoilLeanAmount = { "RecoilLeanAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, RecoilLeanAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RecoilLeanAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RecoilLeanAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxRecoilKick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxRecoilKick = { "MaxRecoilKick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, MaxRecoilKick), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxRecoilKick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxRecoilKick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRecoilAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRecoilAmount = { "CurrentRecoilAmount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CurrentRecoilAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRecoilAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRecoilAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRecoilAnimationAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRecoilAnimationAmount = { "CurrentRecoilAnimationAmount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CurrentRecoilAnimationAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRecoilAnimationAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRecoilAnimationAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRecoilKickAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRecoilKickAmount = { "CurrentRecoilKickAmount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CurrentRecoilKickAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRecoilKickAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRecoilKickAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_TargetKick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_TargetKick = { "TargetKick", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, TargetKick), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_TargetKick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_TargetKick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothKick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothKick = { "SmoothKick", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, SmoothKick), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothKick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothKick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_TargetNoise_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_TargetNoise = { "TargetNoise", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, TargetNoise), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_TargetNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_TargetNoise_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothNoise_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothNoise = { "SmoothNoise", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, SmoothNoise), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothNoise_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShotNoiseIncrement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShotNoiseIncrement = { "ShotNoiseIncrement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, ShotNoiseIncrement), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShotNoiseIncrement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShotNoiseIncrement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingShotNoiseIncrement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingShotNoiseIncrement = { "AimingShotNoiseIncrement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, AimingShotNoiseIncrement), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingShotNoiseIncrement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingShotNoiseIncrement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShotNoiseDecay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShotNoiseDecay = { "ShotNoiseDecay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, ShotNoiseDecay), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShotNoiseDecay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShotNoiseDecay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_KickOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_KickOffset = { "KickOffset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, KickOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_KickOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_KickOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_KickRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_KickRotation = { "KickRotation", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, KickRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_KickRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_KickRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_KickRotationAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_KickRotationAmount = { "KickRotationAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, KickRotationAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_KickRotationAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_KickRotationAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingKickMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingKickMultiplier = { "AimingKickMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, AimingKickMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingKickMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingKickMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingRecoilAnimationMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingRecoilAnimationMultiplier = { "AimingRecoilAnimationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, AimingRecoilAnimationMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingRecoilAnimationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingRecoilAnimationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GripPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GripPosition = { "GripPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, GripPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GripPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GripPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GripRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GripRotation = { "GripRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, GripRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GripRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GripRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GripAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GripAmount = { "GripAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, GripAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GripAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GripAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bNeedsConstantGripUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bNeedsConstantGripUpdate_SetBit(void* Obj)
	{
		((UFirstPersonAnimInstance*)Obj)->bNeedsConstantGripUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bNeedsConstantGripUpdate = { "bNeedsConstantGripUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirstPersonAnimInstance), &Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bNeedsConstantGripUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bNeedsConstantGripUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bNeedsConstantGripUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxSmoothRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxSmoothRotation = { "MaxSmoothRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, MaxSmoothRotation), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxSmoothRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxSmoothRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotationTiltAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotationTiltAmount = { "SmoothRotationTiltAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, SmoothRotationTiltAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotationTiltAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotationTiltAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentSmoothRotationAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentSmoothRotationAmount = { "CurrentSmoothRotationAmount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CurrentSmoothRotationAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentSmoothRotationAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentSmoothRotationAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotationAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotationAmount = { "SmoothRotationAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, SmoothRotationAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotationAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotationAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotation = { "SmoothRotation", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, SmoothRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothItemRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothItemRotation = { "SmoothItemRotation", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, SmoothItemRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothItemRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothItemRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotationOffset = { "SmoothRotationOffset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, SmoothRotationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotationOffsetAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotationOffsetAmount = { "SmoothRotationOffsetAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, SmoothRotationOffsetAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotationOffsetAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotationOffsetAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLookX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLookX = { "CurrentLookX", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CurrentLookX), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLookX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLookX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLookY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLookY = { "CurrentLookY", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CurrentLookY), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLookY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLookY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLookZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLookZ = { "CurrentLookZ", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, CurrentLookZ), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLookZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLookZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LookXDriver_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LookXDriver = { "LookXDriver", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, LookXDriver), Z_Construct_UScriptStruct_FPhysicalLerpDriver, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LookXDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LookXDriver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LookYDriver_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LookYDriver = { "LookYDriver", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, LookYDriver), Z_Construct_UScriptStruct_FPhysicalLerpDriver, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LookYDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LookYDriver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LookZDriver_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LookZDriver = { "LookZDriver", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, LookZDriver), Z_Construct_UScriptStruct_FPhysicalLerpDriver, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LookZDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LookZDriver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementRollDriver_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementRollDriver = { "MovementRollDriver", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, MovementRollDriver), Z_Construct_UScriptStruct_FPhysicalLerpDriver, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementRollDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementRollDriver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementRoll_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementRoll = { "MovementRoll", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, MovementRoll), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsSprinting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
	{
		((UFirstPersonAnimInstance*)Obj)->bIsSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsSprinting = { "bIsSprinting", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirstPersonAnimInstance), &Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsSprinting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsCrouching_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsCrouching_SetBit(void* Obj)
	{
		((UFirstPersonAnimInstance*)Obj)->bIsCrouching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsCrouching = { "bIsCrouching", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirstPersonAnimInstance), &Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsCrouching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsAiming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsAiming_SetBit(void* Obj)
	{
		((UFirstPersonAnimInstance*)Obj)->bIsAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirstPersonAnimInstance), &Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsBracedAiming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsBracedAiming_SetBit(void* Obj)
	{
		((UFirstPersonAnimInstance*)Obj)->bIsBracedAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsBracedAiming = { "bIsBracedAiming", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirstPersonAnimInstance), &Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsBracedAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsBracedAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsBracedAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsBlocking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsBlocking_SetBit(void* Obj)
	{
		((UFirstPersonAnimInstance*)Obj)->bIsBlocking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsBlocking = { "bIsBlocking", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirstPersonAnimInstance), &Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsBlocking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsBlocking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsBlocking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsLowReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsLowReady_SetBit(void* Obj)
	{
		((UFirstPersonAnimInstance*)Obj)->bIsLowReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsLowReady = { "bIsLowReady", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirstPersonAnimInstance), &Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsLowReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsLowReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsLowReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsLocallyOwned_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsLocallyOwned_SetBit(void* Obj)
	{
		((UFirstPersonAnimInstance*)Obj)->bIsLocallyOwned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsLocallyOwned = { "bIsLocallyOwned", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirstPersonAnimInstance), &Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsLocallyOwned_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsLocallyOwned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsLocallyOwned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsFirstPerson_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsFirstPerson_SetBit(void* Obj)
	{
		((UFirstPersonAnimInstance*)Obj)->bIsFirstPerson = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsFirstPerson = { "bIsFirstPerson", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirstPersonAnimInstance), &Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsFirstPerson_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsFirstPerson_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsFirstPerson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsReadyToThrow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsReadyToThrow_SetBit(void* Obj)
	{
		((UFirstPersonAnimInstance*)Obj)->bIsReadyToThrow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsReadyToThrow = { "bIsReadyToThrow", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirstPersonAnimInstance), &Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsReadyToThrow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsReadyToThrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsReadyToThrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShakeAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShakeAmount = { "ShakeAmount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, ShakeAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShakeAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShakeAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShakeSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShakeSpeed = { "ShakeSpeed", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, ShakeSpeed), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShakeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShakeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShakeTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShakeTime = { "ShakeTime", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, ShakeTime), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShakeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShakeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_Shake_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_Shake = { "Shake", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, Shake), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_Shake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_Shake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShakeMaxHealthPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShakeMaxHealthPercent = { "ShakeMaxHealthPercent", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, ShakeMaxHealthPercent), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShakeMaxHealthPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShakeMaxHealthPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxHealthShakeAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxHealthShakeAmount = { "MaxHealthShakeAmount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, MaxHealthShakeAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxHealthShakeAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxHealthShakeAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MinShakeAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MinShakeAmount = { "MinShakeAmount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, MinShakeAmount), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MinShakeAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MinShakeAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxHealthShakeSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxHealthShakeSpeed = { "MaxHealthShakeSpeed", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, MaxHealthShakeSpeed), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxHealthShakeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxHealthShakeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MinShakeSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MinShakeSpeed = { "MinShakeSpeed", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstPersonAnimInstance, MinShakeSpeed), METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MinShakeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MinShakeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bLockShakeAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FirstPersonAnimInstance" },
		{ "ModuleRelativePath", "Public/FirstPersonAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bLockShakeAmount_SetBit(void* Obj)
	{
		((UFirstPersonAnimInstance*)Obj)->bLockShakeAmount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bLockShakeAmount = { "bLockShakeAmount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirstPersonAnimInstance), &Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bLockShakeAmount_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bLockShakeAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bLockShakeAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirstPersonAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_FPSCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_WeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ThrowableData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MeleeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RangedWeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRangedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BasePoseAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SprintingAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_IdleAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ReadyBasePoseAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GripPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeftBasePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ReadyRightPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ReadyLeftPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsReadyRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsReadyLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsBasePoseLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLeftHandGrabPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_NextLeftHandGrabPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRightHandGrabPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_NextRightHandGrabPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentClimbable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsClimbing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeftHandClimbPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RightHandClimbPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ClimbableLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ClimbableRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementLeanAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CrouchHeightOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CrouchIdleMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RightHandIKAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeftHandIKAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxWallOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementPitchAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeanElbowInfluence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GestureLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementOffsetAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RecoilRotationAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RecoilPositionAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingRecoilRotationAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingRecoilPositionAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_PostMovementSightAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_PostFireSightAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentItemLean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentItemRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentItemPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentIdleAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothMovementAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_FreeAim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothCrouchOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothBlockingAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothWallDistanceOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RawMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeanAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothLean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LeanDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ADSRotationAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ADSForwardOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BracedAimAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BracedAimTilt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BracedAimPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentAimingPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SightPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_Control,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingActionMovementAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentActionMovementAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothActionMovementAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsUsingBipod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_BipodAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MountOffsetAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MountItemOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_DeltaTimeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_Recoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_RecoilLeanAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxRecoilKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRecoilAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRecoilAnimationAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentRecoilKickAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_TargetKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_TargetNoise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothNoise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShotNoiseIncrement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingShotNoiseIncrement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShotNoiseDecay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_KickOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_KickRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_KickRotationAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingKickMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_AimingRecoilAnimationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GripPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GripRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_GripAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bNeedsConstantGripUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxSmoothRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotationTiltAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentSmoothRotationAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotationAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothItemRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_SmoothRotationOffsetAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLookX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLookY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_CurrentLookZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LookXDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LookYDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_LookZDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementRollDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MovementRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsSprinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsCrouching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsBracedAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsBlocking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsLowReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsLocallyOwned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsFirstPerson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bIsReadyToThrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShakeAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShakeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShakeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_Shake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_ShakeMaxHealthPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxHealthShakeAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MinShakeAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MaxHealthShakeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_MinShakeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonAnimInstance_Statics::NewProp_bLockShakeAmount,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFPSAnimationInstance_NoRegister, (int32)VTABLE_OFFSET(UFirstPersonAnimInstance, IFPSAnimationInstance), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirstPersonAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirstPersonAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirstPersonAnimInstance_Statics::ClassParams = {
		&UFirstPersonAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFirstPersonAnimInstance_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirstPersonAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirstPersonAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirstPersonAnimInstance, 3268148119);
	template<> FPSCONTROLLER_API UClass* StaticClass<UFirstPersonAnimInstance>()
	{
		return UFirstPersonAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirstPersonAnimInstance(Z_Construct_UClass_UFirstPersonAnimInstance, &UFirstPersonAnimInstance::StaticClass, TEXT("/Script/FPSController"), TEXT("UFirstPersonAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirstPersonAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
