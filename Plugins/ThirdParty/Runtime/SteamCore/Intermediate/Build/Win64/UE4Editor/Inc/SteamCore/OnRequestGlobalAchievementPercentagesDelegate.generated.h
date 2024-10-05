// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGlobalAchievementPercentagesReady;
#ifdef STEAMCORE_OnRequestGlobalAchievementPercentagesDelegate_generated_h
#error "OnRequestGlobalAchievementPercentagesDelegate.generated.h already included, missing '#pragma once' in OnRequestGlobalAchievementPercentagesDelegate.h"
#endif
#define STEAMCORE_OnRequestGlobalAchievementPercentagesDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRequestGlobalAchievementPercentagesDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRequestGlobalAchievementPercentages_Parms \
{ \
	FGlobalAchievementPercentagesReady Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRequestGlobalAchievementPercentages_DelegateWrapper(const FScriptDelegate& OnRequestGlobalAchievementPercentages, FGlobalAchievementPercentagesReady const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRequestGlobalAchievementPercentages_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRequestGlobalAchievementPercentages.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRequestGlobalAchievementPercentagesDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
