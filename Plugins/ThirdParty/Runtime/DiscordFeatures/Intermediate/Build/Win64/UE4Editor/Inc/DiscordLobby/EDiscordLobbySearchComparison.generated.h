// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDLOBBY_EDiscordLobbySearchComparison_generated_h
#error "EDiscordLobbySearchComparison.generated.h already included, missing '#pragma once' in EDiscordLobbySearchComparison.h"
#endif
#define DISCORDLOBBY_EDiscordLobbySearchComparison_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_EDiscordLobbySearchComparison_h


#define FOREACH_ENUM_EDISCORDLOBBYSEARCHCOMPARISON(op) \
	op(EDiscordLobbySearchComparison::LessThanOrEqual) \
	op(EDiscordLobbySearchComparison::LessThan) \
	op(EDiscordLobbySearchComparison::Equal) \
	op(EDiscordLobbySearchComparison::GraterThan) \
	op(EDiscordLobbySearchComparison::GreaterOrEqualThan) \
	op(EDiscordLobbySearchComparison::NotEqual) 

enum class EDiscordLobbySearchComparison : uint8;
template<> DISCORDLOBBY_API UEnum* StaticEnum<EDiscordLobbySearchComparison>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
