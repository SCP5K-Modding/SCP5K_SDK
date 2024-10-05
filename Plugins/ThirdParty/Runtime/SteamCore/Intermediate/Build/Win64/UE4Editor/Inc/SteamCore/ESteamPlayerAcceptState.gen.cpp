// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamPlayerAcceptState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamPlayerAcceptState() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamPlayerAcceptState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamPlayerAcceptState"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamPlayerAcceptState>()
	{
		return ESteamPlayerAcceptState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamPlayerAcceptState(ESteamPlayerAcceptState_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamPlayerAcceptState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState_Hash() { return 260736636U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamPlayerAcceptState"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamPlayerAcceptState::Unknown", (int64)ESteamPlayerAcceptState::Unknown },
				{ "ESteamPlayerAcceptState::PlayerAccepted", (int64)ESteamPlayerAcceptState::PlayerAccepted },
				{ "ESteamPlayerAcceptState::PlayerDeclined", (int64)ESteamPlayerAcceptState::PlayerDeclined },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESteamPlayerAcceptState.h" },
				{ "PlayerAccepted.Name", "ESteamPlayerAcceptState::PlayerAccepted" },
				{ "PlayerDeclined.Name", "ESteamPlayerAcceptState::PlayerDeclined" },
				{ "Unknown.Name", "ESteamPlayerAcceptState::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamPlayerAcceptState",
				"ESteamPlayerAcceptState",
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
