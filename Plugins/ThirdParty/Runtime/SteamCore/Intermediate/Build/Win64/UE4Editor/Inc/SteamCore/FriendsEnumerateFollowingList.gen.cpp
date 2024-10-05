// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/FriendsEnumerateFollowingList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriendsEnumerateFollowingList() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FFriendsEnumerateFollowingList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList, Z_Construct_UPackage__Script_SteamCore(), TEXT("FriendsEnumerateFollowingList"), sizeof(FFriendsEnumerateFollowingList), Get_Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FFriendsEnumerateFollowingList>()
{
	return FFriendsEnumerateFollowingList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFriendsEnumerateFollowingList(FFriendsEnumerateFollowingList::StaticStruct, TEXT("/Script/SteamCore"), TEXT("FriendsEnumerateFollowingList"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFFriendsEnumerateFollowingList
{
	FScriptStruct_SteamCore_StaticRegisterNativesFFriendsEnumerateFollowingList()
	{
		UScriptStruct::DeferCppStructOps<FFriendsEnumerateFollowingList>(FName(TEXT("FriendsEnumerateFollowingList")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFFriendsEnumerateFollowingList;
	struct Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SteamIDs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Results;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FriendsEnumerateFollowingList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFriendsEnumerateFollowingList>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FriendsEnumerateFollowingList" },
		{ "ModuleRelativePath", "Public/FriendsEnumerateFollowingList.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFriendsEnumerateFollowingList, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_SteamIDs_Inner = { "SteamIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_SteamIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FriendsEnumerateFollowingList" },
		{ "ModuleRelativePath", "Public/FriendsEnumerateFollowingList.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_SteamIDs = { "SteamIDs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFriendsEnumerateFollowingList, SteamIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_SteamIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_SteamIDs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_Results_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FriendsEnumerateFollowingList" },
		{ "ModuleRelativePath", "Public/FriendsEnumerateFollowingList.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFriendsEnumerateFollowingList, Results), METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_Results_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_TotalResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FriendsEnumerateFollowingList" },
		{ "ModuleRelativePath", "Public/FriendsEnumerateFollowingList.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_TotalResult = { "TotalResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFriendsEnumerateFollowingList, TotalResult), METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_TotalResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_TotalResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_SteamIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_SteamIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_Results,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::NewProp_TotalResult,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"FriendsEnumerateFollowingList",
		sizeof(FFriendsEnumerateFollowingList),
		alignof(FFriendsEnumerateFollowingList),
		Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FriendsEnumerateFollowingList"), sizeof(FFriendsEnumerateFollowingList), Get_Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList_Hash() { return 2391472301U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
