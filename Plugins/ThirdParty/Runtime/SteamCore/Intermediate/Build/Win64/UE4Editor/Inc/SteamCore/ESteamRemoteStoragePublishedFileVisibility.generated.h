// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamRemoteStoragePublishedFileVisibility_generated_h
#error "ESteamRemoteStoragePublishedFileVisibility.generated.h already included, missing '#pragma once' in ESteamRemoteStoragePublishedFileVisibility.h"
#endif
#define STEAMCORE_ESteamRemoteStoragePublishedFileVisibility_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamRemoteStoragePublishedFileVisibility_h


#define FOREACH_ENUM_ESTEAMREMOTESTORAGEPUBLISHEDFILEVISIBILITY(op) \
	op(ESteamRemoteStoragePublishedFileVisibility::Public) \
	op(ESteamRemoteStoragePublishedFileVisibility::FriendsOnly) \
	op(ESteamRemoteStoragePublishedFileVisibility::Private) 

enum class ESteamRemoteStoragePublishedFileVisibility : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamRemoteStoragePublishedFileVisibility>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
