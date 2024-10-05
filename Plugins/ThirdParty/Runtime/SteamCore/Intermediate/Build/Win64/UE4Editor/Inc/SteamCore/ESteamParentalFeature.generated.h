// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamParentalFeature_generated_h
#error "ESteamParentalFeature.generated.h already included, missing '#pragma once' in ESteamParentalFeature.h"
#endif
#define STEAMCORE_ESteamParentalFeature_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamParentalFeature_h


#define FOREACH_ENUM_ESTEAMPARENTALFEATURE(op) \
	op(ESteamParentalFeature::Invalid) \
	op(ESteamParentalFeature::Store) \
	op(ESteamParentalFeature::Community) \
	op(ESteamParentalFeature::Profile) \
	op(ESteamParentalFeature::Friends) \
	op(ESteamParentalFeature::News) \
	op(ESteamParentalFeature::Trading) \
	op(ESteamParentalFeature::Settings) \
	op(ESteamParentalFeature::Console) \
	op(ESteamParentalFeature::Browser) \
	op(ESteamParentalFeature::ParentalSetup) \
	op(ESteamParentalFeature::Library) \
	op(ESteamParentalFeature::Test) \
	op(ESteamParentalFeature::Max) 

enum class ESteamParentalFeature : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamParentalFeature>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
