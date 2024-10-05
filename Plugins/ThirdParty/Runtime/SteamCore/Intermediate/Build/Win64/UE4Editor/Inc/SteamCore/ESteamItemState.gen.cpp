// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamItemState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamItemState() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamItemState();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamItemState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamItemState, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamItemState"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamItemState>()
	{
		return ESteamItemState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamItemState(ESteamItemState_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamItemState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamItemState_Hash() { return 3922911366U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamItemState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamItemState"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamItemState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamItemState::None", (int64)ESteamItemState::None },
				{ "ESteamItemState::Subscribed", (int64)ESteamItemState::Subscribed },
				{ "ESteamItemState::LegacyItem", (int64)ESteamItemState::LegacyItem },
				{ "ESteamItemState::Installed", (int64)ESteamItemState::Installed },
				{ "ESteamItemState::NeedsUpdate", (int64)ESteamItemState::NeedsUpdate },
				{ "ESteamItemState::Downloading", (int64)ESteamItemState::Downloading },
				{ "ESteamItemState::DownloadPending", (int64)ESteamItemState::DownloadPending },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Downloading.Name", "ESteamItemState::Downloading" },
				{ "DownloadPending.Name", "ESteamItemState::DownloadPending" },
				{ "Installed.Name", "ESteamItemState::Installed" },
				{ "LegacyItem.Name", "ESteamItemState::LegacyItem" },
				{ "ModuleRelativePath", "Public/ESteamItemState.h" },
				{ "NeedsUpdate.Name", "ESteamItemState::NeedsUpdate" },
				{ "None.Name", "ESteamItemState::None" },
				{ "Subscribed.Name", "ESteamItemState::Subscribed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamItemState",
				"ESteamItemState",
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
