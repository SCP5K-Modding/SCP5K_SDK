// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordCore/Public/EDiscordLogLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiscordLogLevel() {}
// Cross Module References
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordLogLevel();
	UPackage* Z_Construct_UPackage__Script_DiscordCore();
// End Cross Module References
	static UEnum* EDiscordLogLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordCore_EDiscordLogLevel, Z_Construct_UPackage__Script_DiscordCore(), TEXT("EDiscordLogLevel"));
		}
		return Singleton;
	}
	template<> DISCORDCORE_API UEnum* StaticEnum<EDiscordLogLevel>()
	{
		return EDiscordLogLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordLogLevel(EDiscordLogLevel_StaticEnum, TEXT("/Script/DiscordCore"), TEXT("EDiscordLogLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordCore_EDiscordLogLevel_Hash() { return 970496045U; }
	UEnum* Z_Construct_UEnum_DiscordCore_EDiscordLogLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordLogLevel"), 0, Get_Z_Construct_UEnum_DiscordCore_EDiscordLogLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordLogLevel::None", (int64)EDiscordLogLevel::None },
				{ "EDiscordLogLevel::Error", (int64)EDiscordLogLevel::Error },
				{ "EDiscordLogLevel::Warn", (int64)EDiscordLogLevel::Warn },
				{ "EDiscordLogLevel::Info", (int64)EDiscordLogLevel::Info },
				{ "EDiscordLogLevel::Debug", (int64)EDiscordLogLevel::Debug },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Debug.Name", "EDiscordLogLevel::Debug" },
				{ "Error.Name", "EDiscordLogLevel::Error" },
				{ "Info.Name", "EDiscordLogLevel::Info" },
				{ "ModuleRelativePath", "Public/EDiscordLogLevel.h" },
				{ "None.Name", "EDiscordLogLevel::None" },
				{ "Warn.Name", "EDiscordLogLevel::Warn" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordCore,
				nullptr,
				"EDiscordLogLevel",
				"EDiscordLogLevel",
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
