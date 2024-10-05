// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObjective;
class AObjectiveManager;
class UObject;
class AActor;
struct FSimpleObjectiveData;
#ifdef GAMEPLAYOBJECTIVES_Objective_generated_h
#error "Objective.generated.h already included, missing '#pragma once' in Objective.h"
#endif
#define GAMEPLAYOBJECTIVES_Objective_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h_20_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivateObjective); \
	DECLARE_FUNCTION(execAddChildObjective); \
	DECLARE_FUNCTION(execAddObjective); \
	DECLARE_FUNCTION(execCheckRequirements); \
	DECLARE_FUNCTION(execChildrenAreCompleted); \
	DECLARE_FUNCTION(execCompleteObjective); \
	DECLARE_FUNCTION(execCreateEmptyObjective); \
	DECLARE_FUNCTION(execDeactivateObjective); \
	DECLARE_FUNCTION(execDestroy); \
	DECLARE_FUNCTION(execGetActive); \
	DECLARE_FUNCTION(execGetAutoActivateWithParent); \
	DECLARE_FUNCTION(execGetChildObjective); \
	DECLARE_FUNCTION(execGetCompleted); \
	DECLARE_FUNCTION(execGetCurrentTime); \
	DECLARE_FUNCTION(execGetDisplayOnUI); \
	DECLARE_FUNCTION(execGetIsMajorObjective); \
	DECLARE_FUNCTION(execGetMaxTime); \
	DECLARE_FUNCTION(execGetObjectiveDescription); \
	DECLARE_FUNCTION(execGetObjectiveDisplayName); \
	DECLARE_FUNCTION(execGetObjectiveName); \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execGetStarted); \
	DECLARE_FUNCTION(execGetSucceeded); \
	DECLARE_FUNCTION(execGetTimerSucceeds); \
	DECLARE_FUNCTION(execGetUsesTimer); \
	DECLARE_FUNCTION(execInitializeObjective); \
	DECLARE_FUNCTION(execOnRep_bActive); \
	DECLARE_FUNCTION(execOnRep_bCompleted); \
	DECLARE_FUNCTION(execOnRep_bStarted); \
	DECLARE_FUNCTION(execOnRep_ObjectiveName); \
	DECLARE_FUNCTION(execPreviousObjectiveCompleted); \
	DECLARE_FUNCTION(execRemoveChildObjective); \
	DECLARE_FUNCTION(execResetObjective); \
	DECLARE_FUNCTION(execSetupFromSimpleObjectiveData); \
	DECLARE_FUNCTION(execSetupSimpleObjectiveData); \
	DECLARE_FUNCTION(execStartObjective); \
	DECLARE_FUNCTION(execStopObjective); \
	DECLARE_FUNCTION(execUpdateObjective);


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivateObjective); \
	DECLARE_FUNCTION(execAddChildObjective); \
	DECLARE_FUNCTION(execAddObjective); \
	DECLARE_FUNCTION(execCheckRequirements); \
	DECLARE_FUNCTION(execChildrenAreCompleted); \
	DECLARE_FUNCTION(execCompleteObjective); \
	DECLARE_FUNCTION(execCreateEmptyObjective); \
	DECLARE_FUNCTION(execDeactivateObjective); \
	DECLARE_FUNCTION(execDestroy); \
	DECLARE_FUNCTION(execGetActive); \
	DECLARE_FUNCTION(execGetAutoActivateWithParent); \
	DECLARE_FUNCTION(execGetChildObjective); \
	DECLARE_FUNCTION(execGetCompleted); \
	DECLARE_FUNCTION(execGetCurrentTime); \
	DECLARE_FUNCTION(execGetDisplayOnUI); \
	DECLARE_FUNCTION(execGetIsMajorObjective); \
	DECLARE_FUNCTION(execGetMaxTime); \
	DECLARE_FUNCTION(execGetObjectiveDescription); \
	DECLARE_FUNCTION(execGetObjectiveDisplayName); \
	DECLARE_FUNCTION(execGetObjectiveName); \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execGetStarted); \
	DECLARE_FUNCTION(execGetSucceeded); \
	DECLARE_FUNCTION(execGetTimerSucceeds); \
	DECLARE_FUNCTION(execGetUsesTimer); \
	DECLARE_FUNCTION(execInitializeObjective); \
	DECLARE_FUNCTION(execOnRep_bActive); \
	DECLARE_FUNCTION(execOnRep_bCompleted); \
	DECLARE_FUNCTION(execOnRep_bStarted); \
	DECLARE_FUNCTION(execOnRep_ObjectiveName); \
	DECLARE_FUNCTION(execPreviousObjectiveCompleted); \
	DECLARE_FUNCTION(execRemoveChildObjective); \
	DECLARE_FUNCTION(execResetObjective); \
	DECLARE_FUNCTION(execSetupFromSimpleObjectiveData); \
	DECLARE_FUNCTION(execSetupSimpleObjectiveData); \
	DECLARE_FUNCTION(execStartObjective); \
	DECLARE_FUNCTION(execStopObjective); \
	DECLARE_FUNCTION(execUpdateObjective);


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjective(); \
	friend struct Z_Construct_UClass_UObjective_Statics; \
public: \
	DECLARE_CLASS(UObjective, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayObjectives"), NO_API) \
	DECLARE_SERIALIZER(UObjective) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Manager=NETFIELD_REP_START, \
		Parent, \
		bActive, \
		bStarted, \
		bCompleted, \
		bSucceeded, \
		bDisplayOnUI, \
		ObjectiveName, \
		ObjectiveDisplayName, \
		ObjectiveDescription, \
		bIsMajorObjective, \
		bUseTimer, \
		bTimerSucceeds, \
		ChildObjectives, \
		CurrentTime, \
		MaxTime, \
		NETFIELD_REP_END=MaxTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UObjective) \
public:


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUObjective(); \
	friend struct Z_Construct_UClass_UObjective_Statics; \
public: \
	DECLARE_CLASS(UObjective, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayObjectives"), NO_API) \
	DECLARE_SERIALIZER(UObjective) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Manager=NETFIELD_REP_START, \
		Parent, \
		bActive, \
		bStarted, \
		bCompleted, \
		bSucceeded, \
		bDisplayOnUI, \
		ObjectiveName, \
		ObjectiveDisplayName, \
		ObjectiveDescription, \
		bIsMajorObjective, \
		bUseTimer, \
		bTimerSucceeds, \
		ChildObjectives, \
		CurrentTime, \
		MaxTime, \
		NETFIELD_REP_END=MaxTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UObjective) \
public:


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjective(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjective) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjective); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjective); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjective(UObjective&&); \
	NO_API UObjective(const UObjective&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjective(UObjective&&); \
	NO_API UObjective(const UObjective&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjective); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjective); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UObjective)


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bActive() { return STRUCT_OFFSET(UObjective, bActive); } \
	FORCEINLINE static uint32 __PPO__bStarted() { return STRUCT_OFFSET(UObjective, bStarted); } \
	FORCEINLINE static uint32 __PPO__bHasBeenStarted() { return STRUCT_OFFSET(UObjective, bHasBeenStarted); } \
	FORCEINLINE static uint32 __PPO__bCompleted() { return STRUCT_OFFSET(UObjective, bCompleted); } \
	FORCEINLINE static uint32 __PPO__bSucceeded() { return STRUCT_OFFSET(UObjective, bSucceeded); } \
	FORCEINLINE static uint32 __PPO__bDisplayOnUI() { return STRUCT_OFFSET(UObjective, bDisplayOnUI); } \
	FORCEINLINE static uint32 __PPO__ObjectiveName() { return STRUCT_OFFSET(UObjective, ObjectiveName); } \
	FORCEINLINE static uint32 __PPO__ObjectiveDisplayName() { return STRUCT_OFFSET(UObjective, ObjectiveDisplayName); } \
	FORCEINLINE static uint32 __PPO__ObjectiveDescription() { return STRUCT_OFFSET(UObjective, ObjectiveDescription); } \
	FORCEINLINE static uint32 __PPO__bIsMajorObjective() { return STRUCT_OFFSET(UObjective, bIsMajorObjective); } \
	FORCEINLINE static uint32 __PPO__bUseTimer() { return STRUCT_OFFSET(UObjective, bUseTimer); } \
	FORCEINLINE static uint32 __PPO__bTimerSucceeds() { return STRUCT_OFFSET(UObjective, bTimerSucceeds); } \
	FORCEINLINE static uint32 __PPO__ChildObjectives() { return STRUCT_OFFSET(UObjective, ChildObjectives); } \
	FORCEINLINE static uint32 __PPO__CurrentTime() { return STRUCT_OFFSET(UObjective, CurrentTime); } \
	FORCEINLINE static uint32 __PPO__MaxTime() { return STRUCT_OFFSET(UObjective, MaxTime); } \
	FORCEINLINE static uint32 __PPO__bAutoActivateWithParent() { return STRUCT_OFFSET(UObjective, bAutoActivateWithParent); } \
	FORCEINLINE static uint32 __PPO__bStartChildren() { return STRUCT_OFFSET(UObjective, bStartChildren); } \
	FORCEINLINE static uint32 __PPO__bCompleteWithChildren() { return STRUCT_OFFSET(UObjective, bCompleteWithChildren); } \
	FORCEINLINE static uint32 __PPO__PreviousObjective() { return STRUCT_OFFSET(UObjective, PreviousObjective); }


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h_18_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h_20_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h_20_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h_20_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h_20_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h_20_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h_20_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h_20_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYOBJECTIVES_API UClass* StaticClass<class UObjective>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_Objective_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
