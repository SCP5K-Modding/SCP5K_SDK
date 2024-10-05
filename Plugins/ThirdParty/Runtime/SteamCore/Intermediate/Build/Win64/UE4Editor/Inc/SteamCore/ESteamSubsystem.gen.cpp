// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamSubsystem() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamSubsystem_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamSubsystem, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamSubsystem"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamSubsystem>()
	{
		return ESteamSubsystem_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamSubsystem(ESteamSubsystem_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamSubsystem"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamSubsystem_Hash() { return 3611358209U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamSubsystem()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamSubsystem"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamSubsystem_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamSubsystem::SteamCore", (int64)ESteamSubsystem::SteamCore },
				{ "ESteamSubsystem::AppList", (int64)ESteamSubsystem::AppList },
				{ "ESteamSubsystem::Apps", (int64)ESteamSubsystem::Apps },
				{ "ESteamSubsystem::Friends", (int64)ESteamSubsystem::Friends },
				{ "ESteamSubsystem::GameServer", (int64)ESteamSubsystem::GameServer },
				{ "ESteamSubsystem::GameServerStats", (int64)ESteamSubsystem::GameServerStats },
				{ "ESteamSubsystem::Inventory", (int64)ESteamSubsystem::Inventory },
				{ "ESteamSubsystem::Input", (int64)ESteamSubsystem::Input },
				{ "ESteamSubsystem::Matchmaking", (int64)ESteamSubsystem::Matchmaking },
				{ "ESteamSubsystem::MatchmakingServers", (int64)ESteamSubsystem::MatchmakingServers },
				{ "ESteamSubsystem::Music", (int64)ESteamSubsystem::Music },
				{ "ESteamSubsystem::Networking", (int64)ESteamSubsystem::Networking },
				{ "ESteamSubsystem::NetworkingUtils", (int64)ESteamSubsystem::NetworkingUtils },
				{ "ESteamSubsystem::ParentalSettings", (int64)ESteamSubsystem::ParentalSettings },
				{ "ESteamSubsystem::RemoteStorage", (int64)ESteamSubsystem::RemoteStorage },
				{ "ESteamSubsystem::RemotePlay", (int64)ESteamSubsystem::RemotePlay },
				{ "ESteamSubsystem::Screenshots", (int64)ESteamSubsystem::Screenshots },
				{ "ESteamSubsystem::UGC", (int64)ESteamSubsystem::UGC },
				{ "ESteamSubsystem::User", (int64)ESteamSubsystem::User },
				{ "ESteamSubsystem::UserStats", (int64)ESteamSubsystem::UserStats },
				{ "ESteamSubsystem::Utils", (int64)ESteamSubsystem::Utils },
				{ "ESteamSubsystem::Video", (int64)ESteamSubsystem::Video },
				{ "ESteamSubsystem::SteamParties", (int64)ESteamSubsystem::SteamParties },
				{ "ESteamSubsystem::GameSearch", (int64)ESteamSubsystem::GameSearch },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AppList.Name", "ESteamSubsystem::AppList" },
				{ "Apps.Name", "ESteamSubsystem::Apps" },
				{ "BlueprintType", "true" },
				{ "Friends.Name", "ESteamSubsystem::Friends" },
				{ "GameSearch.Name", "ESteamSubsystem::GameSearch" },
				{ "GameServer.Name", "ESteamSubsystem::GameServer" },
				{ "GameServerStats.Name", "ESteamSubsystem::GameServerStats" },
				{ "Input.Name", "ESteamSubsystem::Input" },
				{ "Inventory.Name", "ESteamSubsystem::Inventory" },
				{ "Matchmaking.Name", "ESteamSubsystem::Matchmaking" },
				{ "MatchmakingServers.Name", "ESteamSubsystem::MatchmakingServers" },
				{ "ModuleRelativePath", "Public/ESteamSubsystem.h" },
				{ "Music.Name", "ESteamSubsystem::Music" },
				{ "Networking.Name", "ESteamSubsystem::Networking" },
				{ "NetworkingUtils.Name", "ESteamSubsystem::NetworkingUtils" },
				{ "ParentalSettings.Name", "ESteamSubsystem::ParentalSettings" },
				{ "RemotePlay.Name", "ESteamSubsystem::RemotePlay" },
				{ "RemoteStorage.Name", "ESteamSubsystem::RemoteStorage" },
				{ "Screenshots.Name", "ESteamSubsystem::Screenshots" },
				{ "SteamCore.Name", "ESteamSubsystem::SteamCore" },
				{ "SteamParties.Name", "ESteamSubsystem::SteamParties" },
				{ "UGC.Name", "ESteamSubsystem::UGC" },
				{ "User.Name", "ESteamSubsystem::User" },
				{ "UserStats.Name", "ESteamSubsystem::UserStats" },
				{ "Utils.Name", "ESteamSubsystem::Utils" },
				{ "Video.Name", "ESteamSubsystem::Video" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamSubsystem",
				"ESteamSubsystem",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
