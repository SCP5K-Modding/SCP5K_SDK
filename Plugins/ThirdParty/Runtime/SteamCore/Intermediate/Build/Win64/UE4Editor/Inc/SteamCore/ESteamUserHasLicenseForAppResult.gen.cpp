// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamUserHasLicenseForAppResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamUserHasLicenseForAppResult() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamUserHasLicenseForAppResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamUserHasLicenseForAppResult"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamUserHasLicenseForAppResult>()
	{
		return ESteamUserHasLicenseForAppResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamUserHasLicenseForAppResult(ESteamUserHasLicenseForAppResult_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamUserHasLicenseForAppResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult_Hash() { return 1183474956U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamUserHasLicenseForAppResult"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamUserHasLicenseForAppResult::HasLicense", (int64)ESteamUserHasLicenseForAppResult::HasLicense },
				{ "ESteamUserHasLicenseForAppResult::DoesNotHaveLicense", (int64)ESteamUserHasLicenseForAppResult::DoesNotHaveLicense },
				{ "ESteamUserHasLicenseForAppResult::NoAuth", (int64)ESteamUserHasLicenseForAppResult::NoAuth },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DoesNotHaveLicense.Name", "ESteamUserHasLicenseForAppResult::DoesNotHaveLicense" },
				{ "HasLicense.Name", "ESteamUserHasLicenseForAppResult::HasLicense" },
				{ "ModuleRelativePath", "Public/ESteamUserHasLicenseForAppResult.h" },
				{ "NoAuth.Name", "ESteamUserHasLicenseForAppResult::NoAuth" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamUserHasLicenseForAppResult",
				"ESteamUserHasLicenseForAppResult",
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
