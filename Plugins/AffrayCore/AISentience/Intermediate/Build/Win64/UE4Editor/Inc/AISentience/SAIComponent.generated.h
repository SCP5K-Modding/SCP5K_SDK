// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
class APawn;
struct FAISquad;
struct FDataTableRowHandle;
class ASAIPatrolPath;
#ifdef AISENTIENCE_SAIComponent_generated_h
#error "SAIComponent.generated.h already included, missing '#pragma once' in SAIComponent.h"
#endif
#define AISENTIENCE_SAIComponent_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBuffMorale); \
	DECLARE_FUNCTION(execCanRoamFromSpawn); \
	DECLARE_FUNCTION(execGetAllKnownTargets); \
	DECLARE_FUNCTION(execGetCoverTraceDistance); \
	DECLARE_FUNCTION(execGetCurrentCalmBehavior); \
	DECLARE_FUNCTION(execGetCurrentCombatBehavior); \
	DECLARE_FUNCTION(execGetCurrentMorale); \
	DECLARE_FUNCTION(execGetCurrentPatrolKey); \
	DECLARE_FUNCTION(execGetCurrentSquadType); \
	DECLARE_FUNCTION(execGetDesiredTargetActor); \
	DECLARE_FUNCTION(execGetDetectionSpeed); \
	DECLARE_FUNCTION(execGetFireDelayMult); \
	DECLARE_FUNCTION(execGetLastDamageLocation); \
	DECLARE_FUNCTION(execGetMaxCoverCrouchDist); \
	DECLARE_FUNCTION(execGetMaxSquadMembers); \
	DECLARE_FUNCTION(execGetPatrolWaitTime); \
	DECLARE_FUNCTION(execGetReactionTime); \
	DECLARE_FUNCTION(execGetRoamRadius); \
	DECLARE_FUNCTION(execGetRoamWaitTime); \
	DECLARE_FUNCTION(execGetSkillLevel); \
	DECLARE_FUNCTION(execGetSquadMembers); \
	DECLARE_FUNCTION(execGetSquadRef); \
	DECLARE_FUNCTION(execGetStartLocation); \
	DECLARE_FUNCTION(execHasHeardNoise); \
	DECLARE_FUNCTION(execHasLowerCover); \
	DECLARE_FUNCTION(execHasUpperCover); \
	DECLARE_FUNCTION(execIsLeader); \
	DECLARE_FUNCTION(execNerfMorale); \
	DECLARE_FUNCTION(execSetAIBehaviorSwitchTime); \
	DECLARE_FUNCTION(execSetAIVoices); \
	DECLARE_FUNCTION(execSetAvailableCalmBehaviors); \
	DECLARE_FUNCTION(execSetCurrentCalmBehavior); \
	DECLARE_FUNCTION(execSetCurrentMorale); \
	DECLARE_FUNCTION(execSetFireDelayMult); \
	DECLARE_FUNCTION(execSetMoraleMultipler); \
	DECLARE_FUNCTION(execSetPatrolDelay); \
	DECLARE_FUNCTION(execSetPatrolPath); \
	DECLARE_FUNCTION(execSetRoamFromSpawn); \
	DECLARE_FUNCTION(execSetRoamRadius); \
	DECLARE_FUNCTION(execSetSkillLevel); \
	DECLARE_FUNCTION(execSetSquadRef); \
	DECLARE_FUNCTION(execSetSquadType);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBuffMorale); \
	DECLARE_FUNCTION(execCanRoamFromSpawn); \
	DECLARE_FUNCTION(execGetAllKnownTargets); \
	DECLARE_FUNCTION(execGetCoverTraceDistance); \
	DECLARE_FUNCTION(execGetCurrentCalmBehavior); \
	DECLARE_FUNCTION(execGetCurrentCombatBehavior); \
	DECLARE_FUNCTION(execGetCurrentMorale); \
	DECLARE_FUNCTION(execGetCurrentPatrolKey); \
	DECLARE_FUNCTION(execGetCurrentSquadType); \
	DECLARE_FUNCTION(execGetDesiredTargetActor); \
	DECLARE_FUNCTION(execGetDetectionSpeed); \
	DECLARE_FUNCTION(execGetFireDelayMult); \
	DECLARE_FUNCTION(execGetLastDamageLocation); \
	DECLARE_FUNCTION(execGetMaxCoverCrouchDist); \
	DECLARE_FUNCTION(execGetMaxSquadMembers); \
	DECLARE_FUNCTION(execGetPatrolWaitTime); \
	DECLARE_FUNCTION(execGetReactionTime); \
	DECLARE_FUNCTION(execGetRoamRadius); \
	DECLARE_FUNCTION(execGetRoamWaitTime); \
	DECLARE_FUNCTION(execGetSkillLevel); \
	DECLARE_FUNCTION(execGetSquadMembers); \
	DECLARE_FUNCTION(execGetSquadRef); \
	DECLARE_FUNCTION(execGetStartLocation); \
	DECLARE_FUNCTION(execHasHeardNoise); \
	DECLARE_FUNCTION(execHasLowerCover); \
	DECLARE_FUNCTION(execHasUpperCover); \
	DECLARE_FUNCTION(execIsLeader); \
	DECLARE_FUNCTION(execNerfMorale); \
	DECLARE_FUNCTION(execSetAIBehaviorSwitchTime); \
	DECLARE_FUNCTION(execSetAIVoices); \
	DECLARE_FUNCTION(execSetAvailableCalmBehaviors); \
	DECLARE_FUNCTION(execSetCurrentCalmBehavior); \
	DECLARE_FUNCTION(execSetCurrentMorale); \
	DECLARE_FUNCTION(execSetFireDelayMult); \
	DECLARE_FUNCTION(execSetMoraleMultipler); \
	DECLARE_FUNCTION(execSetPatrolDelay); \
	DECLARE_FUNCTION(execSetPatrolPath); \
	DECLARE_FUNCTION(execSetRoamFromSpawn); \
	DECLARE_FUNCTION(execSetRoamRadius); \
	DECLARE_FUNCTION(execSetSkillLevel); \
	DECLARE_FUNCTION(execSetSquadRef); \
	DECLARE_FUNCTION(execSetSquadType);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_EVENT_PARMS \
	struct SAIComponent_eventEventEnemyDied_Parms \
	{ \
		bool bShouldPlayVoiceline; \
	}; \
	struct SAIComponent_eventEventFriendlyDied_Parms \
	{ \
		bool bShouldPlayVoiceline; \
		bool bIsLastSquadMember; \
	}; \
	struct SAIComponent_eventEventMovingToCover_Parms \
	{ \
		bool bShouldPlayVoiceline; \
	}; \
	struct SAIComponent_eventEventStartInteraction_Parms \
	{ \
		bool bShouldPlayVoiceline; \
	}; \
	struct SAIComponent_eventPlayVoiceLine_Parms \
	{ \
		FName VoicelineType; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSAIComponent(); \
	friend struct Z_Construct_UClass_USAIComponent_Statics; \
public: \
	DECLARE_CLASS(USAIComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(USAIComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bHasLowerCover=NETFIELD_REP_START, \
		bHasUpperCover, \
		bHasRightCover, \
		bHasLeftCover, \
		NETFIELD_REP_END=bHasLeftCover	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSAIComponent(); \
	friend struct Z_Construct_UClass_USAIComponent_Statics; \
public: \
	DECLARE_CLASS(USAIComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(USAIComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bHasLowerCover=NETFIELD_REP_START, \
		bHasUpperCover, \
		bHasRightCover, \
		bHasLeftCover, \
		NETFIELD_REP_END=bHasLeftCover	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USAIComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USAIComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USAIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAIComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USAIComponent(USAIComponent&&); \
	NO_API USAIComponent(const USAIComponent&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USAIComponent(USAIComponent&&); \
	NO_API USAIComponent(const USAIComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USAIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAIComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USAIComponent)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentMorale() { return STRUCT_OFFSET(USAIComponent, CurrentMorale); } \
	FORCEINLINE static uint32 __PPO__MoraleMultiplier() { return STRUCT_OFFSET(USAIComponent, MoraleMultiplier); } \
	FORCEINLINE static uint32 __PPO__ReactionTime() { return STRUCT_OFFSET(USAIComponent, ReactionTime); } \
	FORCEINLINE static uint32 __PPO__DetectionSpeed() { return STRUCT_OFFSET(USAIComponent, DetectionSpeed); } \
	FORCEINLINE static uint32 __PPO__CoverTraceDistance() { return STRUCT_OFFSET(USAIComponent, CoverTraceDistance); } \
	FORCEINLINE static uint32 __PPO__MaxCoverCrouchDist() { return STRUCT_OFFSET(USAIComponent, MaxCoverCrouchDist); } \
	FORCEINLINE static uint32 __PPO__FireDelayMult() { return STRUCT_OFFSET(USAIComponent, FireDelayMult); } \
	FORCEINLINE static uint32 __PPO__AllPerceivedActors() { return STRUCT_OFFSET(USAIComponent, AllPerceivedActors); } \
	FORCEINLINE static uint32 __PPO__AllKnownTargets() { return STRUCT_OFFSET(USAIComponent, AllKnownTargets); } \
	FORCEINLINE static uint32 __PPO__DesiredTargetActor() { return STRUCT_OFFSET(USAIComponent, DesiredTargetActor); } \
	FORCEINLINE static uint32 __PPO__AllKnownTargets_New() { return STRUCT_OFFSET(USAIComponent, AllKnownTargets_New); } \
	FORCEINLINE static uint32 __PPO__BestTarget_New() { return STRUCT_OFFSET(USAIComponent, BestTarget_New); } \
	FORCEINLINE static uint32 __PPO__DetectionRate() { return STRUCT_OFFSET(USAIComponent, DetectionRate); } \
	FORCEINLINE static uint32 __PPO__bShouldEverDropAlert() { return STRUCT_OFFSET(USAIComponent, bShouldEverDropAlert); } \
	FORCEINLINE static uint32 __PPO__TimeTillCalm() { return STRUCT_OFFSET(USAIComponent, TimeTillCalm); } \
	FORCEINLINE static uint32 __PPO__bHeardNoise() { return STRUCT_OFFSET(USAIComponent, bHeardNoise); } \
	FORCEINLINE static uint32 __PPO__AllHeardActors() { return STRUCT_OFFSET(USAIComponent, AllHeardActors); } \
	FORCEINLINE static uint32 __PPO__AllRelevantHeardActors() { return STRUCT_OFFSET(USAIComponent, AllRelevantHeardActors); } \
	FORCEINLINE static uint32 __PPO__bHasLowerCover() { return STRUCT_OFFSET(USAIComponent, bHasLowerCover); } \
	FORCEINLINE static uint32 __PPO__bHasUpperCover() { return STRUCT_OFFSET(USAIComponent, bHasUpperCover); } \
	FORCEINLINE static uint32 __PPO__bHasRightCover() { return STRUCT_OFFSET(USAIComponent, bHasRightCover); } \
	FORCEINLINE static uint32 __PPO__bHasLeftCover() { return STRUCT_OFFSET(USAIComponent, bHasLeftCover); } \
	FORCEINLINE static uint32 __PPO__CurrentCalmBehavior() { return STRUCT_OFFSET(USAIComponent, CurrentCalmBehavior); } \
	FORCEINLINE static uint32 __PPO__CurrentCombatBehavior() { return STRUCT_OFFSET(USAIComponent, CurrentCombatBehavior); } \
	FORCEINLINE static uint32 __PPO__CurrentSquadType() { return STRUCT_OFFSET(USAIComponent, CurrentSquadType); } \
	FORCEINLINE static uint32 __PPO__AvailableCalmBehaviors() { return STRUCT_OFFSET(USAIComponent, AvailableCalmBehaviors); } \
	FORCEINLINE static uint32 __PPO__BehaviorSwitchTime() { return STRUCT_OFFSET(USAIComponent, BehaviorSwitchTime); } \
	FORCEINLINE static uint32 __PPO__SkillLevel() { return STRUCT_OFFSET(USAIComponent, SkillLevel); } \
	FORCEINLINE static uint32 __PPO__bInCombat() { return STRUCT_OFFSET(USAIComponent, bInCombat); } \
	FORCEINLINE static uint32 __PPO__bHasEverBeenInCombat() { return STRUCT_OFFSET(USAIComponent, bHasEverBeenInCombat); } \
	FORCEINLINE static uint32 __PPO__CombatTension() { return STRUCT_OFFSET(USAIComponent, CombatTension); } \
	FORCEINLINE static uint32 __PPO__bHasNearbyCover() { return STRUCT_OFFSET(USAIComponent, bHasNearbyCover); } \
	FORCEINLINE static uint32 __PPO__bIsInCover() { return STRUCT_OFFSET(USAIComponent, bIsInCover); } \
	FORCEINLINE static uint32 __PPO__TargetLastKnownLocation() { return STRUCT_OFFSET(USAIComponent, TargetLastKnownLocation); } \
	FORCEINLINE static uint32 __PPO__LastDamageLocation() { return STRUCT_OFFSET(USAIComponent, LastDamageLocation); } \
	FORCEINLINE static uint32 __PPO__bIsLeader() { return STRUCT_OFFSET(USAIComponent, bIsLeader); } \
	FORCEINLINE static uint32 __PPO__MaxSquadMembers() { return STRUCT_OFFSET(USAIComponent, MaxSquadMembers); } \
	FORCEINLINE static uint32 __PPO__LeaderPawn() { return STRUCT_OFFSET(USAIComponent, LeaderPawn); } \
	FORCEINLINE static uint32 __PPO__SquadMembers() { return STRUCT_OFFSET(USAIComponent, SquadMembers); } \
	FORCEINLINE static uint32 __PPO__SquadRef() { return STRUCT_OFFSET(USAIComponent, SquadRef); } \
	FORCEINLINE static uint32 __PPO__CurrentPatrolkey() { return STRUCT_OFFSET(USAIComponent, CurrentPatrolkey); } \
	FORCEINLINE static uint32 __PPO__PatrolPath() { return STRUCT_OFFSET(USAIComponent, PatrolPath); } \
	FORCEINLINE static uint32 __PPO__PatrolPointWaitTime() { return STRUCT_OFFSET(USAIComponent, PatrolPointWaitTime); } \
	FORCEINLINE static uint32 __PPO__RoamRadius() { return STRUCT_OFFSET(USAIComponent, RoamRadius); } \
	FORCEINLINE static uint32 __PPO__RoamWaitTime() { return STRUCT_OFFSET(USAIComponent, RoamWaitTime); } \
	FORCEINLINE static uint32 __PPO__bRoamFromSpawn() { return STRUCT_OFFSET(USAIComponent, bRoamFromSpawn); } \
	FORCEINLINE static uint32 __PPO__AIVoiceData() { return STRUCT_OFFSET(USAIComponent, AIVoiceData); }


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_20_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AISENTIENCE_API UClass* StaticClass<class USAIComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
