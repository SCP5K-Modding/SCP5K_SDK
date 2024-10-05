// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamDenyReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamDenyReason() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamDenyReason();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamDenyReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamDenyReason, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamDenyReason"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamDenyReason>()
	{
		return ESteamDenyReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamDenyReason(ESteamDenyReason_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamDenyReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamDenyReason_Hash() { return 3042772258U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamDenyReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamDenyReason"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamDenyReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamDenyReason::Invalid", (int64)ESteamDenyReason::Invalid },
				{ "ESteamDenyReason::InvalidVersion", (int64)ESteamDenyReason::InvalidVersion },
				{ "ESteamDenyReason::Generic", (int64)ESteamDenyReason::Generic },
				{ "ESteamDenyReason::NotLoggedOn", (int64)ESteamDenyReason::NotLoggedOn },
				{ "ESteamDenyReason::NoLicense", (int64)ESteamDenyReason::NoLicense },
				{ "ESteamDenyReason::Cheater", (int64)ESteamDenyReason::Cheater },
				{ "ESteamDenyReason::LoggedInElseWhere", (int64)ESteamDenyReason::LoggedInElseWhere },
				{ "ESteamDenyReason::UnknownText", (int64)ESteamDenyReason::UnknownText },
				{ "ESteamDenyReason::IncompatibleAnticheat", (int64)ESteamDenyReason::IncompatibleAnticheat },
				{ "ESteamDenyReason::MemoryCorruption", (int64)ESteamDenyReason::MemoryCorruption },
				{ "ESteamDenyReason::IncompatibleSoftware", (int64)ESteamDenyReason::IncompatibleSoftware },
				{ "ESteamDenyReason::SteamConnectionLost", (int64)ESteamDenyReason::SteamConnectionLost },
				{ "ESteamDenyReason::SteamConnectionError", (int64)ESteamDenyReason::SteamConnectionError },
				{ "ESteamDenyReason::SteamResponseTimedOut", (int64)ESteamDenyReason::SteamResponseTimedOut },
				{ "ESteamDenyReason::SteamValidationStalled", (int64)ESteamDenyReason::SteamValidationStalled },
				{ "ESteamDenyReason::SteamOwnerLeftGuestUser", (int64)ESteamDenyReason::SteamOwnerLeftGuestUser },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cheater.Name", "ESteamDenyReason::Cheater" },
				{ "Generic.Name", "ESteamDenyReason::Generic" },
				{ "IncompatibleAnticheat.Name", "ESteamDenyReason::IncompatibleAnticheat" },
				{ "IncompatibleSoftware.Name", "ESteamDenyReason::IncompatibleSoftware" },
				{ "Invalid.Name", "ESteamDenyReason::Invalid" },
				{ "InvalidVersion.Name", "ESteamDenyReason::InvalidVersion" },
				{ "LoggedInElseWhere.Name", "ESteamDenyReason::LoggedInElseWhere" },
				{ "MemoryCorruption.Name", "ESteamDenyReason::MemoryCorruption" },
				{ "ModuleRelativePath", "Public/ESteamDenyReason.h" },
				{ "NoLicense.Name", "ESteamDenyReason::NoLicense" },
				{ "NotLoggedOn.Name", "ESteamDenyReason::NotLoggedOn" },
				{ "SteamConnectionError.Name", "ESteamDenyReason::SteamConnectionError" },
				{ "SteamConnectionLost.Name", "ESteamDenyReason::SteamConnectionLost" },
				{ "SteamOwnerLeftGuestUser.Name", "ESteamDenyReason::SteamOwnerLeftGuestUser" },
				{ "SteamResponseTimedOut.Name", "ESteamDenyReason::SteamResponseTimedOut" },
				{ "SteamValidationStalled.Name", "ESteamDenyReason::SteamValidationStalled" },
				{ "UnknownText.Name", "ESteamDenyReason::UnknownText" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamDenyReason",
				"ESteamDenyReason",
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
