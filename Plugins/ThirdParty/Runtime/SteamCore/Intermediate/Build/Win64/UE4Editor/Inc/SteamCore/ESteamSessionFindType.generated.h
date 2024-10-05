// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamSessionFindType_generated_h
#error "ESteamSessionFindType.generated.h already included, missing '#pragma once' in ESteamSessionFindType.h"
#endif
#define STEAMCORE_ESteamSessionFindType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamSessionFindType_h


#define FOREACH_ENUM_ESTEAMSESSIONFINDTYPE(op) \
	op(ESteamSessionFindType::Listen) \
	op(ESteamSessionFindType::Dedicated) 

enum class ESteamSessionFindType : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamSessionFindType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
