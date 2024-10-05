// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/RemoteStorageFileReadAsyncComplete.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteStorageFileReadAsyncComplete() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
// End Cross Module References
class UScriptStruct* FRemoteStorageFileReadAsyncComplete::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete, Z_Construct_UPackage__Script_SteamCore(), TEXT("RemoteStorageFileReadAsyncComplete"), sizeof(FRemoteStorageFileReadAsyncComplete), Get_Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRemoteStorageFileReadAsyncComplete>()
{
	return FRemoteStorageFileReadAsyncComplete::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemoteStorageFileReadAsyncComplete(FRemoteStorageFileReadAsyncComplete::StaticStruct, TEXT("/Script/SteamCore"), TEXT("RemoteStorageFileReadAsyncComplete"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageFileReadAsyncComplete
{
	FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageFileReadAsyncComplete()
	{
		UScriptStruct::DeferCppStructOps<FRemoteStorageFileReadAsyncComplete>(FName(TEXT("RemoteStorageFileReadAsyncComplete")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageFileReadAsyncComplete;
	struct Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Read_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Read;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RemoteStorageFileReadAsyncComplete.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStorageFileReadAsyncComplete>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemoteStorageFileReadAsyncComplete" },
		{ "ModuleRelativePath", "Public/RemoteStorageFileReadAsyncComplete.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageFileReadAsyncComplete, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemoteStorageFileReadAsyncComplete" },
		{ "ModuleRelativePath", "Public/RemoteStorageFileReadAsyncComplete.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageFileReadAsyncComplete, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Read_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemoteStorageFileReadAsyncComplete" },
		{ "ModuleRelativePath", "Public/RemoteStorageFileReadAsyncComplete.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Read = { "Read", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageFileReadAsyncComplete, Read), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Read_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Read_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Read,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RemoteStorageFileReadAsyncComplete",
		sizeof(FRemoteStorageFileReadAsyncComplete),
		alignof(FRemoteStorageFileReadAsyncComplete),
		Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemoteStorageFileReadAsyncComplete"), sizeof(FRemoteStorageFileReadAsyncComplete), Get_Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Hash() { return 431570909U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
