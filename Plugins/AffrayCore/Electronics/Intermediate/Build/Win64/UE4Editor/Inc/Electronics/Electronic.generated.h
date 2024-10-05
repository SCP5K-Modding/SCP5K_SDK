// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ELECTRONICS_Electronic_generated_h
#error "Electronic.generated.h already included, missing '#pragma once' in Electronic.h"
#endif
#define ELECTRONICS_Electronic_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_RPC_WRAPPERS \
	virtual void MulticastBreak_Implementation(AActor* Caller); \
	virtual void MulticastDisable_Implementation(AActor* Caller); \
	virtual void MulticastEnable_Implementation(AActor* Caller); \
	virtual void OnHealthChanged_Implementation(); \
	virtual void PlayDisableSound_Implementation(); \
	virtual void PlayEnableSound_Implementation(); \
	virtual void ServerBreak_Implementation(AActor* Caller); \
	virtual void ServerDisable_Implementation(AActor* Caller); \
	virtual void ServerEnable_Implementation(AActor* Caller); \
	virtual void ServerLock_Implementation(); \
	virtual void ServerPower_Implementation(AActor* Caller); \
	virtual void ServerUnlock_Implementation(); \
	virtual void ServerUnPower_Implementation(AActor* Caller); \
	virtual void StartLoopingSound_Implementation(bool bRandomPosition); \
 \
	DECLARE_FUNCTION(execBreak); \
	DECLARE_FUNCTION(execCanDisable); \
	DECLARE_FUNCTION(execCanEnable); \
	DECLARE_FUNCTION(execDisable); \
	DECLARE_FUNCTION(execEnable); \
	DECLARE_FUNCTION(execGetCanBeBroken); \
	DECLARE_FUNCTION(execGetCanBreak); \
	DECLARE_FUNCTION(execGetEnableOnBreak); \
	DECLARE_FUNCTION(execHasBeenUsed); \
	DECLARE_FUNCTION(execIsBroken); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execIsOneUse); \
	DECLARE_FUNCTION(execIsPowered); \
	DECLARE_FUNCTION(execLock); \
	DECLARE_FUNCTION(execMulticastBreak); \
	DECLARE_FUNCTION(execMulticastDisable); \
	DECLARE_FUNCTION(execMulticastEnable); \
	DECLARE_FUNCTION(execOnBreak); \
	DECLARE_FUNCTION(execOnDisable); \
	DECLARE_FUNCTION(execOnEnable); \
	DECLARE_FUNCTION(execOnFirstUse); \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execOnLock); \
	DECLARE_FUNCTION(execOnRep_bBroken); \
	DECLARE_FUNCTION(execOnRep_bEnabled); \
	DECLARE_FUNCTION(execOnRep_bHasBeenUsed); \
	DECLARE_FUNCTION(execOnRep_bLocked); \
	DECLARE_FUNCTION(execOnRep_bPowered); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execOnUnlock); \
	DECLARE_FUNCTION(execPlayDisableSound); \
	DECLARE_FUNCTION(execPlayEnableSound); \
	DECLARE_FUNCTION(execPower); \
	DECLARE_FUNCTION(execServerBreak); \
	DECLARE_FUNCTION(execServerDisable); \
	DECLARE_FUNCTION(execServerEnable); \
	DECLARE_FUNCTION(execServerLock); \
	DECLARE_FUNCTION(execServerPower); \
	DECLARE_FUNCTION(execServerUnlock); \
	DECLARE_FUNCTION(execServerUnPower); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetHasBeenUsed); \
	DECLARE_FUNCTION(execSetPowered); \
	DECLARE_FUNCTION(execStartLoopingSound); \
	DECLARE_FUNCTION(execToggle); \
	DECLARE_FUNCTION(execUnBreak); \
	DECLARE_FUNCTION(execUnlock); \
	DECLARE_FUNCTION(execUnPower);


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastBreak_Implementation(AActor* Caller); \
	virtual void MulticastDisable_Implementation(AActor* Caller); \
	virtual void MulticastEnable_Implementation(AActor* Caller); \
	virtual void OnHealthChanged_Implementation(); \
	virtual void PlayDisableSound_Implementation(); \
	virtual void PlayEnableSound_Implementation(); \
	virtual void ServerBreak_Implementation(AActor* Caller); \
	virtual void ServerDisable_Implementation(AActor* Caller); \
	virtual void ServerEnable_Implementation(AActor* Caller); \
	virtual void ServerLock_Implementation(); \
	virtual void ServerPower_Implementation(AActor* Caller); \
	virtual void ServerUnlock_Implementation(); \
	virtual void ServerUnPower_Implementation(AActor* Caller); \
	virtual void StartLoopingSound_Implementation(bool bRandomPosition); \
 \
	DECLARE_FUNCTION(execBreak); \
	DECLARE_FUNCTION(execCanDisable); \
	DECLARE_FUNCTION(execCanEnable); \
	DECLARE_FUNCTION(execDisable); \
	DECLARE_FUNCTION(execEnable); \
	DECLARE_FUNCTION(execGetCanBeBroken); \
	DECLARE_FUNCTION(execGetCanBreak); \
	DECLARE_FUNCTION(execGetEnableOnBreak); \
	DECLARE_FUNCTION(execHasBeenUsed); \
	DECLARE_FUNCTION(execIsBroken); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execIsOneUse); \
	DECLARE_FUNCTION(execIsPowered); \
	DECLARE_FUNCTION(execLock); \
	DECLARE_FUNCTION(execMulticastBreak); \
	DECLARE_FUNCTION(execMulticastDisable); \
	DECLARE_FUNCTION(execMulticastEnable); \
	DECLARE_FUNCTION(execOnBreak); \
	DECLARE_FUNCTION(execOnDisable); \
	DECLARE_FUNCTION(execOnEnable); \
	DECLARE_FUNCTION(execOnFirstUse); \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execOnLock); \
	DECLARE_FUNCTION(execOnRep_bBroken); \
	DECLARE_FUNCTION(execOnRep_bEnabled); \
	DECLARE_FUNCTION(execOnRep_bHasBeenUsed); \
	DECLARE_FUNCTION(execOnRep_bLocked); \
	DECLARE_FUNCTION(execOnRep_bPowered); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execOnUnlock); \
	DECLARE_FUNCTION(execPlayDisableSound); \
	DECLARE_FUNCTION(execPlayEnableSound); \
	DECLARE_FUNCTION(execPower); \
	DECLARE_FUNCTION(execServerBreak); \
	DECLARE_FUNCTION(execServerDisable); \
	DECLARE_FUNCTION(execServerEnable); \
	DECLARE_FUNCTION(execServerLock); \
	DECLARE_FUNCTION(execServerPower); \
	DECLARE_FUNCTION(execServerUnlock); \
	DECLARE_FUNCTION(execServerUnPower); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetHasBeenUsed); \
	DECLARE_FUNCTION(execSetPowered); \
	DECLARE_FUNCTION(execStartLoopingSound); \
	DECLARE_FUNCTION(execToggle); \
	DECLARE_FUNCTION(execUnBreak); \
	DECLARE_FUNCTION(execUnlock); \
	DECLARE_FUNCTION(execUnPower);


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_EVENT_PARMS \
	struct Electronic_eventMulticastBreak_Parms \
	{ \
		AActor* Caller; \
	}; \
	struct Electronic_eventMulticastDisable_Parms \
	{ \
		AActor* Caller; \
	}; \
	struct Electronic_eventMulticastEnable_Parms \
	{ \
		AActor* Caller; \
	}; \
	struct Electronic_eventServerBreak_Parms \
	{ \
		AActor* Caller; \
	}; \
	struct Electronic_eventServerDisable_Parms \
	{ \
		AActor* Caller; \
	}; \
	struct Electronic_eventServerEnable_Parms \
	{ \
		AActor* Caller; \
	}; \
	struct Electronic_eventServerPower_Parms \
	{ \
		AActor* Caller; \
	}; \
	struct Electronic_eventServerUnPower_Parms \
	{ \
		AActor* Caller; \
	}; \
	struct Electronic_eventStartLoopingSound_Parms \
	{ \
		bool bRandomPosition; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAElectronic(); \
	friend struct Z_Construct_UClass_AElectronic_Statics; \
public: \
	DECLARE_CLASS(AElectronic, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Electronics"), NO_API) \
	DECLARE_SERIALIZER(AElectronic) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		bPowered, \
		bBroken, \
		bLocked, \
		bHasBeenUsed, \
		MaxHealth, \
		Health, \
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAElectronic(); \
	friend struct Z_Construct_UClass_AElectronic_Statics; \
public: \
	DECLARE_CLASS(AElectronic, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Electronics"), NO_API) \
	DECLARE_SERIALIZER(AElectronic) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		bPowered, \
		bBroken, \
		bLocked, \
		bHasBeenUsed, \
		MaxHealth, \
		Health, \
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AElectronic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AElectronic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElectronic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElectronic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AElectronic(AElectronic&&); \
	NO_API AElectronic(const AElectronic&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AElectronic(AElectronic&&); \
	NO_API AElectronic(const AElectronic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElectronic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElectronic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AElectronic)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bEnabled() { return STRUCT_OFFSET(AElectronic, bEnabled); } \
	FORCEINLINE static uint32 __PPO__bPowered() { return STRUCT_OFFSET(AElectronic, bPowered); } \
	FORCEINLINE static uint32 __PPO__bBroken() { return STRUCT_OFFSET(AElectronic, bBroken); } \
	FORCEINLINE static uint32 __PPO__bLocked() { return STRUCT_OFFSET(AElectronic, bLocked); } \
	FORCEINLINE static uint32 __PPO__bAutoLockOnDisable() { return STRUCT_OFFSET(AElectronic, bAutoLockOnDisable); } \
	FORCEINLINE static uint32 __PPO__AutoLockTime() { return STRUCT_OFFSET(AElectronic, AutoLockTime); } \
	FORCEINLINE static uint32 __PPO__bCanBreakWhenLocked() { return STRUCT_OFFSET(AElectronic, bCanBreakWhenLocked); } \
	FORCEINLINE static uint32 __PPO__bUpdateEnabledOnPower() { return STRUCT_OFFSET(AElectronic, bUpdateEnabledOnPower); } \
	FORCEINLINE static uint32 __PPO__bOneUse() { return STRUCT_OFFSET(AElectronic, bOneUse); } \
	FORCEINLINE static uint32 __PPO__bHasBeenUsed() { return STRUCT_OFFSET(AElectronic, bHasBeenUsed); } \
	FORCEINLINE static uint32 __PPO__bOneShot() { return STRUCT_OFFSET(AElectronic, bOneShot); } \
	FORCEINLINE static uint32 __PPO__bAutoDisable() { return STRUCT_OFFSET(AElectronic, bAutoDisable); } \
	FORCEINLINE static uint32 __PPO__AutoDisableTime() { return STRUCT_OFFSET(AElectronic, AutoDisableTime); } \
	FORCEINLINE static uint32 __PPO__bRunConstructionScript() { return STRUCT_OFFSET(AElectronic, bRunConstructionScript); } \
	FORCEINLINE static uint32 __PPO__bUpdateEnabledOnBreak() { return STRUCT_OFFSET(AElectronic, bUpdateEnabledOnBreak); } \
	FORCEINLINE static uint32 __PPO__bEnableOnBreak() { return STRUCT_OFFSET(AElectronic, bEnableOnBreak); } \
	FORCEINLINE static uint32 __PPO__bCanBeBroken() { return STRUCT_OFFSET(AElectronic, bCanBeBroken); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(AElectronic, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__bOverrideStartingHealth() { return STRUCT_OFFSET(AElectronic, bOverrideStartingHealth); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AElectronic, Health); } \
	FORCEINLINE static uint32 __PPO__MostRecentInstigator() { return STRUCT_OFFSET(AElectronic, MostRecentInstigator); } \
	FORCEINLINE static uint32 __PPO__bUseDamageTypes() { return STRUCT_OFFSET(AElectronic, bUseDamageTypes); } \
	FORCEINLINE static uint32 __PPO__DamageTypes() { return STRUCT_OFFSET(AElectronic, DamageTypes); } \
	FORCEINLINE static uint32 __PPO__OneUseParticle() { return STRUCT_OFFSET(AElectronic, OneUseParticle); } \
	FORCEINLINE static uint32 __PPO__OneUseSound() { return STRUCT_OFFSET(AElectronic, OneUseSound); } \
	FORCEINLINE static uint32 __PPO__BreakParticle() { return STRUCT_OFFSET(AElectronic, BreakParticle); } \
	FORCEINLINE static uint32 __PPO__EnableSound() { return STRUCT_OFFSET(AElectronic, EnableSound); } \
	FORCEINLINE static uint32 __PPO__DisableSound() { return STRUCT_OFFSET(AElectronic, DisableSound); } \
	FORCEINLINE static uint32 __PPO__EnabledSound() { return STRUCT_OFFSET(AElectronic, EnabledSound); } \
	FORCEINLINE static uint32 __PPO__BreakSound() { return STRUCT_OFFSET(AElectronic, BreakSound); } \
	FORCEINLINE static uint32 __PPO__SceneComponent() { return STRUCT_OFFSET(AElectronic, SceneComponent); } \
	FORCEINLINE static uint32 __PPO__LoopingAudioComponent() { return STRUCT_OFFSET(AElectronic, LoopingAudioComponent); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(AElectronic, AudioComponent); }


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_16_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELECTRONICS_API UClass* StaticClass<class AElectronic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Electronic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
