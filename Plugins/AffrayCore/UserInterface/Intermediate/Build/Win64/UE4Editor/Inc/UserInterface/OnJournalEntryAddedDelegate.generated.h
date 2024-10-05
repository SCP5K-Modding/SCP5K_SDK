// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJournal;
#ifdef USERINTERFACE_OnJournalEntryAddedDelegate_generated_h
#error "OnJournalEntryAddedDelegate.generated.h already included, missing '#pragma once' in OnJournalEntryAddedDelegate.h"
#endif
#define USERINTERFACE_OnJournalEntryAddedDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_OnJournalEntryAddedDelegate_h_6_DELEGATE \
struct _Script_UserInterface_eventOnJournalEntryAdded_Parms \
{ \
	FJournal JournalEntry; \
}; \
static inline void FOnJournalEntryAdded_DelegateWrapper(const FMulticastScriptDelegate& OnJournalEntryAdded, FJournal JournalEntry) \
{ \
	_Script_UserInterface_eventOnJournalEntryAdded_Parms Parms; \
	Parms.JournalEntry=JournalEntry; \
	OnJournalEntryAdded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_OnJournalEntryAddedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
