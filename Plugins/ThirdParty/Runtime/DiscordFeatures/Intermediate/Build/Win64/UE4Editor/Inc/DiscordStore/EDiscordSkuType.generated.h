// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDSTORE_EDiscordSkuType_generated_h
#error "EDiscordSkuType.generated.h already included, missing '#pragma once' in EDiscordSkuType.h"
#endif
#define DISCORDSTORE_EDiscordSkuType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStore_Public_EDiscordSkuType_h


#define FOREACH_ENUM_EDISCORDSKUTYPE(op) \
	op(EDiscordSkuType::None) \
	op(EDiscordSkuType::Application) \
	op(EDiscordSkuType::DLC) \
	op(EDiscordSkuType::Consumable) \
	op(EDiscordSkuType::Bundle) 

enum class EDiscordSkuType : uint8;
template<> DISCORDSTORE_API UEnum* StaticEnum<EDiscordSkuType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
