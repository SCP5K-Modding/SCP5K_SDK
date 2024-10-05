// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDLOBBY_DiscordLobbySpeakingEventDelegate_generated_h
#error "DiscordLobbySpeakingEventDelegate.generated.h already included, missing '#pragma once' in DiscordLobbySpeakingEventDelegate.h"
#endif
#define DISCORDLOBBY_DiscordLobbySpeakingEventDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbySpeakingEventDelegate_h_5_DELEGATE \
struct _Script_DiscordLobby_eventDiscordLobbySpeakingEvent_Parms \
{ \
	int64 LobbyId; \
	int64 UserId; \
	bool bSpeaking; \
}; \
static inline void FDiscordLobbySpeakingEvent_DelegateWrapper(const FMulticastScriptDelegate& DiscordLobbySpeakingEvent, const int64 LobbyId, const int64 UserId, bool bSpeaking) \
{ \
	_Script_DiscordLobby_eventDiscordLobbySpeakingEvent_Parms Parms; \
	Parms.LobbyId=LobbyId; \
	Parms.UserId=UserId; \
	Parms.bSpeaking=bSpeaking ? true : false; \
	DiscordLobbySpeakingEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbySpeakingEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
