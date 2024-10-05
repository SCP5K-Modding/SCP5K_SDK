// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordCore/Public/EDiscordEntitlementType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiscordEntitlementType() {}
// Cross Module References
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordEntitlementType();
	UPackage* Z_Construct_UPackage__Script_DiscordCore();
// End Cross Module References
	static UEnum* EDiscordEntitlementType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordCore_EDiscordEntitlementType, Z_Construct_UPackage__Script_DiscordCore(), TEXT("EDiscordEntitlementType"));
		}
		return Singleton;
	}
	template<> DISCORDCORE_API UEnum* StaticEnum<EDiscordEntitlementType>()
	{
		return EDiscordEntitlementType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordEntitlementType(EDiscordEntitlementType_StaticEnum, TEXT("/Script/DiscordCore"), TEXT("EDiscordEntitlementType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordCore_EDiscordEntitlementType_Hash() { return 4048317493U; }
	UEnum* Z_Construct_UEnum_DiscordCore_EDiscordEntitlementType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordEntitlementType"), 0, Get_Z_Construct_UEnum_DiscordCore_EDiscordEntitlementType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordEntitlementType::None", (int64)EDiscordEntitlementType::None },
				{ "EDiscordEntitlementType::Purchase", (int64)EDiscordEntitlementType::Purchase },
				{ "EDiscordEntitlementType::PremiumSubscription", (int64)EDiscordEntitlementType::PremiumSubscription },
				{ "EDiscordEntitlementType::DeveloperGift", (int64)EDiscordEntitlementType::DeveloperGift },
				{ "EDiscordEntitlementType::TestModePurchase", (int64)EDiscordEntitlementType::TestModePurchase },
				{ "EDiscordEntitlementType::FreePurchase", (int64)EDiscordEntitlementType::FreePurchase },
				{ "EDiscordEntitlementType::UserGift", (int64)EDiscordEntitlementType::UserGift },
				{ "EDiscordEntitlementType::PremiumPurchase", (int64)EDiscordEntitlementType::PremiumPurchase },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DeveloperGift.Name", "EDiscordEntitlementType::DeveloperGift" },
				{ "FreePurchase.Name", "EDiscordEntitlementType::FreePurchase" },
				{ "ModuleRelativePath", "Public/EDiscordEntitlementType.h" },
				{ "None.Name", "EDiscordEntitlementType::None" },
				{ "PremiumPurchase.Name", "EDiscordEntitlementType::PremiumPurchase" },
				{ "PremiumSubscription.Name", "EDiscordEntitlementType::PremiumSubscription" },
				{ "Purchase.Name", "EDiscordEntitlementType::Purchase" },
				{ "TestModePurchase.Name", "EDiscordEntitlementType::TestModePurchase" },
				{ "UserGift.Name", "EDiscordEntitlementType::UserGift" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordCore,
				nullptr,
				"EDiscordEntitlementType",
				"EDiscordEntitlementType",
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
