// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObjective;
#ifdef GAMEPLAYOBJECTIVES_PlayerObjectiveTrigger_generated_h
#error "PlayerObjectiveTrigger.generated.h already included, missing '#pragma once' in PlayerObjectiveTrigger.h"
#endif
#define GAMEPLAYOBJECTIVES_PlayerObjectiveTrigger_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h_11_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnObjectiveReset);


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnObjectiveReset);


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerObjectiveTrigger(); \
	friend struct Z_Construct_UClass_APlayerObjectiveTrigger_Statics; \
public: \
	DECLARE_CLASS(APlayerObjectiveTrigger, AObjectiveTrigger, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayObjectives"), NO_API) \
	DECLARE_SERIALIZER(APlayerObjectiveTrigger)


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerObjectiveTrigger(); \
	friend struct Z_Construct_UClass_APlayerObjectiveTrigger_Statics; \
public: \
	DECLARE_CLASS(APlayerObjectiveTrigger, AObjectiveTrigger, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayObjectives"), NO_API) \
	DECLARE_SERIALIZER(APlayerObjectiveTrigger)


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerObjectiveTrigger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerObjectiveTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerObjectiveTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerObjectiveTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerObjectiveTrigger(APlayerObjectiveTrigger&&); \
	NO_API APlayerObjectiveTrigger(const APlayerObjectiveTrigger&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerObjectiveTrigger(APlayerObjectiveTrigger&&); \
	NO_API APlayerObjectiveTrigger(const APlayerObjectiveTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerObjectiveTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerObjectiveTrigger); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerObjectiveTrigger)


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h_11_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h_9_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h_11_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h_11_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h_11_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYOBJECTIVES_API UClass* StaticClass<class APlayerObjectiveTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjectiveTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
