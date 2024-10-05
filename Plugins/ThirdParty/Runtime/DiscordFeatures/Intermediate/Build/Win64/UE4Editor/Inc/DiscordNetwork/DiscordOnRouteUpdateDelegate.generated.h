// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDNETWORK_DiscordOnRouteUpdateDelegate_generated_h
#error "DiscordOnRouteUpdateDelegate.generated.h already included, missing '#pragma once' in DiscordOnRouteUpdateDelegate.h"
#endif
#define DISCORDNETWORK_DiscordOnRouteUpdateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordOnRouteUpdateDelegate_h_5_DELEGATE \
struct _Script_DiscordNetwork_eventDiscordOnRouteUpdate_Parms \
{ \
	FString NewRoute; \
}; \
static inline void FDiscordOnRouteUpdate_DelegateWrapper(const FMulticastScriptDelegate& DiscordOnRouteUpdate, const FString& NewRoute) \
{ \
	_Script_DiscordNetwork_eventDiscordOnRouteUpdate_Parms Parms; \
	Parms.NewRoute=NewRoute; \
	DiscordOnRouteUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordOnRouteUpdateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
