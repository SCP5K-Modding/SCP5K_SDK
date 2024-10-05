// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordCore/Public/DiscordActivityTimestamps.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordActivityTimestamps() {}
// Cross Module References
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordActivityTimestamps();
	UPackage* Z_Construct_UPackage__Script_DiscordCore();
// End Cross Module References
class UScriptStruct* FDiscordActivityTimestamps::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDCORE_API uint32 Get_Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordActivityTimestamps, Z_Construct_UPackage__Script_DiscordCore(), TEXT("DiscordActivityTimestamps"), sizeof(FDiscordActivityTimestamps), Get_Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Hash());
	}
	return Singleton;
}
template<> DISCORDCORE_API UScriptStruct* StaticStruct<FDiscordActivityTimestamps>()
{
	return FDiscordActivityTimestamps::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordActivityTimestamps(FDiscordActivityTimestamps::StaticStruct, TEXT("/Script/DiscordCore"), TEXT("DiscordActivityTimestamps"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordCore_StaticRegisterNativesFDiscordActivityTimestamps
{
	FScriptStruct_DiscordCore_StaticRegisterNativesFDiscordActivityTimestamps()
	{
		UScriptStruct::DeferCppStructOps<FDiscordActivityTimestamps>(FName(TEXT("DiscordActivityTimestamps")));
	}
} ScriptStruct_DiscordCore_StaticRegisterNativesFDiscordActivityTimestamps;
	struct Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_End;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordActivityTimestamps.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordActivityTimestamps>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Statics::NewProp_Start_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivityTimestamps" },
		{ "ModuleRelativePath", "Public/DiscordActivityTimestamps.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordActivityTimestamps, Start), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Statics::NewProp_End_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivityTimestamps" },
		{ "ModuleRelativePath", "Public/DiscordActivityTimestamps.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordActivityTimestamps, End), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Statics::NewProp_End_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Statics::NewProp_End,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordCore,
		nullptr,
		&NewStructOps,
		"DiscordActivityTimestamps",
		sizeof(FDiscordActivityTimestamps),
		alignof(FDiscordActivityTimestamps),
		Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordActivityTimestamps()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordActivityTimestamps"), sizeof(FDiscordActivityTimestamps), Get_Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordActivityTimestamps_Hash() { return 2055454059U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
