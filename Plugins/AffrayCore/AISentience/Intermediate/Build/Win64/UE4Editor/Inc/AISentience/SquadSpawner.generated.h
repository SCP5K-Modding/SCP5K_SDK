// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAISpawn;
class ACharacter;
#ifdef AISENTIENCE_SquadSpawner_generated_h
#error "SquadSpawner.generated.h already included, missing '#pragma once' in SquadSpawner.h"
#endif
#define AISENTIENCE_SquadSpawner_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawn);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawn);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_EVENT_PARMS \
	struct SquadSpawner_eventBlueprint_AfterSpawn_Parms \
	{ \
		FAISpawn AIStruct; \
		ACharacter* SpawnedCharacter; \
	}; \
	struct SquadSpawner_eventBlueprint_SpawnSetup_Parms \
	{ \
		FAISpawn AIStruct; \
		ACharacter* SpawnedCharacter; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASquadSpawner(); \
	friend struct Z_Construct_UClass_ASquadSpawner_Statics; \
public: \
	DECLARE_CLASS(ASquadSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(ASquadSpawner)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_INCLASS \
private: \
	static void StaticRegisterNativesASquadSpawner(); \
	friend struct Z_Construct_UClass_ASquadSpawner_Statics; \
public: \
	DECLARE_CLASS(ASquadSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(ASquadSpawner)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASquadSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASquadSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASquadSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASquadSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASquadSpawner(ASquadSpawner&&); \
	NO_API ASquadSpawner(const ASquadSpawner&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASquadSpawner(ASquadSpawner&&); \
	NO_API ASquadSpawner(const ASquadSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASquadSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASquadSpawner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASquadSpawner)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bSpawnOnBeginplay() { return STRUCT_OFFSET(ASquadSpawner, bSpawnOnBeginplay); } \
	FORCEINLINE static uint32 __PPO__AIClassToSpawn() { return STRUCT_OFFSET(ASquadSpawner, AIClassToSpawn); } \
	FORCEINLINE static uint32 __PPO__SpawnRadiusOffset() { return STRUCT_OFFSET(ASquadSpawner, SpawnRadiusOffset); }


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_9_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AISENTIENCE_API UClass* StaticClass<class ASquadSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SquadSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
