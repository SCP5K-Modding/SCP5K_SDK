// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/ESubsystemWeb.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESubsystemWeb() {}
// Cross Module References
	STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_ESubsystemWeb();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	static UEnum* ESubsystemWeb_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCoreWeb_ESubsystemWeb, Z_Construct_UPackage__Script_SteamCoreWeb(), TEXT("ESubsystemWeb"));
		}
		return Singleton;
	}
	template<> STEAMCOREWEB_API UEnum* StaticEnum<ESubsystemWeb>()
	{
		return ESubsystemWeb_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubsystemWeb(ESubsystemWeb_StaticEnum, TEXT("/Script/SteamCoreWeb"), TEXT("ESubsystemWeb"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCoreWeb_ESubsystemWeb_Hash() { return 25796845U; }
	UEnum* Z_Construct_UEnum_SteamCoreWeb_ESubsystemWeb()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCoreWeb();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubsystemWeb"), 0, Get_Z_Construct_UEnum_SteamCoreWeb_ESubsystemWeb_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESubsystemWeb::SteamCoreWeb", (int64)ESubsystemWeb::SteamCoreWeb },
				{ "ESubsystemWeb::Apps", (int64)ESubsystemWeb::Apps },
				{ "ESubsystemWeb::Broadcast", (int64)ESubsystemWeb::Broadcast },
				{ "ESubsystemWeb::CheatReporting", (int64)ESubsystemWeb::CheatReporting },
				{ "ESubsystemWeb::Community", (int64)ESubsystemWeb::Community },
				{ "ESubsystemWeb::Econ", (int64)ESubsystemWeb::Econ },
				{ "ESubsystemWeb::EconMarket", (int64)ESubsystemWeb::EconMarket },
				{ "ESubsystemWeb::Economy", (int64)ESubsystemWeb::Economy },
				{ "ESubsystemWeb::GameInventory", (int64)ESubsystemWeb::GameInventory },
				{ "ESubsystemWeb::GameNotifications", (int64)ESubsystemWeb::GameNotifications },
				{ "ESubsystemWeb::GameServers", (int64)ESubsystemWeb::GameServers },
				{ "ESubsystemWeb::GameServerStats", (int64)ESubsystemWeb::GameServerStats },
				{ "ESubsystemWeb::Inventory", (int64)ESubsystemWeb::Inventory },
				{ "ESubsystemWeb::LobbyMatchmaking", (int64)ESubsystemWeb::LobbyMatchmaking },
				{ "ESubsystemWeb::Leaderboards", (int64)ESubsystemWeb::Leaderboards },
				{ "ESubsystemWeb::MicroTxn", (int64)ESubsystemWeb::MicroTxn },
				{ "ESubsystemWeb::News", (int64)ESubsystemWeb::News },
				{ "ESubsystemWeb::PlayerService", (int64)ESubsystemWeb::PlayerService },
				{ "ESubsystemWeb::PublishedFile", (int64)ESubsystemWeb::PublishedFile },
				{ "ESubsystemWeb::PublishedItemSearch", (int64)ESubsystemWeb::PublishedItemSearch },
				{ "ESubsystemWeb::PublishedItemVoting", (int64)ESubsystemWeb::PublishedItemVoting },
				{ "ESubsystemWeb::RemoteStorage", (int64)ESubsystemWeb::RemoteStorage },
				{ "ESubsystemWeb::User", (int64)ESubsystemWeb::User },
				{ "ESubsystemWeb::UserAuth", (int64)ESubsystemWeb::UserAuth },
				{ "ESubsystemWeb::UserStats", (int64)ESubsystemWeb::UserStats },
				{ "ESubsystemWeb::Workshop", (int64)ESubsystemWeb::Workshop },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Apps.Name", "ESubsystemWeb::Apps" },
				{ "BlueprintType", "true" },
				{ "Broadcast.Name", "ESubsystemWeb::Broadcast" },
				{ "CheatReporting.Name", "ESubsystemWeb::CheatReporting" },
				{ "Community.Name", "ESubsystemWeb::Community" },
				{ "Econ.Name", "ESubsystemWeb::Econ" },
				{ "EconMarket.Name", "ESubsystemWeb::EconMarket" },
				{ "Economy.Name", "ESubsystemWeb::Economy" },
				{ "GameInventory.Name", "ESubsystemWeb::GameInventory" },
				{ "GameNotifications.Name", "ESubsystemWeb::GameNotifications" },
				{ "GameServers.Name", "ESubsystemWeb::GameServers" },
				{ "GameServerStats.Name", "ESubsystemWeb::GameServerStats" },
				{ "Inventory.Name", "ESubsystemWeb::Inventory" },
				{ "Leaderboards.Name", "ESubsystemWeb::Leaderboards" },
				{ "LobbyMatchmaking.Name", "ESubsystemWeb::LobbyMatchmaking" },
				{ "MicroTxn.Name", "ESubsystemWeb::MicroTxn" },
				{ "ModuleRelativePath", "Public/ESubsystemWeb.h" },
				{ "News.Name", "ESubsystemWeb::News" },
				{ "PlayerService.Name", "ESubsystemWeb::PlayerService" },
				{ "PublishedFile.Name", "ESubsystemWeb::PublishedFile" },
				{ "PublishedItemSearch.Name", "ESubsystemWeb::PublishedItemSearch" },
				{ "PublishedItemVoting.Name", "ESubsystemWeb::PublishedItemVoting" },
				{ "RemoteStorage.Name", "ESubsystemWeb::RemoteStorage" },
				{ "SteamCoreWeb.Name", "ESubsystemWeb::SteamCoreWeb" },
				{ "User.Name", "ESubsystemWeb::User" },
				{ "UserAuth.Name", "ESubsystemWeb::UserAuth" },
				{ "UserStats.Name", "ESubsystemWeb::UserStats" },
				{ "Workshop.Name", "ESubsystemWeb::Workshop" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCoreWeb,
				nullptr,
				"ESubsystemWeb",
				"ESubsystemWeb",
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
