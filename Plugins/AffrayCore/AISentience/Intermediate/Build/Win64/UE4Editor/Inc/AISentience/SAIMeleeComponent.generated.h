// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USAIMeleeComponent;
class AActor;
struct FAIMeleeAttackType;
struct FMeleeHitData;
class USceneComponent;
struct FVector;
#ifdef AISENTIENCE_SAIMeleeComponent_generated_h
#error "SAIMeleeComponent.generated.h already included, missing '#pragma once' in SAIMeleeComponent.h"
#endif
#define AISENTIENCE_SAIMeleeComponent_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_22_DELEGATE \
struct SAIMeleeComponent_eventOnAttackCompleted_Parms \
{ \
	USAIMeleeComponent* AttackingComponent; \
	AActor* AttackedActor; \
	uint8 AttackIndex; \
	FAIMeleeAttackType Attack; \
}; \
static inline void FOnAttackCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnAttackCompleted, USAIMeleeComponent* AttackingComponent, AActor* AttackedActor, uint8 AttackIndex, FAIMeleeAttackType Attack) \
{ \
	SAIMeleeComponent_eventOnAttackCompleted_Parms Parms; \
	Parms.AttackingComponent=AttackingComponent; \
	Parms.AttackedActor=AttackedActor; \
	Parms.AttackIndex=AttackIndex; \
	Parms.Attack=Attack; \
	OnAttackCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_21_DELEGATE \
struct SAIMeleeComponent_eventOnAttackStarted_Parms \
{ \
	USAIMeleeComponent* AttackingComponent; \
	uint8 AttackIndex; \
	FAIMeleeAttackType Attack; \
}; \
static inline void FOnAttackStarted_DelegateWrapper(const FMulticastScriptDelegate& OnAttackStarted, USAIMeleeComponent* AttackingComponent, uint8 AttackIndex, FAIMeleeAttackType Attack) \
{ \
	SAIMeleeComponent_eventOnAttackStarted_Parms Parms; \
	Parms.AttackingComponent=AttackingComponent; \
	Parms.AttackIndex=AttackIndex; \
	Parms.Attack=Attack; \
	OnAttackStarted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_19_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAttack); \
	DECLARE_FUNCTION(execCancelAttack); \
	DECLARE_FUNCTION(execCanStartAttack); \
	DECLARE_FUNCTION(execCosmeticAttack); \
	DECLARE_FUNCTION(execCosmeticAttackCanceled); \
	DECLARE_FUNCTION(execCosmeticAttackFinished); \
	DECLARE_FUNCTION(execCosmeticAttackHitActor); \
	DECLARE_FUNCTION(execGetAttackVector); \
	DECLARE_FUNCTION(execGetIdealAttackDirection); \
	DECLARE_FUNCTION(execIsActorDead); \
	DECLARE_FUNCTION(execOnRep_MeleeHitData); \
	DECLARE_FUNCTION(execPickAttack); \
	DECLARE_FUNCTION(execStartAttack);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAttack); \
	DECLARE_FUNCTION(execCancelAttack); \
	DECLARE_FUNCTION(execCanStartAttack); \
	DECLARE_FUNCTION(execCosmeticAttack); \
	DECLARE_FUNCTION(execCosmeticAttackCanceled); \
	DECLARE_FUNCTION(execCosmeticAttackFinished); \
	DECLARE_FUNCTION(execCosmeticAttackHitActor); \
	DECLARE_FUNCTION(execGetAttackVector); \
	DECLARE_FUNCTION(execGetIdealAttackDirection); \
	DECLARE_FUNCTION(execIsActorDead); \
	DECLARE_FUNCTION(execOnRep_MeleeHitData); \
	DECLARE_FUNCTION(execPickAttack); \
	DECLARE_FUNCTION(execStartAttack);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSAIMeleeComponent(); \
	friend struct Z_Construct_UClass_USAIMeleeComponent_Statics; \
public: \
	DECLARE_CLASS(USAIMeleeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(USAIMeleeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MeleeHitData=NETFIELD_REP_START, \
		NETFIELD_REP_END=MeleeHitData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSAIMeleeComponent(); \
	friend struct Z_Construct_UClass_USAIMeleeComponent_Statics; \
public: \
	DECLARE_CLASS(USAIMeleeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(USAIMeleeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MeleeHitData=NETFIELD_REP_START, \
		NETFIELD_REP_END=MeleeHitData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USAIMeleeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USAIMeleeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USAIMeleeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAIMeleeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USAIMeleeComponent(USAIMeleeComponent&&); \
	NO_API USAIMeleeComponent(const USAIMeleeComponent&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USAIMeleeComponent(USAIMeleeComponent&&); \
	NO_API USAIMeleeComponent(const USAIMeleeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USAIMeleeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAIMeleeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USAIMeleeComponent)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Attacks() { return STRUCT_OFFSET(USAIMeleeComponent, Attacks); } \
	FORCEINLINE static uint32 __PPO__AttackDamageType() { return STRUCT_OFFSET(USAIMeleeComponent, AttackDamageType); } \
	FORCEINLINE static uint32 __PPO__DetectableObjectTypes() { return STRUCT_OFFSET(USAIMeleeComponent, DetectableObjectTypes); } \
	FORCEINLINE static uint32 __PPO__HitActors() { return STRUCT_OFFSET(USAIMeleeComponent, HitActors); } \
	FORCEINLINE static uint32 __PPO__bWasAttacking() { return STRUCT_OFFSET(USAIMeleeComponent, bWasAttacking); } \
	FORCEINLINE static uint32 __PPO__bWantsAttack() { return STRUCT_OFFSET(USAIMeleeComponent, bWantsAttack); } \
	FORCEINLINE static uint32 __PPO__bIsAttacking() { return STRUCT_OFFSET(USAIMeleeComponent, bIsAttacking); } \
	FORCEINLINE static uint32 __PPO__CurrentAttackTimer() { return STRUCT_OFFSET(USAIMeleeComponent, CurrentAttackTimer); } \
	FORCEINLINE static uint32 __PPO__AttackDamageWeight() { return STRUCT_OFFSET(USAIMeleeComponent, AttackDamageWeight); } \
	FORCEINLINE static uint32 __PPO__AttackDirectionWeight() { return STRUCT_OFFSET(USAIMeleeComponent, AttackDirectionWeight); } \
	FORCEINLINE static uint32 __PPO__AttackRandomWeight() { return STRUCT_OFFSET(USAIMeleeComponent, AttackRandomWeight); }


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_17_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_19_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_19_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_19_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_19_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_19_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AISENTIENCE_API UClass* StaticClass<class USAIMeleeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMeleeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
