// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamPartiesBeaconLocationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamPartiesBeaconLocationData() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationData();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamPartiesBeaconLocationData_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationData, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamPartiesBeaconLocationData"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamPartiesBeaconLocationData>()
	{
		return ESteamPartiesBeaconLocationData_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamPartiesBeaconLocationData(ESteamPartiesBeaconLocationData_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamPartiesBeaconLocationData"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationData_Hash() { return 3057715527U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationData()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamPartiesBeaconLocationData"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationData_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamPartiesBeaconLocationData::Invalid", (int64)ESteamPartiesBeaconLocationData::Invalid },
				{ "ESteamPartiesBeaconLocationData::Name", (int64)ESteamPartiesBeaconLocationData::Name },
				{ "ESteamPartiesBeaconLocationData::IconURLSmall", (int64)ESteamPartiesBeaconLocationData::IconURLSmall },
				{ "ESteamPartiesBeaconLocationData::IconURLMedium", (int64)ESteamPartiesBeaconLocationData::IconURLMedium },
				{ "ESteamPartiesBeaconLocationData::IconURLLarge", (int64)ESteamPartiesBeaconLocationData::IconURLLarge },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IconURLLarge.Name", "ESteamPartiesBeaconLocationData::IconURLLarge" },
				{ "IconURLMedium.Name", "ESteamPartiesBeaconLocationData::IconURLMedium" },
				{ "IconURLSmall.Name", "ESteamPartiesBeaconLocationData::IconURLSmall" },
				{ "Invalid.Name", "ESteamPartiesBeaconLocationData::Invalid" },
				{ "ModuleRelativePath", "Public/ESteamPartiesBeaconLocationData.h" },
				{ "Name.Name", "ESteamPartiesBeaconLocationData::Name" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamPartiesBeaconLocationData",
				"ESteamPartiesBeaconLocationData",
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
