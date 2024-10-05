// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDiscordResult : uint8;
#ifdef DISCORDAPPLICATION_DiscordOnTickerReceivedDelegate_generated_h
#error "DiscordOnTickerReceivedDelegate.generated.h already included, missing '#pragma once' in DiscordOnTickerReceivedDelegate.h"
#endif
#define DISCORDAPPLICATION_DiscordOnTickerReceivedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordOnTickerReceivedDelegate_h_6_DELEGATE \
struct _Script_DiscordApplication_eventDiscordOnTickerReceived_Parms \
{ \
	EDiscordResult Result; \
	FString Ticket; \
}; \
static inline void FDiscordOnTickerReceived_DelegateWrapper(const FMulticastScriptDelegate& DiscordOnTickerReceived, EDiscordResult Result, const FString& Ticket) \
{ \
	_Script_DiscordApplication_eventDiscordOnTickerReceived_Parms Parms; \
	Parms.Result=Result; \
	Parms.Ticket=Ticket; \
	DiscordOnTickerReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordOnTickerReceivedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
