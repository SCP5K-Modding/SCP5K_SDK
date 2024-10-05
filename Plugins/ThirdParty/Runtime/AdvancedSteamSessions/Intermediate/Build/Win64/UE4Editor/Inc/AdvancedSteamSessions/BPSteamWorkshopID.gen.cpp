// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSteamSessions/Public/BPSteamWorkshopID.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPSteamWorkshopID() {}
// Cross Module References
	ADVANCEDSTEAMSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPSteamWorkshopID();
	UPackage* Z_Construct_UPackage__Script_AdvancedSteamSessions();
// End Cross Module References
class UScriptStruct* FBPSteamWorkshopID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSTEAMSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPSteamWorkshopID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPSteamWorkshopID, Z_Construct_UPackage__Script_AdvancedSteamSessions(), TEXT("BPSteamWorkshopID"), sizeof(FBPSteamWorkshopID), Get_Z_Construct_UScriptStruct_FBPSteamWorkshopID_Hash());
	}
	return Singleton;
}
template<> ADVANCEDSTEAMSESSIONS_API UScriptStruct* StaticStruct<FBPSteamWorkshopID>()
{
	return FBPSteamWorkshopID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPSteamWorkshopID(FBPSteamWorkshopID::StaticStruct, TEXT("/Script/AdvancedSteamSessions"), TEXT("BPSteamWorkshopID"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamWorkshopID
{
	FScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamWorkshopID()
	{
		UScriptStruct::DeferCppStructOps<FBPSteamWorkshopID>(FName(TEXT("BPSteamWorkshopID")));
	}
} ScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamWorkshopID;
	struct Z_Construct_UScriptStruct_FBPSteamWorkshopID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BPSteamWorkshopID.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPSteamWorkshopID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPSteamWorkshopID>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPSteamWorkshopID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
		nullptr,
		&NewStructOps,
		"BPSteamWorkshopID",
		sizeof(FBPSteamWorkshopID),
		alignof(FBPSteamWorkshopID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamWorkshopID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPSteamWorkshopID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPSteamWorkshopID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSteamSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPSteamWorkshopID"), sizeof(FBPSteamWorkshopID), Get_Z_Construct_UScriptStruct_FBPSteamWorkshopID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPSteamWorkshopID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPSteamWorkshopID_Hash() { return 1472676214U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
