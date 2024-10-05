// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDLCInstalled;
#ifdef STEAMCORE_OnDLCInstalledDelegate_generated_h
#error "OnDLCInstalledDelegate.generated.h already included, missing '#pragma once' in OnDLCInstalledDelegate.h"
#endif
#define STEAMCORE_OnDLCInstalledDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnDLCInstalledDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnDLCInstalled_Parms \
{ \
	FDLCInstalled Data; \
}; \
static inline void FOnDLCInstalled_DelegateWrapper(const FMulticastScriptDelegate& OnDLCInstalled, FDLCInstalled const& Data) \
{ \
	_Script_SteamCore_eventOnDLCInstalled_Parms Parms; \
	Parms.Data=Data; \
	OnDLCInstalled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnDLCInstalledDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
