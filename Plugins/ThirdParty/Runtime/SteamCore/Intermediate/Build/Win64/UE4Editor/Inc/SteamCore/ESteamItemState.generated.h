// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamItemState_generated_h
#error "ESteamItemState.generated.h already included, missing '#pragma once' in ESteamItemState.h"
#endif
#define STEAMCORE_ESteamItemState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamItemState_h


#define FOREACH_ENUM_ESTEAMITEMSTATE(op) \
	op(ESteamItemState::None) \
	op(ESteamItemState::Subscribed) \
	op(ESteamItemState::LegacyItem) \
	op(ESteamItemState::Installed) \
	op(ESteamItemState::NeedsUpdate) \
	op(ESteamItemState::Downloading) \
	op(ESteamItemState::DownloadPending) 

enum class ESteamItemState : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamItemState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
