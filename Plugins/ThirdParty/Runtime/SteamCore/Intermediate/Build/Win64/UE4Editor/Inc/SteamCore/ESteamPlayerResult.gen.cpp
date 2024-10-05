// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamPlayerResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamPlayerResult() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPlayerResult();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamPlayerResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamPlayerResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamPlayerResult"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamPlayerResult>()
	{
		return ESteamPlayerResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamPlayerResult(ESteamPlayerResult_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamPlayerResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamPlayerResult_Hash() { return 360814794U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamPlayerResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamPlayerResult"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamPlayerResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamPlayerResult::Invalid", (int64)ESteamPlayerResult::Invalid },
				{ "ESteamPlayerResult::FailedToConnect", (int64)ESteamPlayerResult::FailedToConnect },
				{ "ESteamPlayerResult::Abandoned", (int64)ESteamPlayerResult::Abandoned },
				{ "ESteamPlayerResult::Kicked", (int64)ESteamPlayerResult::Kicked },
				{ "ESteamPlayerResult::Incomplete", (int64)ESteamPlayerResult::Incomplete },
				{ "ESteamPlayerResult::Completed", (int64)ESteamPlayerResult::Completed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Abandoned.Name", "ESteamPlayerResult::Abandoned" },
				{ "BlueprintType", "true" },
				{ "Completed.Name", "ESteamPlayerResult::Completed" },
				{ "FailedToConnect.Name", "ESteamPlayerResult::FailedToConnect" },
				{ "Incomplete.Name", "ESteamPlayerResult::Incomplete" },
				{ "Invalid.Name", "ESteamPlayerResult::Invalid" },
				{ "Kicked.Name", "ESteamPlayerResult::Kicked" },
				{ "ModuleRelativePath", "Public/ESteamPlayerResult.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamPlayerResult",
				"ESteamPlayerResult",
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
