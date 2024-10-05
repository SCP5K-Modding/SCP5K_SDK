// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamUserUGCListSortOrder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamUserUGCListSortOrder() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUserUGCListSortOrder();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamUserUGCListSortOrder_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamUserUGCListSortOrder, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamUserUGCListSortOrder"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamUserUGCListSortOrder>()
	{
		return ESteamUserUGCListSortOrder_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamUserUGCListSortOrder(ESteamUserUGCListSortOrder_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamUserUGCListSortOrder"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamUserUGCListSortOrder_Hash() { return 1980126118U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamUserUGCListSortOrder()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamUserUGCListSortOrder"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamUserUGCListSortOrder_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamUserUGCListSortOrder::CreationOrderDesc", (int64)ESteamUserUGCListSortOrder::CreationOrderDesc },
				{ "ESteamUserUGCListSortOrder::CreationOrderAsc", (int64)ESteamUserUGCListSortOrder::CreationOrderAsc },
				{ "ESteamUserUGCListSortOrder::TitleAsc", (int64)ESteamUserUGCListSortOrder::TitleAsc },
				{ "ESteamUserUGCListSortOrder::LastUpdatedDesc", (int64)ESteamUserUGCListSortOrder::LastUpdatedDesc },
				{ "ESteamUserUGCListSortOrder::SubscriptionDateDesc", (int64)ESteamUserUGCListSortOrder::SubscriptionDateDesc },
				{ "ESteamUserUGCListSortOrder::VoteScoreDesc", (int64)ESteamUserUGCListSortOrder::VoteScoreDesc },
				{ "ESteamUserUGCListSortOrder::ForModeration", (int64)ESteamUserUGCListSortOrder::ForModeration },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CreationOrderAsc.Name", "ESteamUserUGCListSortOrder::CreationOrderAsc" },
				{ "CreationOrderDesc.Name", "ESteamUserUGCListSortOrder::CreationOrderDesc" },
				{ "ForModeration.Name", "ESteamUserUGCListSortOrder::ForModeration" },
				{ "LastUpdatedDesc.Name", "ESteamUserUGCListSortOrder::LastUpdatedDesc" },
				{ "ModuleRelativePath", "Public/ESteamUserUGCListSortOrder.h" },
				{ "SubscriptionDateDesc.Name", "ESteamUserUGCListSortOrder::SubscriptionDateDesc" },
				{ "TitleAsc.Name", "ESteamUserUGCListSortOrder::TitleAsc" },
				{ "VoteScoreDesc.Name", "ESteamUserUGCListSortOrder::VoteScoreDesc" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamUserUGCListSortOrder",
				"ESteamUserUGCListSortOrder",
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
