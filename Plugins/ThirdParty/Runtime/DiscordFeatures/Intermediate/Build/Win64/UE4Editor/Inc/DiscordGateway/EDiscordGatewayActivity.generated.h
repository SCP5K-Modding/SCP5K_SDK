// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDGATEWAY_EDiscordGatewayActivity_generated_h
#error "EDiscordGatewayActivity.generated.h already included, missing '#pragma once' in EDiscordGatewayActivity.h"
#endif
#define DISCORDGATEWAY_EDiscordGatewayActivity_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordGateway_Public_EDiscordGatewayActivity_h


#define FOREACH_ENUM_EDISCORDGATEWAYACTIVITY(op) \
	op(EDiscordGatewayActivity::Game) \
	op(EDiscordGatewayActivity::Streaming) \
	op(EDiscordGatewayActivity::Listening) \
	op(EDiscordGatewayActivity::Custom) \
	op(EDiscordGatewayActivity::Competing) 

enum class EDiscordGatewayActivity : uint8;
template<> DISCORDGATEWAY_API UEnum* StaticEnum<EDiscordGatewayActivity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
