// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameConnectedChatJoin;
#ifdef STEAMCORE_OnGameConnectedChatJoinDelegate_generated_h
#error "OnGameConnectedChatJoinDelegate.generated.h already included, missing '#pragma once' in OnGameConnectedChatJoinDelegate.h"
#endif
#define STEAMCORE_OnGameConnectedChatJoinDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGameConnectedChatJoinDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGameConnectedChatJoin_Parms \
{ \
	FGameConnectedChatJoin Data; \
}; \
static inline void FOnGameConnectedChatJoin_DelegateWrapper(const FMulticastScriptDelegate& OnGameConnectedChatJoin, FGameConnectedChatJoin const& Data) \
{ \
	_Script_SteamCore_eventOnGameConnectedChatJoin_Parms Parms; \
	Parms.Data=Data; \
	OnGameConnectedChatJoin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGameConnectedChatJoinDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
