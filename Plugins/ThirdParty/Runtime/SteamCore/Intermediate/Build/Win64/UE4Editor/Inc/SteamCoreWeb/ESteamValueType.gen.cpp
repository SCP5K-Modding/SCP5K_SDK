// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/ESteamValueType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamValueType() {}
// Cross Module References
	STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamValueType();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	static UEnum* ESteamValueType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCoreWeb_ESteamValueType, Z_Construct_UPackage__Script_SteamCoreWeb(), TEXT("ESteamValueType"));
		}
		return Singleton;
	}
	template<> STEAMCOREWEB_API UEnum* StaticEnum<ESteamValueType>()
	{
		return ESteamValueType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamValueType(ESteamValueType_StaticEnum, TEXT("/Script/SteamCoreWeb"), TEXT("ESteamValueType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCoreWeb_ESteamValueType_Hash() { return 1876590557U; }
	UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamValueType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCoreWeb();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamValueType"), 0, Get_Z_Construct_UEnum_SteamCoreWeb_ESteamValueType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamValueType::STRING", (int64)ESteamValueType::STRING },
				{ "ESteamValueType::NUMBER", (int64)ESteamValueType::NUMBER },
				{ "ESteamValueType::BOOL", (int64)ESteamValueType::BOOL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BOOL.Name", "ESteamValueType::BOOL" },
				{ "ModuleRelativePath", "Public/ESteamValueType.h" },
				{ "NUMBER.Name", "ESteamValueType::NUMBER" },
				{ "STRING.Name", "ESteamValueType::STRING" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCoreWeb,
				nullptr,
				"ESteamValueType",
				"ESteamValueType",
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
