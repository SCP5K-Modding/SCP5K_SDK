// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/CurrentDialogue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurrentDialogue() {}
// Cross Module References
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FCurrentDialogue();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogue();
// End Cross Module References
class UScriptStruct* FCurrentDialogue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AISENTIENCE_API uint32 Get_Z_Construct_UScriptStruct_FCurrentDialogue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurrentDialogue, Z_Construct_UPackage__Script_AISentience(), TEXT("CurrentDialogue"), sizeof(FCurrentDialogue), Get_Z_Construct_UScriptStruct_FCurrentDialogue_Hash());
	}
	return Singleton;
}
template<> AISENTIENCE_API UScriptStruct* StaticStruct<FCurrentDialogue>()
{
	return FCurrentDialogue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCurrentDialogue(FCurrentDialogue::StaticStruct, TEXT("/Script/AISentience"), TEXT("CurrentDialogue"), false, nullptr, nullptr);
static struct FScriptStruct_AISentience_StaticRegisterNativesFCurrentDialogue
{
	FScriptStruct_AISentience_StaticRegisterNativesFCurrentDialogue()
	{
		UScriptStruct::DeferCppStructOps<FCurrentDialogue>(FName(TEXT("CurrentDialogue")));
	}
} ScriptStruct_AISentience_StaticRegisterNativesFCurrentDialogue;
	struct Z_Construct_UScriptStruct_FCurrentDialogue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dialogue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DialogueIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasInterrupted_MetaData[];
#endif
		static void NewProp_bWasInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasInterrupted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevRepID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PrevRepID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentDialogue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CurrentDialogue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurrentDialogue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CurrentDialogue" },
		{ "ModuleRelativePath", "Public/CurrentDialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrentDialogue, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_Dialogue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CurrentDialogue" },
		{ "ModuleRelativePath", "Public/CurrentDialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrentDialogue, Dialogue), Z_Construct_UScriptStruct_FDialogue, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_Dialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_Dialogue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_DialogueIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CurrentDialogue" },
		{ "ModuleRelativePath", "Public/CurrentDialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_DialogueIndex = { "DialogueIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrentDialogue, DialogueIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_DialogueIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_DialogueIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_StartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CurrentDialogue" },
		{ "ModuleRelativePath", "Public/CurrentDialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrentDialogue, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_Cooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CurrentDialogue" },
		{ "ModuleRelativePath", "Public/CurrentDialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrentDialogue, Cooldown), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_Cooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_Cooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_bWasInterrupted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CurrentDialogue" },
		{ "ModuleRelativePath", "Public/CurrentDialogue.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_bWasInterrupted_SetBit(void* Obj)
	{
		((FCurrentDialogue*)Obj)->bWasInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_bWasInterrupted = { "bWasInterrupted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCurrentDialogue), &Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_bWasInterrupted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_bWasInterrupted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_bWasInterrupted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_PrevRepID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CurrentDialogue" },
		{ "ModuleRelativePath", "Public/CurrentDialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_PrevRepID = { "PrevRepID", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrentDialogue, PrevRepID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_PrevRepID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_PrevRepID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurrentDialogue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_Dialogue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_DialogueIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_Cooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_bWasInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentDialogue_Statics::NewProp_PrevRepID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurrentDialogue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
		nullptr,
		&NewStructOps,
		"CurrentDialogue",
		sizeof(FCurrentDialogue),
		alignof(FCurrentDialogue),
		Z_Construct_UScriptStruct_FCurrentDialogue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentDialogue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrentDialogue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentDialogue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurrentDialogue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCurrentDialogue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CurrentDialogue"), sizeof(FCurrentDialogue), Get_Z_Construct_UScriptStruct_FCurrentDialogue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCurrentDialogue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCurrentDialogue_Hash() { return 923300514U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
