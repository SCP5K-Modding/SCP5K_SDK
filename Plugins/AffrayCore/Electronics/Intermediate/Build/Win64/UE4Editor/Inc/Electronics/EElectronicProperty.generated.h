// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELECTRONICS_EElectronicProperty_generated_h
#error "EElectronicProperty.generated.h already included, missing '#pragma once' in EElectronicProperty.h"
#endif
#define ELECTRONICS_EElectronicProperty_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_EElectronicProperty_h


#define FOREACH_ENUM_EELECTRONICPROPERTY(op) \
	op(EElectronicProperty::None) \
	op(EElectronicProperty::Enabled) \
	op(EElectronicProperty::Powered) \
	op(EElectronicProperty::Locked) \
	op(EElectronicProperty::Broken) 

enum class EElectronicProperty : uint8;
template<> ELECTRONICS_API UEnum* StaticEnum<EElectronicProperty>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
