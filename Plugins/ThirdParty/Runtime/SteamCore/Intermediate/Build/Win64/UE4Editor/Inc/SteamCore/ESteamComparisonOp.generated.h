// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamComparisonOp_generated_h
#error "ESteamComparisonOp.generated.h already included, missing '#pragma once' in ESteamComparisonOp.h"
#endif
#define STEAMCORE_ESteamComparisonOp_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamComparisonOp_h


#define FOREACH_ENUM_ESTEAMCOMPARISONOP(op) \
	op(ESteamComparisonOp::Equals) \
	op(ESteamComparisonOp::NotEquals) \
	op(ESteamComparisonOp::GreaterThan) \
	op(ESteamComparisonOp::GreaterThanEquals) \
	op(ESteamComparisonOp::LessThan) \
	op(ESteamComparisonOp::LessThanEquals) \
	op(ESteamComparisonOp::Near) \
	op(ESteamComparisonOp::In) \
	op(ESteamComparisonOp::NotIn) 

enum class ESteamComparisonOp : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamComparisonOp>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
