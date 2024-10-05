// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDCORE_EDiscordLogLevel_generated_h
#error "EDiscordLogLevel.generated.h already included, missing '#pragma once' in EDiscordLogLevel.h"
#endif
#define DISCORDCORE_EDiscordLogLevel_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_EDiscordLogLevel_h


#define FOREACH_ENUM_EDISCORDLOGLEVEL(op) \
	op(EDiscordLogLevel::None) \
	op(EDiscordLogLevel::Error) \
	op(EDiscordLogLevel::Warn) \
	op(EDiscordLogLevel::Info) \
	op(EDiscordLogLevel::Debug) 

enum class EDiscordLogLevel : uint8;
template<> DISCORDCORE_API UEnum* StaticEnum<EDiscordLogLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
