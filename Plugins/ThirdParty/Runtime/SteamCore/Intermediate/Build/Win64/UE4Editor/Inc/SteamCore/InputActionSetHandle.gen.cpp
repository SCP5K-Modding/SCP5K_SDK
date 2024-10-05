// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/InputActionSetHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputActionSetHandle() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionSetHandle();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FInputActionSetHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FInputActionSetHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionSetHandle, Z_Construct_UPackage__Script_SteamCore(), TEXT("InputActionSetHandle"), sizeof(FInputActionSetHandle), Get_Z_Construct_UScriptStruct_FInputActionSetHandle_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FInputActionSetHandle>()
{
	return FInputActionSetHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputActionSetHandle(FInputActionSetHandle::StaticStruct, TEXT("/Script/SteamCore"), TEXT("InputActionSetHandle"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFInputActionSetHandle
{
	FScriptStruct_SteamCore_StaticRegisterNativesFInputActionSetHandle()
	{
		UScriptStruct::DeferCppStructOps<FInputActionSetHandle>(FName(TEXT("InputActionSetHandle")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFInputActionSetHandle;
	struct Z_Construct_UScriptStruct_FInputActionSetHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InputActionSetHandle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionSetHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"InputActionSetHandle",
		sizeof(FInputActionSetHandle),
		alignof(FInputActionSetHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputActionSetHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputActionSetHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputActionSetHandle"), sizeof(FInputActionSetHandle), Get_Z_Construct_UScriptStruct_FInputActionSetHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputActionSetHandle_Hash() { return 657371857U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
