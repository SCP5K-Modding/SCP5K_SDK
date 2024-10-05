// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamFriendRelationship_generated_h
#error "ESteamFriendRelationship.generated.h already included, missing '#pragma once' in ESteamFriendRelationship.h"
#endif
#define STEAMCORE_ESteamFriendRelationship_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamFriendRelationship_h


#define FOREACH_ENUM_ESTEAMFRIENDRELATIONSHIP(op) \
	op(ESteamFriendRelationship::None) \
	op(ESteamFriendRelationship::Blocked) \
	op(ESteamFriendRelationship::RequestRecipient) \
	op(ESteamFriendRelationship::Friend) \
	op(ESteamFriendRelationship::RequestInitiator) \
	op(ESteamFriendRelationship::Ignored) \
	op(ESteamFriendRelationship::IgnoredFriend) \
	op(ESteamFriendRelationship::Suggested_DEPRECATED) \
	op(ESteamFriendRelationship::Max) 

enum class ESteamFriendRelationship : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamFriendRelationship>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
