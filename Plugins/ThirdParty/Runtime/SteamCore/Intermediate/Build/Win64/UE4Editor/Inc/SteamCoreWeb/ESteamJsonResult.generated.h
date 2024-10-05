// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCOREWEB_ESteamJsonResult_generated_h
#error "ESteamJsonResult.generated.h already included, missing '#pragma once' in ESteamJsonResult.h"
#endif
#define STEAMCOREWEB_ESteamJsonResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_ESteamJsonResult_h


#define FOREACH_ENUM_ESTEAMJSONRESULT(op) \
	op(ESteamJsonResult::Found) \
	op(ESteamJsonResult::NotFound) 

enum class ESteamJsonResult : uint8;
template<> STEAMCOREWEB_API UEnum* StaticEnum<ESteamJsonResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
