// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJoinClanChatRoomCompletionResult;
#ifdef STEAMCORE_OnJoinClanChatRoomCompletionResultDelegate_generated_h
#error "OnJoinClanChatRoomCompletionResultDelegate.generated.h already included, missing '#pragma once' in OnJoinClanChatRoomCompletionResultDelegate.h"
#endif
#define STEAMCORE_OnJoinClanChatRoomCompletionResultDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnJoinClanChatRoomCompletionResultDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnJoinClanChatRoomCompletionResult_Parms \
{ \
	FJoinClanChatRoomCompletionResult Data; \
}; \
static inline void FOnJoinClanChatRoomCompletionResult_DelegateWrapper(const FMulticastScriptDelegate& OnJoinClanChatRoomCompletionResult, FJoinClanChatRoomCompletionResult const& Data) \
{ \
	_Script_SteamCore_eventOnJoinClanChatRoomCompletionResult_Parms Parms; \
	Parms.Data=Data; \
	OnJoinClanChatRoomCompletionResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnJoinClanChatRoomCompletionResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
