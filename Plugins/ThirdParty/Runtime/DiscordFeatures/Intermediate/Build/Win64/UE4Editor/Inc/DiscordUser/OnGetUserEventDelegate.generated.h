// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDiscordResult : uint8;
struct FDiscordUser;
#ifdef DISCORDUSER_OnGetUserEventDelegate_generated_h
#error "OnGetUserEventDelegate.generated.h already included, missing '#pragma once' in OnGetUserEventDelegate.h"
#endif
#define DISCORDUSER_OnGetUserEventDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_OnGetUserEventDelegate_h_7_DELEGATE \
struct _Script_DiscordUser_eventOnGetUserEvent_Parms \
{ \
	EDiscordResult Result; \
	FDiscordUser User; \
}; \
static inline void FOnGetUserEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGetUserEvent, EDiscordResult Result, FDiscordUser const& User) \
{ \
	_Script_DiscordUser_eventOnGetUserEvent_Parms Parms; \
	Parms.Result=Result; \
	Parms.User=User; \
	OnGetUserEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_OnGetUserEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
