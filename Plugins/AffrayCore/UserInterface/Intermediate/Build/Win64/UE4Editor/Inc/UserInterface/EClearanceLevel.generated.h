// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef USERINTERFACE_EClearanceLevel_generated_h
#error "EClearanceLevel.generated.h already included, missing '#pragma once' in EClearanceLevel.h"
#endif
#define USERINTERFACE_EClearanceLevel_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_EClearanceLevel_h


#define FOREACH_ENUM_ECLEARANCELEVEL(op) \
	op(EClearanceLevel::None) \
	op(EClearanceLevel::Level1) \
	op(EClearanceLevel::Level2) \
	op(EClearanceLevel::Level3) \
	op(EClearanceLevel::Level4) \
	op(EClearanceLevel::Level5) \
	op(EClearanceLevel::Level6) \
	op(EClearanceLevel::Level7) 

enum class EClearanceLevel : uint8;
template<> USERINTERFACE_API UEnum* StaticEnum<EClearanceLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
