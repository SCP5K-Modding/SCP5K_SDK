// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDSESSIONS_EBPUserPrivileges_generated_h
#error "EBPUserPrivileges.generated.h already included, missing '#pragma once' in EBPUserPrivileges.h"
#endif
#define ADVANCEDSESSIONS_EBPUserPrivileges_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_EBPUserPrivileges_h


#define FOREACH_ENUM_EBPUSERPRIVILEGES(op) \
	op(EBPUserPrivileges::CanPlay) \
	op(EBPUserPrivileges::CanPlayOnline) \
	op(EBPUserPrivileges::CanCommunicateOnline) \
	op(EBPUserPrivileges::CanUseUserGeneratedContent) 

enum class EBPUserPrivileges : uint8;
template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBPUserPrivileges>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
