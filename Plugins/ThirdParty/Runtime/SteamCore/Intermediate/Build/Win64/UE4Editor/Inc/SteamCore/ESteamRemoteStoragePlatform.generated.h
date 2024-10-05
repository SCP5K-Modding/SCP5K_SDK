// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamRemoteStoragePlatform_generated_h
#error "ESteamRemoteStoragePlatform.generated.h already included, missing '#pragma once' in ESteamRemoteStoragePlatform.h"
#endif
#define STEAMCORE_ESteamRemoteStoragePlatform_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamRemoteStoragePlatform_h


#define FOREACH_ENUM_ESTEAMREMOTESTORAGEPLATFORM(op) \
	op(ESteamRemoteStoragePlatform::None) \
	op(ESteamRemoteStoragePlatform::Windows) \
	op(ESteamRemoteStoragePlatform::OSX) \
	op(ESteamRemoteStoragePlatform::PS3) \
	op(ESteamRemoteStoragePlatform::Linux) \
	op(ESteamRemoteStoragePlatform::Reserved2) \
	op(ESteamRemoteStoragePlatform::All) 

enum class ESteamRemoteStoragePlatform : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamRemoteStoragePlatform>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
