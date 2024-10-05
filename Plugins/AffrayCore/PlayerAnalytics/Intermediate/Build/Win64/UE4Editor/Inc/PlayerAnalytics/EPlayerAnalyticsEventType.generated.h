// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYERANALYTICS_EPlayerAnalyticsEventType_generated_h
#error "EPlayerAnalyticsEventType.generated.h already included, missing '#pragma once' in EPlayerAnalyticsEventType.h"
#endif
#define PLAYERANALYTICS_EPlayerAnalyticsEventType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_EPlayerAnalyticsEventType_h


#define FOREACH_ENUM_EPLAYERANALYTICSEVENTTYPE(op) \
	op(EPlayerAnalyticsEventType::None) \
	op(EPlayerAnalyticsEventType::Location) \
	op(EPlayerAnalyticsEventType::Death) \
	op(EPlayerAnalyticsEventType::Spawn) \
	op(EPlayerAnalyticsEventType::EnemyKill) \
	op(EPlayerAnalyticsEventType::MissionItemPickup) \
	op(EPlayerAnalyticsEventType::ConsumablePickup) \
	op(EPlayerAnalyticsEventType::ItemPickup) \
	op(EPlayerAnalyticsEventType::CompleteObjective) \
	op(EPlayerAnalyticsEventType::EnterArea) \
	op(EPlayerAnalyticsEventType::Spectate) \
	op(EPlayerAnalyticsEventType::Custom) 

enum class EPlayerAnalyticsEventType : uint8;
template<> PLAYERANALYTICS_API UEnum* StaticEnum<EPlayerAnalyticsEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
