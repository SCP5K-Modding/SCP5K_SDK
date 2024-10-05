// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDiscordResult : uint8;
#ifdef DISCORDSTORE_OnStoreResultEventDelegate_generated_h
#error "OnStoreResultEventDelegate.generated.h already included, missing '#pragma once' in OnStoreResultEventDelegate.h"
#endif
#define DISCORDSTORE_OnStoreResultEventDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStore_Public_OnStoreResultEventDelegate_h_6_DELEGATE \
struct _Script_DiscordStore_eventOnStoreResultEvent_Parms \
{ \
	EDiscordResult Result; \
}; \
static inline void FOnStoreResultEvent_DelegateWrapper(const FMulticastScriptDelegate& OnStoreResultEvent, EDiscordResult Result) \
{ \
	_Script_DiscordStore_eventOnStoreResultEvent_Parms Parms; \
	Parms.Result=Result; \
	OnStoreResultEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStore_Public_OnStoreResultEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
