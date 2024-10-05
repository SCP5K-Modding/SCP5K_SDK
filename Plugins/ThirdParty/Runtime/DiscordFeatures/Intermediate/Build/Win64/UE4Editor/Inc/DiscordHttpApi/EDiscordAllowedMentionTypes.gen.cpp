// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/EDiscordAllowedMentionTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiscordAllowedMentionTypes() {}
// Cross Module References
	DISCORDHTTPAPI_API UEnum* Z_Construct_UEnum_DiscordHttpApi_EDiscordAllowedMentionTypes();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
// End Cross Module References
	static UEnum* EDiscordAllowedMentionTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordHttpApi_EDiscordAllowedMentionTypes, Z_Construct_UPackage__Script_DiscordHttpApi(), TEXT("EDiscordAllowedMentionTypes"));
		}
		return Singleton;
	}
	template<> DISCORDHTTPAPI_API UEnum* StaticEnum<EDiscordAllowedMentionTypes>()
	{
		return EDiscordAllowedMentionTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordAllowedMentionTypes(EDiscordAllowedMentionTypes_StaticEnum, TEXT("/Script/DiscordHttpApi"), TEXT("EDiscordAllowedMentionTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordHttpApi_EDiscordAllowedMentionTypes_Hash() { return 3592454673U; }
	UEnum* Z_Construct_UEnum_DiscordHttpApi_EDiscordAllowedMentionTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordHttpApi();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordAllowedMentionTypes"), 0, Get_Z_Construct_UEnum_DiscordHttpApi_EDiscordAllowedMentionTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordAllowedMentionTypes::RoleMentions", (int64)EDiscordAllowedMentionTypes::RoleMentions },
				{ "EDiscordAllowedMentionTypes::UserMentions", (int64)EDiscordAllowedMentionTypes::UserMentions },
				{ "EDiscordAllowedMentionTypes::EveryoneMentions", (int64)EDiscordAllowedMentionTypes::EveryoneMentions },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EveryoneMentions.Name", "EDiscordAllowedMentionTypes::EveryoneMentions" },
				{ "ModuleRelativePath", "Public/EDiscordAllowedMentionTypes.h" },
				{ "RoleMentions.Name", "EDiscordAllowedMentionTypes::RoleMentions" },
				{ "UserMentions.Name", "EDiscordAllowedMentionTypes::UserMentions" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordHttpApi,
				nullptr,
				"EDiscordAllowedMentionTypes",
				"EDiscordAllowedMentionTypes",
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
