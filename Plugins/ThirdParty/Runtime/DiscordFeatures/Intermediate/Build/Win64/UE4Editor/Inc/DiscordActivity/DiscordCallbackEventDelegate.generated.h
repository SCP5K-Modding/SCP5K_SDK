// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDiscordResult : uint8;
#ifdef DISCORDACTIVITY_DiscordCallbackEventDelegate_generated_h
#error "DiscordCallbackEventDelegate.generated.h already included, missing '#pragma once' in DiscordCallbackEventDelegate.h"
#endif
#define DISCORDACTIVITY_DiscordCallbackEventDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordCallbackEventDelegate_h_6_DELEGATE \
struct _Script_DiscordActivity_eventDiscordCallbackEvent_Parms \
{ \
	EDiscordResult Result; \
}; \
static inline void FDiscordCallbackEvent_DelegateWrapper(const FMulticastScriptDelegate& DiscordCallbackEvent, EDiscordResult Result) \
{ \
	_Script_DiscordActivity_eventDiscordCallbackEvent_Parms Parms; \
	Parms.Result=Result; \
	DiscordCallbackEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordCallbackEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
