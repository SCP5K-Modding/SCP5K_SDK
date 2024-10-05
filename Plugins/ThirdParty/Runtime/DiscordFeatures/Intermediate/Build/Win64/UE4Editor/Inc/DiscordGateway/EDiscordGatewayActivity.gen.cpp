// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordGateway/Public/EDiscordGatewayActivity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiscordGatewayActivity() {}
// Cross Module References
	DISCORDGATEWAY_API UEnum* Z_Construct_UEnum_DiscordGateway_EDiscordGatewayActivity();
	UPackage* Z_Construct_UPackage__Script_DiscordGateway();
// End Cross Module References
	static UEnum* EDiscordGatewayActivity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordGateway_EDiscordGatewayActivity, Z_Construct_UPackage__Script_DiscordGateway(), TEXT("EDiscordGatewayActivity"));
		}
		return Singleton;
	}
	template<> DISCORDGATEWAY_API UEnum* StaticEnum<EDiscordGatewayActivity>()
	{
		return EDiscordGatewayActivity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordGatewayActivity(EDiscordGatewayActivity_StaticEnum, TEXT("/Script/DiscordGateway"), TEXT("EDiscordGatewayActivity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordGateway_EDiscordGatewayActivity_Hash() { return 3186250314U; }
	UEnum* Z_Construct_UEnum_DiscordGateway_EDiscordGatewayActivity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordGateway();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordGatewayActivity"), 0, Get_Z_Construct_UEnum_DiscordGateway_EDiscordGatewayActivity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordGatewayActivity::Game", (int64)EDiscordGatewayActivity::Game },
				{ "EDiscordGatewayActivity::Streaming", (int64)EDiscordGatewayActivity::Streaming },
				{ "EDiscordGatewayActivity::Listening", (int64)EDiscordGatewayActivity::Listening },
				{ "EDiscordGatewayActivity::Custom", (int64)EDiscordGatewayActivity::Custom },
				{ "EDiscordGatewayActivity::Competing", (int64)EDiscordGatewayActivity::Competing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Competing.Name", "EDiscordGatewayActivity::Competing" },
				{ "Custom.Name", "EDiscordGatewayActivity::Custom" },
				{ "Game.Name", "EDiscordGatewayActivity::Game" },
				{ "Listening.Name", "EDiscordGatewayActivity::Listening" },
				{ "ModuleRelativePath", "Public/EDiscordGatewayActivity.h" },
				{ "Streaming.Name", "EDiscordGatewayActivity::Streaming" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordGateway,
				nullptr,
				"EDiscordGatewayActivity",
				"EDiscordGatewayActivity",
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
