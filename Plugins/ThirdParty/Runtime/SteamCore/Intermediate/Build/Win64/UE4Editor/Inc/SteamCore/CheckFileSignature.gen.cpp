// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/CheckFileSignature.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckFileSignature() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckFileSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature();
// End Cross Module References
class UScriptStruct* FCheckFileSignature::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FCheckFileSignature_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCheckFileSignature, Z_Construct_UPackage__Script_SteamCore(), TEXT("CheckFileSignature"), sizeof(FCheckFileSignature), Get_Z_Construct_UScriptStruct_FCheckFileSignature_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FCheckFileSignature>()
{
	return FCheckFileSignature::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCheckFileSignature(FCheckFileSignature::StaticStruct, TEXT("/Script/SteamCore"), TEXT("CheckFileSignature"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFCheckFileSignature
{
	FScriptStruct_SteamCore_StaticRegisterNativesFCheckFileSignature()
	{
		UScriptStruct::DeferCppStructOps<FCheckFileSignature>(FName(TEXT("CheckFileSignature")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFCheckFileSignature;
	struct Z_Construct_UScriptStruct_FCheckFileSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CheckFileSignature_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckFileSignature_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CheckFileSignature;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckFileSignature_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CheckFileSignature.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCheckFileSignature>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CheckFileSignature" },
		{ "ModuleRelativePath", "Public/CheckFileSignature.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature = { "CheckFileSignature", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCheckFileSignature, CheckFileSignature), Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCheckFileSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCheckFileSignature_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"CheckFileSignature",
		sizeof(FCheckFileSignature),
		alignof(FCheckFileSignature),
		Z_Construct_UScriptStruct_FCheckFileSignature_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckFileSignature_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckFileSignature_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckFileSignature_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCheckFileSignature()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCheckFileSignature_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CheckFileSignature"), sizeof(FCheckFileSignature), Get_Z_Construct_UScriptStruct_FCheckFileSignature_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCheckFileSignature_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCheckFileSignature_Hash() { return 3080608803U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
