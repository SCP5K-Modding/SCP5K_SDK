// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef USERINTERFACE_ECharacterFeature_generated_h
#error "ECharacterFeature.generated.h already included, missing '#pragma once' in ECharacterFeature.h"
#endif
#define USERINTERFACE_ECharacterFeature_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ECharacterFeature_h


#define FOREACH_ENUM_ECHARACTERFEATURE(op) \
	op(ECharacterFeature::None) \
	op(ECharacterFeature::HairColor) \
	op(ECharacterFeature::EyeColor) \
	op(ECharacterFeature::BodyBuild) 

enum class ECharacterFeature : uint8;
template<> USERINTERFACE_API UEnum* StaticEnum<ECharacterFeature>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
