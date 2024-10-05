// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamUserRestriction_generated_h
#error "ESteamUserRestriction.generated.h already included, missing '#pragma once' in ESteamUserRestriction.h"
#endif
#define STEAMCORE_ESteamUserRestriction_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamUserRestriction_h


#define FOREACH_ENUM_ESTEAMUSERRESTRICTION(op) \
	op(ESteamUserRestriction::None) \
	op(ESteamUserRestriction::Unknown) \
	op(ESteamUserRestriction::AnyChat) \
	op(ESteamUserRestriction::VoiceChat) \
	op(ESteamUserRestriction::GroupChat) \
	op(ESteamUserRestriction::Rating) \
	op(ESteamUserRestriction::GameInvites) \
	op(ESteamUserRestriction::Trading) 

enum class ESteamUserRestriction : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamUserRestriction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
