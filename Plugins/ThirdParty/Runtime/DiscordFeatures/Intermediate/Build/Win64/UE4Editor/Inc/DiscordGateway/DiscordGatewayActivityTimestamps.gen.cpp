// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordGateway/Public/DiscordGatewayActivityTimestamps.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordGatewayActivityTimestamps() {}
// Cross Module References
	DISCORDGATEWAY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps();
	UPackage* Z_Construct_UPackage__Script_DiscordGateway();
// End Cross Module References
class UScriptStruct* FDiscordGatewayActivityTimestamps::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDGATEWAY_API uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps, Z_Construct_UPackage__Script_DiscordGateway(), TEXT("DiscordGatewayActivityTimestamps"), sizeof(FDiscordGatewayActivityTimestamps), Get_Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Hash());
	}
	return Singleton;
}
template<> DISCORDGATEWAY_API UScriptStruct* StaticStruct<FDiscordGatewayActivityTimestamps>()
{
	return FDiscordGatewayActivityTimestamps::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordGatewayActivityTimestamps(FDiscordGatewayActivityTimestamps::StaticStruct, TEXT("/Script/DiscordGateway"), TEXT("DiscordGatewayActivityTimestamps"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayActivityTimestamps
{
	FScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayActivityTimestamps()
	{
		UScriptStruct::DeferCppStructOps<FDiscordGatewayActivityTimestamps>(FName(TEXT("DiscordGatewayActivityTimestamps")));
	}
} ScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayActivityTimestamps;
	struct Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_End;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivityTimestamps.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordGatewayActivityTimestamps>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Statics::NewProp_Start_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivityTimestamps" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivityTimestamps.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivityTimestamps, Start), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Statics::NewProp_End_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivityTimestamps" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivityTimestamps.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivityTimestamps, End), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Statics::NewProp_End_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Statics::NewProp_End,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordGateway,
		nullptr,
		&NewStructOps,
		"DiscordGatewayActivityTimestamps",
		sizeof(FDiscordGatewayActivityTimestamps),
		alignof(FDiscordGatewayActivityTimestamps),
		Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordGateway();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordGatewayActivityTimestamps"), sizeof(FDiscordGatewayActivityTimestamps), Get_Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps_Hash() { return 3718963121U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
