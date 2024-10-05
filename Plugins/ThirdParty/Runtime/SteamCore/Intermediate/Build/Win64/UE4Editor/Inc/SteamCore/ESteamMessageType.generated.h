// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamMessageType_generated_h
#error "ESteamMessageType.generated.h already included, missing '#pragma once' in ESteamMessageType.h"
#endif
#define STEAMCORE_ESteamMessageType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamMessageType_h


#define FOREACH_ENUM_ESTEAMMESSAGETYPE(op) \
	op(ESteamMessageType::ENotification) \
	op(ESteamMessageType::EMessage) \
	op(ESteamMessageType::EWarning) 

enum class ESteamMessageType : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamMessageType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
