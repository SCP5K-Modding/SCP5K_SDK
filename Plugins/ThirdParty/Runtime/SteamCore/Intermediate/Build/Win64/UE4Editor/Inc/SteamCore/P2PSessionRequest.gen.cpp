// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/P2PSessionRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP2PSessionRequest() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FP2PSessionRequest();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FP2PSessionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FP2PSessionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FP2PSessionRequest, Z_Construct_UPackage__Script_SteamCore(), TEXT("P2PSessionRequest"), sizeof(FP2PSessionRequest), Get_Z_Construct_UScriptStruct_FP2PSessionRequest_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FP2PSessionRequest>()
{
	return FP2PSessionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FP2PSessionRequest(FP2PSessionRequest::StaticStruct, TEXT("/Script/SteamCore"), TEXT("P2PSessionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFP2PSessionRequest
{
	FScriptStruct_SteamCore_StaticRegisterNativesFP2PSessionRequest()
	{
		UScriptStruct::DeferCppStructOps<FP2PSessionRequest>(FName(TEXT("P2PSessionRequest")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFP2PSessionRequest;
	struct Z_Construct_UScriptStruct_FP2PSessionRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDRemote_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDRemote;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/P2PSessionRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FP2PSessionRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::NewProp_SteamIDRemote_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "P2PSessionRequest" },
		{ "ModuleRelativePath", "Public/P2PSessionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::NewProp_SteamIDRemote = { "SteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FP2PSessionRequest, SteamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::NewProp_SteamIDRemote_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::NewProp_SteamIDRemote_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::NewProp_SteamIDRemote,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"P2PSessionRequest",
		sizeof(FP2PSessionRequest),
		alignof(FP2PSessionRequest),
		Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FP2PSessionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FP2PSessionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("P2PSessionRequest"), sizeof(FP2PSessionRequest), Get_Z_Construct_UScriptStruct_FP2PSessionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FP2PSessionRequest_Hash() { return 1651306495U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
