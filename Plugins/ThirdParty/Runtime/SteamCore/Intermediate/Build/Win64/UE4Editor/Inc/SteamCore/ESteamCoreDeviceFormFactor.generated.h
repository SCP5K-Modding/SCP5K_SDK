// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamCoreDeviceFormFactor_generated_h
#error "ESteamCoreDeviceFormFactor.generated.h already included, missing '#pragma once' in ESteamCoreDeviceFormFactor.h"
#endif
#define STEAMCORE_ESteamCoreDeviceFormFactor_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamCoreDeviceFormFactor_h


#define FOREACH_ENUM_ESTEAMCOREDEVICEFORMFACTOR(op) \
	op(ESteamCoreDeviceFormFactor::Unknown) \
	op(ESteamCoreDeviceFormFactor::Phone) \
	op(ESteamCoreDeviceFormFactor::Tablet) \
	op(ESteamCoreDeviceFormFactor::Computer) \
	op(ESteamCoreDeviceFormFactor::TV) 

enum class ESteamCoreDeviceFormFactor : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreDeviceFormFactor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
