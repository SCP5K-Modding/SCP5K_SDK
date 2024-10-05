// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamFriendFlags_generated_h
#error "ESteamFriendFlags.generated.h already included, missing '#pragma once' in ESteamFriendFlags.h"
#endif
#define STEAMCORE_ESteamFriendFlags_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamFriendFlags_h


#define FOREACH_ENUM_ESTEAMFRIENDFLAGS(op) \
	op(ESteamFriendFlags::None) \
	op(ESteamFriendFlags::Blocked) \
	op(ESteamFriendFlags::FriendshipRequested) \
	op(ESteamFriendFlags::Immediate) \
	op(ESteamFriendFlags::ClanMember) \
	op(ESteamFriendFlags::OnGameServer) \
	op(ESteamFriendFlags::RequestingFriendship) \
	op(ESteamFriendFlags::RequestingInfo) \
	op(ESteamFriendFlags::Ignored) \
	op(ESteamFriendFlags::IgnoredFriend) \
	op(ESteamFriendFlags::ChatMember) \
	op(ESteamFriendFlags::All) 

enum class ESteamFriendFlags : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamFriendFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
