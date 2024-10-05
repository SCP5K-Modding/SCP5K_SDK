// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDiscordWebhook;
#ifdef DISCORDHTTPAPI_OnGetWebhookDelegate_generated_h
#error "OnGetWebhookDelegate.generated.h already included, missing '#pragma once' in OnGetWebhookDelegate.h"
#endif
#define DISCORDHTTPAPI_OnGetWebhookDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordHttpApi_Public_OnGetWebhookDelegate_h_6_DELEGATE \
struct _Script_DiscordHttpApi_eventOnGetWebhook_Parms \
{ \
	FDiscordWebhook Webhoook; \
}; \
static inline void FOnGetWebhook_DelegateWrapper(const FMulticastScriptDelegate& OnGetWebhook, FDiscordWebhook const& Webhoook) \
{ \
	_Script_DiscordHttpApi_eventOnGetWebhook_Parms Parms; \
	Parms.Webhoook=Webhoook; \
	OnGetWebhook.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordHttpApi_Public_OnGetWebhookDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
