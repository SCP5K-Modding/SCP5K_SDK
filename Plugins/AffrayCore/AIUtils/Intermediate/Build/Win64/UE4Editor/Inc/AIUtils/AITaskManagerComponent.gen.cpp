// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIUtils/Public/AITaskManagerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITaskManagerComponent() {}
// Cross Module References
	AIUTILS_API UClass* Z_Construct_UClass_UAITaskManagerComponent_NoRegister();
	AIUTILS_API UClass* Z_Construct_UClass_UAITaskManagerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AIUtils();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIUTILS_API UClass* Z_Construct_UClass_UTaskManagerTask_NoRegister();
	AIUTILS_API UEnum* Z_Construct_UEnum_AIUtils_ETaskManagerTaskType();
// End Cross Module References
	DEFINE_FUNCTION(UAITaskManagerComponent::execAddQueue)
	{
		P_GET_TARRAY(TSubclassOf<UTaskManagerTask> ,Z_Param_Queue);
		P_GET_ENUM(ETaskManagerTaskType,Z_Param_Stack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddQueue(Z_Param_Queue,ETaskManagerTaskType(Z_Param_Stack));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAITaskManagerComponent::execAddStack)
	{
		P_GET_TARRAY(TSubclassOf<UTaskManagerTask> ,Z_Param_StackToAdd);
		P_GET_ENUM(ETaskManagerTaskType,Z_Param_StackType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStack(Z_Param_StackToAdd,ETaskManagerTaskType(Z_Param_StackType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAITaskManagerComponent::execAddTask)
	{
		P_GET_OBJECT(UClass,Z_Param_NewTask);
		P_GET_ENUM(ETaskManagerTaskType,Z_Param_Stack);
		P_GET_UBOOL(Z_Param_Sort);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTaskManagerTask**)Z_Param__Result=P_THIS->AddTask(Z_Param_NewTask,ETaskManagerTaskType(Z_Param_Stack),Z_Param_Sort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAITaskManagerComponent::execHasAnyTasks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyTasks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAITaskManagerComponent::execHasHighPriorityTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasHighPriorityTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAITaskManagerComponent::execRemoveTask)
	{
		P_GET_OBJECT(UTaskManagerTask,Z_Param_Task);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTask(Z_Param_Task);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAITaskManagerComponent::execSortGeneralTasks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortGeneralTasks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAITaskManagerComponent::execSortHighPriorityTasks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortHighPriorityTasks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAITaskManagerComponent::execSortTasks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortTasks();
		P_NATIVE_END;
	}
	void UAITaskManagerComponent::StaticRegisterNativesUAITaskManagerComponent()
	{
		UClass* Class = UAITaskManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddQueue", &UAITaskManagerComponent::execAddQueue },
			{ "AddStack", &UAITaskManagerComponent::execAddStack },
			{ "AddTask", &UAITaskManagerComponent::execAddTask },
			{ "HasAnyTasks", &UAITaskManagerComponent::execHasAnyTasks },
			{ "HasHighPriorityTask", &UAITaskManagerComponent::execHasHighPriorityTask },
			{ "RemoveTask", &UAITaskManagerComponent::execRemoveTask },
			{ "SortGeneralTasks", &UAITaskManagerComponent::execSortGeneralTasks },
			{ "SortHighPriorityTasks", &UAITaskManagerComponent::execSortHighPriorityTasks },
			{ "SortTasks", &UAITaskManagerComponent::execSortTasks },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAITaskManagerComponent_AddQueue_Statics
	{
		struct AITaskManagerComponent_eventAddQueue_Parms
		{
			TArray<TSubclassOf<UTaskManagerTask> > Queue;
			ETaskManagerTaskType Stack;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Queue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Queue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stack_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAITaskManagerComponent_AddQueue_Statics::NewProp_Queue_Inner = { "Queue", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTaskManagerTask_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAITaskManagerComponent_AddQueue_Statics::NewProp_Queue = { "Queue", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AITaskManagerComponent_eventAddQueue_Parms, Queue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAITaskManagerComponent_AddQueue_Statics::NewProp_Stack_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAITaskManagerComponent_AddQueue_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AITaskManagerComponent_eventAddQueue_Parms, Stack), Z_Construct_UEnum_AIUtils_ETaskManagerTaskType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAITaskManagerComponent_AddQueue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITaskManagerComponent_AddQueue_Statics::NewProp_Queue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITaskManagerComponent_AddQueue_Statics::NewProp_Queue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITaskManagerComponent_AddQueue_Statics::NewProp_Stack_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITaskManagerComponent_AddQueue_Statics::NewProp_Stack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAITaskManagerComponent_AddQueue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AITaskManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITaskManagerComponent_AddQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITaskManagerComponent, nullptr, "AddQueue", nullptr, nullptr, sizeof(AITaskManagerComponent_eventAddQueue_Parms), Z_Construct_UFunction_UAITaskManagerComponent_AddQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITaskManagerComponent_AddQueue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAITaskManagerComponent_AddQueue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITaskManagerComponent_AddQueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAITaskManagerComponent_AddQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAITaskManagerComponent_AddQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAITaskManagerComponent_AddStack_Statics
	{
		struct AITaskManagerComponent_eventAddStack_Parms
		{
			TArray<TSubclassOf<UTaskManagerTask> > StackToAdd;
			ETaskManagerTaskType StackType;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StackToAdd_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StackToAdd;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StackType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StackType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAITaskManagerComponent_AddStack_Statics::NewProp_StackToAdd_Inner = { "StackToAdd", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTaskManagerTask_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAITaskManagerComponent_AddStack_Statics::NewProp_StackToAdd = { "StackToAdd", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AITaskManagerComponent_eventAddStack_Parms, StackToAdd), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAITaskManagerComponent_AddStack_Statics::NewProp_StackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAITaskManagerComponent_AddStack_Statics::NewProp_StackType = { "StackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AITaskManagerComponent_eventAddStack_Parms, StackType), Z_Construct_UEnum_AIUtils_ETaskManagerTaskType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAITaskManagerComponent_AddStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITaskManagerComponent_AddStack_Statics::NewProp_StackToAdd_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITaskManagerComponent_AddStack_Statics::NewProp_StackToAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITaskManagerComponent_AddStack_Statics::NewProp_StackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITaskManagerComponent_AddStack_Statics::NewProp_StackType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAITaskManagerComponent_AddStack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AITaskManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITaskManagerComponent_AddStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITaskManagerComponent, nullptr, "AddStack", nullptr, nullptr, sizeof(AITaskManagerComponent_eventAddStack_Parms), Z_Construct_UFunction_UAITaskManagerComponent_AddStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITaskManagerComponent_AddStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAITaskManagerComponent_AddStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITaskManagerComponent_AddStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAITaskManagerComponent_AddStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAITaskManagerComponent_AddStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAITaskManagerComponent_AddTask_Statics
	{
		struct AITaskManagerComponent_eventAddTask_Parms
		{
			TSubclassOf<UTaskManagerTask>  NewTask;
			ETaskManagerTaskType Stack;
			bool Sort;
			UTaskManagerTask* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewTask;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stack_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stack;
		static void NewProp_Sort_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Sort;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAITaskManagerComponent_AddTask_Statics::NewProp_NewTask = { "NewTask", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AITaskManagerComponent_eventAddTask_Parms, NewTask), Z_Construct_UClass_UTaskManagerTask_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAITaskManagerComponent_AddTask_Statics::NewProp_Stack_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAITaskManagerComponent_AddTask_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AITaskManagerComponent_eventAddTask_Parms, Stack), Z_Construct_UEnum_AIUtils_ETaskManagerTaskType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAITaskManagerComponent_AddTask_Statics::NewProp_Sort_SetBit(void* Obj)
	{
		((AITaskManagerComponent_eventAddTask_Parms*)Obj)->Sort = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAITaskManagerComponent_AddTask_Statics::NewProp_Sort = { "Sort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AITaskManagerComponent_eventAddTask_Parms), &Z_Construct_UFunction_UAITaskManagerComponent_AddTask_Statics::NewProp_Sort_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITaskManagerComponent_AddTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AITaskManagerComponent_eventAddTask_Parms, ReturnValue), Z_Construct_UClass_UTaskManagerTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAITaskManagerComponent_AddTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITaskManagerComponent_AddTask_Statics::NewProp_NewTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITaskManagerComponent_AddTask_Statics::NewProp_Stack_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITaskManagerComponent_AddTask_Statics::NewProp_Stack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITaskManagerComponent_AddTask_Statics::NewProp_Sort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITaskManagerComponent_AddTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAITaskManagerComponent_AddTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AITaskManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITaskManagerComponent_AddTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITaskManagerComponent, nullptr, "AddTask", nullptr, nullptr, sizeof(AITaskManagerComponent_eventAddTask_Parms), Z_Construct_UFunction_UAITaskManagerComponent_AddTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITaskManagerComponent_AddTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAITaskManagerComponent_AddTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITaskManagerComponent_AddTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAITaskManagerComponent_AddTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAITaskManagerComponent_AddTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAITaskManagerComponent_HasAnyTasks_Statics
	{
		struct AITaskManagerComponent_eventHasAnyTasks_Parms
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
	void Z_Construct_UFunction_UAITaskManagerComponent_HasAnyTasks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AITaskManagerComponent_eventHasAnyTasks_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAITaskManagerComponent_HasAnyTasks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AITaskManagerComponent_eventHasAnyTasks_Parms), &Z_Construct_UFunction_UAITaskManagerComponent_HasAnyTasks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAITaskManagerComponent_HasAnyTasks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITaskManagerComponent_HasAnyTasks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAITaskManagerComponent_HasAnyTasks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AITaskManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITaskManagerComponent_HasAnyTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITaskManagerComponent, nullptr, "HasAnyTasks", nullptr, nullptr, sizeof(AITaskManagerComponent_eventHasAnyTasks_Parms), Z_Construct_UFunction_UAITaskManagerComponent_HasAnyTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITaskManagerComponent_HasAnyTasks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAITaskManagerComponent_HasAnyTasks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITaskManagerComponent_HasAnyTasks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAITaskManagerComponent_HasAnyTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAITaskManagerComponent_HasAnyTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAITaskManagerComponent_HasHighPriorityTask_Statics
	{
		struct AITaskManagerComponent_eventHasHighPriorityTask_Parms
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
	void Z_Construct_UFunction_UAITaskManagerComponent_HasHighPriorityTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AITaskManagerComponent_eventHasHighPriorityTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAITaskManagerComponent_HasHighPriorityTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AITaskManagerComponent_eventHasHighPriorityTask_Parms), &Z_Construct_UFunction_UAITaskManagerComponent_HasHighPriorityTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAITaskManagerComponent_HasHighPriorityTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITaskManagerComponent_HasHighPriorityTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAITaskManagerComponent_HasHighPriorityTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AITaskManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITaskManagerComponent_HasHighPriorityTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITaskManagerComponent, nullptr, "HasHighPriorityTask", nullptr, nullptr, sizeof(AITaskManagerComponent_eventHasHighPriorityTask_Parms), Z_Construct_UFunction_UAITaskManagerComponent_HasHighPriorityTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITaskManagerComponent_HasHighPriorityTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAITaskManagerComponent_HasHighPriorityTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITaskManagerComponent_HasHighPriorityTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAITaskManagerComponent_HasHighPriorityTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAITaskManagerComponent_HasHighPriorityTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAITaskManagerComponent_RemoveTask_Statics
	{
		struct AITaskManagerComponent_eventRemoveTask_Parms
		{
			UTaskManagerTask* Task;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITaskManagerComponent_RemoveTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AITaskManagerComponent_eventRemoveTask_Parms, Task), Z_Construct_UClass_UTaskManagerTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAITaskManagerComponent_RemoveTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITaskManagerComponent_RemoveTask_Statics::NewProp_Task,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAITaskManagerComponent_RemoveTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AITaskManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITaskManagerComponent_RemoveTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITaskManagerComponent, nullptr, "RemoveTask", nullptr, nullptr, sizeof(AITaskManagerComponent_eventRemoveTask_Parms), Z_Construct_UFunction_UAITaskManagerComponent_RemoveTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITaskManagerComponent_RemoveTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAITaskManagerComponent_RemoveTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITaskManagerComponent_RemoveTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAITaskManagerComponent_RemoveTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAITaskManagerComponent_RemoveTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAITaskManagerComponent_SortGeneralTasks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAITaskManagerComponent_SortGeneralTasks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AITaskManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITaskManagerComponent_SortGeneralTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITaskManagerComponent, nullptr, "SortGeneralTasks", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAITaskManagerComponent_SortGeneralTasks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITaskManagerComponent_SortGeneralTasks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAITaskManagerComponent_SortGeneralTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAITaskManagerComponent_SortGeneralTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAITaskManagerComponent_SortHighPriorityTasks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAITaskManagerComponent_SortHighPriorityTasks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AITaskManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITaskManagerComponent_SortHighPriorityTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITaskManagerComponent, nullptr, "SortHighPriorityTasks", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAITaskManagerComponent_SortHighPriorityTasks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITaskManagerComponent_SortHighPriorityTasks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAITaskManagerComponent_SortHighPriorityTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAITaskManagerComponent_SortHighPriorityTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAITaskManagerComponent_SortTasks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAITaskManagerComponent_SortTasks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AITaskManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITaskManagerComponent_SortTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITaskManagerComponent, nullptr, "SortTasks", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAITaskManagerComponent_SortTasks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITaskManagerComponent_SortTasks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAITaskManagerComponent_SortTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAITaskManagerComponent_SortTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAITaskManagerComponent_NoRegister()
	{
		return UAITaskManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAITaskManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blackboard_HasDynamicTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Blackboard_HasDynamicTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blackboard_HasHighPriorityDynamicTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Blackboard_HasHighPriorityDynamicTask;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InitialTasks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialTasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InitialTasks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAITaskManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAITaskManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAITaskManagerComponent_AddQueue, "AddQueue" }, // 692394438
		{ &Z_Construct_UFunction_UAITaskManagerComponent_AddStack, "AddStack" }, // 2764351180
		{ &Z_Construct_UFunction_UAITaskManagerComponent_AddTask, "AddTask" }, // 1433180593
		{ &Z_Construct_UFunction_UAITaskManagerComponent_HasAnyTasks, "HasAnyTasks" }, // 1347671546
		{ &Z_Construct_UFunction_UAITaskManagerComponent_HasHighPriorityTask, "HasHighPriorityTask" }, // 3620303465
		{ &Z_Construct_UFunction_UAITaskManagerComponent_RemoveTask, "RemoveTask" }, // 794687494
		{ &Z_Construct_UFunction_UAITaskManagerComponent_SortGeneralTasks, "SortGeneralTasks" }, // 396563520
		{ &Z_Construct_UFunction_UAITaskManagerComponent_SortHighPriorityTasks, "SortHighPriorityTasks" }, // 2341932729
		{ &Z_Construct_UFunction_UAITaskManagerComponent_SortTasks, "SortTasks" }, // 1821880308
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITaskManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AITaskManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AITaskManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITaskManagerComponent_Statics::NewProp_Blackboard_HasDynamicTask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AITaskManagerComponent" },
		{ "ModuleRelativePath", "Public/AITaskManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAITaskManagerComponent_Statics::NewProp_Blackboard_HasDynamicTask = { "Blackboard_HasDynamicTask", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAITaskManagerComponent, Blackboard_HasDynamicTask), METADATA_PARAMS(Z_Construct_UClass_UAITaskManagerComponent_Statics::NewProp_Blackboard_HasDynamicTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskManagerComponent_Statics::NewProp_Blackboard_HasDynamicTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITaskManagerComponent_Statics::NewProp_Blackboard_HasHighPriorityDynamicTask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AITaskManagerComponent" },
		{ "ModuleRelativePath", "Public/AITaskManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAITaskManagerComponent_Statics::NewProp_Blackboard_HasHighPriorityDynamicTask = { "Blackboard_HasHighPriorityDynamicTask", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAITaskManagerComponent, Blackboard_HasHighPriorityDynamicTask), METADATA_PARAMS(Z_Construct_UClass_UAITaskManagerComponent_Statics::NewProp_Blackboard_HasHighPriorityDynamicTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskManagerComponent_Statics::NewProp_Blackboard_HasHighPriorityDynamicTask_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAITaskManagerComponent_Statics::NewProp_InitialTasks_Inner = { "InitialTasks", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTaskManagerTask_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITaskManagerComponent_Statics::NewProp_InitialTasks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AITaskManagerComponent" },
		{ "ModuleRelativePath", "Public/AITaskManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAITaskManagerComponent_Statics::NewProp_InitialTasks = { "InitialTasks", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAITaskManagerComponent, InitialTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAITaskManagerComponent_Statics::NewProp_InitialTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskManagerComponent_Statics::NewProp_InitialTasks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAITaskManagerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskManagerComponent_Statics::NewProp_Blackboard_HasDynamicTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskManagerComponent_Statics::NewProp_Blackboard_HasHighPriorityDynamicTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskManagerComponent_Statics::NewProp_InitialTasks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskManagerComponent_Statics::NewProp_InitialTasks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAITaskManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAITaskManagerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAITaskManagerComponent_Statics::ClassParams = {
		&UAITaskManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAITaskManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAITaskManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAITaskManagerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAITaskManagerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAITaskManagerComponent, 583332452);
	template<> AIUTILS_API UClass* StaticClass<UAITaskManagerComponent>()
	{
		return UAITaskManagerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAITaskManagerComponent(Z_Construct_UClass_UAITaskManagerComponent, &UAITaskManagerComponent::StaticClass, TEXT("/Script/AIUtils"), TEXT("UAITaskManagerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAITaskManagerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
