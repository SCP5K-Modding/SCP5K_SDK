// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObjective;
class AObjectiveManager;
class AActor;
#ifdef GAMEPLAYOBJECTIVES_ObjectiveTrigger_generated_h
#error "ObjectiveTrigger.generated.h already included, missing '#pragma once' in ObjectiveTrigger.h"
#endif
#define GAMEPLAYOBJECTIVES_ObjectiveTrigger_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h_13_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAffectObjective); \
	DECLARE_FUNCTION(execDisable); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAffectObjective); \
	DECLARE_FUNCTION(execDisable); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObjectiveTrigger(); \
	friend struct Z_Construct_UClass_AObjectiveTrigger_Statics; \
public: \
	DECLARE_CLASS(AObjectiveTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayObjectives"), NO_API) \
	DECLARE_SERIALIZER(AObjectiveTrigger)


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAObjectiveTrigger(); \
	friend struct Z_Construct_UClass_AObjectiveTrigger_Statics; \
public: \
	DECLARE_CLASS(AObjectiveTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayObjectives"), NO_API) \
	DECLARE_SERIALIZER(AObjectiveTrigger)


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AObjectiveTrigger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObjectiveTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObjectiveTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObjectiveTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObjectiveTrigger(AObjectiveTrigger&&); \
	NO_API AObjectiveTrigger(const AObjectiveTrigger&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObjectiveTrigger(AObjectiveTrigger&&); \
	NO_API AObjectiveTrigger(const AObjectiveTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObjectiveTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObjectiveTrigger); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObjectiveTrigger)


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h_13_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h_11_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h_13_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h_13_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h_13_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYOBJECTIVES_API UClass* StaticClass<class AObjectiveTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
