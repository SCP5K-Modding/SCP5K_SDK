// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamFriendRelationship.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamFriendRelationship() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamFriendRelationship();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamFriendRelationship_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamFriendRelationship, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamFriendRelationship"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamFriendRelationship>()
	{
		return ESteamFriendRelationship_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamFriendRelationship(ESteamFriendRelationship_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamFriendRelationship"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamFriendRelationship_Hash() { return 3049920539U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamFriendRelationship()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamFriendRelationship"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamFriendRelationship_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamFriendRelationship::None", (int64)ESteamFriendRelationship::None },
				{ "ESteamFriendRelationship::Blocked", (int64)ESteamFriendRelationship::Blocked },
				{ "ESteamFriendRelationship::RequestRecipient", (int64)ESteamFriendRelationship::RequestRecipient },
				{ "ESteamFriendRelationship::Friend", (int64)ESteamFriendRelationship::Friend },
				{ "ESteamFriendRelationship::RequestInitiator", (int64)ESteamFriendRelationship::RequestInitiator },
				{ "ESteamFriendRelationship::Ignored", (int64)ESteamFriendRelationship::Ignored },
				{ "ESteamFriendRelationship::IgnoredFriend", (int64)ESteamFriendRelationship::IgnoredFriend },
				{ "ESteamFriendRelationship::Suggested_DEPRECATED", (int64)ESteamFriendRelationship::Suggested_DEPRECATED },
				{ "ESteamFriendRelationship::Max", (int64)ESteamFriendRelationship::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Blocked.Name", "ESteamFriendRelationship::Blocked" },
				{ "BlueprintType", "true" },
				{ "Friend.Name", "ESteamFriendRelationship::Friend" },
				{ "Ignored.Name", "ESteamFriendRelationship::Ignored" },
				{ "IgnoredFriend.Name", "ESteamFriendRelationship::IgnoredFriend" },
				{ "Max.Name", "ESteamFriendRelationship::Max" },
				{ "ModuleRelativePath", "Public/ESteamFriendRelationship.h" },
				{ "None.Name", "ESteamFriendRelationship::None" },
				{ "RequestInitiator.Name", "ESteamFriendRelationship::RequestInitiator" },
				{ "RequestRecipient.Name", "ESteamFriendRelationship::RequestRecipient" },
				{ "Suggested_DEPRECATED.Name", "ESteamFriendRelationship::Suggested_DEPRECATED" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamFriendRelationship",
				"ESteamFriendRelationship",
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
