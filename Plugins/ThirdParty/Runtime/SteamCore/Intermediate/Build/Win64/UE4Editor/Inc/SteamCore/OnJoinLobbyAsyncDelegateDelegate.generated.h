// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJoinLobbyData;
#ifdef STEAMCORE_OnJoinLobbyAsyncDelegateDelegate_generated_h
#error "OnJoinLobbyAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnJoinLobbyAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnJoinLobbyAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnJoinLobbyAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms \
{ \
	FJoinLobbyData Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnJoinLobbyAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinLobbyAsyncDelegate, FJoinLobbyData const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnJoinLobbyAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnJoinLobbyAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
