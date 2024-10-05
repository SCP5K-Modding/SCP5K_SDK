// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamUserHasLicenseForAppResult_generated_h
#error "ESteamUserHasLicenseForAppResult.generated.h already included, missing '#pragma once' in ESteamUserHasLicenseForAppResult.h"
#endif
#define STEAMCORE_ESteamUserHasLicenseForAppResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamUserHasLicenseForAppResult_h


#define FOREACH_ENUM_ESTEAMUSERHASLICENSEFORAPPRESULT(op) \
	op(ESteamUserHasLicenseForAppResult::HasLicense) \
	op(ESteamUserHasLicenseForAppResult::DoesNotHaveLicense) \
	op(ESteamUserHasLicenseForAppResult::NoAuth) 

enum class ESteamUserHasLicenseForAppResult : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamUserHasLicenseForAppResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
