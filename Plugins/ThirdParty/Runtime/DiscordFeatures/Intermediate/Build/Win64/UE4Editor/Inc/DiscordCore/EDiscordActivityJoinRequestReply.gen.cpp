// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordCore/Public/EDiscordActivityJoinRequestReply.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiscordActivityJoinRequestReply() {}
// Cross Module References
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordActivityJoinRequestReply();
	UPackage* Z_Construct_UPackage__Script_DiscordCore();
// End Cross Module References
	static UEnum* EDiscordActivityJoinRequestReply_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordCore_EDiscordActivityJoinRequestReply, Z_Construct_UPackage__Script_DiscordCore(), TEXT("EDiscordActivityJoinRequestReply"));
		}
		return Singleton;
	}
	template<> DISCORDCORE_API UEnum* StaticEnum<EDiscordActivityJoinRequestReply>()
	{
		return EDiscordActivityJoinRequestReply_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordActivityJoinRequestReply(EDiscordActivityJoinRequestReply_StaticEnum, TEXT("/Script/DiscordCore"), TEXT("EDiscordActivityJoinRequestReply"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordCore_EDiscordActivityJoinRequestReply_Hash() { return 3964636817U; }
	UEnum* Z_Construct_UEnum_DiscordCore_EDiscordActivityJoinRequestReply()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordActivityJoinRequestReply"), 0, Get_Z_Construct_UEnum_DiscordCore_EDiscordActivityJoinRequestReply_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordActivityJoinRequestReply::No", (int64)EDiscordActivityJoinRequestReply::No },
				{ "EDiscordActivityJoinRequestReply::Yes", (int64)EDiscordActivityJoinRequestReply::Yes },
				{ "EDiscordActivityJoinRequestReply::Ignore", (int64)EDiscordActivityJoinRequestReply::Ignore },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Ignore.Name", "EDiscordActivityJoinRequestReply::Ignore" },
				{ "ModuleRelativePath", "Public/EDiscordActivityJoinRequestReply.h" },
				{ "No.Name", "EDiscordActivityJoinRequestReply::No" },
				{ "Yes.Name", "EDiscordActivityJoinRequestReply::Yes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordCore,
				nullptr,
				"EDiscordActivityJoinRequestReply",
				"EDiscordActivityJoinRequestReply",
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
