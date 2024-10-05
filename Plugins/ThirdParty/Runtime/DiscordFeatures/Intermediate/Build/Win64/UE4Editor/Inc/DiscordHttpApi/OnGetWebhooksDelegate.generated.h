// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDiscordWebhook;
#ifdef DISCORDHTTPAPI_OnGetWebhooksDelegate_generated_h
#error "OnGetWebhooksDelegate.generated.h already included, missing '#pragma once' in OnGetWebhooksDelegate.h"
#endif
#define DISCORDHTTPAPI_OnGetWebhooksDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordHttpApi_Public_OnGetWebhooksDelegate_h_6_DELEGATE \
struct _Script_DiscordHttpApi_eventOnGetWebhooks_Parms \
{ \
	TArray<FDiscordWebhook> Webhooks; \
}; \
static inline void FOnGetWebhooks_DelegateWrapper(const FMulticastScriptDelegate& OnGetWebhooks, TArray<FDiscordWebhook> const& Webhooks) \
{ \
	_Script_DiscordHttpApi_eventOnGetWebhooks_Parms Parms; \
	Parms.Webhooks=Webhooks; \
	OnGetWebhooks.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordHttpApi_Public_OnGetWebhooksDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
