// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAIInfoSharingComponent;
#ifdef AISENTIENCE_ShareInfoMCDelegateDelegate_generated_h
#error "ShareInfoMCDelegateDelegate.generated.h already included, missing '#pragma once' in ShareInfoMCDelegateDelegate.h"
#endif
#define AISENTIENCE_ShareInfoMCDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_ShareInfoMCDelegateDelegate_h_7_DELEGATE \
struct _Script_AISentience_eventShareInfoMCDelegate_Parms \
{ \
	UAIInfoSharingComponent* Target; \
}; \
static inline void FShareInfoMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& ShareInfoMCDelegate, UAIInfoSharingComponent* Target) \
{ \
	_Script_AISentience_eventShareInfoMCDelegate_Parms Parms; \
	Parms.Target=Target; \
	ShareInfoMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_ShareInfoMCDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
