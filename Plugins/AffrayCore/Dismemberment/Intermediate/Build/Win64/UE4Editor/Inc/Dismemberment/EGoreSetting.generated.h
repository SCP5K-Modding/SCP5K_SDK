// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISMEMBERMENT_EGoreSetting_generated_h
#error "EGoreSetting.generated.h already included, missing '#pragma once' in EGoreSetting.h"
#endif
#define DISMEMBERMENT_EGoreSetting_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_EGoreSetting_h


#define FOREACH_ENUM_EGORESETTING(op) \
	op(EGoreSetting::None) \
	op(EGoreSetting::Minimal) \
	op(EGoreSetting::Reduced) \
	op(EGoreSetting::All) 

enum class EGoreSetting : uint8;
template<> DISMEMBERMENT_API UEnum* StaticEnum<EGoreSetting>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
