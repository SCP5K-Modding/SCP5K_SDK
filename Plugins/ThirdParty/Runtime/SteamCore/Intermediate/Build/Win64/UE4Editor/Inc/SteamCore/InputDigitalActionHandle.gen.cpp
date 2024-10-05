// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/InputDigitalActionHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputDigitalActionHandle() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionHandle();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FInputDigitalActionHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FInputDigitalActionHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputDigitalActionHandle, Z_Construct_UPackage__Script_SteamCore(), TEXT("InputDigitalActionHandle"), sizeof(FInputDigitalActionHandle), Get_Z_Construct_UScriptStruct_FInputDigitalActionHandle_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FInputDigitalActionHandle>()
{
	return FInputDigitalActionHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputDigitalActionHandle(FInputDigitalActionHandle::StaticStruct, TEXT("/Script/SteamCore"), TEXT("InputDigitalActionHandle"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFInputDigitalActionHandle
{
	FScriptStruct_SteamCore_StaticRegisterNativesFInputDigitalActionHandle()
	{
		UScriptStruct::DeferCppStructOps<FInputDigitalActionHandle>(FName(TEXT("InputDigitalActionHandle")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFInputDigitalActionHandle;
	struct Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InputDigitalActionHandle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputDigitalActionHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"InputDigitalActionHandle",
		sizeof(FInputDigitalActionHandle),
		alignof(FInputDigitalActionHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputDigitalActionHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputDigitalActionHandle"), sizeof(FInputDigitalActionHandle), Get_Z_Construct_UScriptStruct_FInputDigitalActionHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputDigitalActionHandle_Hash() { return 3479565873U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
