// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordUser/Public/EDiscordUserFlag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiscordUserFlag() {}
// Cross Module References
	DISCORDUSER_API UEnum* Z_Construct_UEnum_DiscordUser_EDiscordUserFlag();
	UPackage* Z_Construct_UPackage__Script_DiscordUser();
// End Cross Module References
	static UEnum* EDiscordUserFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordUser_EDiscordUserFlag, Z_Construct_UPackage__Script_DiscordUser(), TEXT("EDiscordUserFlag"));
		}
		return Singleton;
	}
	template<> DISCORDUSER_API UEnum* StaticEnum<EDiscordUserFlag>()
	{
		return EDiscordUserFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordUserFlag(EDiscordUserFlag_StaticEnum, TEXT("/Script/DiscordUser"), TEXT("EDiscordUserFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordUser_EDiscordUserFlag_Hash() { return 3513678944U; }
	UEnum* Z_Construct_UEnum_DiscordUser_EDiscordUserFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordUser();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordUserFlag"), 0, Get_Z_Construct_UEnum_DiscordUser_EDiscordUserFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordUserFlag::Partner", (int64)EDiscordUserFlag::Partner },
				{ "EDiscordUserFlag::HypeSquadEvents", (int64)EDiscordUserFlag::HypeSquadEvents },
				{ "EDiscordUserFlag::HypeSquadHouse1", (int64)EDiscordUserFlag::HypeSquadHouse1 },
				{ "EDiscordUserFlag::HypeSquadHouse2", (int64)EDiscordUserFlag::HypeSquadHouse2 },
				{ "EDiscordUserFlag::HypeSquadHouse3", (int64)EDiscordUserFlag::HypeSquadHouse3 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HypeSquadEvents.Name", "EDiscordUserFlag::HypeSquadEvents" },
				{ "HypeSquadHouse1.Name", "EDiscordUserFlag::HypeSquadHouse1" },
				{ "HypeSquadHouse2.Name", "EDiscordUserFlag::HypeSquadHouse2" },
				{ "HypeSquadHouse3.Name", "EDiscordUserFlag::HypeSquadHouse3" },
				{ "ModuleRelativePath", "Public/EDiscordUserFlag.h" },
				{ "Partner.Name", "EDiscordUserFlag::Partner" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordUser,
				nullptr,
				"EDiscordUserFlag",
				"EDiscordUserFlag",
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
