// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUserStatsUnloaded;
#ifdef STEAMCORE_OnUserStatsUnloadedDelegate_generated_h
#error "OnUserStatsUnloadedDelegate.generated.h already included, missing '#pragma once' in OnUserStatsUnloadedDelegate.h"
#endif
#define STEAMCORE_OnUserStatsUnloadedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnUserStatsUnloadedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnUserStatsUnloaded_Parms \
{ \
	FUserStatsUnloaded Data; \
}; \
static inline void FOnUserStatsUnloaded_DelegateWrapper(const FMulticastScriptDelegate& OnUserStatsUnloaded, FUserStatsUnloaded const& Data) \
{ \
	_Script_SteamCore_eventOnUserStatsUnloaded_Parms Parms; \
	Parms.Data=Data; \
	OnUserStatsUnloaded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnUserStatsUnloadedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
