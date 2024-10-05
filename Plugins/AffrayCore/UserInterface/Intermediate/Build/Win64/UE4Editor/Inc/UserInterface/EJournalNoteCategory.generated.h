// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef USERINTERFACE_EJournalNoteCategory_generated_h
#error "EJournalNoteCategory.generated.h already included, missing '#pragma once' in EJournalNoteCategory.h"
#endif
#define USERINTERFACE_EJournalNoteCategory_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_EJournalNoteCategory_h


#define FOREACH_ENUM_EJOURNALNOTECATEGORY(op) \
	op(EJournalNoteCategory::None) \
	op(EJournalNoteCategory::Cure) \
	op(EJournalNoteCategory::Omnicide) \
	op(EJournalNoteCategory::Atmospheric) \
	op(EJournalNoteCategory::Character) \
	op(EJournalNoteCategory::Explanatory) \
	op(EJournalNoteCategory::Humour) \
	op(EJournalNoteCategory::Email) \
	op(EJournalNoteCategory::Plot) 

enum class EJournalNoteCategory : uint8;
template<> USERINTERFACE_API UEnum* StaticEnum<EJournalNoteCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
