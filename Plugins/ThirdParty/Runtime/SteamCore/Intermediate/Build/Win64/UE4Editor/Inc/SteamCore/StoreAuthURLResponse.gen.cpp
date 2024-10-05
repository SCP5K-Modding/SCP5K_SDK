// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/StoreAuthURLResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreAuthURLResponse() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FStoreAuthURLResponse();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FStoreAuthURLResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FStoreAuthURLResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoreAuthURLResponse, Z_Construct_UPackage__Script_SteamCore(), TEXT("StoreAuthURLResponse"), sizeof(FStoreAuthURLResponse), Get_Z_Construct_UScriptStruct_FStoreAuthURLResponse_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FStoreAuthURLResponse>()
{
	return FStoreAuthURLResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStoreAuthURLResponse(FStoreAuthURLResponse::StaticStruct, TEXT("/Script/SteamCore"), TEXT("StoreAuthURLResponse"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFStoreAuthURLResponse
{
	FScriptStruct_SteamCore_StaticRegisterNativesFStoreAuthURLResponse()
	{
		UScriptStruct::DeferCppStructOps<FStoreAuthURLResponse>(FName(TEXT("StoreAuthURLResponse")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFStoreAuthURLResponse;
	struct Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StoreAuthURLResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoreAuthURLResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewProp_URL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StoreAuthURLResponse" },
		{ "ModuleRelativePath", "Public/StoreAuthURLResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreAuthURLResponse, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewProp_URL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewProp_URL,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"StoreAuthURLResponse",
		sizeof(FStoreAuthURLResponse),
		alignof(FStoreAuthURLResponse),
		Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStoreAuthURLResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStoreAuthURLResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StoreAuthURLResponse"), sizeof(FStoreAuthURLResponse), Get_Z_Construct_UScriptStruct_FStoreAuthURLResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStoreAuthURLResponse_Hash() { return 2035222515U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
