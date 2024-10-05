// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDiscordWebhook;
#ifdef DISCORDHTTPAPI_OnWebhookCreatedDelegate_generated_h
#error "OnWebhookCreatedDelegate.generated.h already included, missing '#pragma once' in OnWebhookCreatedDelegate.h"
#endif
#define DISCORDHTTPAPI_OnWebhookCreatedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordHttpApi_Public_OnWebhookCreatedDelegate_h_6_DELEGATE \
struct _Script_DiscordHttpApi_eventOnWebhookCreated_Parms \
{ \
	FDiscordWebhook NewWebhoook; \
}; \
static inline void FOnWebhookCreated_DelegateWrapper(const FMulticastScriptDelegate& OnWebhookCreated, FDiscordWebhook const& NewWebhoook) \
{ \
	_Script_DiscordHttpApi_eventOnWebhookCreated_Parms Parms; \
	Parms.NewWebhoook=NewWebhoook; \
	OnWebhookCreated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordHttpApi_Public_OnWebhookCreatedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
