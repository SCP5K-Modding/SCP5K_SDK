// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFriendsIsFollowing;
#ifdef STEAMCORE_OnIsFollowingAsyncDelegateDelegate_generated_h
#error "OnIsFollowingAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnIsFollowingAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnIsFollowingAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnIsFollowingAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnIsFollowingAsyncDelegate_Parms \
{ \
	FFriendsIsFollowing Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnIsFollowingAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnIsFollowingAsyncDelegate, FFriendsIsFollowing const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnIsFollowingAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnIsFollowingAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnIsFollowingAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
