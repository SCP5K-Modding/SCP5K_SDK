// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFriendsGetFollowerCount;
#ifdef STEAMCORE_OnGetFollowerCountAsyncDelegateDelegate_generated_h
#error "OnGetFollowerCountAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnGetFollowerCountAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnGetFollowerCountAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGetFollowerCountAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGetFollowerCountAsyncDelegate_Parms \
{ \
	FFriendsGetFollowerCount Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnGetFollowerCountAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetFollowerCountAsyncDelegate, FFriendsGetFollowerCount const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnGetFollowerCountAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnGetFollowerCountAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGetFollowerCountAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
