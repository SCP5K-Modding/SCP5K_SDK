// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamChatRoomEnterResponse_generated_h
#error "ESteamChatRoomEnterResponse.generated.h already included, missing '#pragma once' in ESteamChatRoomEnterResponse.h"
#endif
#define STEAMCORE_ESteamChatRoomEnterResponse_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamChatRoomEnterResponse_h


#define FOREACH_ENUM_ESTEAMCHATROOMENTERRESPONSE(op) \
	op(ESteamChatRoomEnterResponse::None) \
	op(ESteamChatRoomEnterResponse::Success) \
	op(ESteamChatRoomEnterResponse::DoesntExist) \
	op(ESteamChatRoomEnterResponse::NotAllowed) \
	op(ESteamChatRoomEnterResponse::Full) \
	op(ESteamChatRoomEnterResponse::Error) \
	op(ESteamChatRoomEnterResponse::Banned) \
	op(ESteamChatRoomEnterResponse::Limited) \
	op(ESteamChatRoomEnterResponse::ClanDisabled) \
	op(ESteamChatRoomEnterResponse::CommunityBan) \
	op(ESteamChatRoomEnterResponse::MemberBlockedYou) \
	op(ESteamChatRoomEnterResponse::YouBlockedMember) \
	op(ESteamChatRoomEnterResponse::RatelimitExceeded) 

enum class ESteamChatRoomEnterResponse : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamChatRoomEnterResponse>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
