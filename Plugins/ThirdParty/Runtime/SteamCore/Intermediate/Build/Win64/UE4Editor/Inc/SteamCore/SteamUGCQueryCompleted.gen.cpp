// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamUGCQueryCompleted.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamUGCQueryCompleted() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCQueryCompleted();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUGCQueryHandle();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
// End Cross Module References
class UScriptStruct* FSteamUGCQueryCompleted::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamUGCQueryCompleted, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamUGCQueryCompleted"), sizeof(FSteamUGCQueryCompleted), Get_Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamUGCQueryCompleted>()
{
	return FSteamUGCQueryCompleted::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamUGCQueryCompleted(FSteamUGCQueryCompleted::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamUGCQueryCompleted"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamUGCQueryCompleted
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamUGCQueryCompleted()
	{
		UScriptStruct::DeferCppStructOps<FSteamUGCQueryCompleted>(FName(TEXT("SteamUGCQueryCompleted")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamUGCQueryCompleted;
	struct Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumResultsReturned_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumResultsReturned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalMatchingResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalMatchingResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCachedData_MetaData[];
#endif
		static void NewProp_bCachedData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCachedData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUGCQueryCompleted.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamUGCQueryCompleted>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_Handle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCQueryCompleted" },
		{ "ModuleRelativePath", "Public/SteamUGCQueryCompleted.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCQueryCompleted, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCQueryCompleted" },
		{ "ModuleRelativePath", "Public/SteamUGCQueryCompleted.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCQueryCompleted, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_NumResultsReturned_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCQueryCompleted" },
		{ "ModuleRelativePath", "Public/SteamUGCQueryCompleted.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_NumResultsReturned = { "NumResultsReturned", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCQueryCompleted, NumResultsReturned), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_NumResultsReturned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_NumResultsReturned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_TotalMatchingResults_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCQueryCompleted" },
		{ "ModuleRelativePath", "Public/SteamUGCQueryCompleted.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_TotalMatchingResults = { "TotalMatchingResults", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCQueryCompleted, TotalMatchingResults), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_TotalMatchingResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_TotalMatchingResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_bCachedData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCQueryCompleted" },
		{ "ModuleRelativePath", "Public/SteamUGCQueryCompleted.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_bCachedData_SetBit(void* Obj)
	{
		((FSteamUGCQueryCompleted*)Obj)->bCachedData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_bCachedData = { "bCachedData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSteamUGCQueryCompleted), &Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_bCachedData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_bCachedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_bCachedData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_NumResultsReturned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_TotalMatchingResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::NewProp_bCachedData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamUGCQueryCompleted",
		sizeof(FSteamUGCQueryCompleted),
		alignof(FSteamUGCQueryCompleted),
		Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCQueryCompleted()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamUGCQueryCompleted"), sizeof(FSteamUGCQueryCompleted), Get_Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamUGCQueryCompleted_Hash() { return 3525145071U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
