// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGSStatsUnloaded;
#ifdef STEAMCORE_OnGSStatsUnloadedDelegate_generated_h
#error "OnGSStatsUnloadedDelegate.generated.h already included, missing '#pragma once' in OnGSStatsUnloadedDelegate.h"
#endif
#define STEAMCORE_OnGSStatsUnloadedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGSStatsUnloadedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGSStatsUnloaded_Parms \
{ \
	FGSStatsUnloaded Data; \
}; \
static inline void FOnGSStatsUnloaded_DelegateWrapper(const FMulticastScriptDelegate& OnGSStatsUnloaded, FGSStatsUnloaded const& Data) \
{ \
	_Script_SteamCore_eventOnGSStatsUnloaded_Parms Parms; \
	Parms.Data=Data; \
	OnGSStatsUnloaded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGSStatsUnloadedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
