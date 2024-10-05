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
#ifdef AISENTIENCE_SAITargetSightUpdatedDelegateDelegate_generated_h
#error "SAITargetSightUpdatedDelegateDelegate.generated.h already included, missing '#pragma once' in SAITargetSightUpdatedDelegateDelegate.h"
#endif
#define AISENTIENCE_SAITargetSightUpdatedDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAITargetSightUpdatedDelegateDelegate_h_8_DELEGATE \
struct _Script_AISentience_eventSAITargetSightUpdatedDelegate_Parms \
{ \
	ASAIController* Controller; \
	FSAITarget Target; \
	bool bIsSeen; \
	bool bWasSeenBefore; \
}; \
static inline void FSAITargetSightUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SAITargetSightUpdatedDelegate, ASAIController* Controller, FSAITarget const& Target, bool bIsSeen, bool bWasSeenBefore) \
{ \
	_Script_AISentience_eventSAITargetSightUpdatedDelegate_Parms Parms; \
	Parms.Controller=Controller; \
	Parms.Target=Target; \
	Parms.bIsSeen=bIsSeen ? true : false; \
	Parms.bWasSeenBefore=bWasSeenBefore ? true : false; \
	SAITargetSightUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAITargetSightUpdatedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
