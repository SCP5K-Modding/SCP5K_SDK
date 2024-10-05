// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AISENTIENCE_ESAITeam_generated_h
#error "ESAITeam.generated.h already included, missing '#pragma once' in ESAITeam.h"
#endif
#define AISENTIENCE_ESAITeam_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_ESAITeam_h


#define FOREACH_ENUM_ESAITEAM(op) \
	op(ESAITeam::NoTeam) \
	op(ESAITeam::PlayerFoundation) \
	op(ESAITeam::PlayerFaultline) \
	op(ESAITeam::PlayerDClass) \
	op(ESAITeam::Faultline) \
	op(ESAITeam::DClass) \
	op(ESAITeam::Foundation) \
	op(ESAITeam::SCP) \
	op(ESAITeam::FoundationCivillian) 

enum class ESAITeam : uint8;
template<> AISENTIENCE_API UEnum* StaticEnum<ESAITeam>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
