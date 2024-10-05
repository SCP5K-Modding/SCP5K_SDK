// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJoinClanChatRoomCompletionResult;
#ifdef STEAMCORE_OnJoinClanChatRoomDelegate_generated_h
#error "OnJoinClanChatRoomDelegate.generated.h already included, missing '#pragma once' in OnJoinClanChatRoomDelegate.h"
#endif
#define STEAMCORE_OnJoinClanChatRoomDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnJoinClanChatRoomDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnJoinClanChatRoom_Parms \
{ \
	FJoinClanChatRoomCompletionResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnJoinClanChatRoom_DelegateWrapper(const FScriptDelegate& OnJoinClanChatRoom, FJoinClanChatRoomCompletionResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnJoinClanChatRoom_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnJoinClanChatRoom.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnJoinClanChatRoomDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
