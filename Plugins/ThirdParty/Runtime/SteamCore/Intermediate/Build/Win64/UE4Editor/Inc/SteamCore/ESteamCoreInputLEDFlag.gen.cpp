// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamCoreInputLEDFlag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamCoreInputLEDFlag() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamCoreInputLEDFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreInputLEDFlag"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputLEDFlag>()
	{
		return ESteamCoreInputLEDFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamCoreInputLEDFlag(ESteamCoreInputLEDFlag_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamCoreInputLEDFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag_Hash() { return 1071511698U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamCoreInputLEDFlag"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamCoreInputLEDFlag::SetColor", (int64)ESteamCoreInputLEDFlag::SetColor },
				{ "ESteamCoreInputLEDFlag::RestoreUserDefault", (int64)ESteamCoreInputLEDFlag::RestoreUserDefault },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESteamCoreInputLEDFlag.h" },
				{ "RestoreUserDefault.Name", "ESteamCoreInputLEDFlag::RestoreUserDefault" },
				{ "SetColor.Name", "ESteamCoreInputLEDFlag::SetColor" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamCoreInputLEDFlag",
				"ESteamCoreInputLEDFlag",
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
