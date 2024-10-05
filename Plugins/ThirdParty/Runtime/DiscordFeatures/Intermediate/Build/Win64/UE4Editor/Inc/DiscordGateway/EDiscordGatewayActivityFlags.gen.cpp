// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordGateway/Public/EDiscordGatewayActivityFlags.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiscordGatewayActivityFlags() {}
// Cross Module References
	DISCORDGATEWAY_API UEnum* Z_Construct_UEnum_DiscordGateway_EDiscordGatewayActivityFlags();
	UPackage* Z_Construct_UPackage__Script_DiscordGateway();
// End Cross Module References
	static UEnum* EDiscordGatewayActivityFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordGateway_EDiscordGatewayActivityFlags, Z_Construct_UPackage__Script_DiscordGateway(), TEXT("EDiscordGatewayActivityFlags"));
		}
		return Singleton;
	}
	template<> DISCORDGATEWAY_API UEnum* StaticEnum<EDiscordGatewayActivityFlags>()
	{
		return EDiscordGatewayActivityFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordGatewayActivityFlags(EDiscordGatewayActivityFlags_StaticEnum, TEXT("/Script/DiscordGateway"), TEXT("EDiscordGatewayActivityFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordGateway_EDiscordGatewayActivityFlags_Hash() { return 3911741873U; }
	UEnum* Z_Construct_UEnum_DiscordGateway_EDiscordGatewayActivityFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordGateway();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordGatewayActivityFlags"), 0, Get_Z_Construct_UEnum_DiscordGateway_EDiscordGatewayActivityFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordGatewayActivityFlags::Instance", (int64)EDiscordGatewayActivityFlags::Instance },
				{ "EDiscordGatewayActivityFlags::Join", (int64)EDiscordGatewayActivityFlags::Join },
				{ "EDiscordGatewayActivityFlags::Spectate", (int64)EDiscordGatewayActivityFlags::Spectate },
				{ "EDiscordGatewayActivityFlags::JoinRequest", (int64)EDiscordGatewayActivityFlags::JoinRequest },
				{ "EDiscordGatewayActivityFlags::Sync", (int64)EDiscordGatewayActivityFlags::Sync },
				{ "EDiscordGatewayActivityFlags::Play", (int64)EDiscordGatewayActivityFlags::Play },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Instance.Name", "EDiscordGatewayActivityFlags::Instance" },
				{ "Join.Name", "EDiscordGatewayActivityFlags::Join" },
				{ "JoinRequest.Name", "EDiscordGatewayActivityFlags::JoinRequest" },
				{ "ModuleRelativePath", "Public/EDiscordGatewayActivityFlags.h" },
				{ "Play.Name", "EDiscordGatewayActivityFlags::Play" },
				{ "Spectate.Name", "EDiscordGatewayActivityFlags::Spectate" },
				{ "Sync.Name", "EDiscordGatewayActivityFlags::Sync" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordGateway,
				nullptr,
				"EDiscordGatewayActivityFlags",
				"EDiscordGatewayActivityFlags",
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
