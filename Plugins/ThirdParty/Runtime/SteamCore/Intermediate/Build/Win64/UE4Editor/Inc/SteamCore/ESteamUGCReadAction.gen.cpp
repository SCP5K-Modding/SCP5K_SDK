// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamUGCReadAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamUGCReadAction() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUGCReadAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamUGCReadAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamUGCReadAction, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamUGCReadAction"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamUGCReadAction>()
	{
		return ESteamUGCReadAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamUGCReadAction(ESteamUGCReadAction_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamUGCReadAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamUGCReadAction_Hash() { return 2640779222U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamUGCReadAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamUGCReadAction"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamUGCReadAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished", (int64)ESteamUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished },
				{ "ESteamUGCReadAction::k_EUGCRead_ContinueReading", (int64)ESteamUGCReadAction::k_EUGCRead_ContinueReading },
				{ "ESteamUGCReadAction::k_EUGCRead_Close", (int64)ESteamUGCReadAction::k_EUGCRead_Close },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "k_EUGCRead_Close.Name", "ESteamUGCReadAction::k_EUGCRead_Close" },
				{ "k_EUGCRead_ContinueReading.Name", "ESteamUGCReadAction::k_EUGCRead_ContinueReading" },
				{ "k_EUGCRead_ContinueReadingUntilFinished.Name", "ESteamUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished" },
				{ "ModuleRelativePath", "Public/ESteamUGCReadAction.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamUGCReadAction",
				"ESteamUGCReadAction",
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
