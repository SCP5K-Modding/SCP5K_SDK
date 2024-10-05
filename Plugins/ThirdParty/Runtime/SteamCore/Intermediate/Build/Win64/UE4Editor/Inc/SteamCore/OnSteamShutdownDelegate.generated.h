// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamShutdown;
#ifdef STEAMCORE_OnSteamShutdownDelegate_generated_h
#error "OnSteamShutdownDelegate.generated.h already included, missing '#pragma once' in OnSteamShutdownDelegate.h"
#endif
#define STEAMCORE_OnSteamShutdownDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamShutdownDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSteamShutdown_Parms \
{ \
	FSteamShutdown Data; \
}; \
static inline void FOnSteamShutdown_DelegateWrapper(const FMulticastScriptDelegate& OnSteamShutdown, FSteamShutdown const& Data) \
{ \
	_Script_SteamCore_eventOnSteamShutdown_Parms Parms; \
	Parms.Data=Data; \
	OnSteamShutdown.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamShutdownDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
