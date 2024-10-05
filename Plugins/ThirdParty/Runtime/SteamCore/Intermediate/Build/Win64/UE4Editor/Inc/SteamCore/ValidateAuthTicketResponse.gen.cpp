// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ValidateAuthTicketResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeValidateAuthTicketResponse() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FValidateAuthTicketResponse();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse();
// End Cross Module References
class UScriptStruct* FValidateAuthTicketResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FValidateAuthTicketResponse, Z_Construct_UPackage__Script_SteamCore(), TEXT("ValidateAuthTicketResponse"), sizeof(FValidateAuthTicketResponse), Get_Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FValidateAuthTicketResponse>()
{
	return FValidateAuthTicketResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FValidateAuthTicketResponse(FValidateAuthTicketResponse::StaticStruct, TEXT("/Script/SteamCore"), TEXT("ValidateAuthTicketResponse"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFValidateAuthTicketResponse
{
	FScriptStruct_SteamCore_StaticRegisterNativesFValidateAuthTicketResponse()
	{
		UScriptStruct::DeferCppStructOps<FValidateAuthTicketResponse>(FName(TEXT("ValidateAuthTicketResponse")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFValidateAuthTicketResponse;
	struct Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AuthSessionResponse_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthSessionResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AuthSessionResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerSteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OwnerSteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ValidateAuthTicketResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FValidateAuthTicketResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_SteamID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ValidateAuthTicketResponse" },
		{ "ModuleRelativePath", "Public/ValidateAuthTicketResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValidateAuthTicketResponse, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_AuthSessionResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_AuthSessionResponse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ValidateAuthTicketResponse" },
		{ "ModuleRelativePath", "Public/ValidateAuthTicketResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_AuthSessionResponse = { "AuthSessionResponse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValidateAuthTicketResponse, AuthSessionResponse), Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse, METADATA_PARAMS(Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_AuthSessionResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_AuthSessionResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_OwnerSteamID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ValidateAuthTicketResponse" },
		{ "ModuleRelativePath", "Public/ValidateAuthTicketResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_OwnerSteamID = { "OwnerSteamID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValidateAuthTicketResponse, OwnerSteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_OwnerSteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_OwnerSteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_AuthSessionResponse_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_AuthSessionResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_OwnerSteamID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"ValidateAuthTicketResponse",
		sizeof(FValidateAuthTicketResponse),
		alignof(FValidateAuthTicketResponse),
		Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FValidateAuthTicketResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ValidateAuthTicketResponse"), sizeof(FValidateAuthTicketResponse), Get_Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Hash() { return 1993256140U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
