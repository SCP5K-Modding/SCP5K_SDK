// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDRELATIONSHIP_EDiscordStatus_generated_h
#error "EDiscordStatus.generated.h already included, missing '#pragma once' in EDiscordStatus.h"
#endif
#define DISCORDRELATIONSHIP_EDiscordStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordRelationship_Public_EDiscordStatus_h


#define FOREACH_ENUM_EDISCORDSTATUS(op) \
	op(EDiscordStatus::Offline) \
	op(EDiscordStatus::Online) \
	op(EDiscordStatus::Idle) \
	op(EDiscordStatus::DoNotDisturb) 

enum class EDiscordStatus : uint8;
template<> DISCORDRELATIONSHIP_API UEnum* StaticEnum<EDiscordStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
