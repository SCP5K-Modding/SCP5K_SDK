// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/DialogueLine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueLine() {}
// Cross Module References
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueLine();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
class UScriptStruct* FDialogueLine::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AISENTIENCE_API uint32 Get_Z_Construct_UScriptStruct_FDialogueLine_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueLine, Z_Construct_UPackage__Script_AISentience(), TEXT("DialogueLine"), sizeof(FDialogueLine), Get_Z_Construct_UScriptStruct_FDialogueLine_Hash());
	}
	return Singleton;
}
template<> AISENTIENCE_API UScriptStruct* StaticStruct<FDialogueLine>()
{
	return FDialogueLine::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDialogueLine(FDialogueLine::StaticStruct, TEXT("/Script/AISentience"), TEXT("DialogueLine"), false, nullptr, nullptr);
static struct FScriptStruct_AISentience_StaticRegisterNativesFDialogueLine
{
	FScriptStruct_AISentience_StaticRegisterNativesFDialogueLine()
	{
		UScriptStruct::DeferCppStructOps<FDialogueLine>(FName(TEXT("DialogueLine")));
	}
} ScriptStruct_AISentience_StaticRegisterNativesFDialogueLine;
	struct Z_Construct_UScriptStruct_FDialogueLine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TalkingDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TalkingDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinalDialogueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FinalDialogueID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLine_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DialogueLine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueLine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueLine>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Text_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueLine" },
		{ "ModuleRelativePath", "Public/DialogueLine.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueLine, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_TalkingDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueLine" },
		{ "ModuleRelativePath", "Public/DialogueLine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_TalkingDuration = { "TalkingDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueLine, TalkingDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_TalkingDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_TalkingDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Cooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueLine" },
		{ "ModuleRelativePath", "Public/DialogueLine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueLine, Cooldown), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Cooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Cooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_FinalDialogueID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueLine" },
		{ "ModuleRelativePath", "Public/DialogueLine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_FinalDialogueID = { "FinalDialogueID", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueLine, FinalDialogueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_FinalDialogueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_FinalDialogueID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_TalkingDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Cooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_FinalDialogueID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueLine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
		nullptr,
		&NewStructOps,
		"DialogueLine",
		sizeof(FDialogueLine),
		alignof(FDialogueLine),
		Z_Construct_UScriptStruct_FDialogueLine_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueLine_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueLine()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDialogueLine_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DialogueLine"), sizeof(FDialogueLine), Get_Z_Construct_UScriptStruct_FDialogueLine_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDialogueLine_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDialogueLine_Hash() { return 969002308U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
