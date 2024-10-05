// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBehaviorTreeComponent;
class AAIController;
#ifdef AIUTILS_TaskManagerTask_generated_h
#error "TaskManagerTask.generated.h already included, missing '#pragma once' in TaskManagerTask.h"
#endif
#define AIUTILS_TaskManagerTask_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_RPC_WRAPPERS \
	virtual void AbortTask_Implementation(UBehaviorTreeComponent* OwnerComp); \
	virtual bool CanExecuteTask_Implementation() const; \
	virtual bool DoPrerequisiteOperation_Implementation(AAIController* OwningController); \
	virtual EBTNodeResult::Type ExecuteTask_Implementation(UBehaviorTreeComponent* OwnerComp); \
	virtual void FinishTask_Implementation(AAIController* OwningController); \
	virtual int32 GetTaskPriority_Implementation() const; \
	virtual bool IsHighPriorityTask_Implementation() const; \
	virtual bool ShouldBeRestored_Implementation(bool bRestorationReason) const; \
	virtual EBTNodeResult::Type TickTask_Implementation(UBehaviorTreeComponent* OwnerComp, float DeltaSeconds); \
 \
	DECLARE_FUNCTION(execAbortTask); \
	DECLARE_FUNCTION(execCanExecuteTask); \
	DECLARE_FUNCTION(execDoPrerequisiteOperation); \
	DECLARE_FUNCTION(execExecuteTask); \
	DECLARE_FUNCTION(execFinishTask); \
	DECLARE_FUNCTION(execGetTaskPriority); \
	DECLARE_FUNCTION(execHasBeenInitialized); \
	DECLARE_FUNCTION(execIsHighPriorityTask); \
	DECLARE_FUNCTION(execShouldBeRestored); \
	DECLARE_FUNCTION(execTickTask);


#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AbortTask_Implementation(UBehaviorTreeComponent* OwnerComp); \
	virtual bool CanExecuteTask_Implementation() const; \
	virtual bool DoPrerequisiteOperation_Implementation(AAIController* OwningController); \
	virtual EBTNodeResult::Type ExecuteTask_Implementation(UBehaviorTreeComponent* OwnerComp); \
	virtual void FinishTask_Implementation(AAIController* OwningController); \
	virtual int32 GetTaskPriority_Implementation() const; \
	virtual bool IsHighPriorityTask_Implementation() const; \
	virtual bool ShouldBeRestored_Implementation(bool bRestorationReason) const; \
	virtual EBTNodeResult::Type TickTask_Implementation(UBehaviorTreeComponent* OwnerComp, float DeltaSeconds); \
 \
	DECLARE_FUNCTION(execAbortTask); \
	DECLARE_FUNCTION(execCanExecuteTask); \
	DECLARE_FUNCTION(execDoPrerequisiteOperation); \
	DECLARE_FUNCTION(execExecuteTask); \
	DECLARE_FUNCTION(execFinishTask); \
	DECLARE_FUNCTION(execGetTaskPriority); \
	DECLARE_FUNCTION(execHasBeenInitialized); \
	DECLARE_FUNCTION(execIsHighPriorityTask); \
	DECLARE_FUNCTION(execShouldBeRestored); \
	DECLARE_FUNCTION(execTickTask);


#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_EVENT_PARMS \
	struct TaskManagerTask_eventAbortTask_Parms \
	{ \
		UBehaviorTreeComponent* OwnerComp; \
	}; \
	struct TaskManagerTask_eventCanExecuteTask_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TaskManagerTask_eventCanExecuteTask_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TaskManagerTask_eventDoPrerequisiteOperation_Parms \
	{ \
		AAIController* OwningController; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TaskManagerTask_eventDoPrerequisiteOperation_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TaskManagerTask_eventExecuteTask_Parms \
	{ \
		UBehaviorTreeComponent* OwnerComp; \
		TEnumAsByte<EBTNodeResult::Type> ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TaskManagerTask_eventExecuteTask_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct TaskManagerTask_eventFinishTask_Parms \
	{ \
		AAIController* OwningController; \
	}; \
	struct TaskManagerTask_eventGetTaskPriority_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TaskManagerTask_eventGetTaskPriority_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct TaskManagerTask_eventIsHighPriorityTask_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TaskManagerTask_eventIsHighPriorityTask_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TaskManagerTask_eventShouldBeRestored_Parms \
	{ \
		bool bRestorationReason; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TaskManagerTask_eventShouldBeRestored_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TaskManagerTask_eventTickTask_Parms \
	{ \
		UBehaviorTreeComponent* OwnerComp; \
		float DeltaSeconds; \
		TEnumAsByte<EBTNodeResult::Type> ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TaskManagerTask_eventTickTask_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTaskManagerTask(); \
	friend struct Z_Construct_UClass_UTaskManagerTask_Statics; \
public: \
	DECLARE_CLASS(UTaskManagerTask, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIUtils"), NO_API) \
	DECLARE_SERIALIZER(UTaskManagerTask)


#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUTaskManagerTask(); \
	friend struct Z_Construct_UClass_UTaskManagerTask_Statics; \
public: \
	DECLARE_CLASS(UTaskManagerTask, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIUtils"), NO_API) \
	DECLARE_SERIALIZER(UTaskManagerTask)


#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTaskManagerTask(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTaskManagerTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTaskManagerTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaskManagerTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTaskManagerTask(UTaskManagerTask&&); \
	NO_API UTaskManagerTask(const UTaskManagerTask&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTaskManagerTask(UTaskManagerTask&&); \
	NO_API UTaskManagerTask(const UTaskManagerTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTaskManagerTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaskManagerTask); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTaskManagerTask)


#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TaskPriority() { return STRUCT_OFFSET(UTaskManagerTask, TaskPriority); } \
	FORCEINLINE static uint32 __PPO__bRestoreTaskInCaseOfPrerequisiteFailure() { return STRUCT_OFFSET(UTaskManagerTask, bRestoreTaskInCaseOfPrerequisiteFailure); } \
	FORCEINLINE static uint32 __PPO__bRestoreTaskInCaseOfAbort() { return STRUCT_OFFSET(UTaskManagerTask, bRestoreTaskInCaseOfAbort); } \
	FORCEINLINE static uint32 __PPO__MaxPrerequisiteFailureRestoration() { return STRUCT_OFFSET(UTaskManagerTask, MaxPrerequisiteFailureRestoration); } \
	FORCEINLINE static uint32 __PPO__MaxAbortRestoration() { return STRUCT_OFFSET(UTaskManagerTask, MaxAbortRestoration); }


#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_10_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIUTILS_API UClass* StaticClass<class UTaskManagerTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_TaskManagerTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
