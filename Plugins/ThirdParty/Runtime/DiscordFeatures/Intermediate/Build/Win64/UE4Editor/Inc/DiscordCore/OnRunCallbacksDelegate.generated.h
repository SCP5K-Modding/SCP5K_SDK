// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDiscordResult : uint8;
#ifdef DISCORDCORE_OnRunCallbacksDelegate_generated_h
#error "OnRunCallbacksDelegate.generated.h already included, missing '#pragma once' in OnRunCallbacksDelegate.h"
#endif
#define DISCORDCORE_OnRunCallbacksDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_OnRunCallbacksDelegate_h_6_DELEGATE \
struct _Script_DiscordCore_eventOnRunCallbacks_Parms \
{ \
	EDiscordResult Error; \
}; \
static inline void FOnRunCallbacks_DelegateWrapper(const FMulticastScriptDelegate& OnRunCallbacks, EDiscordResult Error) \
{ \
	_Script_DiscordCore_eventOnRunCallbacks_Parms Parms; \
	Parms.Error=Error; \
	OnRunCallbacks.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_OnRunCallbacksDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
