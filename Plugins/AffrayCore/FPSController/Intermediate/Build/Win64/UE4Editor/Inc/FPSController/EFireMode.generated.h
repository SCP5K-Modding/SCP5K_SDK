// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSCONTROLLER_EFireMode_generated_h
#error "EFireMode.generated.h already included, missing '#pragma once' in EFireMode.h"
#endif
#define FPSCONTROLLER_EFireMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_EFireMode_h


#define FOREACH_ENUM_EFIREMODE(op) \
	op(EFireMode::FM_Automatic) \
	op(EFireMode::FM_Burst) \
	op(EFireMode::FM_SemiAutomatic) \
	op(EFireMode::FM_SingleAction) \
	op(EFireMode::FM_DoubleAction) 

enum class EFireMode : uint8;
template<> FPSCONTROLLER_API UEnum* StaticEnum<EFireMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
