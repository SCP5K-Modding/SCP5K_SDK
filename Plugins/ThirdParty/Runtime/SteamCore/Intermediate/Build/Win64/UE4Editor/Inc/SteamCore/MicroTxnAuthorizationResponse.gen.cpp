// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/MicroTxnAuthorizationResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMicroTxnAuthorizationResponse() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FMicroTxnAuthorizationResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse, Z_Construct_UPackage__Script_SteamCore(), TEXT("MicroTxnAuthorizationResponse"), sizeof(FMicroTxnAuthorizationResponse), Get_Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FMicroTxnAuthorizationResponse>()
{
	return FMicroTxnAuthorizationResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMicroTxnAuthorizationResponse(FMicroTxnAuthorizationResponse::StaticStruct, TEXT("/Script/SteamCore"), TEXT("MicroTxnAuthorizationResponse"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFMicroTxnAuthorizationResponse
{
	FScriptStruct_SteamCore_StaticRegisterNativesFMicroTxnAuthorizationResponse()
	{
		UScriptStruct::DeferCppStructOps<FMicroTxnAuthorizationResponse>(FName(TEXT("MicroTxnAuthorizationResponse")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFMicroTxnAuthorizationResponse;
	struct Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrderId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAuthorized_MetaData[];
#endif
		static void NewProp_bAuthorized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAuthorized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MicroTxnAuthorizationResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMicroTxnAuthorizationResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_AppID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MicroTxnAuthorizationResponse" },
		{ "ModuleRelativePath", "Public/MicroTxnAuthorizationResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMicroTxnAuthorizationResponse, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_AppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_OrderId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MicroTxnAuthorizationResponse" },
		{ "ModuleRelativePath", "Public/MicroTxnAuthorizationResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMicroTxnAuthorizationResponse, OrderId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_OrderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_OrderId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MicroTxnAuthorizationResponse" },
		{ "ModuleRelativePath", "Public/MicroTxnAuthorizationResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized_SetBit(void* Obj)
	{
		((FMicroTxnAuthorizationResponse*)Obj)->bAuthorized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized = { "bAuthorized", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMicroTxnAuthorizationResponse), &Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_OrderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"MicroTxnAuthorizationResponse",
		sizeof(FMicroTxnAuthorizationResponse),
		alignof(FMicroTxnAuthorizationResponse),
		Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MicroTxnAuthorizationResponse"), sizeof(FMicroTxnAuthorizationResponse), Get_Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Hash() { return 2909210667U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
