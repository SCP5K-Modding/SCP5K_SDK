// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UIUTILITIES_EUIVisibility_generated_h
#error "EUIVisibility.generated.h already included, missing '#pragma once' in EUIVisibility.h"
#endif
#define UIUTILITIES_EUIVisibility_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UIUtilities_Public_EUIVisibility_h


#define FOREACH_ENUM_EUIVISIBILITY(op) \
	op(EUIVisibility::AlwaysVisible) \
	op(EUIVisibility::VisibleWhenNeeded) \
	op(EUIVisibility::NeverVisible) 

enum class EUIVisibility : uint8;
template<> UIUTILITIES_API UEnum* StaticEnum<EUIVisibility>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
