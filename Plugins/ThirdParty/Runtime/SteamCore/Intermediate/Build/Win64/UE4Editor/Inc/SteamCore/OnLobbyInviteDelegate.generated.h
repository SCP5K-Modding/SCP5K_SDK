// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLobbyInviteData;
#ifdef STEAMCORE_OnLobbyInviteDelegate_generated_h
#error "OnLobbyInviteDelegate.generated.h already included, missing '#pragma once' in OnLobbyInviteDelegate.h"
#endif
#define STEAMCORE_OnLobbyInviteDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnLobbyInviteDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnLobbyInvite_Parms \
{ \
	FLobbyInviteData Data; \
}; \
static inline void FOnLobbyInvite_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyInvite, FLobbyInviteData const& Data) \
{ \
	_Script_SteamCore_eventOnLobbyInvite_Parms Parms; \
	Parms.Data=Data; \
	OnLobbyInvite.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnLobbyInviteDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
