// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDCORE_EDiscordActivityType_generated_h
#error "EDiscordActivityType.generated.h already included, missing '#pragma once' in EDiscordActivityType.h"
#endif
#define DISCORDCORE_EDiscordActivityType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_EDiscordActivityType_h


#define FOREACH_ENUM_EDISCORDACTIVITYTYPE(op) \
	op(EDiscordActivityType::Playing) \
	op(EDiscordActivityType::Streaming) \
	op(EDiscordActivityType::Listening) \
	op(EDiscordActivityType::Watching) 

enum class EDiscordActivityType : uint8;
template<> DISCORDCORE_API UEnum* StaticEnum<EDiscordActivityType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
