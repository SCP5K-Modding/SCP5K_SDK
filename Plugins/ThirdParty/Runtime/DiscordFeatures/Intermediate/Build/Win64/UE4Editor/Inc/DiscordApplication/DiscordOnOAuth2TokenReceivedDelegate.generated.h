// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDiscordResult : uint8;
struct FDiscordOAuth2Token;
#ifdef DISCORDAPPLICATION_DiscordOnOAuth2TokenReceivedDelegate_generated_h
#error "DiscordOnOAuth2TokenReceivedDelegate.generated.h already included, missing '#pragma once' in DiscordOnOAuth2TokenReceivedDelegate.h"
#endif
#define DISCORDAPPLICATION_DiscordOnOAuth2TokenReceivedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordOnOAuth2TokenReceivedDelegate_h_7_DELEGATE \
struct _Script_DiscordApplication_eventDiscordOnOAuth2TokenReceived_Parms \
{ \
	EDiscordResult Result; \
	FDiscordOAuth2Token Token; \
}; \
static inline void FDiscordOnOAuth2TokenReceived_DelegateWrapper(const FMulticastScriptDelegate& DiscordOnOAuth2TokenReceived, EDiscordResult Result, FDiscordOAuth2Token const& Token) \
{ \
	_Script_DiscordApplication_eventDiscordOnOAuth2TokenReceived_Parms Parms; \
	Parms.Result=Result; \
	Parms.Token=Token; \
	DiscordOnOAuth2TokenReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordOnOAuth2TokenReceivedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
