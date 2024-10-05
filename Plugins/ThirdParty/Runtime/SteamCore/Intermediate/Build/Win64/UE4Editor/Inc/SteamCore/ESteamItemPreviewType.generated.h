// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamItemPreviewType_generated_h
#error "ESteamItemPreviewType.generated.h already included, missing '#pragma once' in ESteamItemPreviewType.h"
#endif
#define STEAMCORE_ESteamItemPreviewType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamItemPreviewType_h


#define FOREACH_ENUM_ESTEAMITEMPREVIEWTYPE(op) \
	op(ESteamItemPreviewType::Image) \
	op(ESteamItemPreviewType::YouTubeVideo) \
	op(ESteamItemPreviewType::Sketchfab) \
	op(ESteamItemPreviewType::EnvironmentMap_HorizontalCross) \
	op(ESteamItemPreviewType::EnvironmentMap_LatLong) \
	op(ESteamItemPreviewType::ReservedMax) 

enum class ESteamItemPreviewType : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamItemPreviewType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
