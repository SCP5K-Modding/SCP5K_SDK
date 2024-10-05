// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamPersonaState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamPersonaState() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPersonaState();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamPersonaState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamPersonaState, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamPersonaState"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamPersonaState>()
	{
		return ESteamPersonaState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamPersonaState(ESteamPersonaState_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamPersonaState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamPersonaState_Hash() { return 4248558656U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamPersonaState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamPersonaState"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamPersonaState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamPersonaState::Offline", (int64)ESteamPersonaState::Offline },
				{ "ESteamPersonaState::Online", (int64)ESteamPersonaState::Online },
				{ "ESteamPersonaState::Busy", (int64)ESteamPersonaState::Busy },
				{ "ESteamPersonaState::Away", (int64)ESteamPersonaState::Away },
				{ "ESteamPersonaState::Snooze", (int64)ESteamPersonaState::Snooze },
				{ "ESteamPersonaState::LookingToTrade", (int64)ESteamPersonaState::LookingToTrade },
				{ "ESteamPersonaState::LookingToPlay", (int64)ESteamPersonaState::LookingToPlay },
				{ "ESteamPersonaState::Max", (int64)ESteamPersonaState::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Away.Name", "ESteamPersonaState::Away" },
				{ "BlueprintType", "true" },
				{ "Busy.Name", "ESteamPersonaState::Busy" },
				{ "LookingToPlay.Name", "ESteamPersonaState::LookingToPlay" },
				{ "LookingToTrade.Name", "ESteamPersonaState::LookingToTrade" },
				{ "Max.Name", "ESteamPersonaState::Max" },
				{ "ModuleRelativePath", "Public/ESteamPersonaState.h" },
				{ "Offline.Name", "ESteamPersonaState::Offline" },
				{ "Online.Name", "ESteamPersonaState::Online" },
				{ "Snooze.Name", "ESteamPersonaState::Snooze" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamPersonaState",
				"ESteamPersonaState",
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
