// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFriendRichPresenceUpdate;
#ifdef STEAMCORE_OnRequestFriendRichPresenceDelegate_generated_h
#error "OnRequestFriendRichPresenceDelegate.generated.h already included, missing '#pragma once' in OnRequestFriendRichPresenceDelegate.h"
#endif
#define STEAMCORE_OnRequestFriendRichPresenceDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRequestFriendRichPresenceDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRequestFriendRichPresence_Parms \
{ \
	FFriendRichPresenceUpdate Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRequestFriendRichPresence_DelegateWrapper(const FScriptDelegate& OnRequestFriendRichPresence, FFriendRichPresenceUpdate const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRequestFriendRichPresence_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRequestFriendRichPresence.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRequestFriendRichPresenceDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
