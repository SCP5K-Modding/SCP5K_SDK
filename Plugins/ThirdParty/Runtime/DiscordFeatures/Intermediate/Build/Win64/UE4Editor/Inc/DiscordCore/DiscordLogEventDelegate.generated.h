// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDiscordLogLevel : uint8;
#ifdef DISCORDCORE_DiscordLogEventDelegate_generated_h
#error "DiscordLogEventDelegate.generated.h already included, missing '#pragma once' in DiscordLogEventDelegate.h"
#endif
#define DISCORDCORE_DiscordLogEventDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordLogEventDelegate_h_6_DELEGATE \
struct _Script_DiscordCore_eventDiscordLogEvent_Parms \
{ \
	EDiscordLogLevel DiscordLogLevel; \
	FString Message; \
}; \
static inline void FDiscordLogEvent_DelegateWrapper(const FScriptDelegate& DiscordLogEvent, EDiscordLogLevel DiscordLogLevel, const FString& Message) \
{ \
	_Script_DiscordCore_eventDiscordLogEvent_Parms Parms; \
	Parms.DiscordLogLevel=DiscordLogLevel; \
	Parms.Message=Message; \
	DiscordLogEvent.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordLogEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
