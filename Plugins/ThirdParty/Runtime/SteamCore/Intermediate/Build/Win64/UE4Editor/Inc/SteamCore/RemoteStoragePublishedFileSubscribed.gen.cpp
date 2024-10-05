// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/RemoteStoragePublishedFileSubscribed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteStoragePublishedFileSubscribed() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
// End Cross Module References
class UScriptStruct* FRemoteStoragePublishedFileSubscribed::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed, Z_Construct_UPackage__Script_SteamCore(), TEXT("RemoteStoragePublishedFileSubscribed"), sizeof(FRemoteStoragePublishedFileSubscribed), Get_Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRemoteStoragePublishedFileSubscribed>()
{
	return FRemoteStoragePublishedFileSubscribed::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemoteStoragePublishedFileSubscribed(FRemoteStoragePublishedFileSubscribed::StaticStruct, TEXT("/Script/SteamCore"), TEXT("RemoteStoragePublishedFileSubscribed"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStoragePublishedFileSubscribed
{
	FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStoragePublishedFileSubscribed()
	{
		UScriptStruct::DeferCppStructOps<FRemoteStoragePublishedFileSubscribed>(FName(TEXT("RemoteStoragePublishedFileSubscribed")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFRemoteStoragePublishedFileSubscribed;
	struct Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RemoteStoragePublishedFileSubscribed.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStoragePublishedFileSubscribed>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_PublishedFileID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemoteStoragePublishedFileSubscribed" },
		{ "ModuleRelativePath", "Public/RemoteStoragePublishedFileSubscribed.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStoragePublishedFileSubscribed, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_PublishedFileID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_PublishedFileID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_AppID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemoteStoragePublishedFileSubscribed" },
		{ "ModuleRelativePath", "Public/RemoteStoragePublishedFileSubscribed.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStoragePublishedFileSubscribed, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_AppID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_AppID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RemoteStoragePublishedFileSubscribed",
		sizeof(FRemoteStoragePublishedFileSubscribed),
		alignof(FRemoteStoragePublishedFileSubscribed),
		Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemoteStoragePublishedFileSubscribed"), sizeof(FRemoteStoragePublishedFileSubscribed), Get_Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Hash() { return 4221676672U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
