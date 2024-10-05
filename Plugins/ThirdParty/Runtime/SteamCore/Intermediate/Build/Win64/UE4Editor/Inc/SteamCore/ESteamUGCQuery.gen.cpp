// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamUGCQuery.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamUGCQuery() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUGCQuery();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamUGCQuery_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamUGCQuery, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamUGCQuery"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamUGCQuery>()
	{
		return ESteamUGCQuery_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamUGCQuery(ESteamUGCQuery_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamUGCQuery"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamUGCQuery_Hash() { return 3866347487U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamUGCQuery()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamUGCQuery"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamUGCQuery_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamUGCQuery::RankedByVote", (int64)ESteamUGCQuery::RankedByVote },
				{ "ESteamUGCQuery::RankedByPublicationDate", (int64)ESteamUGCQuery::RankedByPublicationDate },
				{ "ESteamUGCQuery::AcceptedForGameRankedByAcceptanceDate", (int64)ESteamUGCQuery::AcceptedForGameRankedByAcceptanceDate },
				{ "ESteamUGCQuery::RankedByTrend", (int64)ESteamUGCQuery::RankedByTrend },
				{ "ESteamUGCQuery::FavoritedByFriendsRankedByPublicationDate", (int64)ESteamUGCQuery::FavoritedByFriendsRankedByPublicationDate },
				{ "ESteamUGCQuery::CreatedByFriendsRankedByPublicationDate", (int64)ESteamUGCQuery::CreatedByFriendsRankedByPublicationDate },
				{ "ESteamUGCQuery::RankedByNumTimesReported", (int64)ESteamUGCQuery::RankedByNumTimesReported },
				{ "ESteamUGCQuery::CreatedByFollowedUsersRankedByPublicationDate", (int64)ESteamUGCQuery::CreatedByFollowedUsersRankedByPublicationDate },
				{ "ESteamUGCQuery::NotYetRated", (int64)ESteamUGCQuery::NotYetRated },
				{ "ESteamUGCQuery::RankedByTotalVotesAsc", (int64)ESteamUGCQuery::RankedByTotalVotesAsc },
				{ "ESteamUGCQuery::RankedByVotesUp", (int64)ESteamUGCQuery::RankedByVotesUp },
				{ "ESteamUGCQuery::RankedByTextSearch", (int64)ESteamUGCQuery::RankedByTextSearch },
				{ "ESteamUGCQuery::RankedByTotalUniqueSubscriptions", (int64)ESteamUGCQuery::RankedByTotalUniqueSubscriptions },
				{ "ESteamUGCQuery::RankedByPlaytimeTrend", (int64)ESteamUGCQuery::RankedByPlaytimeTrend },
				{ "ESteamUGCQuery::RankedByTotalPlaytime", (int64)ESteamUGCQuery::RankedByTotalPlaytime },
				{ "ESteamUGCQuery::RankedByAveragePlaytimeTrend", (int64)ESteamUGCQuery::RankedByAveragePlaytimeTrend },
				{ "ESteamUGCQuery::RankedByLifetimeAveragePlaytime", (int64)ESteamUGCQuery::RankedByLifetimeAveragePlaytime },
				{ "ESteamUGCQuery::RankedByPlaytimeSessionsTrend", (int64)ESteamUGCQuery::RankedByPlaytimeSessionsTrend },
				{ "ESteamUGCQuery::RankedByLifetimePlaytimeSessions", (int64)ESteamUGCQuery::RankedByLifetimePlaytimeSessions },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AcceptedForGameRankedByAcceptanceDate.Name", "ESteamUGCQuery::AcceptedForGameRankedByAcceptanceDate" },
				{ "BlueprintType", "true" },
				{ "CreatedByFollowedUsersRankedByPublicationDate.Name", "ESteamUGCQuery::CreatedByFollowedUsersRankedByPublicationDate" },
				{ "CreatedByFriendsRankedByPublicationDate.Name", "ESteamUGCQuery::CreatedByFriendsRankedByPublicationDate" },
				{ "FavoritedByFriendsRankedByPublicationDate.Name", "ESteamUGCQuery::FavoritedByFriendsRankedByPublicationDate" },
				{ "ModuleRelativePath", "Public/ESteamUGCQuery.h" },
				{ "NotYetRated.Name", "ESteamUGCQuery::NotYetRated" },
				{ "RankedByAveragePlaytimeTrend.Name", "ESteamUGCQuery::RankedByAveragePlaytimeTrend" },
				{ "RankedByLifetimeAveragePlaytime.Name", "ESteamUGCQuery::RankedByLifetimeAveragePlaytime" },
				{ "RankedByLifetimePlaytimeSessions.Name", "ESteamUGCQuery::RankedByLifetimePlaytimeSessions" },
				{ "RankedByNumTimesReported.Name", "ESteamUGCQuery::RankedByNumTimesReported" },
				{ "RankedByPlaytimeSessionsTrend.Name", "ESteamUGCQuery::RankedByPlaytimeSessionsTrend" },
				{ "RankedByPlaytimeTrend.Name", "ESteamUGCQuery::RankedByPlaytimeTrend" },
				{ "RankedByPublicationDate.Name", "ESteamUGCQuery::RankedByPublicationDate" },
				{ "RankedByTextSearch.Name", "ESteamUGCQuery::RankedByTextSearch" },
				{ "RankedByTotalPlaytime.Name", "ESteamUGCQuery::RankedByTotalPlaytime" },
				{ "RankedByTotalUniqueSubscriptions.Name", "ESteamUGCQuery::RankedByTotalUniqueSubscriptions" },
				{ "RankedByTotalVotesAsc.Name", "ESteamUGCQuery::RankedByTotalVotesAsc" },
				{ "RankedByTrend.Name", "ESteamUGCQuery::RankedByTrend" },
				{ "RankedByVote.Name", "ESteamUGCQuery::RankedByVote" },
				{ "RankedByVotesUp.Name", "ESteamUGCQuery::RankedByVotesUp" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamUGCQuery",
				"ESteamUGCQuery",
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
