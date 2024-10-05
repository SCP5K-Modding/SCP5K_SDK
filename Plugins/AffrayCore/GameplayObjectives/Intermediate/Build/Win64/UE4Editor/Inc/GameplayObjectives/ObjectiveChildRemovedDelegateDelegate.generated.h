// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObjective;
#ifdef GAMEPLAYOBJECTIVES_ObjectiveChildRemovedDelegateDelegate_generated_h
#error "ObjectiveChildRemovedDelegateDelegate.generated.h already included, missing '#pragma once' in ObjectiveChildRemovedDelegateDelegate.h"
#endif
#define GAMEPLAYOBJECTIVES_ObjectiveChildRemovedDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveChildRemovedDelegateDelegate_h_7_DELEGATE \
struct _Script_GameplayObjectives_eventObjectiveChildRemovedDelegate_Parms \
{ \
	UObjective* Objective; \
	UObjective* Child; \
}; \
static inline void FObjectiveChildRemovedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ObjectiveChildRemovedDelegate, UObjective* Objective, UObjective* Child) \
{ \
	_Script_GameplayObjectives_eventObjectiveChildRemovedDelegate_Parms Parms; \
	Parms.Objective=Objective; \
	Parms.Child=Child; \
	ObjectiveChildRemovedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveChildRemovedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
