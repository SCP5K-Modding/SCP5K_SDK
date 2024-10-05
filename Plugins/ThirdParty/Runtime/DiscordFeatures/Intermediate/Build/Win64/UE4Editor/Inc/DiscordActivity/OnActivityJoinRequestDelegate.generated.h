// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDiscordUser;
#ifdef DISCORDACTIVITY_OnActivityJoinRequestDelegate_generated_h
#error "OnActivityJoinRequestDelegate.generated.h already included, missing '#pragma once' in OnActivityJoinRequestDelegate.h"
#endif
#define DISCORDACTIVITY_OnActivityJoinRequestDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_OnActivityJoinRequestDelegate_h_6_DELEGATE \
struct _Script_DiscordActivity_eventOnActivityJoinRequest_Parms \
{ \
	FDiscordUser User; \
}; \
static inline void FOnActivityJoinRequest_DelegateWrapper(const FMulticastScriptDelegate& OnActivityJoinRequest, FDiscordUser const& User) \
{ \
	_Script_DiscordActivity_eventOnActivityJoinRequest_Parms Parms; \
	Parms.User=User; \
	OnActivityJoinRequest.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_OnActivityJoinRequestDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
