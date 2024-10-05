// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDHTTPAPI_EDiscordWebhookType_generated_h
#error "EDiscordWebhookType.generated.h already included, missing '#pragma once' in EDiscordWebhookType.h"
#endif
#define DISCORDHTTPAPI_EDiscordWebhookType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordHttpApi_Public_EDiscordWebhookType_h


#define FOREACH_ENUM_EDISCORDWEBHOOKTYPE(op) \
	op(EDiscordWebhookType::None) \
	op(EDiscordWebhookType::Incoming) \
	op(EDiscordWebhookType::ChannelFollower) 

enum class EDiscordWebhookType : uint8;
template<> DISCORDHTTPAPI_API UEnum* StaticEnum<EDiscordWebhookType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
