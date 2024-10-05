// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInteractableComponent;
class AActor;
#ifdef INTERACTION_InteractionComponent_generated_h
#error "InteractionComponent.generated.h already included, missing '#pragma once' in InteractionComponent.h"
#endif
#define INTERACTION_InteractionComponent_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_RPC_WRAPPERS \
	virtual void Client_BroadcastInteractionFinished_Implementation(UInteractableComponent* Interactable); \
	virtual void Multicast_BroadcastInteractionFinished_Implementation(UInteractableComponent* Interactable); \
	virtual void Multicast_BroadcastInteractionInterrupted_Implementation(UInteractableComponent* Interactable, AActor* EventInstigator); \
	virtual void Multicast_BroadcastInteractionStarted_Implementation(UInteractableComponent* Interactable); \
	virtual bool Server_Interact_Validate(UInteractableComponent* ); \
	virtual void Server_Interact_Implementation(UInteractableComponent* Interactable); \
	virtual bool Server_Interrupt_Validate(AActor* , UInteractableComponent* ); \
	virtual void Server_Interrupt_Implementation(AActor* EventInstigator, UInteractableComponent* Interactable); \
 \
	DECLARE_FUNCTION(execClient_BroadcastInteractionFinished); \
	DECLARE_FUNCTION(execDeferredInteraction); \
	DECLARE_FUNCTION(execDeregisterInteractable); \
	DECLARE_FUNCTION(execGetFocusedInteractable); \
	DECLARE_FUNCTION(execGetKnownInteractables); \
	DECLARE_FUNCTION(execGetTimeUntilInteract); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execInterrupt); \
	DECLARE_FUNCTION(execIsInteractingWith); \
	DECLARE_FUNCTION(execMulticast_BroadcastInteractionFinished); \
	DECLARE_FUNCTION(execMulticast_BroadcastInteractionInterrupted); \
	DECLARE_FUNCTION(execMulticast_BroadcastInteractionStarted); \
	DECLARE_FUNCTION(execRegisterInteractable); \
	DECLARE_FUNCTION(execServer_Interact); \
	DECLARE_FUNCTION(execServer_Interrupt);


#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_BroadcastInteractionFinished_Implementation(UInteractableComponent* Interactable); \
	virtual void Multicast_BroadcastInteractionFinished_Implementation(UInteractableComponent* Interactable); \
	virtual void Multicast_BroadcastInteractionInterrupted_Implementation(UInteractableComponent* Interactable, AActor* EventInstigator); \
	virtual void Multicast_BroadcastInteractionStarted_Implementation(UInteractableComponent* Interactable); \
	virtual bool Server_Interact_Validate(UInteractableComponent* ); \
	virtual void Server_Interact_Implementation(UInteractableComponent* Interactable); \
	virtual bool Server_Interrupt_Validate(AActor* , UInteractableComponent* ); \
	virtual void Server_Interrupt_Implementation(AActor* EventInstigator, UInteractableComponent* Interactable); \
 \
	DECLARE_FUNCTION(execClient_BroadcastInteractionFinished); \
	DECLARE_FUNCTION(execDeferredInteraction); \
	DECLARE_FUNCTION(execDeregisterInteractable); \
	DECLARE_FUNCTION(execGetFocusedInteractable); \
	DECLARE_FUNCTION(execGetKnownInteractables); \
	DECLARE_FUNCTION(execGetTimeUntilInteract); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execInterrupt); \
	DECLARE_FUNCTION(execIsInteractingWith); \
	DECLARE_FUNCTION(execMulticast_BroadcastInteractionFinished); \
	DECLARE_FUNCTION(execMulticast_BroadcastInteractionInterrupted); \
	DECLARE_FUNCTION(execMulticast_BroadcastInteractionStarted); \
	DECLARE_FUNCTION(execRegisterInteractable); \
	DECLARE_FUNCTION(execServer_Interact); \
	DECLARE_FUNCTION(execServer_Interrupt);


#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_EVENT_PARMS \
	struct InteractionComponent_eventClient_BroadcastInteractionFinished_Parms \
	{ \
		UInteractableComponent* Interactable; \
	}; \
	struct InteractionComponent_eventMulticast_BroadcastInteractionFinished_Parms \
	{ \
		UInteractableComponent* Interactable; \
	}; \
	struct InteractionComponent_eventMulticast_BroadcastInteractionInterrupted_Parms \
	{ \
		UInteractableComponent* Interactable; \
		AActor* EventInstigator; \
	}; \
	struct InteractionComponent_eventMulticast_BroadcastInteractionStarted_Parms \
	{ \
		UInteractableComponent* Interactable; \
	}; \
	struct InteractionComponent_eventServer_Interact_Parms \
	{ \
		UInteractableComponent* Interactable; \
	}; \
	struct InteractionComponent_eventServer_Interrupt_Parms \
	{ \
		AActor* EventInstigator; \
		UInteractableComponent* Interactable; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionComponent(); \
	friend struct Z_Construct_UClass_UInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Interaction"), NO_API) \
	DECLARE_SERIALIZER(UInteractionComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InteractionDelay=NETFIELD_REP_START, \
		InteractionTimer, \
		NETFIELD_REP_END=InteractionTimer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionComponent(); \
	friend struct Z_Construct_UClass_UInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Interaction"), NO_API) \
	DECLARE_SERIALIZER(UInteractionComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InteractionDelay=NETFIELD_REP_START, \
		InteractionTimer, \
		NETFIELD_REP_END=InteractionTimer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionComponent(UInteractionComponent&&); \
	NO_API UInteractionComponent(const UInteractionComponent&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionComponent(UInteractionComponent&&); \
	NO_API UInteractionComponent(const UInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionComponent)


#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InteractionDelayTime() { return STRUCT_OFFSET(UInteractionComponent, InteractionDelayTime); } \
	FORCEINLINE static uint32 __PPO__InteractionDelay() { return STRUCT_OFFSET(UInteractionComponent, InteractionDelay); } \
	FORCEINLINE static uint32 __PPO__InteractionTimer() { return STRUCT_OFFSET(UInteractionComponent, InteractionTimer); }


#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_16_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTION_API UClass* StaticClass<class UInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
