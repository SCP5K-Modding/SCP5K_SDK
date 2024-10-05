// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordStore/Public/EDiscordSkuType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiscordSkuType() {}
// Cross Module References
	DISCORDSTORE_API UEnum* Z_Construct_UEnum_DiscordStore_EDiscordSkuType();
	UPackage* Z_Construct_UPackage__Script_DiscordStore();
// End Cross Module References
	static UEnum* EDiscordSkuType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordStore_EDiscordSkuType, Z_Construct_UPackage__Script_DiscordStore(), TEXT("EDiscordSkuType"));
		}
		return Singleton;
	}
	template<> DISCORDSTORE_API UEnum* StaticEnum<EDiscordSkuType>()
	{
		return EDiscordSkuType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordSkuType(EDiscordSkuType_StaticEnum, TEXT("/Script/DiscordStore"), TEXT("EDiscordSkuType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordStore_EDiscordSkuType_Hash() { return 2389781569U; }
	UEnum* Z_Construct_UEnum_DiscordStore_EDiscordSkuType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordStore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordSkuType"), 0, Get_Z_Construct_UEnum_DiscordStore_EDiscordSkuType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordSkuType::None", (int64)EDiscordSkuType::None },
				{ "EDiscordSkuType::Application", (int64)EDiscordSkuType::Application },
				{ "EDiscordSkuType::DLC", (int64)EDiscordSkuType::DLC },
				{ "EDiscordSkuType::Consumable", (int64)EDiscordSkuType::Consumable },
				{ "EDiscordSkuType::Bundle", (int64)EDiscordSkuType::Bundle },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Application.Name", "EDiscordSkuType::Application" },
				{ "BlueprintType", "true" },
				{ "Bundle.Name", "EDiscordSkuType::Bundle" },
				{ "Consumable.Name", "EDiscordSkuType::Consumable" },
				{ "DLC.Name", "EDiscordSkuType::DLC" },
				{ "ModuleRelativePath", "Public/EDiscordSkuType.h" },
				{ "None.Name", "EDiscordSkuType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordStore,
				nullptr,
				"EDiscordSkuType",
				"EDiscordSkuType",
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
