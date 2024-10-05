// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDGATEWAY_EDiscordGatewayIntents_generated_h
#error "EDiscordGatewayIntents.generated.h already included, missing '#pragma once' in EDiscordGatewayIntents.h"
#endif
#define DISCORDGATEWAY_EDiscordGatewayIntents_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordGateway_Public_EDiscordGatewayIntents_h


#define FOREACH_ENUM_EDISCORDGATEWAYINTENTS(op) \
	op(EDiscordGatewayIntents::GUILDS) \
	op(EDiscordGatewayIntents::GUILD_MEMBERS) \
	op(EDiscordGatewayIntents::GUILD_BANS) \
	op(EDiscordGatewayIntents::GUILD_EMOJIS) \
	op(EDiscordGatewayIntents::GUILD_INTEGRATIONS) \
	op(EDiscordGatewayIntents::GUILD_WEBHOOKS) \
	op(EDiscordGatewayIntents::GUILD_INVITES) \
	op(EDiscordGatewayIntents::GUILD_VOICE_STATES) \
	op(EDiscordGatewayIntents::GUILD_PRESENCES) \
	op(EDiscordGatewayIntents::GUILD_MESSAGES) \
	op(EDiscordGatewayIntents::GUILD_MESSAGE_REACTIONS) \
	op(EDiscordGatewayIntents::GUILD_MESSAGE_TYPING) \
	op(EDiscordGatewayIntents::DIRECT_MESSAGES) \
	op(EDiscordGatewayIntents::DIRECT_MESSAGE_REACTIONS) \
	op(EDiscordGatewayIntents::DIRECT_MESSAGE_TYPING) 

enum class EDiscordGatewayIntents : uint8;
template<> DISCORDGATEWAY_API UEnum* StaticEnum<EDiscordGatewayIntents>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
