// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUserAchievementIconFetched;
#ifdef STEAMCORE_OnUserAchievementIconFetchedDelegate_generated_h
#error "OnUserAchievementIconFetchedDelegate.generated.h already included, missing '#pragma once' in OnUserAchievementIconFetchedDelegate.h"
#endif
#define STEAMCORE_OnUserAchievementIconFetchedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnUserAchievementIconFetchedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnUserAchievementIconFetched_Parms \
{ \
	FUserAchievementIconFetched Data; \
}; \
static inline void FOnUserAchievementIconFetched_DelegateWrapper(const FMulticastScriptDelegate& OnUserAchievementIconFetched, FUserAchievementIconFetched const& Data) \
{ \
	_Script_SteamCore_eventOnUserAchievementIconFetched_Parms Parms; \
	Parms.Data=Data; \
	OnUserAchievementIconFetched.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnUserAchievementIconFetchedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
