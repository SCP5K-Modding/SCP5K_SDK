// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamPersonaChange_generated_h
#error "ESteamPersonaChange.generated.h already included, missing '#pragma once' in ESteamPersonaChange.h"
#endif
#define STEAMCORE_ESteamPersonaChange_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamPersonaChange_h


#define FOREACH_ENUM_ESTEAMPERSONACHANGE(op) \
	op(ESteamPersonaChange::Name) \
	op(ESteamPersonaChange::Status) \
	op(ESteamPersonaChange::ComeOnline) \
	op(ESteamPersonaChange::GoneOffline) \
	op(ESteamPersonaChange::GamePlayed) \
	op(ESteamPersonaChange::GameServer) \
	op(ESteamPersonaChange::Avatar) \
	op(ESteamPersonaChange::JoinedSource) \
	op(ESteamPersonaChange::LeftSource) \
	op(ESteamPersonaChange::RelationshipChanged) \
	op(ESteamPersonaChange::NameFirstSet) \
	op(ESteamPersonaChange::FacebookInfo) \
	op(ESteamPersonaChange::Nickname) \
	op(ESteamPersonaChange::SteamLevel) 

enum class ESteamPersonaChange : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamPersonaChange>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
