// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamInventoryFullUpdate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamInventoryFullUpdate() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryFullUpdate();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryResult();
// End Cross Module References
class UScriptStruct* FSteamInventoryFullUpdate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamInventoryFullUpdate, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamInventoryFullUpdate"), sizeof(FSteamInventoryFullUpdate), Get_Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamInventoryFullUpdate>()
{
	return FSteamInventoryFullUpdate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamInventoryFullUpdate(FSteamInventoryFullUpdate::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamInventoryFullUpdate"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamInventoryFullUpdate
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamInventoryFullUpdate()
	{
		UScriptStruct::DeferCppStructOps<FSteamInventoryFullUpdate>(FName(TEXT("SteamInventoryFullUpdate")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamInventoryFullUpdate;
	struct Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInventoryFullUpdate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamInventoryFullUpdate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::NewProp_Handle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamInventoryFullUpdate" },
		{ "ModuleRelativePath", "Public/SteamInventoryFullUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamInventoryFullUpdate, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::NewProp_Handle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamInventoryFullUpdate",
		sizeof(FSteamInventoryFullUpdate),
		alignof(FSteamInventoryFullUpdate),
		Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryFullUpdate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamInventoryFullUpdate"), sizeof(FSteamInventoryFullUpdate), Get_Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Hash() { return 249159686U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
