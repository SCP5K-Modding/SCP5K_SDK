// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamBeginAuthSessionResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamBeginAuthSessionResult() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamBeginAuthSessionResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamBeginAuthSessionResult"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamBeginAuthSessionResult>()
	{
		return ESteamBeginAuthSessionResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamBeginAuthSessionResult(ESteamBeginAuthSessionResult_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamBeginAuthSessionResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult_Hash() { return 816696521U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamBeginAuthSessionResult"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamBeginAuthSessionResult::OK", (int64)ESteamBeginAuthSessionResult::OK },
				{ "ESteamBeginAuthSessionResult::InvalidTicket", (int64)ESteamBeginAuthSessionResult::InvalidTicket },
				{ "ESteamBeginAuthSessionResult::DuplicateRequest", (int64)ESteamBeginAuthSessionResult::DuplicateRequest },
				{ "ESteamBeginAuthSessionResult::InvalidVersion", (int64)ESteamBeginAuthSessionResult::InvalidVersion },
				{ "ESteamBeginAuthSessionResult::GameMismatch", (int64)ESteamBeginAuthSessionResult::GameMismatch },
				{ "ESteamBeginAuthSessionResult::ExpiredTicket", (int64)ESteamBeginAuthSessionResult::ExpiredTicket },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DuplicateRequest.Name", "ESteamBeginAuthSessionResult::DuplicateRequest" },
				{ "ExpiredTicket.Name", "ESteamBeginAuthSessionResult::ExpiredTicket" },
				{ "GameMismatch.Name", "ESteamBeginAuthSessionResult::GameMismatch" },
				{ "InvalidTicket.Name", "ESteamBeginAuthSessionResult::InvalidTicket" },
				{ "InvalidVersion.Name", "ESteamBeginAuthSessionResult::InvalidVersion" },
				{ "ModuleRelativePath", "Public/ESteamBeginAuthSessionResult.h" },
				{ "OK.Name", "ESteamBeginAuthSessionResult::OK" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamBeginAuthSessionResult",
				"ESteamBeginAuthSessionResult",
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
