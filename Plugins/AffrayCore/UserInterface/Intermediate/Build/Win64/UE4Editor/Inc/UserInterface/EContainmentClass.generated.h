// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef USERINTERFACE_EContainmentClass_generated_h
#error "EContainmentClass.generated.h already included, missing '#pragma once' in EContainmentClass.h"
#endif
#define USERINTERFACE_EContainmentClass_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_EContainmentClass_h


#define FOREACH_ENUM_ECONTAINMENTCLASS(op) \
	op(EContainmentClass::None) \
	op(EContainmentClass::Safe) \
	op(EContainmentClass::Euclid) \
	op(EContainmentClass::Keter) \
	op(EContainmentClass::Neutralized) \
	op(EContainmentClass::Pending) \
	op(EContainmentClass::Explained) \
	op(EContainmentClass::Esoteric) 

enum class EContainmentClass : uint8;
template<> USERINTERFACE_API UEnum* StaticEnum<EContainmentClass>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
