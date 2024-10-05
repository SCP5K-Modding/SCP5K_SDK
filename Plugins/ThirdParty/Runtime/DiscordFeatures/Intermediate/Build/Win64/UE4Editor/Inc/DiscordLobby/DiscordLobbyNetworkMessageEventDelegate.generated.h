// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDLOBBY_DiscordLobbyNetworkMessageEventDelegate_generated_h
#error "DiscordLobbyNetworkMessageEventDelegate.generated.h already included, missing '#pragma once' in DiscordLobbyNetworkMessageEventDelegate.h"
#endif
#define DISCORDLOBBY_DiscordLobbyNetworkMessageEventDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyNetworkMessageEventDelegate_h_5_DELEGATE \
struct _Script_DiscordLobby_eventDiscordLobbyNetworkMessageEvent_Parms \
{ \
	int64 LobbyId; \
	int64 UserId; \
	uint8 ChannelId; \
	TArray<uint8> Data; \
}; \
static inline void FDiscordLobbyNetworkMessageEvent_DelegateWrapper(const FMulticastScriptDelegate& DiscordLobbyNetworkMessageEvent, const int64 LobbyId, const int64 UserId, const uint8 ChannelId, TArray<uint8> const& Data) \
{ \
	_Script_DiscordLobby_eventDiscordLobbyNetworkMessageEvent_Parms Parms; \
	Parms.LobbyId=LobbyId; \
	Parms.UserId=UserId; \
	Parms.ChannelId=ChannelId; \
	Parms.Data=Data; \
	DiscordLobbyNetworkMessageEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyNetworkMessageEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
