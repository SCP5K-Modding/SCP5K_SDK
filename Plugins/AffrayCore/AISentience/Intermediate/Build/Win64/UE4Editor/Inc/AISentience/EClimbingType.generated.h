// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AISENTIENCE_EClimbingType_generated_h
#error "EClimbingType.generated.h already included, missing '#pragma once' in EClimbingType.h"
#endif
#define AISENTIENCE_EClimbingType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_EClimbingType_h


#define FOREACH_ENUM_ECLIMBINGTYPE(op) \
	op(EClimbingType::None) \
	op(EClimbingType::JumpUp) \
	op(EClimbingType::JumpDown) \
	op(EClimbingType::ClimbUp) \
	op(EClimbingType::ClimbDown) \
	op(EClimbingType::Ladder) 

enum class EClimbingType : uint8;
template<> AISENTIENCE_API UEnum* StaticEnum<EClimbingType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
