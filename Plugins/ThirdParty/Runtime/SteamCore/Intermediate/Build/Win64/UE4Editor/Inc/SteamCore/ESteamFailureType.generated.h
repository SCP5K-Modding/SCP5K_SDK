// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamFailureType_generated_h
#error "ESteamFailureType.generated.h already included, missing '#pragma once' in ESteamFailureType.h"
#endif
#define STEAMCORE_ESteamFailureType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamFailureType_h


#define FOREACH_ENUM_ESTEAMFAILURETYPE(op) \
	op(ESteamFailureType::FlushedCallbackQueue) \
	op(ESteamFailureType::PipeFail) 

enum class ESteamFailureType : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamFailureType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
