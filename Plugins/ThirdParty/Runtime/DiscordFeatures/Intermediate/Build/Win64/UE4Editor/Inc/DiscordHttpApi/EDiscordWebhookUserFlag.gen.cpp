// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/EDiscordWebhookUserFlag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiscordWebhookUserFlag() {}
// Cross Module References
	DISCORDHTTPAPI_API UEnum* Z_Construct_UEnum_DiscordHttpApi_EDiscordWebhookUserFlag();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
// End Cross Module References
	static UEnum* EDiscordWebhookUserFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordHttpApi_EDiscordWebhookUserFlag, Z_Construct_UPackage__Script_DiscordHttpApi(), TEXT("EDiscordWebhookUserFlag"));
		}
		return Singleton;
	}
	template<> DISCORDHTTPAPI_API UEnum* StaticEnum<EDiscordWebhookUserFlag>()
	{
		return EDiscordWebhookUserFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordWebhookUserFlag(EDiscordWebhookUserFlag_StaticEnum, TEXT("/Script/DiscordHttpApi"), TEXT("EDiscordWebhookUserFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordHttpApi_EDiscordWebhookUserFlag_Hash() { return 3257160840U; }
	UEnum* Z_Construct_UEnum_DiscordHttpApi_EDiscordWebhookUserFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordHttpApi();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordWebhookUserFlag"), 0, Get_Z_Construct_UEnum_DiscordHttpApi_EDiscordWebhookUserFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordWebhookUserFlag::None", (int64)EDiscordWebhookUserFlag::None },
				{ "EDiscordWebhookUserFlag::DiscordEmployee", (int64)EDiscordWebhookUserFlag::DiscordEmployee },
				{ "EDiscordWebhookUserFlag::PartneredServerOwner", (int64)EDiscordWebhookUserFlag::PartneredServerOwner },
				{ "EDiscordWebhookUserFlag::HypeSquadEvents", (int64)EDiscordWebhookUserFlag::HypeSquadEvents },
				{ "EDiscordWebhookUserFlag::BugHunterLevel1", (int64)EDiscordWebhookUserFlag::BugHunterLevel1 },
				{ "EDiscordWebhookUserFlag::HouseBravery", (int64)EDiscordWebhookUserFlag::HouseBravery },
				{ "EDiscordWebhookUserFlag::HouseBrilliance", (int64)EDiscordWebhookUserFlag::HouseBrilliance },
				{ "EDiscordWebhookUserFlag::HouseBalance", (int64)EDiscordWebhookUserFlag::HouseBalance },
				{ "EDiscordWebhookUserFlag::EarlySupporter", (int64)EDiscordWebhookUserFlag::EarlySupporter },
				{ "EDiscordWebhookUserFlag::TeamUser", (int64)EDiscordWebhookUserFlag::TeamUser },
				{ "EDiscordWebhookUserFlag::System", (int64)EDiscordWebhookUserFlag::System },
				{ "EDiscordWebhookUserFlag::BugHunterLevel2", (int64)EDiscordWebhookUserFlag::BugHunterLevel2 },
				{ "EDiscordWebhookUserFlag::VerifiedBot", (int64)EDiscordWebhookUserFlag::VerifiedBot },
				{ "EDiscordWebhookUserFlag::EarlyVerifiedBotDeveloper", (int64)EDiscordWebhookUserFlag::EarlyVerifiedBotDeveloper },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BugHunterLevel1.Name", "EDiscordWebhookUserFlag::BugHunterLevel1" },
				{ "BugHunterLevel2.Name", "EDiscordWebhookUserFlag::BugHunterLevel2" },
				{ "DiscordEmployee.Name", "EDiscordWebhookUserFlag::DiscordEmployee" },
				{ "EarlySupporter.Name", "EDiscordWebhookUserFlag::EarlySupporter" },
				{ "EarlyVerifiedBotDeveloper.Name", "EDiscordWebhookUserFlag::EarlyVerifiedBotDeveloper" },
				{ "HouseBalance.Name", "EDiscordWebhookUserFlag::HouseBalance" },
				{ "HouseBravery.Name", "EDiscordWebhookUserFlag::HouseBravery" },
				{ "HouseBrilliance.Name", "EDiscordWebhookUserFlag::HouseBrilliance" },
				{ "HypeSquadEvents.Name", "EDiscordWebhookUserFlag::HypeSquadEvents" },
				{ "ModuleRelativePath", "Public/EDiscordWebhookUserFlag.h" },
				{ "None.Name", "EDiscordWebhookUserFlag::None" },
				{ "PartneredServerOwner.Name", "EDiscordWebhookUserFlag::PartneredServerOwner" },
				{ "System.Name", "EDiscordWebhookUserFlag::System" },
				{ "TeamUser.Name", "EDiscordWebhookUserFlag::TeamUser" },
				{ "VerifiedBot.Name", "EDiscordWebhookUserFlag::VerifiedBot" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordHttpApi,
				nullptr,
				"EDiscordWebhookUserFlag",
				"EDiscordWebhookUserFlag",
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
