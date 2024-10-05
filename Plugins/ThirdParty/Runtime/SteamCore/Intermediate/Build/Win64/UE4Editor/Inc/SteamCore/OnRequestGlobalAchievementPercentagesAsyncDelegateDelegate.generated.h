// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGlobalAchievementPercentagesReady;
#ifdef STEAMCORE_OnRequestGlobalAchievementPercentagesAsyncDelegateDelegate_generated_h
#error "OnRequestGlobalAchievementPercentagesAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnRequestGlobalAchievementPercentagesAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnRequestGlobalAchievementPercentagesAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRequestGlobalAchievementPercentagesAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRequestGlobalAchievementPercentagesAsyncDelegate_Parms \
{ \
	FGlobalAchievementPercentagesReady Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRequestGlobalAchievementPercentagesAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestGlobalAchievementPercentagesAsyncDelegate, FGlobalAchievementPercentagesReady const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRequestGlobalAchievementPercentagesAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRequestGlobalAchievementPercentagesAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRequestGlobalAchievementPercentagesAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
