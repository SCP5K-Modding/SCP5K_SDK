// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamUniverse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamUniverse() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUniverse();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamUniverse_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamUniverse, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamUniverse"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamUniverse>()
	{
		return ESteamUniverse_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamUniverse(ESteamUniverse_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamUniverse"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamUniverse_Hash() { return 642634566U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamUniverse()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamUniverse"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamUniverse_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamUniverse::Invalid", (int64)ESteamUniverse::Invalid },
				{ "ESteamUniverse::Public", (int64)ESteamUniverse::Public },
				{ "ESteamUniverse::Beta", (int64)ESteamUniverse::Beta },
				{ "ESteamUniverse::Internal", (int64)ESteamUniverse::Internal },
				{ "ESteamUniverse::Dev", (int64)ESteamUniverse::Dev },
				{ "ESteamUniverse::Max", (int64)ESteamUniverse::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Beta.Name", "ESteamUniverse::Beta" },
				{ "BlueprintType", "true" },
				{ "Dev.Name", "ESteamUniverse::Dev" },
				{ "Internal.Name", "ESteamUniverse::Internal" },
				{ "Invalid.Name", "ESteamUniverse::Invalid" },
				{ "Max.Name", "ESteamUniverse::Max" },
				{ "ModuleRelativePath", "Public/ESteamUniverse.h" },
				{ "Public.Name", "ESteamUniverse::Public" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamUniverse",
				"ESteamUniverse",
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
