// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamBeginAuthSessionResult_generated_h
#error "ESteamBeginAuthSessionResult.generated.h already included, missing '#pragma once' in ESteamBeginAuthSessionResult.h"
#endif
#define STEAMCORE_ESteamBeginAuthSessionResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamBeginAuthSessionResult_h


#define FOREACH_ENUM_ESTEAMBEGINAUTHSESSIONRESULT(op) \
	op(ESteamBeginAuthSessionResult::OK) \
	op(ESteamBeginAuthSessionResult::InvalidTicket) \
	op(ESteamBeginAuthSessionResult::DuplicateRequest) \
	op(ESteamBeginAuthSessionResult::InvalidVersion) \
	op(ESteamBeginAuthSessionResult::GameMismatch) \
	op(ESteamBeginAuthSessionResult::ExpiredTicket) 

enum class ESteamBeginAuthSessionResult : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamBeginAuthSessionResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
