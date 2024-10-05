// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordAchievement/Public/DiscordUserAchievement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordUserAchievement() {}
// Cross Module References
	DISCORDACHIEVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordUserAchievement();
	UPackage* Z_Construct_UPackage__Script_DiscordAchievement();
// End Cross Module References
class UScriptStruct* FDiscordUserAchievement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDACHIEVEMENT_API uint32 Get_Z_Construct_UScriptStruct_FDiscordUserAchievement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordUserAchievement, Z_Construct_UPackage__Script_DiscordAchievement(), TEXT("DiscordUserAchievement"), sizeof(FDiscordUserAchievement), Get_Z_Construct_UScriptStruct_FDiscordUserAchievement_Hash());
	}
	return Singleton;
}
template<> DISCORDACHIEVEMENT_API UScriptStruct* StaticStruct<FDiscordUserAchievement>()
{
	return FDiscordUserAchievement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordUserAchievement(FDiscordUserAchievement::StaticStruct, TEXT("/Script/DiscordAchievement"), TEXT("DiscordUserAchievement"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordAchievement_StaticRegisterNativesFDiscordUserAchievement
{
	FScriptStruct_DiscordAchievement_StaticRegisterNativesFDiscordUserAchievement()
	{
		UScriptStruct::DeferCppStructOps<FDiscordUserAchievement>(FName(TEXT("DiscordUserAchievement")));
	}
} ScriptStruct_DiscordAchievement_StaticRegisterNativesFDiscordUserAchievement;
	struct Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_AchievementId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementPercentComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AchievementPercentComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementUnlockedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementUnlockedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordUserAchievement.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordUserAchievement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::NewProp_AchievementId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordUserAchievement" },
		{ "ModuleRelativePath", "Public/DiscordUserAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::NewProp_AchievementId = { "AchievementId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordUserAchievement, AchievementId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::NewProp_AchievementId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::NewProp_AchievementId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::NewProp_AchievementPercentComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordUserAchievement" },
		{ "ModuleRelativePath", "Public/DiscordUserAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::NewProp_AchievementPercentComplete = { "AchievementPercentComplete", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordUserAchievement, AchievementPercentComplete), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::NewProp_AchievementPercentComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::NewProp_AchievementPercentComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::NewProp_AchievementUnlockedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordUserAchievement" },
		{ "ModuleRelativePath", "Public/DiscordUserAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::NewProp_AchievementUnlockedAt = { "AchievementUnlockedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordUserAchievement, AchievementUnlockedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::NewProp_AchievementUnlockedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::NewProp_AchievementUnlockedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordUserAchievement" },
		{ "ModuleRelativePath", "Public/DiscordUserAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordUserAchievement, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::NewProp_AchievementId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::NewProp_AchievementPercentComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::NewProp_AchievementUnlockedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::NewProp_UserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordAchievement,
		nullptr,
		&NewStructOps,
		"DiscordUserAchievement",
		sizeof(FDiscordUserAchievement),
		alignof(FDiscordUserAchievement),
		Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordUserAchievement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordUserAchievement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordAchievement();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordUserAchievement"), sizeof(FDiscordUserAchievement), Get_Z_Construct_UScriptStruct_FDiscordUserAchievement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordUserAchievement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordUserAchievement_Hash() { return 813925392U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
