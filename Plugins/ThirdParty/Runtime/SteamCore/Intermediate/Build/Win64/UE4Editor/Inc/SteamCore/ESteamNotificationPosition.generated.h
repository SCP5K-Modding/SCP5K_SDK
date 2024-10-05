// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamNotificationPosition_generated_h
#error "ESteamNotificationPosition.generated.h already included, missing '#pragma once' in ESteamNotificationPosition.h"
#endif
#define STEAMCORE_ESteamNotificationPosition_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamNotificationPosition_h


#define FOREACH_ENUM_ESTEAMNOTIFICATIONPOSITION(op) \
	op(ESteamNotificationPosition::TopLeft) \
	op(ESteamNotificationPosition::TopRight) \
	op(ESteamNotificationPosition::BottomLeft) \
	op(ESteamNotificationPosition::BottomRight) 

enum class ESteamNotificationPosition : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamNotificationPosition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
