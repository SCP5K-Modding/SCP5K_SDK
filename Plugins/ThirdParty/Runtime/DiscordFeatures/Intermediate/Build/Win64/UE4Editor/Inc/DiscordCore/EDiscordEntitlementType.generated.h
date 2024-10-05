// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDCORE_EDiscordEntitlementType_generated_h
#error "EDiscordEntitlementType.generated.h already included, missing '#pragma once' in EDiscordEntitlementType.h"
#endif
#define DISCORDCORE_EDiscordEntitlementType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_EDiscordEntitlementType_h


#define FOREACH_ENUM_EDISCORDENTITLEMENTTYPE(op) \
	op(EDiscordEntitlementType::None) \
	op(EDiscordEntitlementType::Purchase) \
	op(EDiscordEntitlementType::PremiumSubscription) \
	op(EDiscordEntitlementType::DeveloperGift) \
	op(EDiscordEntitlementType::TestModePurchase) \
	op(EDiscordEntitlementType::FreePurchase) \
	op(EDiscordEntitlementType::UserGift) \
	op(EDiscordEntitlementType::PremiumPurchase) 

enum class EDiscordEntitlementType : uint8;
template<> DISCORDCORE_API UEnum* StaticEnum<EDiscordEntitlementType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
