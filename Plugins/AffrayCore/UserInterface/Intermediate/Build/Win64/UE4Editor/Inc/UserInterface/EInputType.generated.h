// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef USERINTERFACE_EInputType_generated_h
#error "EInputType.generated.h already included, missing '#pragma once' in EInputType.h"
#endif
#define USERINTERFACE_EInputType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_EInputType_h


#define FOREACH_ENUM_EINPUTTYPE(op) \
	op(EInputType::MouseAndKeyboard) \
	op(EInputType::Gamepad) \
	op(EInputType::Touch) 

enum class EInputType : uint8;
template<> USERINTERFACE_API UEnum* StaticEnum<EInputType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
