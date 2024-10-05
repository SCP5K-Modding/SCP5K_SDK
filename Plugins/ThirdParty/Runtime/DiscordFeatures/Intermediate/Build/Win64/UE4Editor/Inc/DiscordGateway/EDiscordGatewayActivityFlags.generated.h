// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDGATEWAY_EDiscordGatewayActivityFlags_generated_h
#error "EDiscordGatewayActivityFlags.generated.h already included, missing '#pragma once' in EDiscordGatewayActivityFlags.h"
#endif
#define DISCORDGATEWAY_EDiscordGatewayActivityFlags_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordGateway_Public_EDiscordGatewayActivityFlags_h


#define FOREACH_ENUM_EDISCORDGATEWAYACTIVITYFLAGS(op) \
	op(EDiscordGatewayActivityFlags::Instance) \
	op(EDiscordGatewayActivityFlags::Join) \
	op(EDiscordGatewayActivityFlags::Spectate) \
	op(EDiscordGatewayActivityFlags::JoinRequest) \
	op(EDiscordGatewayActivityFlags::Sync) \
	op(EDiscordGatewayActivityFlags::Play) 

enum class EDiscordGatewayActivityFlags : uint8;
template<> DISCORDGATEWAY_API UEnum* StaticEnum<EDiscordGatewayActivityFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
