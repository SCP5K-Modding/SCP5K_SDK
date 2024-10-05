// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUint64;
#ifdef DISCORDNETWORK_DiscordOnMessageDelegate_generated_h
#error "DiscordOnMessageDelegate.generated.h already included, missing '#pragma once' in DiscordOnMessageDelegate.h"
#endif
#define DISCORDNETWORK_DiscordOnMessageDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordOnMessageDelegate_h_6_DELEGATE \
struct _Script_DiscordNetwork_eventDiscordOnMessage_Parms \
{ \
	FUint64 PeerId; \
	uint8 ChannelId; \
	TArray<uint8> Data; \
}; \
static inline void FDiscordOnMessage_DelegateWrapper(const FMulticastScriptDelegate& DiscordOnMessage, FUint64 const& PeerId, uint8 ChannelId, TArray<uint8> const& Data) \
{ \
	_Script_DiscordNetwork_eventDiscordOnMessage_Parms Parms; \
	Parms.PeerId=PeerId; \
	Parms.ChannelId=ChannelId; \
	Parms.Data=Data; \
	DiscordOnMessage.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordOnMessageDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
