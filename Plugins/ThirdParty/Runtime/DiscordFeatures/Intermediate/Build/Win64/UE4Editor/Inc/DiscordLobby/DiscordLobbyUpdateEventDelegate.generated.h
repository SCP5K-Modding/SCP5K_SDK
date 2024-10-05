// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDLOBBY_DiscordLobbyUpdateEventDelegate_generated_h
#error "DiscordLobbyUpdateEventDelegate.generated.h already included, missing '#pragma once' in DiscordLobbyUpdateEventDelegate.h"
#endif
#define DISCORDLOBBY_DiscordLobbyUpdateEventDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyUpdateEventDelegate_h_5_DELEGATE \
struct _Script_DiscordLobby_eventDiscordLobbyUpdateEvent_Parms \
{ \
	int64 LobbyId; \
}; \
static inline void FDiscordLobbyUpdateEvent_DelegateWrapper(const FMulticastScriptDelegate& DiscordLobbyUpdateEvent, const int64 LobbyId) \
{ \
	_Script_DiscordLobby_eventDiscordLobbyUpdateEvent_Parms Parms; \
	Parms.LobbyId=LobbyId; \
	DiscordLobbyUpdateEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyUpdateEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
