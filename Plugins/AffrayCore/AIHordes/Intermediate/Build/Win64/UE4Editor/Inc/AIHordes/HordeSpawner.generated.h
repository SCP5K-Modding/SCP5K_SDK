// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AHordeAgent;
class AHorde;
#ifdef AIHORDES_HordeSpawner_generated_h
#error "HordeSpawner.generated.h already included, missing '#pragma once' in HordeSpawner.h"
#endif
#define AIHORDES_HordeSpawner_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_RPC_WRAPPERS \
	virtual bool CanSpawn_Implementation(FVector Location); \
	virtual FVector FindSpawnLocation_Implementation(bool& FoundSpawn); \
	virtual TSubclassOf<AHordeAgent>  PickClass_Implementation(); \
	virtual void Spawn_Implementation(); \
	virtual bool SpawnAgent_Implementation(AHorde* Horde); \
 \
	DECLARE_FUNCTION(execCanSpawn); \
	DECLARE_FUNCTION(execFindSpawnLocation); \
	DECLARE_FUNCTION(execPickClass); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSpawn); \
	DECLARE_FUNCTION(execSpawnAgent);


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanSpawn_Implementation(FVector Location); \
	virtual FVector FindSpawnLocation_Implementation(bool& FoundSpawn); \
	virtual TSubclassOf<AHordeAgent>  PickClass_Implementation(); \
	virtual void Spawn_Implementation(); \
	virtual bool SpawnAgent_Implementation(AHorde* Horde); \
 \
	DECLARE_FUNCTION(execCanSpawn); \
	DECLARE_FUNCTION(execFindSpawnLocation); \
	DECLARE_FUNCTION(execPickClass); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSpawn); \
	DECLARE_FUNCTION(execSpawnAgent);


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_EVENT_PARMS \
	struct HordeSpawner_eventCanSpawn_Parms \
	{ \
		FVector Location; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HordeSpawner_eventCanSpawn_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HordeSpawner_eventFindSpawnLocation_Parms \
	{ \
		bool FoundSpawn; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HordeSpawner_eventFindSpawnLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct HordeSpawner_eventPickClass_Parms \
	{ \
		TSubclassOf<AHordeAgent>  ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HordeSpawner_eventPickClass_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct HordeSpawner_eventSpawnAgent_Parms \
	{ \
		AHorde* Horde; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HordeSpawner_eventSpawnAgent_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHordeSpawner(); \
	friend struct Z_Construct_UClass_AHordeSpawner_Statics; \
public: \
	DECLARE_CLASS(AHordeSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIHordes"), NO_API) \
	DECLARE_SERIALIZER(AHordeSpawner)


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAHordeSpawner(); \
	friend struct Z_Construct_UClass_AHordeSpawner_Statics; \
public: \
	DECLARE_CLASS(AHordeSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIHordes"), NO_API) \
	DECLARE_SERIALIZER(AHordeSpawner)


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHordeSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHordeSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHordeSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHordeSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHordeSpawner(AHordeSpawner&&); \
	NO_API AHordeSpawner(const AHordeSpawner&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHordeSpawner(AHordeSpawner&&); \
	NO_API AHordeSpawner(const AHordeSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHordeSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHordeSpawner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHordeSpawner)


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnAttempts() { return STRUCT_OFFSET(AHordeSpawner, SpawnAttempts); } \
	FORCEINLINE static uint32 __PPO__SpawnAmount() { return STRUCT_OFFSET(AHordeSpawner, SpawnAmount); } \
	FORCEINLINE static uint32 __PPO__HordeClass() { return STRUCT_OFFSET(AHordeSpawner, HordeClass); } \
	FORCEINLINE static uint32 __PPO__AgentClasses() { return STRUCT_OFFSET(AHordeSpawner, AgentClasses); }


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_12_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIHORDES_API UClass* StaticClass<class AHordeSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
