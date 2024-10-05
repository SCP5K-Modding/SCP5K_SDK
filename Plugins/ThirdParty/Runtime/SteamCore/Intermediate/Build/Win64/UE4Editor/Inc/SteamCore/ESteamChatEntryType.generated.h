// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamChatEntryType_generated_h
#error "ESteamChatEntryType.generated.h already included, missing '#pragma once' in ESteamChatEntryType.h"
#endif
#define STEAMCORE_ESteamChatEntryType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamChatEntryType_h


#define FOREACH_ENUM_ESTEAMCHATENTRYTYPE(op) \
	op(ESteamChatEntryType::Invalid) \
	op(ESteamChatEntryType::ChatMsg) \
	op(ESteamChatEntryType::Typing) \
	op(ESteamChatEntryType::InviteGame) \
	op(ESteamChatEntryType::Emote) \
	op(ESteamChatEntryType::LeftConversation) \
	op(ESteamChatEntryType::Entered) \
	op(ESteamChatEntryType::WasKicked) \
	op(ESteamChatEntryType::WasBanned) \
	op(ESteamChatEntryType::Disconnected) \
	op(ESteamChatEntryType::HistoricalChat) \
	op(ESteamChatEntryType::LinkBlocked) 

enum class ESteamChatEntryType : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamChatEntryType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
