// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacterMovementComponent() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSCharacterMovementComponent_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UClimbableComponent_NoRegister();
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EFPSCustomMovementMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSCharacterBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFPSCharacterMovementComponent::execEnterClimb)
	{
		P_GET_OBJECT(UClimbableComponent,Z_Param_NewClimbable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterClimb(Z_Param_NewClimbable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSCharacterMovementComponent::execExitClimb)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitClimb();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSCharacterMovementComponent::execGetCurrentClimbable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClimbableComponent**)Z_Param__Result=P_THIS->GetCurrentClimbable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSCharacterMovementComponent::execIsCustomMovementMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCustomMovementMode(EFPSCustomMovementMode(Z_Param_InMovementMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSCharacterMovementComponent::execStartSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSprinting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSCharacterMovementComponent::execStopSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSprinting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSCharacterMovementComponent::execTransitionToPoint)
	{
		P_GET_STRUCT(FTransform,Z_Param_Target);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->TransitionToPoint(Z_Param_Target,Z_Param_Montage);
		P_NATIVE_END;
	}
	void UFPSCharacterMovementComponent::StaticRegisterNativesUFPSCharacterMovementComponent()
	{
		UClass* Class = UFPSCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterClimb", &UFPSCharacterMovementComponent::execEnterClimb },
			{ "ExitClimb", &UFPSCharacterMovementComponent::execExitClimb },
			{ "GetCurrentClimbable", &UFPSCharacterMovementComponent::execGetCurrentClimbable },
			{ "IsCustomMovementMode", &UFPSCharacterMovementComponent::execIsCustomMovementMode },
			{ "StartSprinting", &UFPSCharacterMovementComponent::execStartSprinting },
			{ "StopSprinting", &UFPSCharacterMovementComponent::execStopSprinting },
			{ "TransitionToPoint", &UFPSCharacterMovementComponent::execTransitionToPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFPSCharacterMovementComponent_EnterClimb_Statics
	{
		struct FPSCharacterMovementComponent_eventEnterClimb_Parms
		{
			UClimbableComponent* NewClimbable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewClimbable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewClimbable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSCharacterMovementComponent_EnterClimb_Statics::NewProp_NewClimbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSCharacterMovementComponent_EnterClimb_Statics::NewProp_NewClimbable = { "NewClimbable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterMovementComponent_eventEnterClimb_Parms, NewClimbable), Z_Construct_UClass_UClimbableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFPSCharacterMovementComponent_EnterClimb_Statics::NewProp_NewClimbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterMovementComponent_EnterClimb_Statics::NewProp_NewClimbable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSCharacterMovementComponent_EnterClimb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSCharacterMovementComponent_EnterClimb_Statics::NewProp_NewClimbable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSCharacterMovementComponent_EnterClimb_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSCharacterMovementComponent_EnterClimb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSCharacterMovementComponent, nullptr, "EnterClimb", nullptr, nullptr, sizeof(FPSCharacterMovementComponent_eventEnterClimb_Parms), Z_Construct_UFunction_UFPSCharacterMovementComponent_EnterClimb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterMovementComponent_EnterClimb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSCharacterMovementComponent_EnterClimb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterMovementComponent_EnterClimb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSCharacterMovementComponent_EnterClimb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSCharacterMovementComponent_EnterClimb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSCharacterMovementComponent_ExitClimb_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSCharacterMovementComponent_ExitClimb_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSCharacterMovementComponent_ExitClimb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSCharacterMovementComponent, nullptr, "ExitClimb", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSCharacterMovementComponent_ExitClimb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterMovementComponent_ExitClimb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSCharacterMovementComponent_ExitClimb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSCharacterMovementComponent_ExitClimb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSCharacterMovementComponent_GetCurrentClimbable_Statics
	{
		struct FPSCharacterMovementComponent_eventGetCurrentClimbable_Parms
		{
			UClimbableComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSCharacterMovementComponent_GetCurrentClimbable_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSCharacterMovementComponent_GetCurrentClimbable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterMovementComponent_eventGetCurrentClimbable_Parms, ReturnValue), Z_Construct_UClass_UClimbableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFPSCharacterMovementComponent_GetCurrentClimbable_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterMovementComponent_GetCurrentClimbable_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSCharacterMovementComponent_GetCurrentClimbable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSCharacterMovementComponent_GetCurrentClimbable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSCharacterMovementComponent_GetCurrentClimbable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSCharacterMovementComponent_GetCurrentClimbable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSCharacterMovementComponent, nullptr, "GetCurrentClimbable", nullptr, nullptr, sizeof(FPSCharacterMovementComponent_eventGetCurrentClimbable_Parms), Z_Construct_UFunction_UFPSCharacterMovementComponent_GetCurrentClimbable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterMovementComponent_GetCurrentClimbable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSCharacterMovementComponent_GetCurrentClimbable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterMovementComponent_GetCurrentClimbable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSCharacterMovementComponent_GetCurrentClimbable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSCharacterMovementComponent_GetCurrentClimbable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSCharacterMovementComponent_IsCustomMovementMode_Statics
	{
		struct FPSCharacterMovementComponent_eventIsCustomMovementMode_Parms
		{
			TEnumAsByte<EFPSCustomMovementMode> InMovementMode;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InMovementMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFPSCharacterMovementComponent_IsCustomMovementMode_Statics::NewProp_InMovementMode = { "InMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterMovementComponent_eventIsCustomMovementMode_Parms, InMovementMode), Z_Construct_UEnum_FPSController_EFPSCustomMovementMode, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFPSCharacterMovementComponent_IsCustomMovementMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterMovementComponent_eventIsCustomMovementMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSCharacterMovementComponent_IsCustomMovementMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterMovementComponent_eventIsCustomMovementMode_Parms), &Z_Construct_UFunction_UFPSCharacterMovementComponent_IsCustomMovementMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSCharacterMovementComponent_IsCustomMovementMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSCharacterMovementComponent_IsCustomMovementMode_Statics::NewProp_InMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSCharacterMovementComponent_IsCustomMovementMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSCharacterMovementComponent_IsCustomMovementMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSCharacterMovementComponent_IsCustomMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSCharacterMovementComponent, nullptr, "IsCustomMovementMode", nullptr, nullptr, sizeof(FPSCharacterMovementComponent_eventIsCustomMovementMode_Parms), Z_Construct_UFunction_UFPSCharacterMovementComponent_IsCustomMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterMovementComponent_IsCustomMovementMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSCharacterMovementComponent_IsCustomMovementMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterMovementComponent_IsCustomMovementMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSCharacterMovementComponent_IsCustomMovementMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSCharacterMovementComponent_IsCustomMovementMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSCharacterMovementComponent_StartSprinting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSCharacterMovementComponent_StartSprinting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSCharacterMovementComponent_StartSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSCharacterMovementComponent, nullptr, "StartSprinting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSCharacterMovementComponent_StartSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterMovementComponent_StartSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSCharacterMovementComponent_StartSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSCharacterMovementComponent_StartSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSCharacterMovementComponent_StopSprinting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSCharacterMovementComponent_StopSprinting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSCharacterMovementComponent_StopSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSCharacterMovementComponent, nullptr, "StopSprinting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSCharacterMovementComponent_StopSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterMovementComponent_StopSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSCharacterMovementComponent_StopSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSCharacterMovementComponent_StopSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSCharacterMovementComponent_TransitionToPoint_Statics
	{
		struct FPSCharacterMovementComponent_eventTransitionToPoint_Parms
		{
			FTransform Target;
			UAnimMontage* Montage;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSCharacterMovementComponent_TransitionToPoint_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterMovementComponent_eventTransitionToPoint_Parms, Target), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSCharacterMovementComponent_TransitionToPoint_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterMovementComponent_eventTransitionToPoint_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSCharacterMovementComponent_TransitionToPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterMovementComponent_eventTransitionToPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSCharacterMovementComponent_TransitionToPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSCharacterMovementComponent_TransitionToPoint_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSCharacterMovementComponent_TransitionToPoint_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSCharacterMovementComponent_TransitionToPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSCharacterMovementComponent_TransitionToPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSCharacterMovementComponent_TransitionToPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSCharacterMovementComponent, nullptr, "TransitionToPoint", nullptr, nullptr, sizeof(FPSCharacterMovementComponent_eventTransitionToPoint_Parms), Z_Construct_UFunction_UFPSCharacterMovementComponent_TransitionToPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterMovementComponent_TransitionToPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSCharacterMovementComponent_TransitionToPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterMovementComponent_TransitionToPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSCharacterMovementComponent_TransitionToPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSCharacterMovementComponent_TransitionToPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFPSCharacterMovementComponent_NoRegister()
	{
		return UFPSCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFPSCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeedSprinting_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeedSprinting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbMovementSpeedUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClimbMovementSpeedUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbMovementSpeedDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClimbMovementSpeedDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxClimbEnterVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxClimbEnterVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbingFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClimbingFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbingBrakingDeceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClimbingBrakingDeceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMovementSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxMovementSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSCharacterOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSCharacterOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsSprint_MetaData[];
#endif
		static void NewProp_bWantsSprint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsSprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsProne_MetaData[];
#endif
		static void NewProp_bWantsProne_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsProne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsAiming_MetaData[];
#endif
		static void NewProp_bWantsAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsClimb_MetaData[];
#endif
		static void NewProp_bWantsClimb_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsClimb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFPSCharacterMovementComponent_EnterClimb, "EnterClimb" }, // 1427522287
		{ &Z_Construct_UFunction_UFPSCharacterMovementComponent_ExitClimb, "ExitClimb" }, // 269166500
		{ &Z_Construct_UFunction_UFPSCharacterMovementComponent_GetCurrentClimbable, "GetCurrentClimbable" }, // 2678534577
		{ &Z_Construct_UFunction_UFPSCharacterMovementComponent_IsCustomMovementMode, "IsCustomMovementMode" }, // 1140196906
		{ &Z_Construct_UFunction_UFPSCharacterMovementComponent_StartSprinting, "StartSprinting" }, // 2898582909
		{ &Z_Construct_UFunction_UFPSCharacterMovementComponent_StopSprinting, "StopSprinting" }, // 676697037
		{ &Z_Construct_UFunction_UFPSCharacterMovementComponent_TransitionToPoint, "TransitionToPoint" }, // 1273141308
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FPSCharacterMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_MaxWalkSpeedSprinting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_MaxWalkSpeedSprinting = { "MaxWalkSpeedSprinting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSCharacterMovementComponent, MaxWalkSpeedSprinting), METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_MaxWalkSpeedSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_MaxWalkSpeedSprinting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ClimbMovementSpeedUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ClimbMovementSpeedUp = { "ClimbMovementSpeedUp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSCharacterMovementComponent, ClimbMovementSpeedUp), METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ClimbMovementSpeedUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ClimbMovementSpeedUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ClimbMovementSpeedDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ClimbMovementSpeedDown = { "ClimbMovementSpeedDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSCharacterMovementComponent, ClimbMovementSpeedDown), METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ClimbMovementSpeedDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ClimbMovementSpeedDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_MaxClimbEnterVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_MaxClimbEnterVelocity = { "MaxClimbEnterVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSCharacterMovementComponent, MaxClimbEnterVelocity), METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_MaxClimbEnterVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_MaxClimbEnterVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ClimbingFriction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ClimbingFriction = { "ClimbingFriction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSCharacterMovementComponent, ClimbingFriction), METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ClimbingFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ClimbingFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ClimbingBrakingDeceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ClimbingBrakingDeceleration = { "ClimbingBrakingDeceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSCharacterMovementComponent, ClimbingBrakingDeceleration), METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ClimbingBrakingDeceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ClimbingBrakingDeceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_MaxMovementSpeedMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_MaxMovementSpeedMultiplier = { "MaxMovementSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSCharacterMovementComponent, MaxMovementSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_MaxMovementSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_MaxMovementSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_FPSCharacterOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_FPSCharacterOwner = { "FPSCharacterOwner", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSCharacterMovementComponent, FPSCharacterOwner), Z_Construct_UClass_AFPSCharacterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_FPSCharacterOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_FPSCharacterOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsSprint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsSprint_SetBit(void* Obj)
	{
		((UFPSCharacterMovementComponent*)Obj)->bWantsSprint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsSprint = { "bWantsSprint", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSCharacterMovementComponent), &Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsSprint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsSprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsSprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsProne_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsProne_SetBit(void* Obj)
	{
		((UFPSCharacterMovementComponent*)Obj)->bWantsProne = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsProne = { "bWantsProne", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSCharacterMovementComponent), &Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsProne_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsProne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsProne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsAiming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsAiming_SetBit(void* Obj)
	{
		((UFPSCharacterMovementComponent*)Obj)->bWantsAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsAiming = { "bWantsAiming", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSCharacterMovementComponent), &Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsClimb_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsClimb_SetBit(void* Obj)
	{
		((UFPSCharacterMovementComponent*)Obj)->bWantsClimb = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsClimb = { "bWantsClimb", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSCharacterMovementComponent), &Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsClimb_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsClimb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsClimb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_MovementSpeedMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_MovementSpeedMultiplier = { "MovementSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSCharacterMovementComponent, MovementSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_MovementSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_MovementSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ItemIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/FPSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSCharacterMovementComponent, ItemIndex), nullptr, METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ItemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ItemIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_MaxWalkSpeedSprinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ClimbMovementSpeedUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ClimbMovementSpeedDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_MaxClimbEnterVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ClimbingFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ClimbingBrakingDeceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_MaxMovementSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_FPSCharacterOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsSprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsProne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_bWantsClimb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_MovementSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::NewProp_ItemIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSCharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::ClassParams = {
		&UFPSCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFPSCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFPSCharacterMovementComponent, 1234858541);
	template<> FPSCONTROLLER_API UClass* StaticClass<UFPSCharacterMovementComponent>()
	{
		return UFPSCharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFPSCharacterMovementComponent(Z_Construct_UClass_UFPSCharacterMovementComponent, &UFPSCharacterMovementComponent::StaticClass, TEXT("/Script/FPSController"), TEXT("UFPSCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
