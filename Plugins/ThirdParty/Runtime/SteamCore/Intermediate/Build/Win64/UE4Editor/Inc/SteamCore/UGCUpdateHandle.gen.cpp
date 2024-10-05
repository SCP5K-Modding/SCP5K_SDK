// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/UGCUpdateHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGCUpdateHandle() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUGCUpdateHandle();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FUGCUpdateHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FUGCUpdateHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUGCUpdateHandle, Z_Construct_UPackage__Script_SteamCore(), TEXT("UGCUpdateHandle"), sizeof(FUGCUpdateHandle), Get_Z_Construct_UScriptStruct_FUGCUpdateHandle_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FUGCUpdateHandle>()
{
	return FUGCUpdateHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUGCUpdateHandle(FUGCUpdateHandle::StaticStruct, TEXT("/Script/SteamCore"), TEXT("UGCUpdateHandle"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFUGCUpdateHandle
{
	FScriptStruct_SteamCore_StaticRegisterNativesFUGCUpdateHandle()
	{
		UScriptStruct::DeferCppStructOps<FUGCUpdateHandle>(FName(TEXT("UGCUpdateHandle")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFUGCUpdateHandle;
	struct Z_Construct_UScriptStruct_FUGCUpdateHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUGCUpdateHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UGCUpdateHandle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUGCUpdateHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUGCUpdateHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUGCUpdateHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"UGCUpdateHandle",
		sizeof(FUGCUpdateHandle),
		alignof(FUGCUpdateHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUGCUpdateHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCUpdateHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUGCUpdateHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUGCUpdateHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UGCUpdateHandle"), sizeof(FUGCUpdateHandle), Get_Z_Construct_UScriptStruct_FUGCUpdateHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUGCUpdateHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUGCUpdateHandle_Hash() { return 570982126U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
