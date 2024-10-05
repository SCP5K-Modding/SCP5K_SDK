// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamParentalFeature.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamParentalFeature() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamParentalFeature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamParentalFeature_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamParentalFeature, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamParentalFeature"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamParentalFeature>()
	{
		return ESteamParentalFeature_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamParentalFeature(ESteamParentalFeature_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamParentalFeature"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamParentalFeature_Hash() { return 691422549U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamParentalFeature()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamParentalFeature"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamParentalFeature_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamParentalFeature::Invalid", (int64)ESteamParentalFeature::Invalid },
				{ "ESteamParentalFeature::Store", (int64)ESteamParentalFeature::Store },
				{ "ESteamParentalFeature::Community", (int64)ESteamParentalFeature::Community },
				{ "ESteamParentalFeature::Profile", (int64)ESteamParentalFeature::Profile },
				{ "ESteamParentalFeature::Friends", (int64)ESteamParentalFeature::Friends },
				{ "ESteamParentalFeature::News", (int64)ESteamParentalFeature::News },
				{ "ESteamParentalFeature::Trading", (int64)ESteamParentalFeature::Trading },
				{ "ESteamParentalFeature::Settings", (int64)ESteamParentalFeature::Settings },
				{ "ESteamParentalFeature::Console", (int64)ESteamParentalFeature::Console },
				{ "ESteamParentalFeature::Browser", (int64)ESteamParentalFeature::Browser },
				{ "ESteamParentalFeature::ParentalSetup", (int64)ESteamParentalFeature::ParentalSetup },
				{ "ESteamParentalFeature::Library", (int64)ESteamParentalFeature::Library },
				{ "ESteamParentalFeature::Test", (int64)ESteamParentalFeature::Test },
				{ "ESteamParentalFeature::Max", (int64)ESteamParentalFeature::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Browser.Name", "ESteamParentalFeature::Browser" },
				{ "Community.Name", "ESteamParentalFeature::Community" },
				{ "Console.Name", "ESteamParentalFeature::Console" },
				{ "Friends.Name", "ESteamParentalFeature::Friends" },
				{ "Invalid.Name", "ESteamParentalFeature::Invalid" },
				{ "Library.Name", "ESteamParentalFeature::Library" },
				{ "Max.Name", "ESteamParentalFeature::Max" },
				{ "ModuleRelativePath", "Public/ESteamParentalFeature.h" },
				{ "News.Name", "ESteamParentalFeature::News" },
				{ "ParentalSetup.Name", "ESteamParentalFeature::ParentalSetup" },
				{ "Profile.Name", "ESteamParentalFeature::Profile" },
				{ "Settings.Name", "ESteamParentalFeature::Settings" },
				{ "Store.Name", "ESteamParentalFeature::Store" },
				{ "Test.Name", "ESteamParentalFeature::Test" },
				{ "Trading.Name", "ESteamParentalFeature::Trading" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamParentalFeature",
				"ESteamParentalFeature",
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
