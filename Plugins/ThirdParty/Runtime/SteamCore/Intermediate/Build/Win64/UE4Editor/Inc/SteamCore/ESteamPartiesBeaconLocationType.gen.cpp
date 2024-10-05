// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamPartiesBeaconLocationType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamPartiesBeaconLocationType() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationType();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamPartiesBeaconLocationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationType, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamPartiesBeaconLocationType"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamPartiesBeaconLocationType>()
	{
		return ESteamPartiesBeaconLocationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamPartiesBeaconLocationType(ESteamPartiesBeaconLocationType_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamPartiesBeaconLocationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationType_Hash() { return 2803963123U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamPartiesBeaconLocationType"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamPartiesBeaconLocationType::Invalid", (int64)ESteamPartiesBeaconLocationType::Invalid },
				{ "ESteamPartiesBeaconLocationType::ChatGroup", (int64)ESteamPartiesBeaconLocationType::ChatGroup },
				{ "ESteamPartiesBeaconLocationType::Max", (int64)ESteamPartiesBeaconLocationType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChatGroup.Name", "ESteamPartiesBeaconLocationType::ChatGroup" },
				{ "Invalid.Name", "ESteamPartiesBeaconLocationType::Invalid" },
				{ "Max.Name", "ESteamPartiesBeaconLocationType::Max" },
				{ "ModuleRelativePath", "Public/ESteamPartiesBeaconLocationType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamPartiesBeaconLocationType",
				"ESteamPartiesBeaconLocationType",
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
