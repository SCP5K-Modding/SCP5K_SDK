// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInteractionComponent;
class UInteractableComponent;
#ifdef INTERACTION_InteractableRegisteredMCDelegateDelegate_generated_h
#error "InteractableRegisteredMCDelegateDelegate.generated.h already included, missing '#pragma once' in InteractableRegisteredMCDelegateDelegate.h"
#endif
#define INTERACTION_InteractableRegisteredMCDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableRegisteredMCDelegateDelegate_h_8_DELEGATE \
struct _Script_Interaction_eventInteractableRegisteredMCDelegate_Parms \
{ \
	UInteractionComponent* InteractionComponent; \
	UInteractableComponent* RegisteredInteractable; \
}; \
static inline void FInteractableRegisteredMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& InteractableRegisteredMCDelegate, UInteractionComponent* InteractionComponent, UInteractableComponent* RegisteredInteractable) \
{ \
	_Script_Interaction_eventInteractableRegisteredMCDelegate_Parms Parms; \
	Parms.InteractionComponent=InteractionComponent; \
	Parms.RegisteredInteractable=RegisteredInteractable; \
	InteractableRegisteredMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableRegisteredMCDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
