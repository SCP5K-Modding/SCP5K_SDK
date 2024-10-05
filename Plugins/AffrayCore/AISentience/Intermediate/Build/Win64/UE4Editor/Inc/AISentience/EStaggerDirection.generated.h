// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AISENTIENCE_EStaggerDirection_generated_h
#error "EStaggerDirection.generated.h already included, missing '#pragma once' in EStaggerDirection.h"
#endif
#define AISENTIENCE_EStaggerDirection_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_EStaggerDirection_h


#define FOREACH_ENUM_ESTAGGERDIRECTION(op) \
	op(EStaggerDirection::None) \
	op(EStaggerDirection::Left) \
	op(EStaggerDirection::Right) \
	op(EStaggerDirection::Back) \
	op(EStaggerDirection::Front) 

enum class EStaggerDirection : uint8;
template<> AISENTIENCE_API UEnum* StaticEnum<EStaggerDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
