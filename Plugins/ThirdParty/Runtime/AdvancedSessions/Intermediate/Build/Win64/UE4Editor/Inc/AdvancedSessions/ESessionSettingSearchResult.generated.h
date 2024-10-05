// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDSESSIONS_ESessionSettingSearchResult_generated_h
#error "ESessionSettingSearchResult.generated.h already included, missing '#pragma once' in ESessionSettingSearchResult.h"
#endif
#define ADVANCEDSESSIONS_ESessionSettingSearchResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_ESessionSettingSearchResult_h


#define FOREACH_ENUM_ESESSIONSETTINGSEARCHRESULT(op) \
	op(ESessionSettingSearchResult::Found) \
	op(ESessionSettingSearchResult::NotFound) \
	op(ESessionSettingSearchResult::WrongType) 

enum class ESessionSettingSearchResult : uint8;
template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<ESessionSettingSearchResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
