// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDiscordResult : uint8;
#ifdef DISCORDVOICE_SetInputModeEventDelegate_generated_h
#error "SetInputModeEventDelegate.generated.h already included, missing '#pragma once' in SetInputModeEventDelegate.h"
#endif
#define DISCORDVOICE_SetInputModeEventDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_SetInputModeEventDelegate_h_6_DELEGATE \
struct _Script_DiscordVoice_eventSetInputModeEvent_Parms \
{ \
	EDiscordResult Result; \
}; \
static inline void FSetInputModeEvent_DelegateWrapper(const FMulticastScriptDelegate& SetInputModeEvent, EDiscordResult Result) \
{ \
	_Script_DiscordVoice_eventSetInputModeEvent_Parms Parms; \
	Parms.Result=Result; \
	SetInputModeEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_SetInputModeEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
