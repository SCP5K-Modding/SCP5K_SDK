// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSteamSessions/Public/BPSteamGroupOfficer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPSteamGroupOfficer() {}
// Cross Module References
	ADVANCEDSTEAMSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPSteamGroupOfficer();
	UPackage* Z_Construct_UPackage__Script_AdvancedSteamSessions();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
// End Cross Module References
class UScriptStruct* FBPSteamGroupOfficer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSTEAMSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPSteamGroupOfficer, Z_Construct_UPackage__Script_AdvancedSteamSessions(), TEXT("BPSteamGroupOfficer"), sizeof(FBPSteamGroupOfficer), Get_Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Hash());
	}
	return Singleton;
}
template<> ADVANCEDSTEAMSESSIONS_API UScriptStruct* StaticStruct<FBPSteamGroupOfficer>()
{
	return FBPSteamGroupOfficer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPSteamGroupOfficer(FBPSteamGroupOfficer::StaticStruct, TEXT("/Script/AdvancedSteamSessions"), TEXT("BPSteamGroupOfficer"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamGroupOfficer
{
	FScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamGroupOfficer()
	{
		UScriptStruct::DeferCppStructOps<FBPSteamGroupOfficer>(FName(TEXT("BPSteamGroupOfficer")));
	}
} ScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamGroupOfficer;
	struct Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfficerUniqueNetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OfficerUniqueNetID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOwner_MetaData[];
#endif
		static void NewProp_bIsOwner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BPSteamGroupOfficer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPSteamGroupOfficer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_OfficerUniqueNetID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamGroupOfficer" },
		{ "ModuleRelativePath", "Public/BPSteamGroupOfficer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_OfficerUniqueNetID = { "OfficerUniqueNetID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSteamGroupOfficer, OfficerUniqueNetID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_OfficerUniqueNetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_OfficerUniqueNetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_bIsOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamGroupOfficer" },
		{ "ModuleRelativePath", "Public/BPSteamGroupOfficer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_bIsOwner_SetBit(void* Obj)
	{
		((FBPSteamGroupOfficer*)Obj)->bIsOwner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_bIsOwner = { "bIsOwner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPSteamGroupOfficer), &Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_bIsOwner_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_bIsOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_bIsOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_OfficerUniqueNetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_bIsOwner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
		nullptr,
		&NewStructOps,
		"BPSteamGroupOfficer",
		sizeof(FBPSteamGroupOfficer),
		alignof(FBPSteamGroupOfficer),
		Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPSteamGroupOfficer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSteamSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPSteamGroupOfficer"), sizeof(FBPSteamGroupOfficer), Get_Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Hash() { return 4008088111U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
