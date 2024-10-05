// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDLOBBY_DiscordLobbyMessageEventDelegate_generated_h
#error "DiscordLobbyMessageEventDelegate.generated.h already included, missing '#pragma once' in DiscordLobbyMessageEventDelegate.h"
#endif
#define DISCORDLOBBY_DiscordLobbyMessageEventDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyMessageEventDelegate_h_5_DELEGATE \
struct _Script_DiscordLobby_eventDiscordLobbyMessageEvent_Parms \
{ \
	int64 LobbyId; \
	int64 UserId; \
	TArray<uint8> Data; \
}; \
static inline void FDiscordLobbyMessageEvent_DelegateWrapper(const FMulticastScriptDelegate& DiscordLobbyMessageEvent, const int64 LobbyId, const int64 UserId, TArray<uint8> const& Data) \
{ \
	_Script_DiscordLobby_eventDiscordLobbyMessageEvent_Parms Parms; \
	Parms.LobbyId=LobbyId; \
	Parms.UserId=UserId; \
	Parms.Data=Data; \
	DiscordLobbyMessageEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyMessageEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
