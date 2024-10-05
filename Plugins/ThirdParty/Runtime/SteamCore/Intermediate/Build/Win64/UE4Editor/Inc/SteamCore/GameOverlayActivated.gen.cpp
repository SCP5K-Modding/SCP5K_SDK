// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/GameOverlayActivated.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameOverlayActivated() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameOverlayActivated();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FGameOverlayActivated::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGameOverlayActivated_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameOverlayActivated, Z_Construct_UPackage__Script_SteamCore(), TEXT("GameOverlayActivated"), sizeof(FGameOverlayActivated), Get_Z_Construct_UScriptStruct_FGameOverlayActivated_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGameOverlayActivated>()
{
	return FGameOverlayActivated::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameOverlayActivated(FGameOverlayActivated::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GameOverlayActivated"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGameOverlayActivated
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGameOverlayActivated()
	{
		UScriptStruct::DeferCppStructOps<FGameOverlayActivated>(FName(TEXT("GameOverlayActivated")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGameOverlayActivated;
	struct Z_Construct_UScriptStruct_FGameOverlayActivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameOverlayActivated_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameOverlayActivated.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameOverlayActivated_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameOverlayActivated>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameOverlayActivated_Statics::NewProp_bActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameOverlayActivated" },
		{ "ModuleRelativePath", "Public/GameOverlayActivated.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameOverlayActivated_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((FGameOverlayActivated*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameOverlayActivated_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGameOverlayActivated), &Z_Construct_UScriptStruct_FGameOverlayActivated_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameOverlayActivated_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameOverlayActivated_Statics::NewProp_bActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameOverlayActivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameOverlayActivated_Statics::NewProp_bActive,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameOverlayActivated_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GameOverlayActivated",
		sizeof(FGameOverlayActivated),
		alignof(FGameOverlayActivated),
		Z_Construct_UScriptStruct_FGameOverlayActivated_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameOverlayActivated_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameOverlayActivated_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameOverlayActivated_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameOverlayActivated()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameOverlayActivated_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameOverlayActivated"), sizeof(FGameOverlayActivated), Get_Z_Construct_UScriptStruct_FGameOverlayActivated_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameOverlayActivated_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameOverlayActivated_Hash() { return 2558587295U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
