// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamChatMemberStateChange_generated_h
#error "ESteamChatMemberStateChange.generated.h already included, missing '#pragma once' in ESteamChatMemberStateChange.h"
#endif
#define STEAMCORE_ESteamChatMemberStateChange_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamChatMemberStateChange_h


#define FOREACH_ENUM_ESTEAMCHATMEMBERSTATECHANGE(op) \
	op(ESteamChatMemberStateChange::None) \
	op(ESteamChatMemberStateChange::Entered) \
	op(ESteamChatMemberStateChange::Left) \
	op(ESteamChatMemberStateChange::Disconnected) \
	op(ESteamChatMemberStateChange::Kicked) \
	op(ESteamChatMemberStateChange::Banned) 

enum class ESteamChatMemberStateChange : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamChatMemberStateChange>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
