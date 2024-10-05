// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ClanOfficerListResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClanOfficerListResponse() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FClanOfficerListResponse();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FClanOfficerListResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FClanOfficerListResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClanOfficerListResponse, Z_Construct_UPackage__Script_SteamCore(), TEXT("ClanOfficerListResponse"), sizeof(FClanOfficerListResponse), Get_Z_Construct_UScriptStruct_FClanOfficerListResponse_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FClanOfficerListResponse>()
{
	return FClanOfficerListResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClanOfficerListResponse(FClanOfficerListResponse::StaticStruct, TEXT("/Script/SteamCore"), TEXT("ClanOfficerListResponse"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFClanOfficerListResponse
{
	FScriptStruct_SteamCore_StaticRegisterNativesFClanOfficerListResponse()
	{
		UScriptStruct::DeferCppStructOps<FClanOfficerListResponse>(FName(TEXT("ClanOfficerListResponse")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFClanOfficerListResponse;
	struct Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDClan_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Officers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Officers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClanOfficerListResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClanOfficerListResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::NewProp_SteamIDClan_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClanOfficerListResponse" },
		{ "ModuleRelativePath", "Public/ClanOfficerListResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClanOfficerListResponse, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::NewProp_SteamIDClan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::NewProp_SteamIDClan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::NewProp_Officers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClanOfficerListResponse" },
		{ "ModuleRelativePath", "Public/ClanOfficerListResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::NewProp_Officers = { "Officers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClanOfficerListResponse, Officers), METADATA_PARAMS(Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::NewProp_Officers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::NewProp_Officers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::NewProp_bSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClanOfficerListResponse" },
		{ "ModuleRelativePath", "Public/ClanOfficerListResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FClanOfficerListResponse*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FClanOfficerListResponse), &Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::NewProp_bSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::NewProp_SteamIDClan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::NewProp_Officers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::NewProp_bSuccess,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"ClanOfficerListResponse",
		sizeof(FClanOfficerListResponse),
		alignof(FClanOfficerListResponse),
		Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClanOfficerListResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClanOfficerListResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClanOfficerListResponse"), sizeof(FClanOfficerListResponse), Get_Z_Construct_UScriptStruct_FClanOfficerListResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClanOfficerListResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClanOfficerListResponse_Hash() { return 288320057U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
