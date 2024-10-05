// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHordeAgent;
class AParty;
class APawn;
class AHordeController;
class AHorde;
class AActor;
struct FVector;
struct FRotator;
#ifdef AIHORDES_Horde_generated_h
#error "Horde.generated.h already included, missing '#pragma once' in Horde.h"
#endif
#define AIHORDES_Horde_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_RPC_WRAPPERS \
	virtual void AddAgent_Implementation(AHordeAgent* Agent, AParty* Party); \
	virtual void AddParty_Implementation(AParty* Party); \
	virtual void BeginAlert_Implementation(TArray<APawn*> const& Targets); \
	virtual void EndAlert_Implementation(); \
	virtual void MergeParties_Implementation(); \
	virtual void RemoveAgent_Implementation(AHordeAgent* Agent); \
	virtual void RemoveParty_Implementation(AParty* Party); \
	virtual void UpdateBounds_Implementation(); \
 \
	DECLARE_FUNCTION(execAddAgent); \
	DECLARE_FUNCTION(execAddParty); \
	DECLARE_FUNCTION(execBeginAlert); \
	DECLARE_FUNCTION(execEndAlert); \
	DECLARE_FUNCTION(execGetAgents); \
	DECLARE_FUNCTION(execGetHordeController); \
	DECLARE_FUNCTION(execGetMaxRadius); \
	DECLARE_FUNCTION(execGetParties); \
	DECLARE_FUNCTION(execGetRadius); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execIsAlert); \
	DECLARE_FUNCTION(execMergeParties); \
	DECLARE_FUNCTION(execMergeToHorde); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execRemoveAgent); \
	DECLARE_FUNCTION(execRemoveParty); \
	DECLARE_FUNCTION(execSpawnAgent); \
	DECLARE_FUNCTION(execSpawnAgentInRadius); \
	DECLARE_FUNCTION(execSpawnParty); \
	DECLARE_FUNCTION(execSpawnRandomAgent); \
	DECLARE_FUNCTION(execUpdateBounds);


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AddAgent_Implementation(AHordeAgent* Agent, AParty* Party); \
	virtual void AddParty_Implementation(AParty* Party); \
	virtual void BeginAlert_Implementation(TArray<APawn*> const& Targets); \
	virtual void EndAlert_Implementation(); \
	virtual void MergeParties_Implementation(); \
	virtual void RemoveAgent_Implementation(AHordeAgent* Agent); \
	virtual void RemoveParty_Implementation(AParty* Party); \
	virtual void UpdateBounds_Implementation(); \
 \
	DECLARE_FUNCTION(execAddAgent); \
	DECLARE_FUNCTION(execAddParty); \
	DECLARE_FUNCTION(execBeginAlert); \
	DECLARE_FUNCTION(execEndAlert); \
	DECLARE_FUNCTION(execGetAgents); \
	DECLARE_FUNCTION(execGetHordeController); \
	DECLARE_FUNCTION(execGetMaxRadius); \
	DECLARE_FUNCTION(execGetParties); \
	DECLARE_FUNCTION(execGetRadius); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execIsAlert); \
	DECLARE_FUNCTION(execMergeParties); \
	DECLARE_FUNCTION(execMergeToHorde); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execRemoveAgent); \
	DECLARE_FUNCTION(execRemoveParty); \
	DECLARE_FUNCTION(execSpawnAgent); \
	DECLARE_FUNCTION(execSpawnAgentInRadius); \
	DECLARE_FUNCTION(execSpawnParty); \
	DECLARE_FUNCTION(execSpawnRandomAgent); \
	DECLARE_FUNCTION(execUpdateBounds);


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_EVENT_PARMS \
	struct Horde_eventAddAgent_Parms \
	{ \
		AHordeAgent* Agent; \
		AParty* Party; \
	}; \
	struct Horde_eventAddParty_Parms \
	{ \
		AParty* Party; \
	}; \
	struct Horde_eventBeginAlert_Parms \
	{ \
		TArray<APawn*> Targets; \
	}; \
	struct Horde_eventRemoveAgent_Parms \
	{ \
		AHordeAgent* Agent; \
	}; \
	struct Horde_eventRemoveParty_Parms \
	{ \
		AParty* Party; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHorde(); \
	friend struct Z_Construct_UClass_AHorde_Statics; \
public: \
	DECLARE_CLASS(AHorde, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIHordes"), NO_API) \
	DECLARE_SERIALIZER(AHorde) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bActive=NETFIELD_REP_START, \
		bAlert, \
		Agents, \
		Parties, \
		MaxTargetDistance, \
		Radius, \
		NETFIELD_REP_END=Radius	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAHorde(); \
	friend struct Z_Construct_UClass_AHorde_Statics; \
public: \
	DECLARE_CLASS(AHorde, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIHordes"), NO_API) \
	DECLARE_SERIALIZER(AHorde) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bActive=NETFIELD_REP_START, \
		bAlert, \
		Agents, \
		Parties, \
		MaxTargetDistance, \
		Radius, \
		NETFIELD_REP_END=Radius	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHorde(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHorde) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHorde); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHorde); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHorde(AHorde&&); \
	NO_API AHorde(const AHorde&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHorde(AHorde&&); \
	NO_API AHorde(const AHorde&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHorde); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHorde); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHorde)


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultPartyClass() { return STRUCT_OFFSET(AHorde, DefaultPartyClass); } \
	FORCEINLINE static uint32 __PPO__AgentClasses() { return STRUCT_OFFSET(AHorde, AgentClasses); } \
	FORCEINLINE static uint32 __PPO__bActive() { return STRUCT_OFFSET(AHorde, bActive); } \
	FORCEINLINE static uint32 __PPO__bAlert() { return STRUCT_OFFSET(AHorde, bAlert); } \
	FORCEINLINE static uint32 __PPO__Agents() { return STRUCT_OFFSET(AHorde, Agents); } \
	FORCEINLINE static uint32 __PPO__Parties() { return STRUCT_OFFSET(AHorde, Parties); } \
	FORCEINLINE static uint32 __PPO__MaxTargetDistance() { return STRUCT_OFFSET(AHorde, MaxTargetDistance); } \
	FORCEINLINE static uint32 __PPO__MaxRadius() { return STRUCT_OFFSET(AHorde, MaxRadius); } \
	FORCEINLINE static uint32 __PPO__Radius() { return STRUCT_OFFSET(AHorde, Radius); } \
	FORCEINLINE static uint32 __PPO__InitialAgents() { return STRUCT_OFFSET(AHorde, InitialAgents); } \
	FORCEINLINE static uint32 __PPO__PartyMergeDistance() { return STRUCT_OFFSET(AHorde, PartyMergeDistance); } \
	FORCEINLINE static uint32 __PPO__SpawnOffset() { return STRUCT_OFFSET(AHorde, SpawnOffset); } \
	FORCEINLINE static uint32 __PPO__SphereComponent() { return STRUCT_OFFSET(AHorde, SphereComponent); }


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_19_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIHORDES_API UClass* StaticClass<class AHorde>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Horde_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
