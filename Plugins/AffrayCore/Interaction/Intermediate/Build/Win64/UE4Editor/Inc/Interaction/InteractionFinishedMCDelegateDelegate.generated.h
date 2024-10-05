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
#ifdef INTERACTION_InteractionFinishedMCDelegateDelegate_generated_h
#error "InteractionFinishedMCDelegateDelegate.generated.h already included, missing '#pragma once' in InteractionFinishedMCDelegateDelegate.h"
#endif
#define INTERACTION_InteractionFinishedMCDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionFinishedMCDelegateDelegate_h_8_DELEGATE \
struct _Script_Interaction_eventInteractionFinishedMCDelegate_Parms \
{ \
	UInteractionComponent* InteractionComponent; \
	UInteractableComponent* Interactable; \
}; \
static inline void FInteractionFinishedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& InteractionFinishedMCDelegate, UInteractionComponent* InteractionComponent, UInteractableComponent* Interactable) \
{ \
	_Script_Interaction_eventInteractionFinishedMCDelegate_Parms Parms; \
	Parms.InteractionComponent=InteractionComponent; \
	Parms.Interactable=Interactable; \
	InteractionFinishedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionFinishedMCDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
