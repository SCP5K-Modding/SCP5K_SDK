// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/EDiscordHttpApiAuthenticationType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiscordHttpApiAuthenticationType() {}
// Cross Module References
	DISCORDHTTPAPI_API UEnum* Z_Construct_UEnum_DiscordHttpApi_EDiscordHttpApiAuthenticationType();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
// End Cross Module References
	static UEnum* EDiscordHttpApiAuthenticationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordHttpApi_EDiscordHttpApiAuthenticationType, Z_Construct_UPackage__Script_DiscordHttpApi(), TEXT("EDiscordHttpApiAuthenticationType"));
		}
		return Singleton;
	}
	template<> DISCORDHTTPAPI_API UEnum* StaticEnum<EDiscordHttpApiAuthenticationType>()
	{
		return EDiscordHttpApiAuthenticationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordHttpApiAuthenticationType(EDiscordHttpApiAuthenticationType_StaticEnum, TEXT("/Script/DiscordHttpApi"), TEXT("EDiscordHttpApiAuthenticationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordHttpApi_EDiscordHttpApiAuthenticationType_Hash() { return 4227852752U; }
	UEnum* Z_Construct_UEnum_DiscordHttpApi_EDiscordHttpApiAuthenticationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordHttpApi();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordHttpApiAuthenticationType"), 0, Get_Z_Construct_UEnum_DiscordHttpApi_EDiscordHttpApiAuthenticationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordHttpApiAuthenticationType::None", (int64)EDiscordHttpApiAuthenticationType::None },
				{ "EDiscordHttpApiAuthenticationType::Bot", (int64)EDiscordHttpApiAuthenticationType::Bot },
				{ "EDiscordHttpApiAuthenticationType::Bearer", (int64)EDiscordHttpApiAuthenticationType::Bearer },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bearer.Name", "EDiscordHttpApiAuthenticationType::Bearer" },
				{ "BlueprintType", "true" },
				{ "Bot.Name", "EDiscordHttpApiAuthenticationType::Bot" },
				{ "ModuleRelativePath", "Public/EDiscordHttpApiAuthenticationType.h" },
				{ "None.Name", "EDiscordHttpApiAuthenticationType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordHttpApi,
				nullptr,
				"EDiscordHttpApiAuthenticationType",
				"EDiscordHttpApiAuthenticationType",
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
