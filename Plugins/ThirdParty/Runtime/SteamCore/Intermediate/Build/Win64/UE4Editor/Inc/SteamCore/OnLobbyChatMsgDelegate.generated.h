// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLobbyChatMsg;
#ifdef STEAMCORE_OnLobbyChatMsgDelegate_generated_h
#error "OnLobbyChatMsgDelegate.generated.h already included, missing '#pragma once' in OnLobbyChatMsgDelegate.h"
#endif
#define STEAMCORE_OnLobbyChatMsgDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnLobbyChatMsgDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnLobbyChatMsg_Parms \
{ \
	FLobbyChatMsg Data; \
}; \
static inline void FOnLobbyChatMsg_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyChatMsg, FLobbyChatMsg const& Data) \
{ \
	_Script_SteamCore_eventOnLobbyChatMsg_Parms Parms; \
	Parms.Data=Data; \
	OnLobbyChatMsg.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnLobbyChatMsgDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
