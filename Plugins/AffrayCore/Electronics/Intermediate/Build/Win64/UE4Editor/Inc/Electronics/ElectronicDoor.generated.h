// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector_NetQuantize;
struct FVector;
#ifdef ELECTRONICS_ElectronicDoor_generated_h
#error "ElectronicDoor.generated.h already included, missing '#pragma once' in ElectronicDoor.h"
#endif
#define ELECTRONICS_ElectronicDoor_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_RPC_WRAPPERS \
	virtual void MulticastDestroyHinge_Implementation(FVector_NetQuantize position); \
	virtual void OnDoorFinishedClosing_Implementation(); \
	virtual void OnDoorFinishedOpening_Implementation(); \
	virtual void OnDoorUpdateValue_Implementation(float Value); \
 \
	DECLARE_FUNCTION(execBreach); \
	DECLARE_FUNCTION(execGetCanDoorBreak); \
	DECLARE_FUNCTION(execGetMoving); \
	DECLARE_FUNCTION(execGetSmoothValue); \
	DECLARE_FUNCTION(execHasMovingAgents); \
	DECLARE_FUNCTION(execIsDoorLinkEnabled); \
	DECLARE_FUNCTION(execMulticastDestroyHinge); \
	DECLARE_FUNCTION(execOnDoorFinishedClosing); \
	DECLARE_FUNCTION(execOnDoorFinishedOpening); \
	DECLARE_FUNCTION(execOnDoorUpdateValue); \
	DECLARE_FUNCTION(execResumePathFollowing); \
	DECLARE_FUNCTION(execSetDoorLinkEnabled); \
	DECLARE_FUNCTION(execUpdateDoorInteractors);


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastDestroyHinge_Implementation(FVector_NetQuantize position); \
	virtual void OnDoorFinishedClosing_Implementation(); \
	virtual void OnDoorFinishedOpening_Implementation(); \
	virtual void OnDoorUpdateValue_Implementation(float Value); \
 \
	DECLARE_FUNCTION(execBreach); \
	DECLARE_FUNCTION(execGetCanDoorBreak); \
	DECLARE_FUNCTION(execGetMoving); \
	DECLARE_FUNCTION(execGetSmoothValue); \
	DECLARE_FUNCTION(execHasMovingAgents); \
	DECLARE_FUNCTION(execIsDoorLinkEnabled); \
	DECLARE_FUNCTION(execMulticastDestroyHinge); \
	DECLARE_FUNCTION(execOnDoorFinishedClosing); \
	DECLARE_FUNCTION(execOnDoorFinishedOpening); \
	DECLARE_FUNCTION(execOnDoorUpdateValue); \
	DECLARE_FUNCTION(execResumePathFollowing); \
	DECLARE_FUNCTION(execSetDoorLinkEnabled); \
	DECLARE_FUNCTION(execUpdateDoorInteractors);


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_EVENT_PARMS \
	struct ElectronicDoor_eventMulticastDestroyHinge_Parms \
	{ \
		FVector_NetQuantize position; \
	}; \
	struct ElectronicDoor_eventOnDoorUpdateValue_Parms \
	{ \
		float Value; \
	}; \
	struct ElectronicDoor_eventReceiveSmartLinkReached_Parms \
	{ \
		AActor* Agent; \
		FVector Destination; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAElectronicDoor(); \
	friend struct Z_Construct_UClass_AElectronicDoor_Statics; \
public: \
	DECLARE_CLASS(AElectronicDoor, AElectronic, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Electronics"), NO_API) \
	DECLARE_SERIALIZER(AElectronicDoor) \
	virtual UObject* _getUObject() const override { return const_cast<AElectronicDoor*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsBreaching=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsBreaching	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAElectronicDoor(); \
	friend struct Z_Construct_UClass_AElectronicDoor_Statics; \
public: \
	DECLARE_CLASS(AElectronicDoor, AElectronic, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Electronics"), NO_API) \
	DECLARE_SERIALIZER(AElectronicDoor) \
	virtual UObject* _getUObject() const override { return const_cast<AElectronicDoor*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsBreaching=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsBreaching	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AElectronicDoor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AElectronicDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElectronicDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElectronicDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AElectronicDoor(AElectronicDoor&&); \
	NO_API AElectronicDoor(const AElectronicDoor&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AElectronicDoor(AElectronicDoor&&); \
	NO_API AElectronicDoor(const AElectronicDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElectronicDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElectronicDoor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AElectronicDoor)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TargetValue() { return STRUCT_OFFSET(AElectronicDoor, TargetValue); } \
	FORCEINLINE static uint32 __PPO__CurrentValue() { return STRUCT_OFFSET(AElectronicDoor, CurrentValue); } \
	FORCEINLINE static uint32 __PPO__SmoothValue() { return STRUCT_OFFSET(AElectronicDoor, SmoothValue); } \
	FORCEINLINE static uint32 __PPO__bMoving() { return STRUCT_OFFSET(AElectronicDoor, bMoving); } \
	FORCEINLINE static uint32 __PPO__DoorCollisions() { return STRUCT_OFFSET(AElectronicDoor, DoorCollisions); } \
	FORCEINLINE static uint32 __PPO__InterpolationSpeed() { return STRUCT_OFFSET(AElectronicDoor, InterpolationSpeed); } \
	FORCEINLINE static uint32 __PPO__TimeToOpen() { return STRUCT_OFFSET(AElectronicDoor, TimeToOpen); } \
	FORCEINLINE static uint32 __PPO__bCanInterrupt() { return STRUCT_OFFSET(AElectronicDoor, bCanInterrupt); } \
	FORCEINLINE static uint32 __PPO__bCanBeBreached() { return STRUCT_OFFSET(AElectronicDoor, bCanBeBreached); } \
	FORCEINLINE static uint32 __PPO__HingeBreakParticle() { return STRUCT_OFFSET(AElectronicDoor, HingeBreakParticle); } \
	FORCEINLINE static uint32 __PPO__HingeBreakSound() { return STRUCT_OFFSET(AElectronicDoor, HingeBreakSound); } \
	FORCEINLINE static uint32 __PPO__BreachSound() { return STRUCT_OFFSET(AElectronicDoor, BreachSound); } \
	FORCEINLINE static uint32 __PPO__BreakForce() { return STRUCT_OFFSET(AElectronicDoor, BreakForce); } \
	FORCEINLINE static uint32 __PPO__BreakForceOffset() { return STRUCT_OFFSET(AElectronicDoor, BreakForceOffset); } \
	FORCEINLINE static uint32 __PPO__Hinges() { return STRUCT_OFFSET(AElectronicDoor, Hinges); } \
	FORCEINLINE static uint32 __PPO__WeakPointDamageThreshold() { return STRUCT_OFFSET(AElectronicDoor, WeakPointDamageThreshold); } \
	FORCEINLINE static uint32 __PPO__WeakPoints() { return STRUCT_OFFSET(AElectronicDoor, WeakPoints); } \
	FORCEINLINE static uint32 __PPO__BreachSpeedMultiplier() { return STRUCT_OFFSET(AElectronicDoor, BreachSpeedMultiplier); } \
	FORCEINLINE static uint32 __PPO__bIsBreaching() { return STRUCT_OFFSET(AElectronicDoor, bIsBreaching); } \
	FORCEINLINE static uint32 __PPO__OnSmartLinkReached() { return STRUCT_OFFSET(AElectronicDoor, OnSmartLinkReached); } \
	FORCEINLINE static uint32 __PPO__DoorLinkComp() { return STRUCT_OFFSET(AElectronicDoor, DoorLinkComp); } \
	FORCEINLINE static uint32 __PPO__EnabledLinkAreaClass() { return STRUCT_OFFSET(AElectronicDoor, EnabledLinkAreaClass); } \
	FORCEINLINE static uint32 __PPO__DisabledLinkAreaClass() { return STRUCT_OFFSET(AElectronicDoor, DisabledLinkAreaClass); }


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_20_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELECTRONICS_API UClass* StaticClass<class AElectronicDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
