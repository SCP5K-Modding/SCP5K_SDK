// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObjective;
#ifdef GAMEPLAYOBJECTIVES_ObjectiveModifiedDelegateDelegate_generated_h
#error "ObjectiveModifiedDelegateDelegate.generated.h already included, missing '#pragma once' in ObjectiveModifiedDelegateDelegate.h"
#endif
#define GAMEPLAYOBJECTIVES_ObjectiveModifiedDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveModifiedDelegateDelegate_h_7_DELEGATE \
struct _Script_GameplayObjectives_eventObjectiveModifiedDelegate_Parms \
{ \
	UObjective* Objective; \
}; \
static inline void FObjectiveModifiedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ObjectiveModifiedDelegate, UObjective* Objective) \
{ \
	_Script_GameplayObjectives_eventObjectiveModifiedDelegate_Parms Parms; \
	Parms.Objective=Objective; \
	ObjectiveModifiedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveModifiedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
