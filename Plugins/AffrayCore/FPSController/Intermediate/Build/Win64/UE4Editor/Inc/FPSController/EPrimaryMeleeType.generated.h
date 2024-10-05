// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSCONTROLLER_EPrimaryMeleeType_generated_h
#error "EPrimaryMeleeType.generated.h already included, missing '#pragma once' in EPrimaryMeleeType.h"
#endif
#define FPSCONTROLLER_EPrimaryMeleeType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_EPrimaryMeleeType_h


#define FOREACH_ENUM_EPRIMARYMELEETYPE(op) \
	op(EPrimaryMeleeType::Blunt) \
	op(EPrimaryMeleeType::Sharp) \
	op(EPrimaryMeleeType::Special) 

enum class EPrimaryMeleeType : uint8;
template<> FPSCONTROLLER_API UEnum* StaticEnum<EPrimaryMeleeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
