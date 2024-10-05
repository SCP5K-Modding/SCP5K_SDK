// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamUniverse_generated_h
#error "ESteamUniverse.generated.h already included, missing '#pragma once' in ESteamUniverse.h"
#endif
#define STEAMCORE_ESteamUniverse_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamUniverse_h


#define FOREACH_ENUM_ESTEAMUNIVERSE(op) \
	op(ESteamUniverse::Invalid) \
	op(ESteamUniverse::Public) \
	op(ESteamUniverse::Beta) \
	op(ESteamUniverse::Internal) \
	op(ESteamUniverse::Dev) \
	op(ESteamUniverse::Max) 

enum class ESteamUniverse : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamUniverse>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
