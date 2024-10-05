// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDACTIVITY_OnActivityJoinDelegate_generated_h
#error "OnActivityJoinDelegate.generated.h already included, missing '#pragma once' in OnActivityJoinDelegate.h"
#endif
#define DISCORDACTIVITY_OnActivityJoinDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_OnActivityJoinDelegate_h_5_DELEGATE \
struct _Script_DiscordActivity_eventOnActivityJoin_Parms \
{ \
	FString Secret; \
}; \
static inline void FOnActivityJoin_DelegateWrapper(const FMulticastScriptDelegate& OnActivityJoin, const FString& Secret) \
{ \
	_Script_DiscordActivity_eventOnActivityJoin_Parms Parms; \
	Parms.Secret=Secret; \
	OnActivityJoin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_OnActivityJoinDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
