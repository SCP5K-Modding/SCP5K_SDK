// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamPlayerResult_generated_h
#error "ESteamPlayerResult.generated.h already included, missing '#pragma once' in ESteamPlayerResult.h"
#endif
#define STEAMCORE_ESteamPlayerResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamPlayerResult_h


#define FOREACH_ENUM_ESTEAMPLAYERRESULT(op) \
	op(ESteamPlayerResult::Invalid) \
	op(ESteamPlayerResult::FailedToConnect) \
	op(ESteamPlayerResult::Abandoned) \
	op(ESteamPlayerResult::Kicked) \
	op(ESteamPlayerResult::Incomplete) \
	op(ESteamPlayerResult::Completed) 

enum class ESteamPlayerResult : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamPlayerResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
