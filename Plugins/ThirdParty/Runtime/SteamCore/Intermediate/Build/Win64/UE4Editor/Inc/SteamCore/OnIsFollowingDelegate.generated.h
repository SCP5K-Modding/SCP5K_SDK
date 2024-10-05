// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFriendsIsFollowing;
#ifdef STEAMCORE_OnIsFollowingDelegate_generated_h
#error "OnIsFollowingDelegate.generated.h already included, missing '#pragma once' in OnIsFollowingDelegate.h"
#endif
#define STEAMCORE_OnIsFollowingDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnIsFollowingDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnIsFollowing_Parms \
{ \
	FFriendsIsFollowing Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnIsFollowing_DelegateWrapper(const FScriptDelegate& OnIsFollowing, FFriendsIsFollowing const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnIsFollowing_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnIsFollowing.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnIsFollowingDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
