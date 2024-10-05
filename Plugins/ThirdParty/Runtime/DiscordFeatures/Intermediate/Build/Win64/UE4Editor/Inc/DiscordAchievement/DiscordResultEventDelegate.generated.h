// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDiscordResult : uint8;
#ifdef DISCORDACHIEVEMENT_DiscordResultEventDelegate_generated_h
#error "DiscordResultEventDelegate.generated.h already included, missing '#pragma once' in DiscordResultEventDelegate.h"
#endif
#define DISCORDACHIEVEMENT_DiscordResultEventDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordAchievement_Public_DiscordResultEventDelegate_h_6_DELEGATE \
struct _Script_DiscordAchievement_eventDiscordResultEvent_Parms \
{ \
	EDiscordResult Result; \
}; \
static inline void FDiscordResultEvent_DelegateWrapper(const FMulticastScriptDelegate& DiscordResultEvent, EDiscordResult Result) \
{ \
	_Script_DiscordAchievement_eventDiscordResultEvent_Parms Parms; \
	Parms.Result=Result; \
	DiscordResultEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordAchievement_Public_DiscordResultEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
