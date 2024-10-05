// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLobbyMatchList;
#ifdef STEAMCORE_OnRequestLobbyListDelegate_generated_h
#error "OnRequestLobbyListDelegate.generated.h already included, missing '#pragma once' in OnRequestLobbyListDelegate.h"
#endif
#define STEAMCORE_OnRequestLobbyListDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRequestLobbyListDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRequestLobbyList_Parms \
{ \
	FLobbyMatchList Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRequestLobbyList_DelegateWrapper(const FScriptDelegate& OnRequestLobbyList, FLobbyMatchList const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRequestLobbyList_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRequestLobbyList.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRequestLobbyListDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
