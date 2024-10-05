// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordCore/Public/DiscordPartySize.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordPartySize() {}
// Cross Module References
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordPartySize();
	UPackage* Z_Construct_UPackage__Script_DiscordCore();
// End Cross Module References
class UScriptStruct* FDiscordPartySize::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDCORE_API uint32 Get_Z_Construct_UScriptStruct_FDiscordPartySize_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordPartySize, Z_Construct_UPackage__Script_DiscordCore(), TEXT("DiscordPartySize"), sizeof(FDiscordPartySize), Get_Z_Construct_UScriptStruct_FDiscordPartySize_Hash());
	}
	return Singleton;
}
template<> DISCORDCORE_API UScriptStruct* StaticStruct<FDiscordPartySize>()
{
	return FDiscordPartySize::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordPartySize(FDiscordPartySize::StaticStruct, TEXT("/Script/DiscordCore"), TEXT("DiscordPartySize"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordCore_StaticRegisterNativesFDiscordPartySize
{
	FScriptStruct_DiscordCore_StaticRegisterNativesFDiscordPartySize()
	{
		UScriptStruct::DeferCppStructOps<FDiscordPartySize>(FName(TEXT("DiscordPartySize")));
	}
} ScriptStruct_DiscordCore_StaticRegisterNativesFDiscordPartySize;
	struct Z_Construct_UScriptStruct_FDiscordPartySize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordPartySize_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordPartySize.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordPartySize_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordPartySize>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordPartySize_Statics::NewProp_CurrentSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordPartySize" },
		{ "ModuleRelativePath", "Public/DiscordPartySize.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDiscordPartySize_Statics::NewProp_CurrentSize = { "CurrentSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordPartySize, CurrentSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordPartySize_Statics::NewProp_CurrentSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordPartySize_Statics::NewProp_CurrentSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordPartySize_Statics::NewProp_MaxSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordPartySize" },
		{ "ModuleRelativePath", "Public/DiscordPartySize.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDiscordPartySize_Statics::NewProp_MaxSize = { "MaxSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordPartySize, MaxSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordPartySize_Statics::NewProp_MaxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordPartySize_Statics::NewProp_MaxSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordPartySize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordPartySize_Statics::NewProp_CurrentSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordPartySize_Statics::NewProp_MaxSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordPartySize_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordCore,
		nullptr,
		&NewStructOps,
		"DiscordPartySize",
		sizeof(FDiscordPartySize),
		alignof(FDiscordPartySize),
		Z_Construct_UScriptStruct_FDiscordPartySize_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordPartySize_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordPartySize_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordPartySize_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordPartySize()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordPartySize_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordPartySize"), sizeof(FDiscordPartySize), Get_Z_Construct_UScriptStruct_FDiscordPartySize_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordPartySize_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordPartySize_Hash() { return 52719882U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
