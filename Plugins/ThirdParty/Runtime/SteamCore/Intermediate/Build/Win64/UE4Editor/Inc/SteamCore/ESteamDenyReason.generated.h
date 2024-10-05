// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamDenyReason_generated_h
#error "ESteamDenyReason.generated.h already included, missing '#pragma once' in ESteamDenyReason.h"
#endif
#define STEAMCORE_ESteamDenyReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamDenyReason_h


#define FOREACH_ENUM_ESTEAMDENYREASON(op) \
	op(ESteamDenyReason::Invalid) \
	op(ESteamDenyReason::InvalidVersion) \
	op(ESteamDenyReason::Generic) \
	op(ESteamDenyReason::NotLoggedOn) \
	op(ESteamDenyReason::NoLicense) \
	op(ESteamDenyReason::Cheater) \
	op(ESteamDenyReason::LoggedInElseWhere) \
	op(ESteamDenyReason::UnknownText) \
	op(ESteamDenyReason::IncompatibleAnticheat) \
	op(ESteamDenyReason::MemoryCorruption) \
	op(ESteamDenyReason::IncompatibleSoftware) \
	op(ESteamDenyReason::SteamConnectionLost) \
	op(ESteamDenyReason::SteamConnectionError) \
	op(ESteamDenyReason::SteamResponseTimedOut) \
	op(ESteamDenyReason::SteamValidationStalled) \
	op(ESteamDenyReason::SteamOwnerLeftGuestUser) 

enum class ESteamDenyReason : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamDenyReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
