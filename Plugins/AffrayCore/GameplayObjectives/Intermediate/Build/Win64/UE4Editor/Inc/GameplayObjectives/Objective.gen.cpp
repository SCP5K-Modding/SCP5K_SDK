// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayObjectives/Public/Objective.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjective() {}
// Cross Module References
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UObjective_NoRegister();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UObjective();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GameplayObjectives();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_AObjectiveManager_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYOBJECTIVES_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleObjectiveData();
	GAMEPLAYOBJECTIVES_API UFunction* Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveActivatedDelegate__DelegateSignature();
	GAMEPLAYOBJECTIVES_API UFunction* Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveDeactivatedDelegate__DelegateSignature();
	GAMEPLAYOBJECTIVES_API UFunction* Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveStartedDelegate__DelegateSignature();
	GAMEPLAYOBJECTIVES_API UFunction* Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveCompletedDelegate__DelegateSignature();
	GAMEPLAYOBJECTIVES_API UFunction* Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveUpdatedDelegate__DelegateSignature();
	GAMEPLAYOBJECTIVES_API UFunction* Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveResetDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UObjective::execActivateObjective)
	{
		P_GET_UBOOL(Z_Param_bStart);
		P_GET_UBOOL(Z_Param_bShouldDisplayOnUI);
		P_GET_UBOOL(Z_Param_bReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateObjective(Z_Param_bStart,Z_Param_bShouldDisplayOnUI,Z_Param_bReset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execAddChildObjective)
	{
		P_GET_OBJECT(UObjective,Z_Param_Child);
		P_GET_UBOOL(Z_Param_AutoActivate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddChildObjective(Z_Param_Child,Z_Param_AutoActivate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execAddObjective)
	{
		P_GET_OBJECT(AObjectiveManager,Z_Param_ObjectiveManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddObjective(Z_Param_ObjectiveManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execCheckRequirements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckRequirements();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execChildrenAreCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChildrenAreCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execCompleteObjective)
	{
		P_GET_UBOOL(Z_Param_bSucceed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CompleteObjective(Z_Param_bSucceed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execCreateEmptyObjective)
	{
		P_GET_OBJECT(UClass,Z_Param_ObjectiveClass);
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FTextProperty,Z_Param_DisplayName);
		P_GET_PROPERTY(FTextProperty,Z_Param_Description);
		P_GET_UBOOL(Z_Param_bShouldUseTimer);
		P_GET_UBOOL(Z_Param_bTimerShouldSucceed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimerLength);
		P_GET_UBOOL(Z_Param_bShouldAutoActivateWithParent);
		P_GET_UBOOL(Z_Param_bMajorObjective);
		P_GET_UBOOL(Z_Param_bShouldStartChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObjective**)Z_Param__Result=UObjective::CreateEmptyObjective(Z_Param_ObjectiveClass,Z_Param_Outer,Z_Param_Name,Z_Param_DisplayName,Z_Param_Description,Z_Param_bShouldUseTimer,Z_Param_bTimerShouldSucceed,Z_Param_TimerLength,Z_Param_bShouldAutoActivateWithParent,Z_Param_bMajorObjective,Z_Param_bShouldStartChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execDeactivateObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateObjective();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Destroy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execGetActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execGetAutoActivateWithParent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAutoActivateWithParent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execGetChildObjective)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ChildObjectiveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObjective**)Z_Param__Result=P_THIS->GetChildObjective(Z_Param_ChildObjectiveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execGetCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execGetCurrentTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execGetDisplayOnUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDisplayOnUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execGetIsMajorObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsMajorObjective();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execGetMaxTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execGetObjectiveDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetObjectiveDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execGetObjectiveDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetObjectiveDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execGetObjectiveName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetObjectiveName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execGetOwningActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwningActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execGetParent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObjective**)Z_Param__Result=P_THIS->GetParent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execGetStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execGetSucceeded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSucceeded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execGetTimerSucceeds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTimerSucceeds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execGetUsesTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUsesTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execInitializeObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeObjective();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execOnRep_bActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execOnRep_bCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execOnRep_bStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execOnRep_ObjectiveName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ObjectiveName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execPreviousObjectiveCompleted)
	{
		P_GET_OBJECT(UObjective,Z_Param_Objective);
		P_GET_UBOOL(Z_Param_bInSucceeded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviousObjectiveCompleted(Z_Param_Objective,Z_Param_bInSucceeded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execRemoveChildObjective)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ChildObjectiveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveChildObjective(Z_Param_ChildObjectiveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execResetObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetObjective();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execSetupFromSimpleObjectiveData)
	{
		P_GET_STRUCT_REF(FSimpleObjectiveData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupFromSimpleObjectiveData(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execSetupSimpleObjectiveData)
	{
		P_GET_STRUCT_REF(FSimpleObjectiveData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupSimpleObjectiveData(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execStartObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartObjective();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execStopObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopObjective();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjective::execUpdateObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateObjective();
		P_NATIVE_END;
	}
	void UObjective::StaticRegisterNativesUObjective()
	{
		UClass* Class = UObjective::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateObjective", &UObjective::execActivateObjective },
			{ "AddChildObjective", &UObjective::execAddChildObjective },
			{ "AddObjective", &UObjective::execAddObjective },
			{ "CheckRequirements", &UObjective::execCheckRequirements },
			{ "ChildrenAreCompleted", &UObjective::execChildrenAreCompleted },
			{ "CompleteObjective", &UObjective::execCompleteObjective },
			{ "CreateEmptyObjective", &UObjective::execCreateEmptyObjective },
			{ "DeactivateObjective", &UObjective::execDeactivateObjective },
			{ "Destroy", &UObjective::execDestroy },
			{ "GetActive", &UObjective::execGetActive },
			{ "GetAutoActivateWithParent", &UObjective::execGetAutoActivateWithParent },
			{ "GetChildObjective", &UObjective::execGetChildObjective },
			{ "GetCompleted", &UObjective::execGetCompleted },
			{ "GetCurrentTime", &UObjective::execGetCurrentTime },
			{ "GetDisplayOnUI", &UObjective::execGetDisplayOnUI },
			{ "GetIsMajorObjective", &UObjective::execGetIsMajorObjective },
			{ "GetMaxTime", &UObjective::execGetMaxTime },
			{ "GetObjectiveDescription", &UObjective::execGetObjectiveDescription },
			{ "GetObjectiveDisplayName", &UObjective::execGetObjectiveDisplayName },
			{ "GetObjectiveName", &UObjective::execGetObjectiveName },
			{ "GetOwningActor", &UObjective::execGetOwningActor },
			{ "GetParent", &UObjective::execGetParent },
			{ "GetStarted", &UObjective::execGetStarted },
			{ "GetSucceeded", &UObjective::execGetSucceeded },
			{ "GetTimerSucceeds", &UObjective::execGetTimerSucceeds },
			{ "GetUsesTimer", &UObjective::execGetUsesTimer },
			{ "InitializeObjective", &UObjective::execInitializeObjective },
			{ "OnRep_bActive", &UObjective::execOnRep_bActive },
			{ "OnRep_bCompleted", &UObjective::execOnRep_bCompleted },
			{ "OnRep_bStarted", &UObjective::execOnRep_bStarted },
			{ "OnRep_ObjectiveName", &UObjective::execOnRep_ObjectiveName },
			{ "PreviousObjectiveCompleted", &UObjective::execPreviousObjectiveCompleted },
			{ "RemoveChildObjective", &UObjective::execRemoveChildObjective },
			{ "ResetObjective", &UObjective::execResetObjective },
			{ "SetupFromSimpleObjectiveData", &UObjective::execSetupFromSimpleObjectiveData },
			{ "SetupSimpleObjectiveData", &UObjective::execSetupSimpleObjectiveData },
			{ "StartObjective", &UObjective::execStartObjective },
			{ "StopObjective", &UObjective::execStopObjective },
			{ "UpdateObjective", &UObjective::execUpdateObjective },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UObjective_ActivateObjective_Statics
	{
		struct Objective_eventActivateObjective_Parms
		{
			bool bStart;
			bool bShouldDisplayOnUI;
			bool bReset;
		};
		static void NewProp_bStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStart;
		static void NewProp_bShouldDisplayOnUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldDisplayOnUI;
		static void NewProp_bReset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UObjective_ActivateObjective_Statics::NewProp_bStart_SetBit(void* Obj)
	{
		((Objective_eventActivateObjective_Parms*)Obj)->bStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_ActivateObjective_Statics::NewProp_bStart = { "bStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventActivateObjective_Parms), &Z_Construct_UFunction_UObjective_ActivateObjective_Statics::NewProp_bStart_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UObjective_ActivateObjective_Statics::NewProp_bShouldDisplayOnUI_SetBit(void* Obj)
	{
		((Objective_eventActivateObjective_Parms*)Obj)->bShouldDisplayOnUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_ActivateObjective_Statics::NewProp_bShouldDisplayOnUI = { "bShouldDisplayOnUI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventActivateObjective_Parms), &Z_Construct_UFunction_UObjective_ActivateObjective_Statics::NewProp_bShouldDisplayOnUI_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UObjective_ActivateObjective_Statics::NewProp_bReset_SetBit(void* Obj)
	{
		((Objective_eventActivateObjective_Parms*)Obj)->bReset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_ActivateObjective_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventActivateObjective_Parms), &Z_Construct_UFunction_UObjective_ActivateObjective_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_ActivateObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_ActivateObjective_Statics::NewProp_bStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_ActivateObjective_Statics::NewProp_bShouldDisplayOnUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_ActivateObjective_Statics::NewProp_bReset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_ActivateObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_ActivateObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "ActivateObjective", nullptr, nullptr, sizeof(Objective_eventActivateObjective_Parms), Z_Construct_UFunction_UObjective_ActivateObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_ActivateObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_ActivateObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_ActivateObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_ActivateObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_ActivateObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_AddChildObjective_Statics
	{
		struct Objective_eventAddChildObjective_Parms
		{
			UObjective* Child;
			bool AutoActivate;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Child;
		static void NewProp_AutoActivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoActivate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjective_AddChildObjective_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventAddChildObjective_Parms, Child), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UObjective_AddChildObjective_Statics::NewProp_AutoActivate_SetBit(void* Obj)
	{
		((Objective_eventAddChildObjective_Parms*)Obj)->AutoActivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_AddChildObjective_Statics::NewProp_AutoActivate = { "AutoActivate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventAddChildObjective_Parms), &Z_Construct_UFunction_UObjective_AddChildObjective_Statics::NewProp_AutoActivate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_AddChildObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_AddChildObjective_Statics::NewProp_Child,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_AddChildObjective_Statics::NewProp_AutoActivate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_AddChildObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_AddChildObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "AddChildObjective", nullptr, nullptr, sizeof(Objective_eventAddChildObjective_Parms), Z_Construct_UFunction_UObjective_AddChildObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_AddChildObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_AddChildObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_AddChildObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_AddChildObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_AddChildObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_AddObjective_Statics
	{
		struct Objective_eventAddObjective_Parms
		{
			AObjectiveManager* ObjectiveManager;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectiveManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjective_AddObjective_Statics::NewProp_ObjectiveManager = { "ObjectiveManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventAddObjective_Parms, ObjectiveManager), Z_Construct_UClass_AObjectiveManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_AddObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_AddObjective_Statics::NewProp_ObjectiveManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_AddObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_AddObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "AddObjective", nullptr, nullptr, sizeof(Objective_eventAddObjective_Parms), Z_Construct_UFunction_UObjective_AddObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_AddObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_AddObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_AddObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_AddObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_AddObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_CheckRequirements_Statics
	{
		struct Objective_eventCheckRequirements_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UObjective_CheckRequirements_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Objective_eventCheckRequirements_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_CheckRequirements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventCheckRequirements_Parms), &Z_Construct_UFunction_UObjective_CheckRequirements_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_CheckRequirements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_CheckRequirements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_CheckRequirements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_CheckRequirements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "CheckRequirements", nullptr, nullptr, sizeof(Objective_eventCheckRequirements_Parms), Z_Construct_UFunction_UObjective_CheckRequirements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_CheckRequirements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_CheckRequirements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_CheckRequirements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_CheckRequirements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_CheckRequirements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_ChildrenAreCompleted_Statics
	{
		struct Objective_eventChildrenAreCompleted_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UObjective_ChildrenAreCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Objective_eventChildrenAreCompleted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_ChildrenAreCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventChildrenAreCompleted_Parms), &Z_Construct_UFunction_UObjective_ChildrenAreCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_ChildrenAreCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_ChildrenAreCompleted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_ChildrenAreCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_ChildrenAreCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "ChildrenAreCompleted", nullptr, nullptr, sizeof(Objective_eventChildrenAreCompleted_Parms), Z_Construct_UFunction_UObjective_ChildrenAreCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_ChildrenAreCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_ChildrenAreCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_ChildrenAreCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_ChildrenAreCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_ChildrenAreCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_CompleteObjective_Statics
	{
		struct Objective_eventCompleteObjective_Parms
		{
			bool bSucceed;
			bool ReturnValue;
		};
		static void NewProp_bSucceed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSucceed;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UObjective_CompleteObjective_Statics::NewProp_bSucceed_SetBit(void* Obj)
	{
		((Objective_eventCompleteObjective_Parms*)Obj)->bSucceed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_CompleteObjective_Statics::NewProp_bSucceed = { "bSucceed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventCompleteObjective_Parms), &Z_Construct_UFunction_UObjective_CompleteObjective_Statics::NewProp_bSucceed_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UObjective_CompleteObjective_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Objective_eventCompleteObjective_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_CompleteObjective_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventCompleteObjective_Parms), &Z_Construct_UFunction_UObjective_CompleteObjective_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_CompleteObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_CompleteObjective_Statics::NewProp_bSucceed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_CompleteObjective_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_CompleteObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_CompleteObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "CompleteObjective", nullptr, nullptr, sizeof(Objective_eventCompleteObjective_Parms), Z_Construct_UFunction_UObjective_CompleteObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_CompleteObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_CompleteObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_CompleteObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_CompleteObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_CompleteObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics
	{
		struct Objective_eventCreateEmptyObjective_Parms
		{
			TSubclassOf<UObjective>  ObjectiveClass;
			UObject* Outer;
			FName Name;
			FText DisplayName;
			FText Description;
			bool bShouldUseTimer;
			bool bTimerShouldSucceed;
			float TimerLength;
			bool bShouldAutoActivateWithParent;
			bool bMajorObjective;
			bool bShouldStartChildren;
			UObjective* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectiveClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
		static void NewProp_bShouldUseTimer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldUseTimer;
		static void NewProp_bTimerShouldSucceed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTimerShouldSucceed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimerLength;
		static void NewProp_bShouldAutoActivateWithParent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldAutoActivateWithParent;
		static void NewProp_bMajorObjective_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMajorObjective;
		static void NewProp_bShouldStartChildren_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldStartChildren;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_ObjectiveClass = { "ObjectiveClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventCreateEmptyObjective_Parms, ObjectiveClass), Z_Construct_UClass_UObjective_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventCreateEmptyObjective_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventCreateEmptyObjective_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventCreateEmptyObjective_Parms, DisplayName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventCreateEmptyObjective_Parms, Description), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_bShouldUseTimer_SetBit(void* Obj)
	{
		((Objective_eventCreateEmptyObjective_Parms*)Obj)->bShouldUseTimer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_bShouldUseTimer = { "bShouldUseTimer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventCreateEmptyObjective_Parms), &Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_bShouldUseTimer_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_bTimerShouldSucceed_SetBit(void* Obj)
	{
		((Objective_eventCreateEmptyObjective_Parms*)Obj)->bTimerShouldSucceed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_bTimerShouldSucceed = { "bTimerShouldSucceed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventCreateEmptyObjective_Parms), &Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_bTimerShouldSucceed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_TimerLength = { "TimerLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventCreateEmptyObjective_Parms, TimerLength), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_bShouldAutoActivateWithParent_SetBit(void* Obj)
	{
		((Objective_eventCreateEmptyObjective_Parms*)Obj)->bShouldAutoActivateWithParent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_bShouldAutoActivateWithParent = { "bShouldAutoActivateWithParent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventCreateEmptyObjective_Parms), &Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_bShouldAutoActivateWithParent_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_bMajorObjective_SetBit(void* Obj)
	{
		((Objective_eventCreateEmptyObjective_Parms*)Obj)->bMajorObjective = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_bMajorObjective = { "bMajorObjective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventCreateEmptyObjective_Parms), &Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_bMajorObjective_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_bShouldStartChildren_SetBit(void* Obj)
	{
		((Objective_eventCreateEmptyObjective_Parms*)Obj)->bShouldStartChildren = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_bShouldStartChildren = { "bShouldStartChildren", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventCreateEmptyObjective_Parms), &Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_bShouldStartChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventCreateEmptyObjective_Parms, ReturnValue), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_ObjectiveClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_bShouldUseTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_bTimerShouldSucceed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_TimerLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_bShouldAutoActivateWithParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_bMajorObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_bShouldStartChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "CreateEmptyObjective", nullptr, nullptr, sizeof(Objective_eventCreateEmptyObjective_Parms), Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_CreateEmptyObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_CreateEmptyObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_DeactivateObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_DeactivateObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_DeactivateObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "DeactivateObjective", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_DeactivateObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_DeactivateObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_DeactivateObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_DeactivateObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_Destroy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_Destroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_Destroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "Destroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_Destroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_Destroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_Destroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_Destroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_GetActive_Statics
	{
		struct Objective_eventGetActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UObjective_GetActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Objective_eventGetActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_GetActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventGetActive_Parms), &Z_Construct_UFunction_UObjective_GetActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_GetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_GetActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_GetActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_GetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "GetActive", nullptr, nullptr, sizeof(Objective_eventGetActive_Parms), Z_Construct_UFunction_UObjective_GetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_GetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_GetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_GetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_GetAutoActivateWithParent_Statics
	{
		struct Objective_eventGetAutoActivateWithParent_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UObjective_GetAutoActivateWithParent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Objective_eventGetAutoActivateWithParent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_GetAutoActivateWithParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventGetAutoActivateWithParent_Parms), &Z_Construct_UFunction_UObjective_GetAutoActivateWithParent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_GetAutoActivateWithParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_GetAutoActivateWithParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_GetAutoActivateWithParent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_GetAutoActivateWithParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "GetAutoActivateWithParent", nullptr, nullptr, sizeof(Objective_eventGetAutoActivateWithParent_Parms), Z_Construct_UFunction_UObjective_GetAutoActivateWithParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetAutoActivateWithParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_GetAutoActivateWithParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetAutoActivateWithParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_GetAutoActivateWithParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_GetAutoActivateWithParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_GetChildObjective_Statics
	{
		struct Objective_eventGetChildObjective_Parms
		{
			FName ChildObjectiveName;
			UObjective* ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ChildObjectiveName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UObjective_GetChildObjective_Statics::NewProp_ChildObjectiveName = { "ChildObjectiveName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventGetChildObjective_Parms, ChildObjectiveName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjective_GetChildObjective_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventGetChildObjective_Parms, ReturnValue), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_GetChildObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_GetChildObjective_Statics::NewProp_ChildObjectiveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_GetChildObjective_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_GetChildObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_GetChildObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "GetChildObjective", nullptr, nullptr, sizeof(Objective_eventGetChildObjective_Parms), Z_Construct_UFunction_UObjective_GetChildObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetChildObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_GetChildObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetChildObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_GetChildObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_GetChildObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_GetCompleted_Statics
	{
		struct Objective_eventGetCompleted_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UObjective_GetCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Objective_eventGetCompleted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_GetCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventGetCompleted_Parms), &Z_Construct_UFunction_UObjective_GetCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_GetCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_GetCompleted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_GetCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_GetCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "GetCompleted", nullptr, nullptr, sizeof(Objective_eventGetCompleted_Parms), Z_Construct_UFunction_UObjective_GetCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_GetCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_GetCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_GetCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_GetCurrentTime_Statics
	{
		struct Objective_eventGetCurrentTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UObjective_GetCurrentTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventGetCurrentTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_GetCurrentTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_GetCurrentTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_GetCurrentTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_GetCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "GetCurrentTime", nullptr, nullptr, sizeof(Objective_eventGetCurrentTime_Parms), Z_Construct_UFunction_UObjective_GetCurrentTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetCurrentTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_GetCurrentTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetCurrentTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_GetCurrentTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_GetCurrentTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_GetDisplayOnUI_Statics
	{
		struct Objective_eventGetDisplayOnUI_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UObjective_GetDisplayOnUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Objective_eventGetDisplayOnUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_GetDisplayOnUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventGetDisplayOnUI_Parms), &Z_Construct_UFunction_UObjective_GetDisplayOnUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_GetDisplayOnUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_GetDisplayOnUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_GetDisplayOnUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_GetDisplayOnUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "GetDisplayOnUI", nullptr, nullptr, sizeof(Objective_eventGetDisplayOnUI_Parms), Z_Construct_UFunction_UObjective_GetDisplayOnUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetDisplayOnUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_GetDisplayOnUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetDisplayOnUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_GetDisplayOnUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_GetDisplayOnUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_GetIsMajorObjective_Statics
	{
		struct Objective_eventGetIsMajorObjective_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UObjective_GetIsMajorObjective_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Objective_eventGetIsMajorObjective_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_GetIsMajorObjective_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventGetIsMajorObjective_Parms), &Z_Construct_UFunction_UObjective_GetIsMajorObjective_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_GetIsMajorObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_GetIsMajorObjective_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_GetIsMajorObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_GetIsMajorObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "GetIsMajorObjective", nullptr, nullptr, sizeof(Objective_eventGetIsMajorObjective_Parms), Z_Construct_UFunction_UObjective_GetIsMajorObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetIsMajorObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_GetIsMajorObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetIsMajorObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_GetIsMajorObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_GetIsMajorObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_GetMaxTime_Statics
	{
		struct Objective_eventGetMaxTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UObjective_GetMaxTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventGetMaxTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_GetMaxTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_GetMaxTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_GetMaxTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_GetMaxTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "GetMaxTime", nullptr, nullptr, sizeof(Objective_eventGetMaxTime_Parms), Z_Construct_UFunction_UObjective_GetMaxTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetMaxTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_GetMaxTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetMaxTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_GetMaxTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_GetMaxTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_GetObjectiveDescription_Statics
	{
		struct Objective_eventGetObjectiveDescription_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UObjective_GetObjectiveDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventGetObjectiveDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_GetObjectiveDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_GetObjectiveDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_GetObjectiveDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_GetObjectiveDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "GetObjectiveDescription", nullptr, nullptr, sizeof(Objective_eventGetObjectiveDescription_Parms), Z_Construct_UFunction_UObjective_GetObjectiveDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetObjectiveDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_GetObjectiveDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetObjectiveDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_GetObjectiveDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_GetObjectiveDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_GetObjectiveDisplayName_Statics
	{
		struct Objective_eventGetObjectiveDisplayName_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UObjective_GetObjectiveDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventGetObjectiveDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_GetObjectiveDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_GetObjectiveDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_GetObjectiveDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_GetObjectiveDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "GetObjectiveDisplayName", nullptr, nullptr, sizeof(Objective_eventGetObjectiveDisplayName_Parms), Z_Construct_UFunction_UObjective_GetObjectiveDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetObjectiveDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_GetObjectiveDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetObjectiveDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_GetObjectiveDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_GetObjectiveDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_GetObjectiveName_Statics
	{
		struct Objective_eventGetObjectiveName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UObjective_GetObjectiveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventGetObjectiveName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_GetObjectiveName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_GetObjectiveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_GetObjectiveName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_GetObjectiveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "GetObjectiveName", nullptr, nullptr, sizeof(Objective_eventGetObjectiveName_Parms), Z_Construct_UFunction_UObjective_GetObjectiveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetObjectiveName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_GetObjectiveName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetObjectiveName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_GetObjectiveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_GetObjectiveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_GetOwningActor_Statics
	{
		struct Objective_eventGetOwningActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjective_GetOwningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventGetOwningActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_GetOwningActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_GetOwningActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_GetOwningActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_GetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "GetOwningActor", nullptr, nullptr, sizeof(Objective_eventGetOwningActor_Parms), Z_Construct_UFunction_UObjective_GetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetOwningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_GetOwningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetOwningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_GetOwningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_GetOwningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_GetParent_Statics
	{
		struct Objective_eventGetParent_Parms
		{
			UObjective* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjective_GetParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventGetParent_Parms, ReturnValue), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_GetParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_GetParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_GetParent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_GetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "GetParent", nullptr, nullptr, sizeof(Objective_eventGetParent_Parms), Z_Construct_UFunction_UObjective_GetParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_GetParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_GetParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_GetParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_GetStarted_Statics
	{
		struct Objective_eventGetStarted_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UObjective_GetStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Objective_eventGetStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_GetStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventGetStarted_Parms), &Z_Construct_UFunction_UObjective_GetStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_GetStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_GetStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_GetStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_GetStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "GetStarted", nullptr, nullptr, sizeof(Objective_eventGetStarted_Parms), Z_Construct_UFunction_UObjective_GetStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_GetStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_GetStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_GetStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_GetSucceeded_Statics
	{
		struct Objective_eventGetSucceeded_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UObjective_GetSucceeded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Objective_eventGetSucceeded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_GetSucceeded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventGetSucceeded_Parms), &Z_Construct_UFunction_UObjective_GetSucceeded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_GetSucceeded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_GetSucceeded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_GetSucceeded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_GetSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "GetSucceeded", nullptr, nullptr, sizeof(Objective_eventGetSucceeded_Parms), Z_Construct_UFunction_UObjective_GetSucceeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetSucceeded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_GetSucceeded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetSucceeded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_GetSucceeded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_GetSucceeded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_GetTimerSucceeds_Statics
	{
		struct Objective_eventGetTimerSucceeds_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UObjective_GetTimerSucceeds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Objective_eventGetTimerSucceeds_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_GetTimerSucceeds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventGetTimerSucceeds_Parms), &Z_Construct_UFunction_UObjective_GetTimerSucceeds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_GetTimerSucceeds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_GetTimerSucceeds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_GetTimerSucceeds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_GetTimerSucceeds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "GetTimerSucceeds", nullptr, nullptr, sizeof(Objective_eventGetTimerSucceeds_Parms), Z_Construct_UFunction_UObjective_GetTimerSucceeds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetTimerSucceeds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_GetTimerSucceeds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetTimerSucceeds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_GetTimerSucceeds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_GetTimerSucceeds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_GetUsesTimer_Statics
	{
		struct Objective_eventGetUsesTimer_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UObjective_GetUsesTimer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Objective_eventGetUsesTimer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_GetUsesTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventGetUsesTimer_Parms), &Z_Construct_UFunction_UObjective_GetUsesTimer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_GetUsesTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_GetUsesTimer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_GetUsesTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_GetUsesTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "GetUsesTimer", nullptr, nullptr, sizeof(Objective_eventGetUsesTimer_Parms), Z_Construct_UFunction_UObjective_GetUsesTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetUsesTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_GetUsesTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_GetUsesTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_GetUsesTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_GetUsesTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_InitializeObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_InitializeObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_InitializeObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "InitializeObjective", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_InitializeObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_InitializeObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_InitializeObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_InitializeObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_OnRep_bActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_OnRep_bActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_OnRep_bActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "OnRep_bActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_OnRep_bActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_OnRep_bActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_OnRep_bActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_OnRep_bActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_OnRep_bCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_OnRep_bCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_OnRep_bCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "OnRep_bCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_OnRep_bCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_OnRep_bCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_OnRep_bCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_OnRep_bCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_OnRep_bStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_OnRep_bStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_OnRep_bStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "OnRep_bStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_OnRep_bStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_OnRep_bStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_OnRep_bStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_OnRep_bStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_OnRep_ObjectiveName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_OnRep_ObjectiveName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_OnRep_ObjectiveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "OnRep_ObjectiveName", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_OnRep_ObjectiveName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_OnRep_ObjectiveName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_OnRep_ObjectiveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_OnRep_ObjectiveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_PreviousObjectiveCompleted_Statics
	{
		struct Objective_eventPreviousObjectiveCompleted_Parms
		{
			UObjective* Objective;
			bool bInSucceeded;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
		static void NewProp_bInSucceeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInSucceeded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjective_PreviousObjectiveCompleted_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventPreviousObjectiveCompleted_Parms, Objective), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UObjective_PreviousObjectiveCompleted_Statics::NewProp_bInSucceeded_SetBit(void* Obj)
	{
		((Objective_eventPreviousObjectiveCompleted_Parms*)Obj)->bInSucceeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjective_PreviousObjectiveCompleted_Statics::NewProp_bInSucceeded = { "bInSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objective_eventPreviousObjectiveCompleted_Parms), &Z_Construct_UFunction_UObjective_PreviousObjectiveCompleted_Statics::NewProp_bInSucceeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_PreviousObjectiveCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_PreviousObjectiveCompleted_Statics::NewProp_Objective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_PreviousObjectiveCompleted_Statics::NewProp_bInSucceeded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_PreviousObjectiveCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_PreviousObjectiveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "PreviousObjectiveCompleted", nullptr, nullptr, sizeof(Objective_eventPreviousObjectiveCompleted_Parms), Z_Construct_UFunction_UObjective_PreviousObjectiveCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_PreviousObjectiveCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_PreviousObjectiveCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_PreviousObjectiveCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_PreviousObjectiveCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_PreviousObjectiveCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_RemoveChildObjective_Statics
	{
		struct Objective_eventRemoveChildObjective_Parms
		{
			FName ChildObjectiveName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ChildObjectiveName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UObjective_RemoveChildObjective_Statics::NewProp_ChildObjectiveName = { "ChildObjectiveName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventRemoveChildObjective_Parms, ChildObjectiveName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_RemoveChildObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_RemoveChildObjective_Statics::NewProp_ChildObjectiveName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_RemoveChildObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_RemoveChildObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "RemoveChildObjective", nullptr, nullptr, sizeof(Objective_eventRemoveChildObjective_Parms), Z_Construct_UFunction_UObjective_RemoveChildObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_RemoveChildObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_RemoveChildObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_RemoveChildObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_RemoveChildObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_RemoveChildObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_ResetObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_ResetObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_ResetObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "ResetObjective", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_ResetObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_ResetObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_ResetObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_ResetObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_SetupFromSimpleObjectiveData_Statics
	{
		struct Objective_eventSetupFromSimpleObjectiveData_Parms
		{
			FSimpleObjectiveData Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_SetupFromSimpleObjectiveData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UObjective_SetupFromSimpleObjectiveData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventSetupFromSimpleObjectiveData_Parms, Data), Z_Construct_UScriptStruct_FSimpleObjectiveData, METADATA_PARAMS(Z_Construct_UFunction_UObjective_SetupFromSimpleObjectiveData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_SetupFromSimpleObjectiveData_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_SetupFromSimpleObjectiveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_SetupFromSimpleObjectiveData_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_SetupFromSimpleObjectiveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_SetupFromSimpleObjectiveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "SetupFromSimpleObjectiveData", nullptr, nullptr, sizeof(Objective_eventSetupFromSimpleObjectiveData_Parms), Z_Construct_UFunction_UObjective_SetupFromSimpleObjectiveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_SetupFromSimpleObjectiveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_SetupFromSimpleObjectiveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_SetupFromSimpleObjectiveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_SetupFromSimpleObjectiveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_SetupFromSimpleObjectiveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_SetupSimpleObjectiveData_Statics
	{
		struct Objective_eventSetupSimpleObjectiveData_Parms
		{
			FSimpleObjectiveData Data;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UObjective_SetupSimpleObjectiveData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objective_eventSetupSimpleObjectiveData_Parms, Data), Z_Construct_UScriptStruct_FSimpleObjectiveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjective_SetupSimpleObjectiveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjective_SetupSimpleObjectiveData_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_SetupSimpleObjectiveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_SetupSimpleObjectiveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "SetupSimpleObjectiveData", nullptr, nullptr, sizeof(Objective_eventSetupSimpleObjectiveData_Parms), Z_Construct_UFunction_UObjective_SetupSimpleObjectiveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_SetupSimpleObjectiveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_SetupSimpleObjectiveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_SetupSimpleObjectiveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_SetupSimpleObjectiveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_SetupSimpleObjectiveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_StartObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_StartObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_StartObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "StartObjective", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_StartObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_StartObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_StartObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_StartObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_StopObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_StopObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_StopObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "StopObjective", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_StopObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_StopObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_StopObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_StopObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjective_UpdateObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjective_UpdateObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjective_UpdateObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjective, nullptr, "UpdateObjective", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjective_UpdateObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjective_UpdateObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjective_UpdateObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjective_UpdateObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UObjective_NoRegister()
	{
		return UObjective::StaticClass();
	}
	struct Z_Construct_UClass_UObjective_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStarted_MetaData[];
#endif
		static void NewProp_bStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenStarted_MetaData[];
#endif
		static void NewProp_bHasBeenStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompleted_MetaData[];
#endif
		static void NewProp_bCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSucceeded_MetaData[];
#endif
		static void NewProp_bSucceeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayOnUI_MetaData[];
#endif
		static void NewProp_bDisplayOnUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayOnUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectiveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ObjectiveDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ObjectiveDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMajorObjective_MetaData[];
#endif
		static void NewProp_bIsMajorObjective_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMajorObjective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTimer_MetaData[];
#endif
		static void NewProp_bUseTimer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTimerSucceeds_MetaData[];
#endif
		static void NewProp_bTimerSucceeds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTimerSucceeds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildObjectives_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildObjectives_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildObjectives;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoActivateWithParent_MetaData[];
#endif
		static void NewProp_bAutoActivateWithParent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoActivateWithParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartChildren_MetaData[];
#endif
		static void NewProp_bStartChildren_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartChildren;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompleteWithChildren_MetaData[];
#endif
		static void NewProp_bCompleteWithChildren_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompleteWithChildren;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousObjective_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousObjective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnObjectiveActivated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObjectiveActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnObjectiveDeactivated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObjectiveDeactivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnObjectiveStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObjectiveStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnObjectiveStopped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObjectiveStopped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnObjectiveCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObjectiveCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnObjectiveUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObjectiveUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnObjectiveReset_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObjectiveReset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjective_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayObjectives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObjective_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjective_ActivateObjective, "ActivateObjective" }, // 924890032
		{ &Z_Construct_UFunction_UObjective_AddChildObjective, "AddChildObjective" }, // 4055736862
		{ &Z_Construct_UFunction_UObjective_AddObjective, "AddObjective" }, // 2681221922
		{ &Z_Construct_UFunction_UObjective_CheckRequirements, "CheckRequirements" }, // 120962266
		{ &Z_Construct_UFunction_UObjective_ChildrenAreCompleted, "ChildrenAreCompleted" }, // 1737412960
		{ &Z_Construct_UFunction_UObjective_CompleteObjective, "CompleteObjective" }, // 874821958
		{ &Z_Construct_UFunction_UObjective_CreateEmptyObjective, "CreateEmptyObjective" }, // 1408136495
		{ &Z_Construct_UFunction_UObjective_DeactivateObjective, "DeactivateObjective" }, // 458700023
		{ &Z_Construct_UFunction_UObjective_Destroy, "Destroy" }, // 3220909201
		{ &Z_Construct_UFunction_UObjective_GetActive, "GetActive" }, // 2282232137
		{ &Z_Construct_UFunction_UObjective_GetAutoActivateWithParent, "GetAutoActivateWithParent" }, // 974027075
		{ &Z_Construct_UFunction_UObjective_GetChildObjective, "GetChildObjective" }, // 3172415318
		{ &Z_Construct_UFunction_UObjective_GetCompleted, "GetCompleted" }, // 343162011
		{ &Z_Construct_UFunction_UObjective_GetCurrentTime, "GetCurrentTime" }, // 2742143111
		{ &Z_Construct_UFunction_UObjective_GetDisplayOnUI, "GetDisplayOnUI" }, // 4246931092
		{ &Z_Construct_UFunction_UObjective_GetIsMajorObjective, "GetIsMajorObjective" }, // 140766417
		{ &Z_Construct_UFunction_UObjective_GetMaxTime, "GetMaxTime" }, // 1954719453
		{ &Z_Construct_UFunction_UObjective_GetObjectiveDescription, "GetObjectiveDescription" }, // 4006120984
		{ &Z_Construct_UFunction_UObjective_GetObjectiveDisplayName, "GetObjectiveDisplayName" }, // 750114146
		{ &Z_Construct_UFunction_UObjective_GetObjectiveName, "GetObjectiveName" }, // 785779560
		{ &Z_Construct_UFunction_UObjective_GetOwningActor, "GetOwningActor" }, // 1361955806
		{ &Z_Construct_UFunction_UObjective_GetParent, "GetParent" }, // 1251526892
		{ &Z_Construct_UFunction_UObjective_GetStarted, "GetStarted" }, // 516398590
		{ &Z_Construct_UFunction_UObjective_GetSucceeded, "GetSucceeded" }, // 290765992
		{ &Z_Construct_UFunction_UObjective_GetTimerSucceeds, "GetTimerSucceeds" }, // 398783333
		{ &Z_Construct_UFunction_UObjective_GetUsesTimer, "GetUsesTimer" }, // 1114513926
		{ &Z_Construct_UFunction_UObjective_InitializeObjective, "InitializeObjective" }, // 203982502
		{ &Z_Construct_UFunction_UObjective_OnRep_bActive, "OnRep_bActive" }, // 423840615
		{ &Z_Construct_UFunction_UObjective_OnRep_bCompleted, "OnRep_bCompleted" }, // 3124085667
		{ &Z_Construct_UFunction_UObjective_OnRep_bStarted, "OnRep_bStarted" }, // 1044850583
		{ &Z_Construct_UFunction_UObjective_OnRep_ObjectiveName, "OnRep_ObjectiveName" }, // 1699041715
		{ &Z_Construct_UFunction_UObjective_PreviousObjectiveCompleted, "PreviousObjectiveCompleted" }, // 1213708773
		{ &Z_Construct_UFunction_UObjective_RemoveChildObjective, "RemoveChildObjective" }, // 3179672363
		{ &Z_Construct_UFunction_UObjective_ResetObjective, "ResetObjective" }, // 2028545540
		{ &Z_Construct_UFunction_UObjective_SetupFromSimpleObjectiveData, "SetupFromSimpleObjectiveData" }, // 2129463898
		{ &Z_Construct_UFunction_UObjective_SetupSimpleObjectiveData, "SetupSimpleObjectiveData" }, // 3308982071
		{ &Z_Construct_UFunction_UObjective_StartObjective, "StartObjective" }, // 649306903
		{ &Z_Construct_UFunction_UObjective_StopObjective, "StopObjective" }, // 2820473548
		{ &Z_Construct_UFunction_UObjective_UpdateObjective, "UpdateObjective" }, // 3717883052
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Objective.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_Manager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjective, Manager), Z_Construct_UClass_AObjectiveManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_Manager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_Parent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjective, Parent), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_bActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	void Z_Construct_UClass_UObjective_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((UObjective*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_bActive = { "bActive", "OnRep_bActive", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjective), &Z_Construct_UClass_UObjective_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_bActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_bStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	void Z_Construct_UClass_UObjective_Statics::NewProp_bStarted_SetBit(void* Obj)
	{
		((UObjective*)Obj)->bStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_bStarted = { "bStarted", "OnRep_bStarted", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjective), &Z_Construct_UClass_UObjective_Statics::NewProp_bStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_bStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_bStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_bHasBeenStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	void Z_Construct_UClass_UObjective_Statics::NewProp_bHasBeenStarted_SetBit(void* Obj)
	{
		((UObjective*)Obj)->bHasBeenStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_bHasBeenStarted = { "bHasBeenStarted", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjective), &Z_Construct_UClass_UObjective_Statics::NewProp_bHasBeenStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_bHasBeenStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_bHasBeenStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_bCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	void Z_Construct_UClass_UObjective_Statics::NewProp_bCompleted_SetBit(void* Obj)
	{
		((UObjective*)Obj)->bCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_bCompleted = { "bCompleted", "OnRep_bCompleted", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjective), &Z_Construct_UClass_UObjective_Statics::NewProp_bCompleted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_bCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_bCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_bSucceeded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	void Z_Construct_UClass_UObjective_Statics::NewProp_bSucceeded_SetBit(void* Obj)
	{
		((UObjective*)Obj)->bSucceeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjective), &Z_Construct_UClass_UObjective_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_bSucceeded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_bSucceeded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_bDisplayOnUI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	void Z_Construct_UClass_UObjective_Statics::NewProp_bDisplayOnUI_SetBit(void* Obj)
	{
		((UObjective*)Obj)->bDisplayOnUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_bDisplayOnUI = { "bDisplayOnUI", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjective), &Z_Construct_UClass_UObjective_Statics::NewProp_bDisplayOnUI_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_bDisplayOnUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_bDisplayOnUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_ObjectiveName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_ObjectiveName = { "ObjectiveName", "OnRep_ObjectiveName", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjective, ObjectiveName), METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_ObjectiveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_ObjectiveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_ObjectiveDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_ObjectiveDisplayName = { "ObjectiveDisplayName", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjective, ObjectiveDisplayName), METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_ObjectiveDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_ObjectiveDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_ObjectiveDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_ObjectiveDescription = { "ObjectiveDescription", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjective, ObjectiveDescription), METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_ObjectiveDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_ObjectiveDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_bIsMajorObjective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	void Z_Construct_UClass_UObjective_Statics::NewProp_bIsMajorObjective_SetBit(void* Obj)
	{
		((UObjective*)Obj)->bIsMajorObjective = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_bIsMajorObjective = { "bIsMajorObjective", nullptr, (EPropertyFlags)0x00200c0000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjective), &Z_Construct_UClass_UObjective_Statics::NewProp_bIsMajorObjective_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_bIsMajorObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_bIsMajorObjective_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_bUseTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	void Z_Construct_UClass_UObjective_Statics::NewProp_bUseTimer_SetBit(void* Obj)
	{
		((UObjective*)Obj)->bUseTimer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_bUseTimer = { "bUseTimer", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjective), &Z_Construct_UClass_UObjective_Statics::NewProp_bUseTimer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_bUseTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_bUseTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_bTimerSucceeds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	void Z_Construct_UClass_UObjective_Statics::NewProp_bTimerSucceeds_SetBit(void* Obj)
	{
		((UObjective*)Obj)->bTimerSucceeds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_bTimerSucceeds = { "bTimerSucceeds", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjective), &Z_Construct_UClass_UObjective_Statics::NewProp_bTimerSucceeds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_bTimerSucceeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_bTimerSucceeds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_ChildObjectives_Inner = { "ChildObjectives", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_ChildObjectives_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_ChildObjectives = { "ChildObjectives", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjective, ChildObjectives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_ChildObjectives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_ChildObjectives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_CurrentTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_CurrentTime = { "CurrentTime", "UpdateObjective", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjective, CurrentTime), METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_CurrentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_CurrentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_MaxTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_MaxTime = { "MaxTime", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjective, MaxTime), METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_MaxTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_MaxTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_bAutoActivateWithParent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	void Z_Construct_UClass_UObjective_Statics::NewProp_bAutoActivateWithParent_SetBit(void* Obj)
	{
		((UObjective*)Obj)->bAutoActivateWithParent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_bAutoActivateWithParent = { "bAutoActivateWithParent", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjective), &Z_Construct_UClass_UObjective_Statics::NewProp_bAutoActivateWithParent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_bAutoActivateWithParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_bAutoActivateWithParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_bStartChildren_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	void Z_Construct_UClass_UObjective_Statics::NewProp_bStartChildren_SetBit(void* Obj)
	{
		((UObjective*)Obj)->bStartChildren = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_bStartChildren = { "bStartChildren", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjective), &Z_Construct_UClass_UObjective_Statics::NewProp_bStartChildren_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_bStartChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_bStartChildren_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_bCompleteWithChildren_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	void Z_Construct_UClass_UObjective_Statics::NewProp_bCompleteWithChildren_SetBit(void* Obj)
	{
		((UObjective*)Obj)->bCompleteWithChildren = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_bCompleteWithChildren = { "bCompleteWithChildren", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjective), &Z_Construct_UClass_UObjective_Statics::NewProp_bCompleteWithChildren_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_bCompleteWithChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_bCompleteWithChildren_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_PreviousObjective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_PreviousObjective = { "PreviousObjective", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjective, PreviousObjective), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_PreviousObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_PreviousObjective_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveActivated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveActivated = { "OnObjectiveActivated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjective, OnObjectiveActivated), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveActivatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveDeactivated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveDeactivated = { "OnObjectiveDeactivated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjective, OnObjectiveDeactivated), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveDeactivatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveDeactivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveDeactivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveStarted = { "OnObjectiveStarted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjective, OnObjectiveStarted), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveStartedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveStopped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveStopped = { "OnObjectiveStopped", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjective, OnObjectiveStopped), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveStartedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveStopped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveStopped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveCompleted = { "OnObjectiveCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjective, OnObjectiveCompleted), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveCompletedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveUpdated = { "OnObjectiveUpdated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjective, OnObjectiveUpdated), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveReset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveReset = { "OnObjectiveReset", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjective, OnObjectiveReset), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveResetDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveReset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_Manager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_bActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_bStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_bHasBeenStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_bCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_bSucceeded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_bDisplayOnUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_ObjectiveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_ObjectiveDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_ObjectiveDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_bIsMajorObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_bUseTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_bTimerSucceeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_ChildObjectives_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_ChildObjectives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_CurrentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_MaxTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_bAutoActivateWithParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_bStartChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_bCompleteWithChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_PreviousObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveDeactivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveStopped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjective_Statics::NewProp_OnObjectiveReset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjective_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjective>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjective_Statics::ClassParams = {
		&UObjective::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UObjective_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjective_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjective_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjective()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjective_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjective, 1849316719);
	template<> GAMEPLAYOBJECTIVES_API UClass* StaticClass<UObjective>()
	{
		return UObjective::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjective(Z_Construct_UClass_UObjective, &UObjective::StaticClass, TEXT("/Script/GameplayObjectives"), TEXT("UObjective"), false, nullptr, nullptr, nullptr);

	void UObjective::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Manager(TEXT("Manager"));
		static const FName Name_Parent(TEXT("Parent"));
		static const FName Name_bActive(TEXT("bActive"));
		static const FName Name_bStarted(TEXT("bStarted"));
		static const FName Name_bCompleted(TEXT("bCompleted"));
		static const FName Name_bSucceeded(TEXT("bSucceeded"));
		static const FName Name_bDisplayOnUI(TEXT("bDisplayOnUI"));
		static const FName Name_ObjectiveName(TEXT("ObjectiveName"));
		static const FName Name_ObjectiveDisplayName(TEXT("ObjectiveDisplayName"));
		static const FName Name_ObjectiveDescription(TEXT("ObjectiveDescription"));
		static const FName Name_bIsMajorObjective(TEXT("bIsMajorObjective"));
		static const FName Name_bUseTimer(TEXT("bUseTimer"));
		static const FName Name_bTimerSucceeds(TEXT("bTimerSucceeds"));
		static const FName Name_ChildObjectives(TEXT("ChildObjectives"));
		static const FName Name_CurrentTime(TEXT("CurrentTime"));
		static const FName Name_MaxTime(TEXT("MaxTime"));

		const bool bIsValid = true
			&& Name_Manager == ClassReps[(int32)ENetFields_Private::Manager].Property->GetFName()
			&& Name_Parent == ClassReps[(int32)ENetFields_Private::Parent].Property->GetFName()
			&& Name_bActive == ClassReps[(int32)ENetFields_Private::bActive].Property->GetFName()
			&& Name_bStarted == ClassReps[(int32)ENetFields_Private::bStarted].Property->GetFName()
			&& Name_bCompleted == ClassReps[(int32)ENetFields_Private::bCompleted].Property->GetFName()
			&& Name_bSucceeded == ClassReps[(int32)ENetFields_Private::bSucceeded].Property->GetFName()
			&& Name_bDisplayOnUI == ClassReps[(int32)ENetFields_Private::bDisplayOnUI].Property->GetFName()
			&& Name_ObjectiveName == ClassReps[(int32)ENetFields_Private::ObjectiveName].Property->GetFName()
			&& Name_ObjectiveDisplayName == ClassReps[(int32)ENetFields_Private::ObjectiveDisplayName].Property->GetFName()
			&& Name_ObjectiveDescription == ClassReps[(int32)ENetFields_Private::ObjectiveDescription].Property->GetFName()
			&& Name_bIsMajorObjective == ClassReps[(int32)ENetFields_Private::bIsMajorObjective].Property->GetFName()
			&& Name_bUseTimer == ClassReps[(int32)ENetFields_Private::bUseTimer].Property->GetFName()
			&& Name_bTimerSucceeds == ClassReps[(int32)ENetFields_Private::bTimerSucceeds].Property->GetFName()
			&& Name_ChildObjectives == ClassReps[(int32)ENetFields_Private::ChildObjectives].Property->GetFName()
			&& Name_CurrentTime == ClassReps[(int32)ENetFields_Private::CurrentTime].Property->GetFName()
			&& Name_MaxTime == ClassReps[(int32)ENetFields_Private::MaxTime].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UObjective"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjective);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
