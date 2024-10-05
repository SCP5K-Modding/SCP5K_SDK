// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGSStatsStored;
#ifdef STEAMCORE_OnServerStoreUserStatsDelegate_generated_h
#error "OnServerStoreUserStatsDelegate.generated.h already included, missing '#pragma once' in OnServerStoreUserStatsDelegate.h"
#endif
#define STEAMCORE_OnServerStoreUserStatsDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnServerStoreUserStatsDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnServerStoreUserStats_Parms \
{ \
	FGSStatsStored Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnServerStoreUserStats_DelegateWrapper(const FScriptDelegate& OnServerStoreUserStats, FGSStatsStored const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnServerStoreUserStats_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnServerStoreUserStats.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnServerStoreUserStatsDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
