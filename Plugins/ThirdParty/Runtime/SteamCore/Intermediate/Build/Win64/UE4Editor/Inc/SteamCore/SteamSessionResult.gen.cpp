// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamSessionResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamSessionResult() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionResult();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSetting();
// End Cross Module References
class UScriptStruct* FSteamSessionResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamSessionResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamSessionResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamSessionResult"), sizeof(FSteamSessionResult), Get_Z_Construct_UScriptStruct_FSteamSessionResult_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamSessionResult>()
{
	return FSteamSessionResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamSessionResult(FSteamSessionResult::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamSessionResult"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamSessionResult
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamSessionResult()
	{
		UScriptStruct::DeferCppStructOps<FSteamSessionResult>(FName(TEXT("SteamSessionResult")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamSessionResult;
	struct Z_Construct_UScriptStruct_FSteamSessionResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SessionSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamSessionResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamSessionResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamSessionResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamSessionResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamSessionResult_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamSessionResult" },
		{ "ModuleRelativePath", "Public/SteamSessionResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamSessionResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamSessionResult, Result), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamSessionResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamSessionResult_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamSessionResult_Statics::NewProp_SessionSettings_Inner = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamSessionResult_Statics::NewProp_SessionSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamSessionResult" },
		{ "ModuleRelativePath", "Public/SteamSessionResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSteamSessionResult_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamSessionResult, SessionSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamSessionResult_Statics::NewProp_SessionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamSessionResult_Statics::NewProp_SessionSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamSessionResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamSessionResult_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamSessionResult_Statics::NewProp_SessionSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamSessionResult_Statics::NewProp_SessionSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamSessionResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamSessionResult",
		sizeof(FSteamSessionResult),
		alignof(FSteamSessionResult),
		Z_Construct_UScriptStruct_FSteamSessionResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamSessionResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamSessionResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamSessionResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamSessionResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamSessionResult"), sizeof(FSteamSessionResult), Get_Z_Construct_UScriptStruct_FSteamSessionResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamSessionResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamSessionResult_Hash() { return 2371813263U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
