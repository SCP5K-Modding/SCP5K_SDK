// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFriendsGetFollowerCount;
#ifdef STEAMCORE_OnGetFollowerCountDelegate_generated_h
#error "OnGetFollowerCountDelegate.generated.h already included, missing '#pragma once' in OnGetFollowerCountDelegate.h"
#endif
#define STEAMCORE_OnGetFollowerCountDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGetFollowerCountDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGetFollowerCount_Parms \
{ \
	FFriendsGetFollowerCount Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnGetFollowerCount_DelegateWrapper(const FScriptDelegate& OnGetFollowerCount, FFriendsGetFollowerCount const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnGetFollowerCount_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnGetFollowerCount.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGetFollowerCountDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
