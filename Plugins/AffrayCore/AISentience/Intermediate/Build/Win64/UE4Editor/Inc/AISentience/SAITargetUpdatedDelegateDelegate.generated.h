// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASAIController;
struct FSAITarget;
#ifdef AISENTIENCE_SAITargetUpdatedDelegateDelegate_generated_h
#error "SAITargetUpdatedDelegateDelegate.generated.h already included, missing '#pragma once' in SAITargetUpdatedDelegateDelegate.h"
#endif
#define AISENTIENCE_SAITargetUpdatedDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAITargetUpdatedDelegateDelegate_h_8_DELEGATE \
struct _Script_AISentience_eventSAITargetUpdatedDelegate_Parms \
{ \
	ASAIController* Controller; \
	FSAITarget Target; \
}; \
static inline void FSAITargetUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SAITargetUpdatedDelegate, ASAIController* Controller, FSAITarget const& Target) \
{ \
	_Script_AISentience_eventSAITargetUpdatedDelegate_Parms Parms; \
	Parms.Controller=Controller; \
	Parms.Target=Target; \
	SAITargetUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAITargetUpdatedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
