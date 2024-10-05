// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/GSClientApprove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSClientApprove() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGSClientApprove();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FGSClientApprove::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGSClientApprove_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSClientApprove, Z_Construct_UPackage__Script_SteamCore(), TEXT("GSClientApprove"), sizeof(FGSClientApprove), Get_Z_Construct_UScriptStruct_FGSClientApprove_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGSClientApprove>()
{
	return FGSClientApprove::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGSClientApprove(FGSClientApprove::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GSClientApprove"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGSClientApprove
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGSClientApprove()
	{
		UScriptStruct::DeferCppStructOps<FGSClientApprove>(FName(TEXT("GSClientApprove")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGSClientApprove;
	struct Z_Construct_UScriptStruct_FGSClientApprove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerSteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OwnerSteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientApprove_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GSClientApprove.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSClientApprove>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_SteamID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GSClientApprove" },
		{ "ModuleRelativePath", "Public/GSClientApprove.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSClientApprove, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_OwnerSteamID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GSClientApprove" },
		{ "ModuleRelativePath", "Public/GSClientApprove.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_OwnerSteamID = { "OwnerSteamID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSClientApprove, OwnerSteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_OwnerSteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_OwnerSteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSClientApprove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_OwnerSteamID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSClientApprove_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GSClientApprove",
		sizeof(FGSClientApprove),
		alignof(FGSClientApprove),
		Z_Construct_UScriptStruct_FGSClientApprove_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientApprove_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientApprove_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientApprove_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSClientApprove()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGSClientApprove_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GSClientApprove"), sizeof(FGSClientApprove), Get_Z_Construct_UScriptStruct_FGSClientApprove_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGSClientApprove_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGSClientApprove_Hash() { return 4089869104U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
