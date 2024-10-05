// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/EDiscordWebhookType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiscordWebhookType() {}
// Cross Module References
	DISCORDHTTPAPI_API UEnum* Z_Construct_UEnum_DiscordHttpApi_EDiscordWebhookType();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
// End Cross Module References
	static UEnum* EDiscordWebhookType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordHttpApi_EDiscordWebhookType, Z_Construct_UPackage__Script_DiscordHttpApi(), TEXT("EDiscordWebhookType"));
		}
		return Singleton;
	}
	template<> DISCORDHTTPAPI_API UEnum* StaticEnum<EDiscordWebhookType>()
	{
		return EDiscordWebhookType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordWebhookType(EDiscordWebhookType_StaticEnum, TEXT("/Script/DiscordHttpApi"), TEXT("EDiscordWebhookType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordHttpApi_EDiscordWebhookType_Hash() { return 4120730506U; }
	UEnum* Z_Construct_UEnum_DiscordHttpApi_EDiscordWebhookType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordHttpApi();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordWebhookType"), 0, Get_Z_Construct_UEnum_DiscordHttpApi_EDiscordWebhookType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordWebhookType::None", (int64)EDiscordWebhookType::None },
				{ "EDiscordWebhookType::Incoming", (int64)EDiscordWebhookType::Incoming },
				{ "EDiscordWebhookType::ChannelFollower", (int64)EDiscordWebhookType::ChannelFollower },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChannelFollower.Name", "EDiscordWebhookType::ChannelFollower" },
				{ "Incoming.Name", "EDiscordWebhookType::Incoming" },
				{ "ModuleRelativePath", "Public/EDiscordWebhookType.h" },
				{ "None.Name", "EDiscordWebhookType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordHttpApi,
				nullptr,
				"EDiscordWebhookType",
				"EDiscordWebhookType",
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
