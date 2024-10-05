// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHealthComponent;
struct FSimpleHitData;
class AController;
class AActor;
class UDamageType;
struct FVector;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FPSCONTROLLER_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define FPSCONTROLLER_HealthComponent_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_22_DELEGATE \
struct HealthComponent_eventOnHealthComponentDamagedDelegate_Parms \
{ \
	UHealthComponent* HealthComponent; \
	FSimpleHitData HitData; \
}; \
static inline void FOnHealthComponentDamagedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHealthComponentDamagedDelegate, UHealthComponent* HealthComponent, FSimpleHitData HitData) \
{ \
	HealthComponent_eventOnHealthComponentDamagedDelegate_Parms Parms; \
	Parms.HealthComponent=HealthComponent; \
	Parms.HitData=HitData; \
	OnHealthComponentDamagedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_21_DELEGATE \
struct HealthComponent_eventOnHealthComponentDiedDelegate_Parms \
{ \
	UHealthComponent* HealthComponent; \
}; \
static inline void FOnHealthComponentDiedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHealthComponentDiedDelegate, UHealthComponent* HealthComponent) \
{ \
	HealthComponent_eventOnHealthComponentDiedDelegate_Parms Parms; \
	Parms.HealthComponent=HealthComponent; \
	OnHealthComponentDiedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_20_DELEGATE \
struct HealthComponent_eventOnHealthComponentHealthChangedDelegate_Parms \
{ \
	UHealthComponent* HealthComponent; \
	float Health; \
}; \
static inline void FOnHealthComponentHealthChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHealthComponentHealthChangedDelegate, UHealthComponent* HealthComponent, float Health) \
{ \
	HealthComponent_eventOnHealthComponentHealthChangedDelegate_Parms Parms; \
	Parms.HealthComponent=HealthComponent; \
	Parms.Health=Health; \
	OnHealthComponentHealthChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_19_DELEGATE \
struct HealthComponent_eventOnHealthComponentRevivedDelegate_Parms \
{ \
	UHealthComponent* HealthComponent; \
}; \
static inline void FOnHealthComponentRevivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHealthComponentRevivedDelegate, UHealthComponent* HealthComponent) \
{ \
	HealthComponent_eventOnHealthComponentRevivedDelegate_Parms Parms; \
	Parms.HealthComponent=HealthComponent; \
	OnHealthComponentRevivedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_17_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddHealth); \
	DECLARE_FUNCTION(execCheckDeath); \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetLastHit); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execOnDamage); \
	DECLARE_FUNCTION(execOnPointDamage); \
	DECLARE_FUNCTION(execOnRadialDamage); \
	DECLARE_FUNCTION(execOnRep_bIsDead); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execOnRep_LastHit); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execRevive); \
	DECLARE_FUNCTION(execSetHealth);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddHealth); \
	DECLARE_FUNCTION(execCheckDeath); \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetLastHit); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execOnDamage); \
	DECLARE_FUNCTION(execOnPointDamage); \
	DECLARE_FUNCTION(execOnRadialDamage); \
	DECLARE_FUNCTION(execOnRep_bIsDead); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execOnRep_LastHit); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execRevive); \
	DECLARE_FUNCTION(execSetHealth);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		MaxHealth, \
		bIsDead, \
		LastHit, \
		NETFIELD_REP_END=LastHit	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		MaxHealth, \
		bIsDead, \
		LastHit, \
		NETFIELD_REP_END=LastHit	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentHealth() { return STRUCT_OFFSET(UHealthComponent, CurrentHealth); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(UHealthComponent, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__bIsDead() { return STRUCT_OFFSET(UHealthComponent, bIsDead); } \
	FORCEINLINE static uint32 __PPO__LastHit() { return STRUCT_OFFSET(UHealthComponent, LastHit); } \
	FORCEINLINE static uint32 __PPO__BoneDamageMultipliers() { return STRUCT_OFFSET(UHealthComponent, BoneDamageMultipliers); } \
	FORCEINLINE static uint32 __PPO__DefaultDamageMultiplier() { return STRUCT_OFFSET(UHealthComponent, DefaultDamageMultiplier); }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_15_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_17_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_17_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_17_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_17_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_17_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
