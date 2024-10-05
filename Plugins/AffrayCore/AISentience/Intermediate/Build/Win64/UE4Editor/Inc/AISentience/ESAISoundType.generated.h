// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AISENTIENCE_ESAISoundType_generated_h
#error "ESAISoundType.generated.h already included, missing '#pragma once' in ESAISoundType.h"
#endif
#define AISENTIENCE_ESAISoundType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_ESAISoundType_h


#define FOREACH_ENUM_ESAISOUNDTYPE(op) \
	op(ESAISoundType::Game) \
	op(ESAISoundType::Alarm) \
	op(ESAISoundType::Explosion) \
	op(ESAISoundType::Attack) \
	op(ESAISoundType::FriendlyAttack) \
	op(ESAISoundType::Door) \
	op(ESAISoundType::Other) \
	op(ESAISoundType::Footstep) 

enum class ESAISoundType : uint8;
template<> AISENTIENCE_API UEnum* StaticEnum<ESAISoundType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
