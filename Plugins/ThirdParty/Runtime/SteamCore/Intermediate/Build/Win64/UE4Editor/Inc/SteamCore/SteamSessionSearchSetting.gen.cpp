// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamSessionSearchSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamSessionSearchSetting() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSearchSetting();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FSteamSessionSearchSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamSessionSearchSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamSessionSearchSetting, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamSessionSearchSetting"), sizeof(FSteamSessionSearchSetting), Get_Z_Construct_UScriptStruct_FSteamSessionSearchSetting_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamSessionSearchSetting>()
{
	return FSteamSessionSearchSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamSessionSearchSetting(FSteamSessionSearchSetting::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamSessionSearchSetting"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamSessionSearchSetting
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamSessionSearchSetting()
	{
		UScriptStruct::DeferCppStructOps<FSteamSessionSearchSetting>(FName(TEXT("SteamSessionSearchSetting")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamSessionSearchSetting;
	struct Z_Construct_UScriptStruct_FSteamSessionSearchSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamSessionSearchSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamSessionSearchSetting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamSessionSearchSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamSessionSearchSetting>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamSessionSearchSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamSessionSearchSetting",
		sizeof(FSteamSessionSearchSetting),
		alignof(FSteamSessionSearchSetting),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamSessionSearchSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamSessionSearchSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSearchSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamSessionSearchSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamSessionSearchSetting"), sizeof(FSteamSessionSearchSetting), Get_Z_Construct_UScriptStruct_FSteamSessionSearchSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamSessionSearchSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamSessionSearchSetting_Hash() { return 1831246803U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
