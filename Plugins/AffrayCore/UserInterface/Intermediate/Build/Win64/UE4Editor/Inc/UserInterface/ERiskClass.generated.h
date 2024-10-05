// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef USERINTERFACE_ERiskClass_generated_h
#error "ERiskClass.generated.h already included, missing '#pragma once' in ERiskClass.h"
#endif
#define USERINTERFACE_ERiskClass_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ERiskClass_h


#define FOREACH_ENUM_ERISKCLASS(op) \
	op(ERiskClass::None) \
	op(ERiskClass::Notice) \
	op(ERiskClass::Caution) \
	op(ERiskClass::Warning) \
	op(ERiskClass::Danger) \
	op(ERiskClass::Critical) 

enum class ERiskClass : uint8;
template<> USERINTERFACE_API UEnum* StaticEnum<ERiskClass>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
