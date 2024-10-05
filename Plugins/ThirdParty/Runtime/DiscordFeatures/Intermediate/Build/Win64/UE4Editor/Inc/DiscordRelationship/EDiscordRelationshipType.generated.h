// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDRELATIONSHIP_EDiscordRelationshipType_generated_h
#error "EDiscordRelationshipType.generated.h already included, missing '#pragma once' in EDiscordRelationshipType.h"
#endif
#define DISCORDRELATIONSHIP_EDiscordRelationshipType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordRelationship_Public_EDiscordRelationshipType_h


#define FOREACH_ENUM_EDISCORDRELATIONSHIPTYPE(op) \
	op(EDiscordRelationshipType::None) \
	op(EDiscordRelationshipType::Friend) \
	op(EDiscordRelationshipType::Blocked) \
	op(EDiscordRelationshipType::PendingIncoming) \
	op(EDiscordRelationshipType::PendingOutgoing) \
	op(EDiscordRelationshipType::Implicit) 

enum class EDiscordRelationshipType : uint8;
template<> DISCORDRELATIONSHIP_API UEnum* StaticEnum<EDiscordRelationshipType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
