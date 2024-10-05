// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamUserUGCList_generated_h
#error "ESteamUserUGCList.generated.h already included, missing '#pragma once' in ESteamUserUGCList.h"
#endif
#define STEAMCORE_ESteamUserUGCList_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamUserUGCList_h


#define FOREACH_ENUM_ESTEAMUSERUGCLIST(op) \
	op(ESteamUserUGCList::Published) \
	op(ESteamUserUGCList::VotedOn) \
	op(ESteamUserUGCList::VotedUp) \
	op(ESteamUserUGCList::VotedDown) \
	op(ESteamUserUGCList::WillVoteLater) \
	op(ESteamUserUGCList::Favorited) \
	op(ESteamUserUGCList::Subscribed) \
	op(ESteamUserUGCList::UsedOrPlayed) \
	op(ESteamUserUGCList::Followed) 

enum class ESteamUserUGCList : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamUserUGCList>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
