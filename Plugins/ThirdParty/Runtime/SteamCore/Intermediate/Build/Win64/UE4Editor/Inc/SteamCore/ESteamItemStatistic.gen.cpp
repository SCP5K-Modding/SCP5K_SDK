// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamItemStatistic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamItemStatistic() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamItemStatistic();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamItemStatistic_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamItemStatistic, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamItemStatistic"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamItemStatistic>()
	{
		return ESteamItemStatistic_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamItemStatistic(ESteamItemStatistic_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamItemStatistic"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamItemStatistic_Hash() { return 1477087834U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamItemStatistic()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamItemStatistic"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamItemStatistic_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamItemStatistic::NumSubscriptions", (int64)ESteamItemStatistic::NumSubscriptions },
				{ "ESteamItemStatistic::NumFavorites", (int64)ESteamItemStatistic::NumFavorites },
				{ "ESteamItemStatistic::NumFollowers", (int64)ESteamItemStatistic::NumFollowers },
				{ "ESteamItemStatistic::NumUniqueSubscriptions", (int64)ESteamItemStatistic::NumUniqueSubscriptions },
				{ "ESteamItemStatistic::NumUniqueFavorites", (int64)ESteamItemStatistic::NumUniqueFavorites },
				{ "ESteamItemStatistic::NumUniqueFollowers", (int64)ESteamItemStatistic::NumUniqueFollowers },
				{ "ESteamItemStatistic::NumUniqueWebsiteViews", (int64)ESteamItemStatistic::NumUniqueWebsiteViews },
				{ "ESteamItemStatistic::ReportScore", (int64)ESteamItemStatistic::ReportScore },
				{ "ESteamItemStatistic::NumSecondsPlayed", (int64)ESteamItemStatistic::NumSecondsPlayed },
				{ "ESteamItemStatistic::NumPlaytimeSessions", (int64)ESteamItemStatistic::NumPlaytimeSessions },
				{ "ESteamItemStatistic::NumComments", (int64)ESteamItemStatistic::NumComments },
				{ "ESteamItemStatistic::NumSecondsPlayedDuringTimePeriod", (int64)ESteamItemStatistic::NumSecondsPlayedDuringTimePeriod },
				{ "ESteamItemStatistic::NumPlaytimeSessionsDuringTimePeriod", (int64)ESteamItemStatistic::NumPlaytimeSessionsDuringTimePeriod },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESteamItemStatistic.h" },
				{ "NumComments.Name", "ESteamItemStatistic::NumComments" },
				{ "NumFavorites.Name", "ESteamItemStatistic::NumFavorites" },
				{ "NumFollowers.Name", "ESteamItemStatistic::NumFollowers" },
				{ "NumPlaytimeSessions.Name", "ESteamItemStatistic::NumPlaytimeSessions" },
				{ "NumPlaytimeSessionsDuringTimePeriod.Name", "ESteamItemStatistic::NumPlaytimeSessionsDuringTimePeriod" },
				{ "NumSecondsPlayed.Name", "ESteamItemStatistic::NumSecondsPlayed" },
				{ "NumSecondsPlayedDuringTimePeriod.Name", "ESteamItemStatistic::NumSecondsPlayedDuringTimePeriod" },
				{ "NumSubscriptions.Name", "ESteamItemStatistic::NumSubscriptions" },
				{ "NumUniqueFavorites.Name", "ESteamItemStatistic::NumUniqueFavorites" },
				{ "NumUniqueFollowers.Name", "ESteamItemStatistic::NumUniqueFollowers" },
				{ "NumUniqueSubscriptions.Name", "ESteamItemStatistic::NumUniqueSubscriptions" },
				{ "NumUniqueWebsiteViews.Name", "ESteamItemStatistic::NumUniqueWebsiteViews" },
				{ "ReportScore.Name", "ESteamItemStatistic::ReportScore" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamItemStatistic",
				"ESteamItemStatistic",
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
