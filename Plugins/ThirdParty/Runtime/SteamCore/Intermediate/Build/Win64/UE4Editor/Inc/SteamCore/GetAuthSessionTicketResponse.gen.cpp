// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/GetAuthSessionTicketResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetAuthSessionTicketResponse() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
// End Cross Module References
class UScriptStruct* FGetAuthSessionTicketResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse, Z_Construct_UPackage__Script_SteamCore(), TEXT("GetAuthSessionTicketResponse"), sizeof(FGetAuthSessionTicketResponse), Get_Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGetAuthSessionTicketResponse>()
{
	return FGetAuthSessionTicketResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGetAuthSessionTicketResponse(FGetAuthSessionTicketResponse::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GetAuthSessionTicketResponse"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGetAuthSessionTicketResponse
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGetAuthSessionTicketResponse()
	{
		UScriptStruct::DeferCppStructOps<FGetAuthSessionTicketResponse>(FName(TEXT("GetAuthSessionTicketResponse")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGetAuthSessionTicketResponse;
	struct Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthTicket_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AuthTicket;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GetAuthSessionTicketResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetAuthSessionTicketResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_AuthTicket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetAuthSessionTicketResponse" },
		{ "ModuleRelativePath", "Public/GetAuthSessionTicketResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_AuthTicket = { "AuthTicket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetAuthSessionTicketResponse, AuthTicket), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_AuthTicket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_AuthTicket_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetAuthSessionTicketResponse" },
		{ "ModuleRelativePath", "Public/GetAuthSessionTicketResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetAuthSessionTicketResponse, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_AuthTicket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GetAuthSessionTicketResponse",
		sizeof(FGetAuthSessionTicketResponse),
		alignof(FGetAuthSessionTicketResponse),
		Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GetAuthSessionTicketResponse"), sizeof(FGetAuthSessionTicketResponse), Get_Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Hash() { return 2941341899U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
