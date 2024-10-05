// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamLeaderboardUploadScoreMethod.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamLeaderboardUploadScoreMethod() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamLeaderboardUploadScoreMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLeaderboardUploadScoreMethod"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamLeaderboardUploadScoreMethod>()
	{
		return ESteamLeaderboardUploadScoreMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamLeaderboardUploadScoreMethod(ESteamLeaderboardUploadScoreMethod_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamLeaderboardUploadScoreMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod_Hash() { return 659972303U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamLeaderboardUploadScoreMethod"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamLeaderboardUploadScoreMethod::None", (int64)ESteamLeaderboardUploadScoreMethod::None },
				{ "ESteamLeaderboardUploadScoreMethod::KeepBest", (int64)ESteamLeaderboardUploadScoreMethod::KeepBest },
				{ "ESteamLeaderboardUploadScoreMethod::ForceUpdate", (int64)ESteamLeaderboardUploadScoreMethod::ForceUpdate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ForceUpdate.Name", "ESteamLeaderboardUploadScoreMethod::ForceUpdate" },
				{ "KeepBest.Name", "ESteamLeaderboardUploadScoreMethod::KeepBest" },
				{ "ModuleRelativePath", "Public/ESteamLeaderboardUploadScoreMethod.h" },
				{ "None.Name", "ESteamLeaderboardUploadScoreMethod::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamLeaderboardUploadScoreMethod",
				"ESteamLeaderboardUploadScoreMethod",
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
