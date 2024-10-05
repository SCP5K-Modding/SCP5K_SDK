// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameConnectedFriendChatMsg;
#ifdef STEAMCORE_OnGameConnectedFriendChatMsgDelegate_generated_h
#error "OnGameConnectedFriendChatMsgDelegate.generated.h already included, missing '#pragma once' in OnGameConnectedFriendChatMsgDelegate.h"
#endif
#define STEAMCORE_OnGameConnectedFriendChatMsgDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGameConnectedFriendChatMsgDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGameConnectedFriendChatMsg_Parms \
{ \
	FGameConnectedFriendChatMsg Data; \
}; \
static inline void FOnGameConnectedFriendChatMsg_DelegateWrapper(const FMulticastScriptDelegate& OnGameConnectedFriendChatMsg, FGameConnectedFriendChatMsg const& Data) \
{ \
	_Script_SteamCore_eventOnGameConnectedFriendChatMsg_Parms Parms; \
	Parms.Data=Data; \
	OnGameConnectedFriendChatMsg.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGameConnectedFriendChatMsgDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
