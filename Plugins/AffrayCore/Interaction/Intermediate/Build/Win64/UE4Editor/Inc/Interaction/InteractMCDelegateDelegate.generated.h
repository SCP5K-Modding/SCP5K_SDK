// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef INTERACTION_InteractMCDelegateDelegate_generated_h
#error "InteractMCDelegateDelegate.generated.h already included, missing '#pragma once' in InteractMCDelegateDelegate.h"
#endif
#define INTERACTION_InteractMCDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractMCDelegateDelegate_h_7_DELEGATE \
struct _Script_Interaction_eventInteractMCDelegate_Parms \
{ \
	AActor* EventInstigator; \
}; \
static inline void FInteractMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& InteractMCDelegate, AActor* EventInstigator) \
{ \
	_Script_Interaction_eventInteractMCDelegate_Parms Parms; \
	Parms.EventInstigator=EventInstigator; \
	InteractMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractMCDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
