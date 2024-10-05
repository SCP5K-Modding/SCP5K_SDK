// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamUserUGCListSortOrder_generated_h
#error "ESteamUserUGCListSortOrder.generated.h already included, missing '#pragma once' in ESteamUserUGCListSortOrder.h"
#endif
#define STEAMCORE_ESteamUserUGCListSortOrder_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamUserUGCListSortOrder_h


#define FOREACH_ENUM_ESTEAMUSERUGCLISTSORTORDER(op) \
	op(ESteamUserUGCListSortOrder::CreationOrderDesc) \
	op(ESteamUserUGCListSortOrder::CreationOrderAsc) \
	op(ESteamUserUGCListSortOrder::TitleAsc) \
	op(ESteamUserUGCListSortOrder::LastUpdatedDesc) \
	op(ESteamUserUGCListSortOrder::SubscriptionDateDesc) \
	op(ESteamUserUGCListSortOrder::VoteScoreDesc) \
	op(ESteamUserUGCListSortOrder::ForModeration) 

enum class ESteamUserUGCListSortOrder : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamUserUGCListSortOrder>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
