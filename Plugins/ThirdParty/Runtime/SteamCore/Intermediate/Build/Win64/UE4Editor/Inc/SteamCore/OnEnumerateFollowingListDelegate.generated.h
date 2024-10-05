// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFriendsEnumerateFollowingList;
#ifdef STEAMCORE_OnEnumerateFollowingListDelegate_generated_h
#error "OnEnumerateFollowingListDelegate.generated.h already included, missing '#pragma once' in OnEnumerateFollowingListDelegate.h"
#endif
#define STEAMCORE_OnEnumerateFollowingListDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnEnumerateFollowingListDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnEnumerateFollowingList_Parms \
{ \
	FFriendsEnumerateFollowingList Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnEnumerateFollowingList_DelegateWrapper(const FScriptDelegate& OnEnumerateFollowingList, FFriendsEnumerateFollowingList const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnEnumerateFollowingList_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnEnumerateFollowingList.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnEnumerateFollowingListDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
