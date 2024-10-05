// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordUser/Public/EDiscordPremiumType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiscordPremiumType() {}
// Cross Module References
	DISCORDUSER_API UEnum* Z_Construct_UEnum_DiscordUser_EDiscordPremiumType();
	UPackage* Z_Construct_UPackage__Script_DiscordUser();
// End Cross Module References
	static UEnum* EDiscordPremiumType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordUser_EDiscordPremiumType, Z_Construct_UPackage__Script_DiscordUser(), TEXT("EDiscordPremiumType"));
		}
		return Singleton;
	}
	template<> DISCORDUSER_API UEnum* StaticEnum<EDiscordPremiumType>()
	{
		return EDiscordPremiumType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordPremiumType(EDiscordPremiumType_StaticEnum, TEXT("/Script/DiscordUser"), TEXT("EDiscordPremiumType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordUser_EDiscordPremiumType_Hash() { return 558352387U; }
	UEnum* Z_Construct_UEnum_DiscordUser_EDiscordPremiumType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordUser();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordPremiumType"), 0, Get_Z_Construct_UEnum_DiscordUser_EDiscordPremiumType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordPremiumType::None", (int64)EDiscordPremiumType::None },
				{ "EDiscordPremiumType::Tier1", (int64)EDiscordPremiumType::Tier1 },
				{ "EDiscordPremiumType::Tier2", (int64)EDiscordPremiumType::Tier2 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EDiscordPremiumType.h" },
				{ "None.Name", "EDiscordPremiumType::None" },
				{ "Tier1.Name", "EDiscordPremiumType::Tier1" },
				{ "Tier2.Name", "EDiscordPremiumType::Tier2" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordUser,
				nullptr,
				"EDiscordPremiumType",
				"EDiscordPremiumType",
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
