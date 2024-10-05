// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordCore/Public/Uint64.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUint64() {}
// Cross Module References
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUint64();
	UPackage* Z_Construct_UPackage__Script_DiscordCore();
// End Cross Module References
class UScriptStruct* FUint64::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDCORE_API uint32 Get_Z_Construct_UScriptStruct_FUint64_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUint64, Z_Construct_UPackage__Script_DiscordCore(), TEXT("Uint64"), sizeof(FUint64), Get_Z_Construct_UScriptStruct_FUint64_Hash());
	}
	return Singleton;
}
template<> DISCORDCORE_API UScriptStruct* StaticStruct<FUint64>()
{
	return FUint64::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUint64(FUint64::StaticStruct, TEXT("/Script/DiscordCore"), TEXT("Uint64"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordCore_StaticRegisterNativesFUint64
{
	FScriptStruct_DiscordCore_StaticRegisterNativesFUint64()
	{
		UScriptStruct::DeferCppStructOps<FUint64>(FName(TEXT("Uint64")));
	}
} ScriptStruct_DiscordCore_StaticRegisterNativesFUint64;
	struct Z_Construct_UScriptStruct_FUint64_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUint64_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Uint64.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUint64_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUint64>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUint64_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordCore,
		nullptr,
		&NewStructOps,
		"Uint64",
		sizeof(FUint64),
		alignof(FUint64),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUint64_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUint64_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUint64()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUint64_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Uint64"), sizeof(FUint64), Get_Z_Construct_UScriptStruct_FUint64_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUint64_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUint64_Hash() { return 581156656U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
