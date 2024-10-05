// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayObjectives/Public/ObjectiveAsyncAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectiveAsyncAction() {}
// Cross Module References
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UObjectiveAsyncAction_NoRegister();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UObjectiveAsyncAction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_GameplayObjectives();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UObjective_NoRegister();
	GAMEPLAYOBJECTIVES_API UFunction* Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveAsyncOutputPin__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UObjectiveAsyncAction::execObjectiveActivated)
	{
		P_GET_OBJECT(UObjective,Z_Param_Objective);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ObjectiveActivated(Z_Param_Objective);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectiveAsyncAction::execObjectiveCompleted)
	{
		P_GET_OBJECT(UObjective,Z_Param_Objective);
		P_GET_UBOOL(Z_Param_bSucceded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ObjectiveCompleted(Z_Param_Objective,Z_Param_bSucceded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectiveAsyncAction::execObjectiveDeactivated)
	{
		P_GET_OBJECT(UObjective,Z_Param_Objective);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ObjectiveDeactivated(Z_Param_Objective);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectiveAsyncAction::execObjectiveEvents)
	{
		P_GET_OBJECT(UObjective,Z_Param_InObjective);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObjectiveAsyncAction**)Z_Param__Result=UObjectiveAsyncAction::ObjectiveEvents(Z_Param_InObjective);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectiveAsyncAction::execObjectiveReset)
	{
		P_GET_OBJECT(UObjective,Z_Param_Objective);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ObjectiveReset(Z_Param_Objective);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectiveAsyncAction::execObjectiveStarted)
	{
		P_GET_OBJECT(UObjective,Z_Param_Objective);
		P_GET_UBOOL(Z_Param_bWasStarted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ObjectiveStarted(Z_Param_Objective,Z_Param_bWasStarted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectiveAsyncAction::execObjectiveStopped)
	{
		P_GET_OBJECT(UObjective,Z_Param_Objective);
		P_GET_UBOOL(Z_Param_bWasStarted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ObjectiveStopped(Z_Param_Objective,Z_Param_bWasStarted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectiveAsyncAction::execObjectiveUpdated)
	{
		P_GET_OBJECT(UObjective,Z_Param_Objective);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ObjectiveUpdated(Z_Param_Objective);
		P_NATIVE_END;
	}
	void UObjectiveAsyncAction::StaticRegisterNativesUObjectiveAsyncAction()
	{
		UClass* Class = UObjectiveAsyncAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ObjectiveActivated", &UObjectiveAsyncAction::execObjectiveActivated },
			{ "ObjectiveCompleted", &UObjectiveAsyncAction::execObjectiveCompleted },
			{ "ObjectiveDeactivated", &UObjectiveAsyncAction::execObjectiveDeactivated },
			{ "ObjectiveEvents", &UObjectiveAsyncAction::execObjectiveEvents },
			{ "ObjectiveReset", &UObjectiveAsyncAction::execObjectiveReset },
			{ "ObjectiveStarted", &UObjectiveAsyncAction::execObjectiveStarted },
			{ "ObjectiveStopped", &UObjectiveAsyncAction::execObjectiveStopped },
			{ "ObjectiveUpdated", &UObjectiveAsyncAction::execObjectiveUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveActivated_Statics
	{
		struct ObjectiveAsyncAction_eventObjectiveActivated_Parms
		{
			UObjective* Objective;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveActivated_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveAsyncAction_eventObjectiveActivated_Parms, Objective), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveActivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveActivated_Statics::NewProp_Objective,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveAsyncAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveAsyncAction, nullptr, "ObjectiveActivated", nullptr, nullptr, sizeof(ObjectiveAsyncAction_eventObjectiveActivated_Parms), Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveCompleted_Statics
	{
		struct ObjectiveAsyncAction_eventObjectiveCompleted_Parms
		{
			UObjective* Objective;
			bool bSucceded;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
		static void NewProp_bSucceded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSucceded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveCompleted_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveAsyncAction_eventObjectiveCompleted_Parms, Objective), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveCompleted_Statics::NewProp_bSucceded_SetBit(void* Obj)
	{
		((ObjectiveAsyncAction_eventObjectiveCompleted_Parms*)Obj)->bSucceded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveCompleted_Statics::NewProp_bSucceded = { "bSucceded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ObjectiveAsyncAction_eventObjectiveCompleted_Parms), &Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveCompleted_Statics::NewProp_bSucceded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveCompleted_Statics::NewProp_Objective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveCompleted_Statics::NewProp_bSucceded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveAsyncAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveAsyncAction, nullptr, "ObjectiveCompleted", nullptr, nullptr, sizeof(ObjectiveAsyncAction_eventObjectiveCompleted_Parms), Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveDeactivated_Statics
	{
		struct ObjectiveAsyncAction_eventObjectiveDeactivated_Parms
		{
			UObjective* Objective;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveDeactivated_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveAsyncAction_eventObjectiveDeactivated_Parms, Objective), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveDeactivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveDeactivated_Statics::NewProp_Objective,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveDeactivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveAsyncAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveDeactivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveAsyncAction, nullptr, "ObjectiveDeactivated", nullptr, nullptr, sizeof(ObjectiveAsyncAction_eventObjectiveDeactivated_Parms), Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveDeactivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveDeactivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveDeactivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveDeactivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveDeactivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveDeactivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveEvents_Statics
	{
		struct ObjectiveAsyncAction_eventObjectiveEvents_Parms
		{
			UObjective* InObjective;
			UObjectiveAsyncAction* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InObjective;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveEvents_Statics::NewProp_InObjective = { "InObjective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveAsyncAction_eventObjectiveEvents_Parms, InObjective), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveAsyncAction_eventObjectiveEvents_Parms, ReturnValue), Z_Construct_UClass_UObjectiveAsyncAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveEvents_Statics::NewProp_InObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveEvents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveEvents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveAsyncAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveAsyncAction, nullptr, "ObjectiveEvents", nullptr, nullptr, sizeof(ObjectiveAsyncAction_eventObjectiveEvents_Parms), Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveReset_Statics
	{
		struct ObjectiveAsyncAction_eventObjectiveReset_Parms
		{
			UObjective* Objective;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveReset_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveAsyncAction_eventObjectiveReset_Parms, Objective), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveReset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveReset_Statics::NewProp_Objective,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveReset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveAsyncAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveAsyncAction, nullptr, "ObjectiveReset", nullptr, nullptr, sizeof(ObjectiveAsyncAction_eventObjectiveReset_Parms), Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveReset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveReset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStarted_Statics
	{
		struct ObjectiveAsyncAction_eventObjectiveStarted_Parms
		{
			UObjective* Objective;
			bool bWasStarted;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
		static void NewProp_bWasStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasStarted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStarted_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveAsyncAction_eventObjectiveStarted_Parms, Objective), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStarted_Statics::NewProp_bWasStarted_SetBit(void* Obj)
	{
		((ObjectiveAsyncAction_eventObjectiveStarted_Parms*)Obj)->bWasStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStarted_Statics::NewProp_bWasStarted = { "bWasStarted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ObjectiveAsyncAction_eventObjectiveStarted_Parms), &Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStarted_Statics::NewProp_bWasStarted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStarted_Statics::NewProp_Objective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStarted_Statics::NewProp_bWasStarted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveAsyncAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveAsyncAction, nullptr, "ObjectiveStarted", nullptr, nullptr, sizeof(ObjectiveAsyncAction_eventObjectiveStarted_Parms), Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStopped_Statics
	{
		struct ObjectiveAsyncAction_eventObjectiveStopped_Parms
		{
			UObjective* Objective;
			bool bWasStarted;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
		static void NewProp_bWasStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasStarted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStopped_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveAsyncAction_eventObjectiveStopped_Parms, Objective), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStopped_Statics::NewProp_bWasStarted_SetBit(void* Obj)
	{
		((ObjectiveAsyncAction_eventObjectiveStopped_Parms*)Obj)->bWasStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStopped_Statics::NewProp_bWasStarted = { "bWasStarted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ObjectiveAsyncAction_eventObjectiveStopped_Parms), &Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStopped_Statics::NewProp_bWasStarted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStopped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStopped_Statics::NewProp_Objective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStopped_Statics::NewProp_bWasStarted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStopped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveAsyncAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveAsyncAction, nullptr, "ObjectiveStopped", nullptr, nullptr, sizeof(ObjectiveAsyncAction_eventObjectiveStopped_Parms), Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStopped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveUpdated_Statics
	{
		struct ObjectiveAsyncAction_eventObjectiveUpdated_Parms
		{
			UObjective* Objective;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveUpdated_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveAsyncAction_eventObjectiveUpdated_Parms, Objective), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveUpdated_Statics::NewProp_Objective,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveAsyncAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveAsyncAction, nullptr, "ObjectiveUpdated", nullptr, nullptr, sizeof(ObjectiveAsyncAction_eventObjectiveUpdated_Parms), Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UObjectiveAsyncAction_NoRegister()
	{
		return UObjectiveAsyncAction::StaticClass();
	}
	struct Z_Construct_UClass_UObjectiveAsyncAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentObjective_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentObjective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Activated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Activated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deactivated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Deactivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Succeeded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Succeeded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Updated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Updated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Started_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Started;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stopped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Stopped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reset_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Reset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectiveAsyncAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayObjectives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObjectiveAsyncAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveActivated, "ObjectiveActivated" }, // 1698069815
		{ &Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveCompleted, "ObjectiveCompleted" }, // 3139248879
		{ &Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveDeactivated, "ObjectiveDeactivated" }, // 188135121
		{ &Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveEvents, "ObjectiveEvents" }, // 2651588178
		{ &Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveReset, "ObjectiveReset" }, // 2618243402
		{ &Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStarted, "ObjectiveStarted" }, // 340367666
		{ &Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveStopped, "ObjectiveStopped" }, // 3875724466
		{ &Z_Construct_UFunction_UObjectiveAsyncAction_ObjectiveUpdated, "ObjectiveUpdated" }, // 352161199
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveAsyncAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ObjectiveAsyncAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ObjectiveAsyncAction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_CurrentObjective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveAsyncAction" },
		{ "ModuleRelativePath", "Public/ObjectiveAsyncAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_CurrentObjective = { "CurrentObjective", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectiveAsyncAction, CurrentObjective), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_CurrentObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_CurrentObjective_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Activated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveAsyncAction" },
		{ "ModuleRelativePath", "Public/ObjectiveAsyncAction.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Activated = { "Activated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectiveAsyncAction, Activated), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveAsyncOutputPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Activated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Activated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Deactivated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveAsyncAction" },
		{ "ModuleRelativePath", "Public/ObjectiveAsyncAction.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Deactivated = { "Deactivated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectiveAsyncAction, Deactivated), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveAsyncOutputPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Deactivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Deactivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Succeeded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveAsyncAction" },
		{ "ModuleRelativePath", "Public/ObjectiveAsyncAction.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Succeeded = { "Succeeded", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectiveAsyncAction, Succeeded), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveAsyncOutputPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Succeeded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Succeeded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Failed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveAsyncAction" },
		{ "ModuleRelativePath", "Public/ObjectiveAsyncAction.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectiveAsyncAction, Failed), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveAsyncOutputPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Failed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Failed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Updated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveAsyncAction" },
		{ "ModuleRelativePath", "Public/ObjectiveAsyncAction.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Updated = { "Updated", nullptr, (EPropertyFlags)0x0010040010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectiveAsyncAction, Updated), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveAsyncOutputPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Updated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Updated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Started_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveAsyncAction" },
		{ "ModuleRelativePath", "Public/ObjectiveAsyncAction.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Started = { "Started", nullptr, (EPropertyFlags)0x0010040010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectiveAsyncAction, Started), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveAsyncOutputPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Started_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Started_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Stopped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveAsyncAction" },
		{ "ModuleRelativePath", "Public/ObjectiveAsyncAction.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Stopped = { "Stopped", nullptr, (EPropertyFlags)0x0010040010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectiveAsyncAction, Stopped), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveAsyncOutputPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Stopped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Stopped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Reset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveAsyncAction" },
		{ "ModuleRelativePath", "Public/ObjectiveAsyncAction.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Reset = { "Reset", nullptr, (EPropertyFlags)0x0010040010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectiveAsyncAction, Reset), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveAsyncOutputPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Reset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Reset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectiveAsyncAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_CurrentObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Activated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Deactivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Succeeded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Failed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Updated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Started,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Stopped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveAsyncAction_Statics::NewProp_Reset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectiveAsyncAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectiveAsyncAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectiveAsyncAction_Statics::ClassParams = {
		&UObjectiveAsyncAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UObjectiveAsyncAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveAsyncAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectiveAsyncAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveAsyncAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectiveAsyncAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectiveAsyncAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectiveAsyncAction, 150159028);
	template<> GAMEPLAYOBJECTIVES_API UClass* StaticClass<UObjectiveAsyncAction>()
	{
		return UObjectiveAsyncAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectiveAsyncAction(Z_Construct_UClass_UObjectiveAsyncAction, &UObjectiveAsyncAction::StaticClass, TEXT("/Script/GameplayObjectives"), TEXT("UObjectiveAsyncAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectiveAsyncAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
