// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef USERINTERFACE_EAppCategory_generated_h
#error "EAppCategory.generated.h already included, missing '#pragma once' in EAppCategory.h"
#endif
#define USERINTERFACE_EAppCategory_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_EAppCategory_h


#define FOREACH_ENUM_EAPPCATEGORY(op) \
	op(EAppCategory::AC_Folder) \
	op(EAppCategory::AC_Document) \
	op(EAppCategory::AC_Images) \
	op(EAppCategory::AC_Videos) \
	op(EAppCategory::AC_Audio) \
	op(EAppCategory::AC_Email) \
	op(EAppCategory::AC_Journal) 

enum class EAppCategory : uint8;
template<> USERINTERFACE_API UEnum* StaticEnum<EAppCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
