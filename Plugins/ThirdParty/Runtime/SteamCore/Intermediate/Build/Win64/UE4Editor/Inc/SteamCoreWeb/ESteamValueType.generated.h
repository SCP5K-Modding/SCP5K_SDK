// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCOREWEB_ESteamValueType_generated_h
#error "ESteamValueType.generated.h already included, missing '#pragma once' in ESteamValueType.h"
#endif
#define STEAMCOREWEB_ESteamValueType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_ESteamValueType_h


#define FOREACH_ENUM_ESTEAMVALUETYPE(op) \
	op(ESteamValueType::STRING) \
	op(ESteamValueType::NUMBER) \
	op(ESteamValueType::BOOL) 

enum class ESteamValueType : uint8;
template<> STEAMCOREWEB_API UEnum* StaticEnum<ESteamValueType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
