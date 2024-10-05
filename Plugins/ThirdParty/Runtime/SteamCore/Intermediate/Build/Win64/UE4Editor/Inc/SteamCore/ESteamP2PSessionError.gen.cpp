// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamP2PSessionError.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamP2PSessionError() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamP2PSessionError();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamP2PSessionError_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamP2PSessionError, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamP2PSessionError"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamP2PSessionError>()
	{
		return ESteamP2PSessionError_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamP2PSessionError(ESteamP2PSessionError_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamP2PSessionError"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamP2PSessionError_Hash() { return 4011822919U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamP2PSessionError()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamP2PSessionError"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamP2PSessionError_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamP2PSessionError::None", (int64)ESteamP2PSessionError::None },
				{ "ESteamP2PSessionError::NotRunningApp", (int64)ESteamP2PSessionError::NotRunningApp },
				{ "ESteamP2PSessionError::NoRightsToApp", (int64)ESteamP2PSessionError::NoRightsToApp },
				{ "ESteamP2PSessionError::DestinationNotLoggedIn", (int64)ESteamP2PSessionError::DestinationNotLoggedIn },
				{ "ESteamP2PSessionError::Timeout", (int64)ESteamP2PSessionError::Timeout },
				{ "ESteamP2PSessionError::Max", (int64)ESteamP2PSessionError::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DestinationNotLoggedIn.Name", "ESteamP2PSessionError::DestinationNotLoggedIn" },
				{ "Max.Name", "ESteamP2PSessionError::Max" },
				{ "ModuleRelativePath", "Public/ESteamP2PSessionError.h" },
				{ "None.Name", "ESteamP2PSessionError::None" },
				{ "NoRightsToApp.Name", "ESteamP2PSessionError::NoRightsToApp" },
				{ "NotRunningApp.Name", "ESteamP2PSessionError::NotRunningApp" },
				{ "Timeout.Name", "ESteamP2PSessionError::Timeout" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamP2PSessionError",
				"ESteamP2PSessionError",
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
