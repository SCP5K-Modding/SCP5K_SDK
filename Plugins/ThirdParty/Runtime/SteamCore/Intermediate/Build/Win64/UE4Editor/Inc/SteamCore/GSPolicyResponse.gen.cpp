// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/GSPolicyResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSPolicyResponse() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGSPolicyResponse();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FGSPolicyResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGSPolicyResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSPolicyResponse, Z_Construct_UPackage__Script_SteamCore(), TEXT("GSPolicyResponse"), sizeof(FGSPolicyResponse), Get_Z_Construct_UScriptStruct_FGSPolicyResponse_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGSPolicyResponse>()
{
	return FGSPolicyResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGSPolicyResponse(FGSPolicyResponse::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GSPolicyResponse"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGSPolicyResponse
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGSPolicyResponse()
	{
		UScriptStruct::DeferCppStructOps<FGSPolicyResponse>(FName(TEXT("GSPolicyResponse")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGSPolicyResponse;
	struct Z_Construct_UScriptStruct_FGSPolicyResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BSecure_MetaData[];
#endif
		static void NewProp_BSecure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BSecure;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GSPolicyResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSPolicyResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_BSecure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GSPolicyResponse" },
		{ "ModuleRelativePath", "Public/GSPolicyResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_BSecure_SetBit(void* Obj)
	{
		((FGSPolicyResponse*)Obj)->BSecure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_BSecure = { "BSecure", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSPolicyResponse), &Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_BSecure_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_BSecure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_BSecure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_BSecure,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GSPolicyResponse",
		sizeof(FGSPolicyResponse),
		alignof(FGSPolicyResponse),
		Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSPolicyResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGSPolicyResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GSPolicyResponse"), sizeof(FGSPolicyResponse), Get_Z_Construct_UScriptStruct_FGSPolicyResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGSPolicyResponse_Hash() { return 4288250715U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
