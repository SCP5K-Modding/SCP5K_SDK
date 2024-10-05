// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDLOBBY_DiscordLobbyDeleteEventDelegate_generated_h
#error "DiscordLobbyDeleteEventDelegate.generated.h already included, missing '#pragma once' in DiscordLobbyDeleteEventDelegate.h"
#endif
#define DISCORDLOBBY_DiscordLobbyDeleteEventDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyDeleteEventDelegate_h_5_DELEGATE \
struct _Script_DiscordLobby_eventDiscordLobbyDeleteEvent_Parms \
{ \
	int64 LobbyId; \
	int64 Reason; \
}; \
static inline void FDiscordLobbyDeleteEvent_DelegateWrapper(const FMulticastScriptDelegate& DiscordLobbyDeleteEvent, const int64 LobbyId, const int64 Reason) \
{ \
	_Script_DiscordLobby_eventDiscordLobbyDeleteEvent_Parms Parms; \
	Parms.LobbyId=LobbyId; \
	Parms.Reason=Reason; \
	DiscordLobbyDeleteEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyDeleteEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
