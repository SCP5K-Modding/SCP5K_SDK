// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef USERINTERFACE_EJournalPersistenceType_generated_h
#error "EJournalPersistenceType.generated.h already included, missing '#pragma once' in EJournalPersistenceType.h"
#endif
#define USERINTERFACE_EJournalPersistenceType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_EJournalPersistenceType_h


#define FOREACH_ENUM_EJOURNALPERSISTENCETYPE(op) \
	op(EJournalPersistenceType::Temporary) \
	op(EJournalPersistenceType::Session) \
	op(EJournalPersistenceType::Persistent) 

enum class EJournalPersistenceType : uint8;
template<> USERINTERFACE_API UEnum* StaticEnum<EJournalPersistenceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
