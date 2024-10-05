// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamFavoriteFlags_generated_h
#error "ESteamFavoriteFlags.generated.h already included, missing '#pragma once' in ESteamFavoriteFlags.h"
#endif
#define STEAMCORE_ESteamFavoriteFlags_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamFavoriteFlags_h


#define FOREACH_ENUM_ESTEAMFAVORITEFLAGS(op) \
	op(ESteamFavoriteFlags::None) \
	op(ESteamFavoriteFlags::Favorite) \
	op(ESteamFavoriteFlags::History) 

enum class ESteamFavoriteFlags : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamFavoriteFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
