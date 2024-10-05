// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameConnectedClanChatMsg;
#ifdef STEAMCORE_OnGameConnectedClanChatMsgDelegate_generated_h
#error "OnGameConnectedClanChatMsgDelegate.generated.h already included, missing '#pragma once' in OnGameConnectedClanChatMsgDelegate.h"
#endif
#define STEAMCORE_OnGameConnectedClanChatMsgDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGameConnectedClanChatMsgDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGameConnectedClanChatMsg_Parms \
{ \
	FGameConnectedClanChatMsg Data; \
}; \
static inline void FOnGameConnectedClanChatMsg_DelegateWrapper(const FMulticastScriptDelegate& OnGameConnectedClanChatMsg, FGameConnectedClanChatMsg const& Data) \
{ \
	_Script_SteamCore_eventOnGameConnectedClanChatMsg_Parms Parms; \
	Parms.Data=Data; \
	OnGameConnectedClanChatMsg.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGameConnectedClanChatMsgDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
