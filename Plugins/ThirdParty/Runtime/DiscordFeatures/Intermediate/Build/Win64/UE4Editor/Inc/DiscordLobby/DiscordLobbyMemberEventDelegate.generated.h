// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDLOBBY_DiscordLobbyMemberEventDelegate_generated_h
#error "DiscordLobbyMemberEventDelegate.generated.h already included, missing '#pragma once' in DiscordLobbyMemberEventDelegate.h"
#endif
#define DISCORDLOBBY_DiscordLobbyMemberEventDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyMemberEventDelegate_h_5_DELEGATE \
struct _Script_DiscordLobby_eventDiscordLobbyMemberEvent_Parms \
{ \
	int64 LobbyId; \
	int64 UserId; \
}; \
static inline void FDiscordLobbyMemberEvent_DelegateWrapper(const FMulticastScriptDelegate& DiscordLobbyMemberEvent, const int64 LobbyId, const int64 UserId) \
{ \
	_Script_DiscordLobby_eventDiscordLobbyMemberEvent_Parms Parms; \
	Parms.LobbyId=LobbyId; \
	Parms.UserId=UserId; \
	DiscordLobbyMemberEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyMemberEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
