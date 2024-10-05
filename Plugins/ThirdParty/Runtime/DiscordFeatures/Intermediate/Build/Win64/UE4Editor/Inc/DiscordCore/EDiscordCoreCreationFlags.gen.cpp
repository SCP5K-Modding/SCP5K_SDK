// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordCore/Public/EDiscordCoreCreationFlags.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiscordCoreCreationFlags() {}
// Cross Module References
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordCoreCreationFlags();
	UPackage* Z_Construct_UPackage__Script_DiscordCore();
// End Cross Module References
	static UEnum* EDiscordCoreCreationFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordCore_EDiscordCoreCreationFlags, Z_Construct_UPackage__Script_DiscordCore(), TEXT("EDiscordCoreCreationFlags"));
		}
		return Singleton;
	}
	template<> DISCORDCORE_API UEnum* StaticEnum<EDiscordCoreCreationFlags>()
	{
		return EDiscordCoreCreationFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordCoreCreationFlags(EDiscordCoreCreationFlags_StaticEnum, TEXT("/Script/DiscordCore"), TEXT("EDiscordCoreCreationFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordCore_EDiscordCoreCreationFlags_Hash() { return 1147722311U; }
	UEnum* Z_Construct_UEnum_DiscordCore_EDiscordCoreCreationFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordCoreCreationFlags"), 0, Get_Z_Construct_UEnum_DiscordCore_EDiscordCoreCreationFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordCoreCreationFlags::Default", (int64)EDiscordCoreCreationFlags::Default },
				{ "EDiscordCoreCreationFlags::NoRequireDiscord", (int64)EDiscordCoreCreationFlags::NoRequireDiscord },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Name", "EDiscordCoreCreationFlags::Default" },
				{ "ModuleRelativePath", "Public/EDiscordCoreCreationFlags.h" },
				{ "NoRequireDiscord.Name", "EDiscordCoreCreationFlags::NoRequireDiscord" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordCore,
				nullptr,
				"EDiscordCoreCreationFlags",
				"EDiscordCoreCreationFlags",
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
