// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/RemoteStoragePublishedFileUnsubscribed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteStoragePublishedFileUnsubscribed() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
// End Cross Module References
class UScriptStruct* FRemoteStoragePublishedFileUnsubscribed::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed, Z_Construct_UPackage__Script_SteamCore(), TEXT("RemoteStoragePublishedFileUnsubscribed"), sizeof(FRemoteStoragePublishedFileUnsubscribed), Get_Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRemoteStoragePublishedFileUnsubscribed>()
{
	return FRemoteStoragePublishedFileUnsubscribed::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed(FRemoteStoragePublishedFileUnsubscribed::StaticStruct, TEXT("/Script/SteamCore"), TEXT("RemoteStoragePublishedFileUnsubscribed"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStoragePublishedFileUnsubscribed
{
	FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStoragePublishedFileUnsubscribed()
	{
		UScriptStruct::DeferCppStructOps<FRemoteStoragePublishedFileUnsubscribed>(FName(TEXT("RemoteStoragePublishedFileUnsubscribed")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFRemoteStoragePublishedFileUnsubscribed;
	struct Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublishedFileID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RemoteStoragePublishedFileUnsubscribed.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStoragePublishedFileUnsubscribed>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_PublishedFileID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemoteStoragePublishedFileUnsubscribed" },
		{ "ModuleRelativePath", "Public/RemoteStoragePublishedFileUnsubscribed.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStoragePublishedFileUnsubscribed, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_PublishedFileID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_PublishedFileID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_AppID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemoteStoragePublishedFileUnsubscribed" },
		{ "ModuleRelativePath", "Public/RemoteStoragePublishedFileUnsubscribed.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStoragePublishedFileUnsubscribed, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_AppID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_AppID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RemoteStoragePublishedFileUnsubscribed",
		sizeof(FRemoteStoragePublishedFileUnsubscribed),
		alignof(FRemoteStoragePublishedFileUnsubscribed),
		Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemoteStoragePublishedFileUnsubscribed"), sizeof(FRemoteStoragePublishedFileUnsubscribed), Get_Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Hash() { return 4064996641U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
