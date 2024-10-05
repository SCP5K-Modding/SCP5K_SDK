// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDSTEAMSESSIONS_ESteamUserOverlayType_generated_h
#error "ESteamUserOverlayType.generated.h already included, missing '#pragma once' in ESteamUserOverlayType.h"
#endif
#define ADVANCEDSTEAMSESSIONS_ESteamUserOverlayType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_ESteamUserOverlayType_h


#define FOREACH_ENUM_ESTEAMUSEROVERLAYTYPE(op) \
	op(ESteamUserOverlayType::steamid) \
	op(ESteamUserOverlayType::chat) \
	op(ESteamUserOverlayType::jointrade) \
	op(ESteamUserOverlayType::stats) \
	op(ESteamUserOverlayType::achievements) \
	op(ESteamUserOverlayType::friendadd) \
	op(ESteamUserOverlayType::friendremove) \
	op(ESteamUserOverlayType::friendrequestaccept) \
	op(ESteamUserOverlayType::friendrequestignore) 

enum class ESteamUserOverlayType : uint8;
template<> ADVANCEDSTEAMSESSIONS_API UEnum* StaticEnum<ESteamUserOverlayType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
