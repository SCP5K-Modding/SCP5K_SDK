// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIUtils/Public/TaskManagerTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskManagerTask() {}
// Cross Module References
	AIUTILS_API UClass* Z_Construct_UClass_UTaskManagerTask_NoRegister();
	AIUTILS_API UClass* Z_Construct_UClass_UTaskManagerTask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIUtils();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
// End Cross Module References
	DEFINE_FUNCTION(UTaskManagerTask::execAbortTask)
	{
		P_GET_OBJECT(UBehaviorTreeComponent,Z_Param_OwnerComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AbortTask_Implementation(Z_Param_OwnerComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTaskManagerTask::execCanExecuteTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanExecuteTask_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTaskManagerTask::execDoPrerequisiteOperation)
	{
		P_GET_OBJECT(AAIController,Z_Param_OwningController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoPrerequisiteOperation_Implementation(Z_Param_OwningController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTaskManagerTask::execExecuteTask)
	{
		P_GET_OBJECT(UBehaviorTreeComponent,Z_Param_OwnerComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EBTNodeResult::Type>*)Z_Param__Result=P_THIS->ExecuteTask_Implementation(Z_Param_OwnerComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTaskManagerTask::execFinishTask)
	{
		P_GET_OBJECT(AAIController,Z_Param_OwningController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishTask_Implementation(Z_Param_OwningController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTaskManagerTask::execGetTaskPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTaskPriority_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTaskManagerTask::execHasBeenInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasBeenInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTaskManagerTask::execIsHighPriorityTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHighPriorityTask_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTaskManagerTask::execShouldBeRestored)
	{
		P_GET_UBOOL(Z_Param_bRestorationReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldBeRestored_Implementation(Z_Param_bRestorationReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTaskManagerTask::execTickTask)
	{
		P_GET_OBJECT(UBehaviorTreeComponent,Z_Param_OwnerComp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EBTNodeResult::Type>*)Z_Param__Result=P_THIS->TickTask_Implementation(Z_Param_OwnerComp,Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	static FName NAME_UTaskManagerTask_AbortTask = FName(TEXT("AbortTask"));
	void UTaskManagerTask::AbortTask(UBehaviorTreeComponent* OwnerComp)
	{
		TaskManagerTask_eventAbortTask_Parms Parms;
		Parms.OwnerComp=OwnerComp;
		ProcessEvent(FindFunctionChecked(NAME_UTaskManagerTask_AbortTask),&Parms);
	}
	static FName NAME_UTaskManagerTask_CanExecuteTask = FName(TEXT("CanExecuteTask"));
	bool UTaskManagerTask::CanExecuteTask() const
	{
		TaskManagerTask_eventCanExecuteTask_Parms Parms;
		const_cast<UTaskManagerTask*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTaskManagerTask_CanExecuteTask),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTaskManagerTask_DoPrerequisiteOperation = FName(TEXT("DoPrerequisiteOperation"));
	bool UTaskManagerTask::DoPrerequisiteOperation(AAIController* OwningController)
	{
		TaskManagerTask_eventDoPrerequisiteOperation_Parms Parms;
		Parms.OwningController=OwningController;
		ProcessEvent(FindFunctionChecked(NAME_UTaskManagerTask_DoPrerequisiteOperation),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTaskManagerTask_ExecuteTask = FName(TEXT("ExecuteTask"));
	EBTNodeResult::Type UTaskManagerTask::ExecuteTask(UBehaviorTreeComponent* OwnerComp)
	{
		TaskManagerTask_eventExecuteTask_Parms Parms;
		Parms.OwnerComp=OwnerComp;
		ProcessEvent(FindFunctionChecked(NAME_UTaskManagerTask_ExecuteTask),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UTaskManagerTask_FinishTask = FName(TEXT("FinishTask"));
	void UTaskManagerTask::FinishTask(AAIController* OwningController)
	{
		TaskManagerTask_eventFinishTask_Parms Parms;
		Parms.OwningController=OwningController;
		ProcessEvent(FindFunctionChecked(NAME_UTaskManagerTask_FinishTask),&Parms);
	}
	static FName NAME_UTaskManagerTask_GetTaskPriority = FName(TEXT("GetTaskPriority"));
	int32 UTaskManagerTask::GetTaskPriority() const
	{
		TaskManagerTask_eventGetTaskPriority_Parms Parms;
		const_cast<UTaskManagerTask*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTaskManagerTask_GetTaskPriority),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UTaskManagerTask_IsHighPriorityTask = FName(TEXT("IsHighPriorityTask"));
	bool UTaskManagerTask::IsHighPriorityTask() const
	{
		TaskManagerTask_eventIsHighPriorityTask_Parms Parms;
		const_cast<UTaskManagerTask*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTaskManagerTask_IsHighPriorityTask),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTaskManagerTask_ShouldBeRestored = FName(TEXT("ShouldBeRestored"));
	bool UTaskManagerTask::ShouldBeRestored(bool bRestorationReason) const
	{
		TaskManagerTask_eventShouldBeRestored_Parms Parms;
		Parms.bRestorationReason=bRestorationReason ? true : false;
		const_cast<UTaskManagerTask*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTaskManagerTask_ShouldBeRestored),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTaskManagerTask_TickTask = FName(TEXT("TickTask"));
	EBTNodeResult::Type UTaskManagerTask::TickTask(UBehaviorTreeComponent* OwnerComp, float DeltaSeconds)
	{
		TaskManagerTask_eventTickTask_Parms Parms;
		Parms.OwnerComp=OwnerComp;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UTaskManagerTask_TickTask),&Parms);
		return Parms.ReturnValue;
	}
	void UTaskManagerTask::StaticRegisterNativesUTaskManagerTask()
	{
		UClass* Class = UTaskManagerTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbortTask", &UTaskManagerTask::execAbortTask },
			{ "CanExecuteTask", &UTaskManagerTask::execCanExecuteTask },
			{ "DoPrerequisiteOperation", &UTaskManagerTask::execDoPrerequisiteOperation },
			{ "ExecuteTask", &UTaskManagerTask::execExecuteTask },
			{ "FinishTask", &UTaskManagerTask::execFinishTask },
			{ "GetTaskPriority", &UTaskManagerTask::execGetTaskPriority },
			{ "HasBeenInitialized", &UTaskManagerTask::execHasBeenInitialized },
			{ "IsHighPriorityTask", &UTaskManagerTask::execIsHighPriorityTask },
			{ "ShouldBeRestored", &UTaskManagerTask::execShouldBeRestored },
			{ "TickTask", &UTaskManagerTask::execTickTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTaskManagerTask_AbortTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskManagerTask_AbortTask_Statics::NewProp_OwnerComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskManagerTask_AbortTask_Statics::NewProp_OwnerComp = { "OwnerComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskManagerTask_eventAbortTask_Parms, OwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTaskManagerTask_AbortTask_Statics::NewProp_OwnerComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_AbortTask_Statics::NewProp_OwnerComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskManagerTask_AbortTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManagerTask_AbortTask_Statics::NewProp_OwnerComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskManagerTask_AbortTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TaskManagerTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskManagerTask_AbortTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskManagerTask, nullptr, "AbortTask", nullptr, nullptr, sizeof(TaskManagerTask_eventAbortTask_Parms), Z_Construct_UFunction_UTaskManagerTask_AbortTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_AbortTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskManagerTask_AbortTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_AbortTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskManagerTask_AbortTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTaskManagerTask_AbortTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTaskManagerTask_CanExecuteTask_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTaskManagerTask_CanExecuteTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TaskManagerTask_eventCanExecuteTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTaskManagerTask_CanExecuteTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TaskManagerTask_eventCanExecuteTask_Parms), &Z_Construct_UFunction_UTaskManagerTask_CanExecuteTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskManagerTask_CanExecuteTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManagerTask_CanExecuteTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskManagerTask_CanExecuteTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TaskManagerTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskManagerTask_CanExecuteTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskManagerTask, nullptr, "CanExecuteTask", nullptr, nullptr, sizeof(TaskManagerTask_eventCanExecuteTask_Parms), Z_Construct_UFunction_UTaskManagerTask_CanExecuteTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_CanExecuteTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskManagerTask_CanExecuteTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_CanExecuteTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskManagerTask_CanExecuteTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTaskManagerTask_CanExecuteTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTaskManagerTask_DoPrerequisiteOperation_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskManagerTask_DoPrerequisiteOperation_Statics::NewProp_OwningController = { "OwningController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskManagerTask_eventDoPrerequisiteOperation_Parms, OwningController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTaskManagerTask_DoPrerequisiteOperation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TaskManagerTask_eventDoPrerequisiteOperation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTaskManagerTask_DoPrerequisiteOperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TaskManagerTask_eventDoPrerequisiteOperation_Parms), &Z_Construct_UFunction_UTaskManagerTask_DoPrerequisiteOperation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskManagerTask_DoPrerequisiteOperation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManagerTask_DoPrerequisiteOperation_Statics::NewProp_OwningController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManagerTask_DoPrerequisiteOperation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskManagerTask_DoPrerequisiteOperation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TaskManagerTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskManagerTask_DoPrerequisiteOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskManagerTask, nullptr, "DoPrerequisiteOperation", nullptr, nullptr, sizeof(TaskManagerTask_eventDoPrerequisiteOperation_Parms), Z_Construct_UFunction_UTaskManagerTask_DoPrerequisiteOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_DoPrerequisiteOperation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskManagerTask_DoPrerequisiteOperation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_DoPrerequisiteOperation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskManagerTask_DoPrerequisiteOperation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTaskManagerTask_DoPrerequisiteOperation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTaskManagerTask_ExecuteTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerComp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskManagerTask_ExecuteTask_Statics::NewProp_OwnerComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskManagerTask_ExecuteTask_Statics::NewProp_OwnerComp = { "OwnerComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskManagerTask_eventExecuteTask_Parms, OwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTaskManagerTask_ExecuteTask_Statics::NewProp_OwnerComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_ExecuteTask_Statics::NewProp_OwnerComp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTaskManagerTask_ExecuteTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskManagerTask_eventExecuteTask_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskManagerTask_ExecuteTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManagerTask_ExecuteTask_Statics::NewProp_OwnerComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManagerTask_ExecuteTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskManagerTask_ExecuteTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TaskManagerTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskManagerTask_ExecuteTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskManagerTask, nullptr, "ExecuteTask", nullptr, nullptr, sizeof(TaskManagerTask_eventExecuteTask_Parms), Z_Construct_UFunction_UTaskManagerTask_ExecuteTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_ExecuteTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskManagerTask_ExecuteTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_ExecuteTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskManagerTask_ExecuteTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTaskManagerTask_ExecuteTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTaskManagerTask_FinishTask_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskManagerTask_FinishTask_Statics::NewProp_OwningController = { "OwningController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskManagerTask_eventFinishTask_Parms, OwningController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskManagerTask_FinishTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManagerTask_FinishTask_Statics::NewProp_OwningController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskManagerTask_FinishTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TaskManagerTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskManagerTask_FinishTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskManagerTask, nullptr, "FinishTask", nullptr, nullptr, sizeof(TaskManagerTask_eventFinishTask_Parms), Z_Construct_UFunction_UTaskManagerTask_FinishTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_FinishTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskManagerTask_FinishTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_FinishTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskManagerTask_FinishTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTaskManagerTask_FinishTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTaskManagerTask_GetTaskPriority_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTaskManagerTask_GetTaskPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskManagerTask_eventGetTaskPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskManagerTask_GetTaskPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManagerTask_GetTaskPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskManagerTask_GetTaskPriority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TaskManagerTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskManagerTask_GetTaskPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskManagerTask, nullptr, "GetTaskPriority", nullptr, nullptr, sizeof(TaskManagerTask_eventGetTaskPriority_Parms), Z_Construct_UFunction_UTaskManagerTask_GetTaskPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_GetTaskPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskManagerTask_GetTaskPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_GetTaskPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskManagerTask_GetTaskPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTaskManagerTask_GetTaskPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTaskManagerTask_HasBeenInitialized_Statics
	{
		struct TaskManagerTask_eventHasBeenInitialized_Parms
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
	void Z_Construct_UFunction_UTaskManagerTask_HasBeenInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TaskManagerTask_eventHasBeenInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTaskManagerTask_HasBeenInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TaskManagerTask_eventHasBeenInitialized_Parms), &Z_Construct_UFunction_UTaskManagerTask_HasBeenInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskManagerTask_HasBeenInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManagerTask_HasBeenInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskManagerTask_HasBeenInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TaskManagerTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskManagerTask_HasBeenInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskManagerTask, nullptr, "HasBeenInitialized", nullptr, nullptr, sizeof(TaskManagerTask_eventHasBeenInitialized_Parms), Z_Construct_UFunction_UTaskManagerTask_HasBeenInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_HasBeenInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskManagerTask_HasBeenInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_HasBeenInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskManagerTask_HasBeenInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTaskManagerTask_HasBeenInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTaskManagerTask_IsHighPriorityTask_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTaskManagerTask_IsHighPriorityTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TaskManagerTask_eventIsHighPriorityTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTaskManagerTask_IsHighPriorityTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TaskManagerTask_eventIsHighPriorityTask_Parms), &Z_Construct_UFunction_UTaskManagerTask_IsHighPriorityTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskManagerTask_IsHighPriorityTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManagerTask_IsHighPriorityTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskManagerTask_IsHighPriorityTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TaskManagerTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskManagerTask_IsHighPriorityTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskManagerTask, nullptr, "IsHighPriorityTask", nullptr, nullptr, sizeof(TaskManagerTask_eventIsHighPriorityTask_Parms), Z_Construct_UFunction_UTaskManagerTask_IsHighPriorityTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_IsHighPriorityTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskManagerTask_IsHighPriorityTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_IsHighPriorityTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskManagerTask_IsHighPriorityTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTaskManagerTask_IsHighPriorityTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTaskManagerTask_ShouldBeRestored_Statics
	{
		static void NewProp_bRestorationReason_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestorationReason;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTaskManagerTask_ShouldBeRestored_Statics::NewProp_bRestorationReason_SetBit(void* Obj)
	{
		((TaskManagerTask_eventShouldBeRestored_Parms*)Obj)->bRestorationReason = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTaskManagerTask_ShouldBeRestored_Statics::NewProp_bRestorationReason = { "bRestorationReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TaskManagerTask_eventShouldBeRestored_Parms), &Z_Construct_UFunction_UTaskManagerTask_ShouldBeRestored_Statics::NewProp_bRestorationReason_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTaskManagerTask_ShouldBeRestored_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TaskManagerTask_eventShouldBeRestored_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTaskManagerTask_ShouldBeRestored_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TaskManagerTask_eventShouldBeRestored_Parms), &Z_Construct_UFunction_UTaskManagerTask_ShouldBeRestored_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskManagerTask_ShouldBeRestored_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManagerTask_ShouldBeRestored_Statics::NewProp_bRestorationReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManagerTask_ShouldBeRestored_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskManagerTask_ShouldBeRestored_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TaskManagerTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskManagerTask_ShouldBeRestored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskManagerTask, nullptr, "ShouldBeRestored", nullptr, nullptr, sizeof(TaskManagerTask_eventShouldBeRestored_Parms), Z_Construct_UFunction_UTaskManagerTask_ShouldBeRestored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_ShouldBeRestored_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskManagerTask_ShouldBeRestored_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_ShouldBeRestored_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskManagerTask_ShouldBeRestored()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTaskManagerTask_ShouldBeRestored_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTaskManagerTask_TickTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerComp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskManagerTask_TickTask_Statics::NewProp_OwnerComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskManagerTask_TickTask_Statics::NewProp_OwnerComp = { "OwnerComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskManagerTask_eventTickTask_Parms, OwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTaskManagerTask_TickTask_Statics::NewProp_OwnerComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_TickTask_Statics::NewProp_OwnerComp_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTaskManagerTask_TickTask_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskManagerTask_eventTickTask_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTaskManagerTask_TickTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskManagerTask_eventTickTask_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskManagerTask_TickTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManagerTask_TickTask_Statics::NewProp_OwnerComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManagerTask_TickTask_Statics::NewProp_DeltaSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManagerTask_TickTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskManagerTask_TickTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TaskManagerTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskManagerTask_TickTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskManagerTask, nullptr, "TickTask", nullptr, nullptr, sizeof(TaskManagerTask_eventTickTask_Parms), Z_Construct_UFunction_UTaskManagerTask_TickTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_TickTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskManagerTask_TickTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManagerTask_TickTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskManagerTask_TickTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTaskManagerTask_TickTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTaskManagerTask_NoRegister()
	{
		return UTaskManagerTask::StaticClass();
	}
	struct Z_Construct_UClass_UTaskManagerTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TaskPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRestoreTaskInCaseOfPrerequisiteFailure_MetaData[];
#endif
		static void NewProp_bRestoreTaskInCaseOfPrerequisiteFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestoreTaskInCaseOfPrerequisiteFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRestoreTaskInCaseOfAbort_MetaData[];
#endif
		static void NewProp_bRestoreTaskInCaseOfAbort_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestoreTaskInCaseOfAbort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPrerequisiteFailureRestoration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPrerequisiteFailureRestoration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAbortRestoration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAbortRestoration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaskManagerTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTaskManagerTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskManagerTask_AbortTask, "AbortTask" }, // 440774920
		{ &Z_Construct_UFunction_UTaskManagerTask_CanExecuteTask, "CanExecuteTask" }, // 901160634
		{ &Z_Construct_UFunction_UTaskManagerTask_DoPrerequisiteOperation, "DoPrerequisiteOperation" }, // 3525227178
		{ &Z_Construct_UFunction_UTaskManagerTask_ExecuteTask, "ExecuteTask" }, // 9352395
		{ &Z_Construct_UFunction_UTaskManagerTask_FinishTask, "FinishTask" }, // 2913870226
		{ &Z_Construct_UFunction_UTaskManagerTask_GetTaskPriority, "GetTaskPriority" }, // 4166264771
		{ &Z_Construct_UFunction_UTaskManagerTask_HasBeenInitialized, "HasBeenInitialized" }, // 643006105
		{ &Z_Construct_UFunction_UTaskManagerTask_IsHighPriorityTask, "IsHighPriorityTask" }, // 1076659922
		{ &Z_Construct_UFunction_UTaskManagerTask_ShouldBeRestored, "ShouldBeRestored" }, // 3051840144
		{ &Z_Construct_UFunction_UTaskManagerTask_TickTask, "TickTask" }, // 3901751388
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskManagerTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TaskManagerTask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TaskManagerTask.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_TaskPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TaskManagerTask" },
		{ "ModuleRelativePath", "Public/TaskManagerTask.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_TaskPriority = { "TaskPriority", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskManagerTask, TaskPriority), METADATA_PARAMS(Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_TaskPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_TaskPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_bRestoreTaskInCaseOfPrerequisiteFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TaskManagerTask" },
		{ "ModuleRelativePath", "Public/TaskManagerTask.h" },
	};
#endif
	void Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_bRestoreTaskInCaseOfPrerequisiteFailure_SetBit(void* Obj)
	{
		((UTaskManagerTask*)Obj)->bRestoreTaskInCaseOfPrerequisiteFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_bRestoreTaskInCaseOfPrerequisiteFailure = { "bRestoreTaskInCaseOfPrerequisiteFailure", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTaskManagerTask), &Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_bRestoreTaskInCaseOfPrerequisiteFailure_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_bRestoreTaskInCaseOfPrerequisiteFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_bRestoreTaskInCaseOfPrerequisiteFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_bRestoreTaskInCaseOfAbort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TaskManagerTask" },
		{ "ModuleRelativePath", "Public/TaskManagerTask.h" },
	};
#endif
	void Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_bRestoreTaskInCaseOfAbort_SetBit(void* Obj)
	{
		((UTaskManagerTask*)Obj)->bRestoreTaskInCaseOfAbort = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_bRestoreTaskInCaseOfAbort = { "bRestoreTaskInCaseOfAbort", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTaskManagerTask), &Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_bRestoreTaskInCaseOfAbort_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_bRestoreTaskInCaseOfAbort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_bRestoreTaskInCaseOfAbort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_MaxPrerequisiteFailureRestoration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TaskManagerTask" },
		{ "ModuleRelativePath", "Public/TaskManagerTask.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_MaxPrerequisiteFailureRestoration = { "MaxPrerequisiteFailureRestoration", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskManagerTask, MaxPrerequisiteFailureRestoration), METADATA_PARAMS(Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_MaxPrerequisiteFailureRestoration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_MaxPrerequisiteFailureRestoration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_MaxAbortRestoration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TaskManagerTask" },
		{ "ModuleRelativePath", "Public/TaskManagerTask.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_MaxAbortRestoration = { "MaxAbortRestoration", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskManagerTask, MaxAbortRestoration), METADATA_PARAMS(Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_MaxAbortRestoration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_MaxAbortRestoration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskManagerTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_TaskPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_bRestoreTaskInCaseOfPrerequisiteFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_bRestoreTaskInCaseOfAbort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_MaxPrerequisiteFailureRestoration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskManagerTask_Statics::NewProp_MaxAbortRestoration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaskManagerTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskManagerTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTaskManagerTask_Statics::ClassParams = {
		&UTaskManagerTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTaskManagerTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTaskManagerTask_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTaskManagerTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskManagerTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTaskManagerTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTaskManagerTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTaskManagerTask, 2342080366);
	template<> AIUTILS_API UClass* StaticClass<UTaskManagerTask>()
	{
		return UTaskManagerTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTaskManagerTask(Z_Construct_UClass_UTaskManagerTask, &UTaskManagerTask::StaticClass, TEXT("/Script/AIUtils"), TEXT("UTaskManagerTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskManagerTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
