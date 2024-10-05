// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObjective;
#ifdef GAMEPLAYOBJECTIVES_ObjectiveResetDelegateDelegate_generated_h
#error "ObjectiveResetDelegateDelegate.generated.h already included, missing '#pragma once' in ObjectiveResetDelegateDelegate.h"
#endif
#define GAMEPLAYOBJECTIVES_ObjectiveResetDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveResetDelegateDelegate_h_7_DELEGATE \
struct _Script_GameplayObjectives_eventObjectiveResetDelegate_Parms \
{ \
	UObjective* Objective; \
}; \
static inline void FObjectiveResetDelegate_DelegateWrapper(const FMulticastScriptDelegate& ObjectiveResetDelegate, UObjective* Objective) \
{ \
	_Script_GameplayObjectives_eventObjectiveResetDelegate_Parms Parms; \
	Parms.Objective=Objective; \
	ObjectiveResetDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveResetDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
