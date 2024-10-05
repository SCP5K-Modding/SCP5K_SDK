// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamTicketHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamTicketHandle() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FSteamTicketHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamTicketHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamTicketHandle, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamTicketHandle"), sizeof(FSteamTicketHandle), Get_Z_Construct_UScriptStruct_FSteamTicketHandle_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamTicketHandle>()
{
	return FSteamTicketHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamTicketHandle(FSteamTicketHandle::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamTicketHandle"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamTicketHandle
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamTicketHandle()
	{
		UScriptStruct::DeferCppStructOps<FSteamTicketHandle>(FName(TEXT("SteamTicketHandle")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamTicketHandle;
	struct Z_Construct_UScriptStruct_FSteamTicketHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamTicketHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamTicketHandle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamTicketHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamTicketHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamTicketHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamTicketHandle",
		sizeof(FSteamTicketHandle),
		alignof(FSteamTicketHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamTicketHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamTicketHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamTicketHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamTicketHandle"), sizeof(FSteamTicketHandle), Get_Z_Construct_UScriptStruct_FSteamTicketHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamTicketHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamTicketHandle_Hash() { return 36232892U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
