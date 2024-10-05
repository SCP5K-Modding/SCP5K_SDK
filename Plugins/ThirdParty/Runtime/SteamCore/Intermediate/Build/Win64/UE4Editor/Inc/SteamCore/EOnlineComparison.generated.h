// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_EOnlineComparison_generated_h
#error "EOnlineComparison.generated.h already included, missing '#pragma once' in EOnlineComparison.h"
#endif
#define STEAMCORE_EOnlineComparison_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_EOnlineComparison_h


#define FOREACH_ENUM_EONLINECOMPARISON(op) \
	op(EOnlineComparison::Equals) \
	op(EOnlineComparison::NotEquals) \
	op(EOnlineComparison::GreaterThan) \
	op(EOnlineComparison::GreaterThanEquals) \
	op(EOnlineComparison::LessThan) \
	op(EOnlineComparison::LessThanEquals) 

enum class EOnlineComparison : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<EOnlineComparison>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
