// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamUserUGCList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamUserUGCList() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUserUGCList();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamUserUGCList_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamUserUGCList, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamUserUGCList"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamUserUGCList>()
	{
		return ESteamUserUGCList_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamUserUGCList(ESteamUserUGCList_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamUserUGCList"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamUserUGCList_Hash() { return 1822304126U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamUserUGCList()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamUserUGCList"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamUserUGCList_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamUserUGCList::Published", (int64)ESteamUserUGCList::Published },
				{ "ESteamUserUGCList::VotedOn", (int64)ESteamUserUGCList::VotedOn },
				{ "ESteamUserUGCList::VotedUp", (int64)ESteamUserUGCList::VotedUp },
				{ "ESteamUserUGCList::VotedDown", (int64)ESteamUserUGCList::VotedDown },
				{ "ESteamUserUGCList::WillVoteLater", (int64)ESteamUserUGCList::WillVoteLater },
				{ "ESteamUserUGCList::Favorited", (int64)ESteamUserUGCList::Favorited },
				{ "ESteamUserUGCList::Subscribed", (int64)ESteamUserUGCList::Subscribed },
				{ "ESteamUserUGCList::UsedOrPlayed", (int64)ESteamUserUGCList::UsedOrPlayed },
				{ "ESteamUserUGCList::Followed", (int64)ESteamUserUGCList::Followed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Favorited.Name", "ESteamUserUGCList::Favorited" },
				{ "Followed.Name", "ESteamUserUGCList::Followed" },
				{ "ModuleRelativePath", "Public/ESteamUserUGCList.h" },
				{ "Published.Name", "ESteamUserUGCList::Published" },
				{ "Subscribed.Name", "ESteamUserUGCList::Subscribed" },
				{ "UsedOrPlayed.Name", "ESteamUserUGCList::UsedOrPlayed" },
				{ "VotedDown.Name", "ESteamUserUGCList::VotedDown" },
				{ "VotedOn.Name", "ESteamUserUGCList::VotedOn" },
				{ "VotedUp.Name", "ESteamUserUGCList::VotedUp" },
				{ "WillVoteLater.Name", "ESteamUserUGCList::WillVoteLater" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamUserUGCList",
				"ESteamUserUGCList",
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
