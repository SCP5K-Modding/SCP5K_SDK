// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamGameSearchErrorCode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamGameSearchErrorCode() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamGameSearchErrorCode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamGameSearchErrorCode"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamGameSearchErrorCode>()
	{
		return ESteamGameSearchErrorCode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamGameSearchErrorCode(ESteamGameSearchErrorCode_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamGameSearchErrorCode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode_Hash() { return 1995588160U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamGameSearchErrorCode"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamGameSearchErrorCode::Invalid", (int64)ESteamGameSearchErrorCode::Invalid },
				{ "ESteamGameSearchErrorCode::OK", (int64)ESteamGameSearchErrorCode::OK },
				{ "ESteamGameSearchErrorCode::Failed_Search_Already_In_Progress", (int64)ESteamGameSearchErrorCode::Failed_Search_Already_In_Progress },
				{ "ESteamGameSearchErrorCode::Failed_No_Search_In_Progress", (int64)ESteamGameSearchErrorCode::Failed_No_Search_In_Progress },
				{ "ESteamGameSearchErrorCode::Failed_Not_Lobby_Leader", (int64)ESteamGameSearchErrorCode::Failed_Not_Lobby_Leader },
				{ "ESteamGameSearchErrorCode::Failed_No_Host_Available", (int64)ESteamGameSearchErrorCode::Failed_No_Host_Available },
				{ "ESteamGameSearchErrorCode::Failed_Search_Params_Invalid", (int64)ESteamGameSearchErrorCode::Failed_Search_Params_Invalid },
				{ "ESteamGameSearchErrorCode::Failed_Offline", (int64)ESteamGameSearchErrorCode::Failed_Offline },
				{ "ESteamGameSearchErrorCode::Failed_NotAuthorized", (int64)ESteamGameSearchErrorCode::Failed_NotAuthorized },
				{ "ESteamGameSearchErrorCode::Failed_Unknown_Error", (int64)ESteamGameSearchErrorCode::Failed_Unknown_Error },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Failed_No_Host_Available.Name", "ESteamGameSearchErrorCode::Failed_No_Host_Available" },
				{ "Failed_No_Search_In_Progress.Name", "ESteamGameSearchErrorCode::Failed_No_Search_In_Progress" },
				{ "Failed_Not_Lobby_Leader.Name", "ESteamGameSearchErrorCode::Failed_Not_Lobby_Leader" },
				{ "Failed_NotAuthorized.Name", "ESteamGameSearchErrorCode::Failed_NotAuthorized" },
				{ "Failed_Offline.Name", "ESteamGameSearchErrorCode::Failed_Offline" },
				{ "Failed_Search_Already_In_Progress.Name", "ESteamGameSearchErrorCode::Failed_Search_Already_In_Progress" },
				{ "Failed_Search_Params_Invalid.Name", "ESteamGameSearchErrorCode::Failed_Search_Params_Invalid" },
				{ "Failed_Unknown_Error.Name", "ESteamGameSearchErrorCode::Failed_Unknown_Error" },
				{ "Invalid.Name", "ESteamGameSearchErrorCode::Invalid" },
				{ "ModuleRelativePath", "Public/ESteamGameSearchErrorCode.h" },
				{ "OK.Name", "ESteamGameSearchErrorCode::OK" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamGameSearchErrorCode",
				"ESteamGameSearchErrorCode",
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
