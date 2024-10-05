// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AISENTIENCE_SAISpawner_generated_h
#error "SAISpawner.generated.h already included, missing '#pragma once' in SAISpawner.h"
#endif
#define AISENTIENCE_SAISpawner_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h_15_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbIsDisabled); \
	DECLARE_FUNCTION(execGetPatrolPointWaitTime); \
	DECLARE_FUNCTION(execGetRoamRadius); \
	DECLARE_FUNCTION(execGetRoamWaitTime); \
	DECLARE_FUNCTION(execGetSpawnedCalmBehavior); \
	DECLARE_FUNCTION(execGetSpawnedMorale); \
	DECLARE_FUNCTION(execGetSpawnedMoraleMultiplier); \
	DECLARE_FUNCTION(execGetSpawnedPatrolKey); \
	DECLARE_FUNCTION(execIsSpawnedAsLeader); \
	DECLARE_FUNCTION(execSpawnAI);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbIsDisabled); \
	DECLARE_FUNCTION(execGetPatrolPointWaitTime); \
	DECLARE_FUNCTION(execGetRoamRadius); \
	DECLARE_FUNCTION(execGetRoamWaitTime); \
	DECLARE_FUNCTION(execGetSpawnedCalmBehavior); \
	DECLARE_FUNCTION(execGetSpawnedMorale); \
	DECLARE_FUNCTION(execGetSpawnedMoraleMultiplier); \
	DECLARE_FUNCTION(execGetSpawnedPatrolKey); \
	DECLARE_FUNCTION(execIsSpawnedAsLeader); \
	DECLARE_FUNCTION(execSpawnAI);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASAISpawner(); \
	friend struct Z_Construct_UClass_ASAISpawner_Statics; \
public: \
	DECLARE_CLASS(ASAISpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(ASAISpawner)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASAISpawner(); \
	friend struct Z_Construct_UClass_ASAISpawner_Statics; \
public: \
	DECLARE_CLASS(ASAISpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(ASAISpawner)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASAISpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAISpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAISpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAISpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAISpawner(ASAISpawner&&); \
	NO_API ASAISpawner(const ASAISpawner&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAISpawner(ASAISpawner&&); \
	NO_API ASAISpawner(const ASAISpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAISpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAISpawner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAISpawner)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnPoint() { return STRUCT_OFFSET(ASAISpawner, SpawnPoint); } \
	FORCEINLINE static uint32 __PPO__AIComponent() { return STRUCT_OFFSET(ASAISpawner, AIComponent); } \
	FORCEINLINE static uint32 __PPO__bDisabled() { return STRUCT_OFFSET(ASAISpawner, bDisabled); } \
	FORCEINLINE static uint32 __PPO__AIToSpawn() { return STRUCT_OFFSET(ASAISpawner, AIToSpawn); } \
	FORCEINLINE static uint32 __PPO__SpawnedAI() { return STRUCT_OFFSET(ASAISpawner, SpawnedAI); } \
	FORCEINLINE static uint32 __PPO__SpawnRange() { return STRUCT_OFFSET(ASAISpawner, SpawnRange); } \
	FORCEINLINE static uint32 __PPO__SpawnedCalmBehavior() { return STRUCT_OFFSET(ASAISpawner, SpawnedCalmBehavior); } \
	FORCEINLINE static uint32 __PPO__SpawnedRoamRadius() { return STRUCT_OFFSET(ASAISpawner, SpawnedRoamRadius); } \
	FORCEINLINE static uint32 __PPO__SpawnedRoamWaitTime() { return STRUCT_OFFSET(ASAISpawner, SpawnedRoamWaitTime); } \
	FORCEINLINE static uint32 __PPO__SpawnedPatrolPointWaitTime() { return STRUCT_OFFSET(ASAISpawner, SpawnedPatrolPointWaitTime); } \
	FORCEINLINE static uint32 __PPO__SpawnedPatrolkey() { return STRUCT_OFFSET(ASAISpawner, SpawnedPatrolkey); } \
	FORCEINLINE static uint32 __PPO__SpawnedMorale() { return STRUCT_OFFSET(ASAISpawner, SpawnedMorale); } \
	FORCEINLINE static uint32 __PPO__SpawnedMoraleMultiplier() { return STRUCT_OFFSET(ASAISpawner, SpawnedMoraleMultiplier); }


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h_13_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h_15_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h_15_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h_15_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AISENTIENCE_API UClass* StaticClass<class ASAISpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
