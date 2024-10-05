// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDHTTPAPI_EDiscordAllowedMentionTypes_generated_h
#error "EDiscordAllowedMentionTypes.generated.h already included, missing '#pragma once' in EDiscordAllowedMentionTypes.h"
#endif
#define DISCORDHTTPAPI_EDiscordAllowedMentionTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordHttpApi_Public_EDiscordAllowedMentionTypes_h


#define FOREACH_ENUM_EDISCORDALLOWEDMENTIONTYPES(op) \
	op(EDiscordAllowedMentionTypes::RoleMentions) \
	op(EDiscordAllowedMentionTypes::UserMentions) \
	op(EDiscordAllowedMentionTypes::EveryoneMentions) 

enum class EDiscordAllowedMentionTypes : uint8;
template<> DISCORDHTTPAPI_API UEnum* StaticEnum<EDiscordAllowedMentionTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
