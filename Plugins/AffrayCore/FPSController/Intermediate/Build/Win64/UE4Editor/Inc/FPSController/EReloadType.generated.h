// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSCONTROLLER_EReloadType_generated_h
#error "EReloadType.generated.h already included, missing '#pragma once' in EReloadType.h"
#endif
#define FPSCONTROLLER_EReloadType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_EReloadType_h


#define FOREACH_ENUM_ERELOADTYPE(op) \
	op(EReloadType::RT_Magazine) \
	op(EReloadType::RT_Individual) \
	op(EReloadType::RT_Clip) 

enum class EReloadType : uint8;
template<> FPSCONTROLLER_API UEnum* StaticEnum<EReloadType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
