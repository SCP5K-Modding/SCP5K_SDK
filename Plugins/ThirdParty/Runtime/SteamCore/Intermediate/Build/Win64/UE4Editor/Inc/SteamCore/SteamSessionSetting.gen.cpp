// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamSessionSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamSessionSetting() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSetting();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FSteamSessionSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamSessionSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamSessionSetting, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamSessionSetting"), sizeof(FSteamSessionSetting), Get_Z_Construct_UScriptStruct_FSteamSessionSetting_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamSessionSetting>()
{
	return FSteamSessionSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamSessionSetting(FSteamSessionSetting::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamSessionSetting"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamSessionSetting
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamSessionSetting()
	{
		UScriptStruct::DeferCppStructOps<FSteamSessionSetting>(FName(TEXT("SteamSessionSetting")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamSessionSetting;
	struct Z_Construct_UScriptStruct_FSteamSessionSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamSessionSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamSessionSetting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamSessionSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamSessionSetting>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamSessionSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamSessionSetting",
		sizeof(FSteamSessionSetting),
		alignof(FSteamSessionSetting),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamSessionSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamSessionSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamSessionSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamSessionSetting"), sizeof(FSteamSessionSetting), Get_Z_Construct_UScriptStruct_FSteamSessionSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamSessionSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamSessionSetting_Hash() { return 1995620186U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
