// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordCore/Public/EDiscordActivityActionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiscordActivityActionType() {}
// Cross Module References
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordActivityActionType();
	UPackage* Z_Construct_UPackage__Script_DiscordCore();
// End Cross Module References
	static UEnum* EDiscordActivityActionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordCore_EDiscordActivityActionType, Z_Construct_UPackage__Script_DiscordCore(), TEXT("EDiscordActivityActionType"));
		}
		return Singleton;
	}
	template<> DISCORDCORE_API UEnum* StaticEnum<EDiscordActivityActionType>()
	{
		return EDiscordActivityActionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordActivityActionType(EDiscordActivityActionType_StaticEnum, TEXT("/Script/DiscordCore"), TEXT("EDiscordActivityActionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordCore_EDiscordActivityActionType_Hash() { return 3808178578U; }
	UEnum* Z_Construct_UEnum_DiscordCore_EDiscordActivityActionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordActivityActionType"), 0, Get_Z_Construct_UEnum_DiscordCore_EDiscordActivityActionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordActivityActionType::None", (int64)EDiscordActivityActionType::None },
				{ "EDiscordActivityActionType::Join", (int64)EDiscordActivityActionType::Join },
				{ "EDiscordActivityActionType::Spectate", (int64)EDiscordActivityActionType::Spectate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Join.Name", "EDiscordActivityActionType::Join" },
				{ "ModuleRelativePath", "Public/EDiscordActivityActionType.h" },
				{ "None.Name", "EDiscordActivityActionType::None" },
				{ "Spectate.Name", "EDiscordActivityActionType::Spectate" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordCore,
				nullptr,
				"EDiscordActivityActionType",
				"EDiscordActivityActionType",
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
