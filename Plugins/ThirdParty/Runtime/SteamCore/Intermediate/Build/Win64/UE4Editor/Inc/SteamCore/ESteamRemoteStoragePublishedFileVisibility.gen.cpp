// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamRemoteStoragePublishedFileVisibility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamRemoteStoragePublishedFileVisibility() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePublishedFileVisibility();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamRemoteStoragePublishedFileVisibility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePublishedFileVisibility, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamRemoteStoragePublishedFileVisibility"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamRemoteStoragePublishedFileVisibility>()
	{
		return ESteamRemoteStoragePublishedFileVisibility_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamRemoteStoragePublishedFileVisibility(ESteamRemoteStoragePublishedFileVisibility_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamRemoteStoragePublishedFileVisibility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePublishedFileVisibility_Hash() { return 583480448U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePublishedFileVisibility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamRemoteStoragePublishedFileVisibility"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePublishedFileVisibility_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamRemoteStoragePublishedFileVisibility::Public", (int64)ESteamRemoteStoragePublishedFileVisibility::Public },
				{ "ESteamRemoteStoragePublishedFileVisibility::FriendsOnly", (int64)ESteamRemoteStoragePublishedFileVisibility::FriendsOnly },
				{ "ESteamRemoteStoragePublishedFileVisibility::Private", (int64)ESteamRemoteStoragePublishedFileVisibility::Private },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FriendsOnly.Name", "ESteamRemoteStoragePublishedFileVisibility::FriendsOnly" },
				{ "ModuleRelativePath", "Public/ESteamRemoteStoragePublishedFileVisibility.h" },
				{ "Private.Name", "ESteamRemoteStoragePublishedFileVisibility::Private" },
				{ "Public.Name", "ESteamRemoteStoragePublishedFileVisibility::Public" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamRemoteStoragePublishedFileVisibility",
				"ESteamRemoteStoragePublishedFileVisibility",
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
