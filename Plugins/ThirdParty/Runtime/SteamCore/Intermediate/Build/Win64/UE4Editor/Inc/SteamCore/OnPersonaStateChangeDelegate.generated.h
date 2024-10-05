// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPersonaStateChange;
#ifdef STEAMCORE_OnPersonaStateChangeDelegate_generated_h
#error "OnPersonaStateChangeDelegate.generated.h already included, missing '#pragma once' in OnPersonaStateChangeDelegate.h"
#endif
#define STEAMCORE_OnPersonaStateChangeDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnPersonaStateChangeDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnPersonaStateChange_Parms \
{ \
	FPersonaStateChange Data; \
}; \
static inline void FOnPersonaStateChange_DelegateWrapper(const FMulticastScriptDelegate& OnPersonaStateChange, FPersonaStateChange const& Data) \
{ \
	_Script_SteamCore_eventOnPersonaStateChange_Parms Parms; \
	Parms.Data=Data; \
	OnPersonaStateChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnPersonaStateChangeDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
