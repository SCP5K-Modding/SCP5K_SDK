// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObjective;
#ifdef GAMEPLAYOBJECTIVES_ObjectiveDeactivatedDelegateDelegate_generated_h
#error "ObjectiveDeactivatedDelegateDelegate.generated.h already included, missing '#pragma once' in ObjectiveDeactivatedDelegateDelegate.h"
#endif
#define GAMEPLAYOBJECTIVES_ObjectiveDeactivatedDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveDeactivatedDelegateDelegate_h_7_DELEGATE \
struct _Script_GameplayObjectives_eventObjectiveDeactivatedDelegate_Parms \
{ \
	UObjective* Objective; \
}; \
static inline void FObjectiveDeactivatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ObjectiveDeactivatedDelegate, UObjective* Objective) \
{ \
	_Script_GameplayObjectives_eventObjectiveDeactivatedDelegate_Parms Parms; \
	Parms.Objective=Objective; \
	ObjectiveDeactivatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveDeactivatedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
