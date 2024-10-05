// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSCONTROLLER_EItemType_generated_h
#error "EItemType.generated.h already included, missing '#pragma once' in EItemType.h"
#endif
#define FPSCONTROLLER_EItemType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_EItemType_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::Generic) \
	op(EItemType::Consumable) \
	op(EItemType::Throwable) \
	op(EItemType::Grenade) \
	op(EItemType::Rifle) \
	op(EItemType::Pistol) \
	op(EItemType::SMG) \
	op(EItemType::LMG) \
	op(EItemType::AntiMateriel) \
	op(EItemType::DMR) \
	op(EItemType::Shotgun) \
	op(EItemType::Sniper) \
	op(EItemType::Launcher) \
	op(EItemType::Special) \
	op(EItemType::Melee) 

enum class EItemType : int32;
template<> FPSCONTROLLER_API UEnum* StaticEnum<EItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
