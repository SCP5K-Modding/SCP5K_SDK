// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamAppUninstalled;
#ifdef STEAMCORE_OnSteamAppUninstalledDelegate_generated_h
#error "OnSteamAppUninstalledDelegate.generated.h already included, missing '#pragma once' in OnSteamAppUninstalledDelegate.h"
#endif
#define STEAMCORE_OnSteamAppUninstalledDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamAppUninstalledDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSteamAppUninstalled_Parms \
{ \
	FSteamAppUninstalled Data; \
}; \
static inline void FOnSteamAppUninstalled_DelegateWrapper(const FMulticastScriptDelegate& OnSteamAppUninstalled, FSteamAppUninstalled const& Data) \
{ \
	_Script_SteamCore_eventOnSteamAppUninstalled_Parms Parms; \
	Parms.Data=Data; \
	OnSteamAppUninstalled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamAppUninstalledDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
