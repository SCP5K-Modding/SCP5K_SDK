// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamLobbyComparison_generated_h
#error "ESteamLobbyComparison.generated.h already included, missing '#pragma once' in ESteamLobbyComparison.h"
#endif
#define STEAMCORE_ESteamLobbyComparison_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamLobbyComparison_h


#define FOREACH_ENUM_ESTEAMLOBBYCOMPARISON(op) \
	op(ESteamLobbyComparison::EqualToOrLessThan) \
	op(ESteamLobbyComparison::LessThan) \
	op(ESteamLobbyComparison::Equal) \
	op(ESteamLobbyComparison::GreaterThan) \
	op(ESteamLobbyComparison::EqualToOrGreaterThan) \
	op(ESteamLobbyComparison::NotEqual) 

enum class ESteamLobbyComparison : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamLobbyComparison>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
