// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/UGCFileWriteStreamHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGCFileWriteStreamHandle() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FUGCFileWriteStreamHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, Z_Construct_UPackage__Script_SteamCore(), TEXT("UGCFileWriteStreamHandle"), sizeof(FUGCFileWriteStreamHandle), Get_Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FUGCFileWriteStreamHandle>()
{
	return FUGCFileWriteStreamHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUGCFileWriteStreamHandle(FUGCFileWriteStreamHandle::StaticStruct, TEXT("/Script/SteamCore"), TEXT("UGCFileWriteStreamHandle"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFUGCFileWriteStreamHandle
{
	FScriptStruct_SteamCore_StaticRegisterNativesFUGCFileWriteStreamHandle()
	{
		UScriptStruct::DeferCppStructOps<FUGCFileWriteStreamHandle>(FName(TEXT("UGCFileWriteStreamHandle")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFUGCFileWriteStreamHandle;
	struct Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UGCFileWriteStreamHandle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUGCFileWriteStreamHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"UGCFileWriteStreamHandle",
		sizeof(FUGCFileWriteStreamHandle),
		alignof(FUGCFileWriteStreamHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UGCFileWriteStreamHandle"), sizeof(FUGCFileWriteStreamHandle), Get_Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Hash() { return 4202437387U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
