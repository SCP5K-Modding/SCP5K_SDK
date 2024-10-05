// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef INTERACTION_InteractableComponent_generated_h
#error "InteractableComponent.generated.h already included, missing '#pragma once' in InteractableComponent.h"
#endif
#define INTERACTION_InteractableComponent_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_RPC_WRAPPERS \
	virtual void Multicast_Interact_Implementation(AActor* EventInstigator); \
	virtual void Multicast_Interrupt_Implementation(AActor* EventInstigator); \
	virtual bool Server_Interact_Validate(AActor* ); \
	virtual void Server_Interact_Implementation(AActor* EventInstigator); \
	virtual bool Server_Interrupt_Validate(AActor* ); \
	virtual void Server_Interrupt_Implementation(AActor* EventInstigator); \
 \
	DECLARE_FUNCTION(execBeginOverlap); \
	DECLARE_FUNCTION(execCanFocus); \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execGetActiveState); \
	DECLARE_FUNCTION(execGetInteractableName); \
	DECLARE_FUNCTION(execGetInteractableState); \
	DECLARE_FUNCTION(execGetInteractableStates); \
	DECLARE_FUNCTION(execGetInteractionDotProduct); \
	DECLARE_FUNCTION(execGetSecondsToInteract); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execInterrupt); \
	DECLARE_FUNCTION(execMulticast_Interact); \
	DECLARE_FUNCTION(execMulticast_Interrupt); \
	DECLARE_FUNCTION(execServer_Interact); \
	DECLARE_FUNCTION(execServer_Interrupt);


#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_Interact_Implementation(AActor* EventInstigator); \
	virtual void Multicast_Interrupt_Implementation(AActor* EventInstigator); \
	virtual bool Server_Interact_Validate(AActor* ); \
	virtual void Server_Interact_Implementation(AActor* EventInstigator); \
	virtual bool Server_Interrupt_Validate(AActor* ); \
	virtual void Server_Interrupt_Implementation(AActor* EventInstigator); \
 \
	DECLARE_FUNCTION(execBeginOverlap); \
	DECLARE_FUNCTION(execCanFocus); \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execGetActiveState); \
	DECLARE_FUNCTION(execGetInteractableName); \
	DECLARE_FUNCTION(execGetInteractableState); \
	DECLARE_FUNCTION(execGetInteractableStates); \
	DECLARE_FUNCTION(execGetInteractionDotProduct); \
	DECLARE_FUNCTION(execGetSecondsToInteract); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execInterrupt); \
	DECLARE_FUNCTION(execMulticast_Interact); \
	DECLARE_FUNCTION(execMulticast_Interrupt); \
	DECLARE_FUNCTION(execServer_Interact); \
	DECLARE_FUNCTION(execServer_Interrupt);


#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_EVENT_PARMS \
	struct InteractableComponent_eventMulticast_Interact_Parms \
	{ \
		AActor* EventInstigator; \
	}; \
	struct InteractableComponent_eventMulticast_Interrupt_Parms \
	{ \
		AActor* EventInstigator; \
	}; \
	struct InteractableComponent_eventServer_Interact_Parms \
	{ \
		AActor* EventInstigator; \
	}; \
	struct InteractableComponent_eventServer_Interrupt_Parms \
	{ \
		AActor* EventInstigator; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractableComponent(); \
	friend struct Z_Construct_UClass_UInteractableComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractableComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Interaction"), NO_API) \
	DECLARE_SERIALIZER(UInteractableComponent)


#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInteractableComponent(); \
	friend struct Z_Construct_UClass_UInteractableComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractableComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Interaction"), NO_API) \
	DECLARE_SERIALIZER(UInteractableComponent)


#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractableComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractableComponent(UInteractableComponent&&); \
	NO_API UInteractableComponent(const UInteractableComponent&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractableComponent(UInteractableComponent&&); \
	NO_API UInteractableComponent(const UInteractableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableComponent)


#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InteractableName() { return STRUCT_OFFSET(UInteractableComponent, InteractableName); } \
	FORCEINLINE static uint32 __PPO__InteractableStates() { return STRUCT_OFFSET(UInteractableComponent, InteractableStates); } \
	FORCEINLINE static uint32 __PPO__ActiveState() { return STRUCT_OFFSET(UInteractableComponent, ActiveState); } \
	FORCEINLINE static uint32 __PPO__InteractionDot() { return STRUCT_OFFSET(UInteractableComponent, InteractionDot); } \
	FORCEINLINE static uint32 __PPO__SecondsToInteract() { return STRUCT_OFFSET(UInteractableComponent, SecondsToInteract); } \
	FORCEINLINE static uint32 __PPO__InteractionDelay() { return STRUCT_OFFSET(UInteractableComponent, InteractionDelay); }


#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_13_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTION_API UClass* StaticClass<class UInteractableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
