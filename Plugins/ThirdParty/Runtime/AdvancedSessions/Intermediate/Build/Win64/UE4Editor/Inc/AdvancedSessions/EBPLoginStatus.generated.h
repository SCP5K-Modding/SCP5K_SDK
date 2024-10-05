// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDSESSIONS_EBPLoginStatus_generated_h
#error "EBPLoginStatus.generated.h already included, missing '#pragma once' in EBPLoginStatus.h"
#endif
#define ADVANCEDSESSIONS_EBPLoginStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_EBPLoginStatus_h


#define FOREACH_ENUM_EBPLOGINSTATUS(op) \
	op(EBPLoginStatus::NotLoggedIn) \
	op(EBPLoginStatus::UsingLocalProfile) \
	op(EBPLoginStatus::LoggedIn) 

enum class EBPLoginStatus : uint8;
template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBPLoginStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
