// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObjective;
struct FSimpleObjectiveData;
#ifdef GAMEPLAYOBJECTIVES_ObjectiveManager_generated_h
#error "ObjectiveManager.generated.h already included, missing '#pragma once' in ObjectiveManager.h"
#endif
#define GAMEPLAYOBJECTIVES_ObjectiveManager_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_RPC_WRAPPERS \
	virtual void ActivateObjectives_Implementation(); \
	virtual void InitializeObjectives_Implementation(); \
 \
	DECLARE_FUNCTION(execActivateObjective); \
	DECLARE_FUNCTION(execActivateObjectives); \
	DECLARE_FUNCTION(execActivateObjectiveWithName); \
	DECLARE_FUNCTION(execActivateSimpleObjectives); \
	DECLARE_FUNCTION(execAddCachedObjectiveName); \
	DECLARE_FUNCTION(execAddObjective); \
	DECLARE_FUNCTION(execDeactivateObjective); \
	DECLARE_FUNCTION(execDeactivateObjectiveWithName); \
	DECLARE_FUNCTION(execGetActiveObjectiveNames); \
	DECLARE_FUNCTION(execGetNumActiveObjectives); \
	DECLARE_FUNCTION(execGetObjective); \
	DECLARE_FUNCTION(execGetObjectiveNames); \
	DECLARE_FUNCTION(execHasActiveObjective); \
	DECLARE_FUNCTION(execInitializeObjectives); \
	DECLARE_FUNCTION(execRemoveObjective); \
	DECLARE_FUNCTION(execRemoveObjectiveWithName); \
	DECLARE_FUNCTION(execSyncObjectives); \
	DECLARE_FUNCTION(execUpdateCachedObjectiveNames);


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ActivateObjectives_Implementation(); \
	virtual void InitializeObjectives_Implementation(); \
 \
	DECLARE_FUNCTION(execActivateObjective); \
	DECLARE_FUNCTION(execActivateObjectives); \
	DECLARE_FUNCTION(execActivateObjectiveWithName); \
	DECLARE_FUNCTION(execActivateSimpleObjectives); \
	DECLARE_FUNCTION(execAddCachedObjectiveName); \
	DECLARE_FUNCTION(execAddObjective); \
	DECLARE_FUNCTION(execDeactivateObjective); \
	DECLARE_FUNCTION(execDeactivateObjectiveWithName); \
	DECLARE_FUNCTION(execGetActiveObjectiveNames); \
	DECLARE_FUNCTION(execGetNumActiveObjectives); \
	DECLARE_FUNCTION(execGetObjective); \
	DECLARE_FUNCTION(execGetObjectiveNames); \
	DECLARE_FUNCTION(execHasActiveObjective); \
	DECLARE_FUNCTION(execInitializeObjectives); \
	DECLARE_FUNCTION(execRemoveObjective); \
	DECLARE_FUNCTION(execRemoveObjectiveWithName); \
	DECLARE_FUNCTION(execSyncObjectives); \
	DECLARE_FUNCTION(execUpdateCachedObjectiveNames);


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_EVENT_PARMS
#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObjectiveManager(); \
	friend struct Z_Construct_UClass_AObjectiveManager_Statics; \
public: \
	DECLARE_CLASS(AObjectiveManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayObjectives"), NO_API) \
	DECLARE_SERIALIZER(AObjectiveManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Objectives=NETFIELD_REP_START, \
		NETFIELD_REP_END=Objectives	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAObjectiveManager(); \
	friend struct Z_Construct_UClass_AObjectiveManager_Statics; \
public: \
	DECLARE_CLASS(AObjectiveManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayObjectives"), NO_API) \
	DECLARE_SERIALIZER(AObjectiveManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Objectives=NETFIELD_REP_START, \
		NETFIELD_REP_END=Objectives	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AObjectiveManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObjectiveManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObjectiveManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObjectiveManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObjectiveManager(AObjectiveManager&&); \
	NO_API AObjectiveManager(const AObjectiveManager&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObjectiveManager(AObjectiveManager&&); \
	NO_API AObjectiveManager(const AObjectiveManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObjectiveManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObjectiveManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObjectiveManager)


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bHasActivatedObjectives() { return STRUCT_OFFSET(AObjectiveManager, bHasActivatedObjectives); }


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_11_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYOBJECTIVES_API UClass* StaticClass<class AObjectiveManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
