// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTaskManagerTask;
enum class ETaskManagerTaskType : uint8;
#ifdef AIUTILS_AITaskManagerComponent_generated_h
#error "AITaskManagerComponent.generated.h already included, missing '#pragma once' in AITaskManagerComponent.h"
#endif
#define AIUTILS_AITaskManagerComponent_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h_12_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddQueue); \
	DECLARE_FUNCTION(execAddStack); \
	DECLARE_FUNCTION(execAddTask); \
	DECLARE_FUNCTION(execHasAnyTasks); \
	DECLARE_FUNCTION(execHasHighPriorityTask); \
	DECLARE_FUNCTION(execRemoveTask); \
	DECLARE_FUNCTION(execSortGeneralTasks); \
	DECLARE_FUNCTION(execSortHighPriorityTasks); \
	DECLARE_FUNCTION(execSortTasks);


#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddQueue); \
	DECLARE_FUNCTION(execAddStack); \
	DECLARE_FUNCTION(execAddTask); \
	DECLARE_FUNCTION(execHasAnyTasks); \
	DECLARE_FUNCTION(execHasHighPriorityTask); \
	DECLARE_FUNCTION(execRemoveTask); \
	DECLARE_FUNCTION(execSortGeneralTasks); \
	DECLARE_FUNCTION(execSortHighPriorityTasks); \
	DECLARE_FUNCTION(execSortTasks);


#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAITaskManagerComponent(); \
	friend struct Z_Construct_UClass_UAITaskManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UAITaskManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIUtils"), NO_API) \
	DECLARE_SERIALIZER(UAITaskManagerComponent)


#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUAITaskManagerComponent(); \
	friend struct Z_Construct_UClass_UAITaskManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UAITaskManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIUtils"), NO_API) \
	DECLARE_SERIALIZER(UAITaskManagerComponent)


#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAITaskManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAITaskManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAITaskManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITaskManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAITaskManagerComponent(UAITaskManagerComponent&&); \
	NO_API UAITaskManagerComponent(const UAITaskManagerComponent&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAITaskManagerComponent(UAITaskManagerComponent&&); \
	NO_API UAITaskManagerComponent(const UAITaskManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAITaskManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITaskManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAITaskManagerComponent)


#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Blackboard_HasDynamicTask() { return STRUCT_OFFSET(UAITaskManagerComponent, Blackboard_HasDynamicTask); } \
	FORCEINLINE static uint32 __PPO__Blackboard_HasHighPriorityDynamicTask() { return STRUCT_OFFSET(UAITaskManagerComponent, Blackboard_HasHighPriorityDynamicTask); } \
	FORCEINLINE static uint32 __PPO__InitialTasks() { return STRUCT_OFFSET(UAITaskManagerComponent, InitialTasks); }


#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h_10_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h_12_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h_12_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h_12_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIUTILS_API UClass* StaticClass<class UAITaskManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_AITaskManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
