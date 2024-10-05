// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/ESteamJsonResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamJsonResult() {}
// Cross Module References
	STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	static UEnum* ESteamJsonResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, Z_Construct_UPackage__Script_SteamCoreWeb(), TEXT("ESteamJsonResult"));
		}
		return Singleton;
	}
	template<> STEAMCOREWEB_API UEnum* StaticEnum<ESteamJsonResult>()
	{
		return ESteamJsonResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamJsonResult(ESteamJsonResult_StaticEnum, TEXT("/Script/SteamCoreWeb"), TEXT("ESteamJsonResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult_Hash() { return 2239598533U; }
	UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCoreWeb();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamJsonResult"), 0, Get_Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamJsonResult::Found", (int64)ESteamJsonResult::Found },
				{ "ESteamJsonResult::NotFound", (int64)ESteamJsonResult::NotFound },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Found.Name", "ESteamJsonResult::Found" },
				{ "ModuleRelativePath", "Public/ESteamJsonResult.h" },
				{ "NotFound.Name", "ESteamJsonResult::NotFound" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCoreWeb,
				nullptr,
				"ESteamJsonResult",
				"ESteamJsonResult",
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
