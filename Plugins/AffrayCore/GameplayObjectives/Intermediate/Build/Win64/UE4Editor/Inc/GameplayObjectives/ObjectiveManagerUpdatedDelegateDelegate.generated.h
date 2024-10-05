// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AObjectiveManager;
#ifdef GAMEPLAYOBJECTIVES_ObjectiveManagerUpdatedDelegateDelegate_generated_h
#error "ObjectiveManagerUpdatedDelegateDelegate.generated.h already included, missing '#pragma once' in ObjectiveManagerUpdatedDelegateDelegate.h"
#endif
#define GAMEPLAYOBJECTIVES_ObjectiveManagerUpdatedDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManagerUpdatedDelegateDelegate_h_7_DELEGATE \
struct _Script_GameplayObjectives_eventObjectiveManagerUpdatedDelegate_Parms \
{ \
	AObjectiveManager* ObjectiveManager; \
}; \
static inline void FObjectiveManagerUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ObjectiveManagerUpdatedDelegate, AObjectiveManager* ObjectiveManager) \
{ \
	_Script_GameplayObjectives_eventObjectiveManagerUpdatedDelegate_Parms Parms; \
	Parms.ObjectiveManager=ObjectiveManager; \
	ObjectiveManagerUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveManagerUpdatedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
