// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSCONTROLLER_EItemWeight_generated_h
#error "EItemWeight.generated.h already included, missing '#pragma once' in EItemWeight.h"
#endif
#define FPSCONTROLLER_EItemWeight_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_EItemWeight_h


#define FOREACH_ENUM_EITEMWEIGHT(op) \
	op(EItemWeight::Light) \
	op(EItemWeight::Medium) \
	op(EItemWeight::Heavy) 

enum class EItemWeight : uint8;
template<> FPSCONTROLLER_API UEnum* StaticEnum<EItemWeight>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
