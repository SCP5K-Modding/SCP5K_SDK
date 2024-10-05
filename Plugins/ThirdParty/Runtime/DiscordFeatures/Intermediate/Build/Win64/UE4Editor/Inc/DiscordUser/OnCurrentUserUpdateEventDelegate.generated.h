// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDiscordUser;
#ifdef DISCORDUSER_OnCurrentUserUpdateEventDelegate_generated_h
#error "OnCurrentUserUpdateEventDelegate.generated.h already included, missing '#pragma once' in OnCurrentUserUpdateEventDelegate.h"
#endif
#define DISCORDUSER_OnCurrentUserUpdateEventDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_OnCurrentUserUpdateEventDelegate_h_6_DELEGATE \
struct _Script_DiscordUser_eventOnCurrentUserUpdateEvent_Parms \
{ \
	FDiscordUser CurrentUser; \
}; \
static inline void FOnCurrentUserUpdateEvent_DelegateWrapper(const FMulticastScriptDelegate& OnCurrentUserUpdateEvent, FDiscordUser const& CurrentUser) \
{ \
	_Script_DiscordUser_eventOnCurrentUserUpdateEvent_Parms Parms; \
	Parms.CurrentUser=CurrentUser; \
	OnCurrentUserUpdateEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_OnCurrentUserUpdateEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
