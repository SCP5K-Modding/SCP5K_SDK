// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef USERINTERFACE_EUIInputAction_generated_h
#error "EUIInputAction.generated.h already included, missing '#pragma once' in EUIInputAction.h"
#endif
#define USERINTERFACE_EUIInputAction_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_EUIInputAction_h


#define FOREACH_ENUM_EUIINPUTACTION(op) \
	op(EUIInputAction::None) \
	op(EUIInputAction::Back) \
	op(EUIInputAction::PrimaryMenuLeft) \
	op(EUIInputAction::PrimaryMenuRight) 

enum class EUIInputAction : uint8;
template<> USERINTERFACE_API UEnum* StaticEnum<EUIInputAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
