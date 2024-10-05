// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGlobalStatsReceived;
#ifdef STEAMCORE_OnRequestGlobalStatsDelegate_generated_h
#error "OnRequestGlobalStatsDelegate.generated.h already included, missing '#pragma once' in OnRequestGlobalStatsDelegate.h"
#endif
#define STEAMCORE_OnRequestGlobalStatsDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRequestGlobalStatsDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRequestGlobalStats_Parms \
{ \
	FGlobalStatsReceived Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRequestGlobalStats_DelegateWrapper(const FScriptDelegate& OnRequestGlobalStats, FGlobalStatsReceived const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRequestGlobalStats_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRequestGlobalStats.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRequestGlobalStatsDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
