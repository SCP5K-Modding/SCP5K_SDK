// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/Dialogue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogue() {}
// Cross Module References
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogue();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_EDialogueType();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_EMoraleLevelType();
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueLine();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_EDialoguePriorityType();
// End Cross Module References

static_assert(std::is_polymorphic<FDialogue>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDialogue cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FDialogue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AISENTIENCE_API uint32 Get_Z_Construct_UScriptStruct_FDialogue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogue, Z_Construct_UPackage__Script_AISentience(), TEXT("Dialogue"), sizeof(FDialogue), Get_Z_Construct_UScriptStruct_FDialogue_Hash());
	}
	return Singleton;
}
template<> AISENTIENCE_API UScriptStruct* StaticStruct<FDialogue>()
{
	return FDialogue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDialogue(FDialogue::StaticStruct, TEXT("/Script/AISentience"), TEXT("Dialogue"), false, nullptr, nullptr);
static struct FScriptStruct_AISentience_StaticRegisterNativesFDialogue
{
	FScriptStruct_AISentience_StaticRegisterNativesFDialogue()
	{
		UScriptStruct::DeferCppStructOps<FDialogue>(FName(TEXT("Dialogue")));
	}
} ScriptStruct_AISentience_StaticRegisterNativesFDialogue;
	struct Z_Construct_UScriptStruct_FDialogue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DialogueType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DialogueType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoraleLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoraleLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoraleLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AudioID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Lines_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Lines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_line_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_line;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudibleDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AudibleDistance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PriorityType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriorityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PriorityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxWaitTime;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InstigatingIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatingIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstigatingIDs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseChanceToRespond_MetaData[];
#endif
		static void NewProp_bUseChanceToRespond_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseChanceToRespond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChanceToRespond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChanceToRespond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogue>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueType = { "DialogueType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogue, DialogueType), Z_Construct_UEnum_AISentience_EDialogueType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_MoraleLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_MoraleLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_MoraleLevel = { "MoraleLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogue, MoraleLevel), Z_Construct_UEnum_AISentience_EMoraleLevelType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_MoraleLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_MoraleLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_AudioID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_AudioID = { "AudioID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogue, AudioID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_AudioID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_AudioID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_Lines_Inner = { "Lines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_Lines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_Lines = { "Lines", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogue, Lines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_Lines_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_Lines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_line_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_line = { "line", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogue, line), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_line_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_line_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_AudibleDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_AudibleDistance = { "AudibleDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogue, AudibleDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_AudibleDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_AudibleDistance_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_PriorityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_PriorityType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_PriorityType = { "PriorityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogue, PriorityType), Z_Construct_UEnum_AISentience_EDialoguePriorityType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_PriorityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_PriorityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogue, Priority), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_MaxWaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_MaxWaitTime = { "MaxWaitTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogue, MaxWaitTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_MaxWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_MaxWaitTime_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_InstigatingIDs_Inner = { "InstigatingIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_InstigatingIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_InstigatingIDs = { "InstigatingIDs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogue, InstigatingIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_InstigatingIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_InstigatingIDs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_bUseChanceToRespond_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_bUseChanceToRespond_SetBit(void* Obj)
	{
		((FDialogue*)Obj)->bUseChanceToRespond = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_bUseChanceToRespond = { "bUseChanceToRespond", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDialogue), &Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_bUseChanceToRespond_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_bUseChanceToRespond_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_bUseChanceToRespond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_ChanceToRespond_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_ChanceToRespond = { "ChanceToRespond", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogue, ChanceToRespond), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_ChanceToRespond_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_ChanceToRespond_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_MoraleLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_MoraleLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_AudioID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_Lines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_Lines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_line,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_AudibleDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_PriorityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_PriorityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_MaxWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_InstigatingIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_InstigatingIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_bUseChanceToRespond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_ChanceToRespond,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Dialogue",
		sizeof(FDialogue),
		alignof(FDialogue),
		Z_Construct_UScriptStruct_FDialogue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDialogue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Dialogue"), sizeof(FDialogue), Get_Z_Construct_UScriptStruct_FDialogue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDialogue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDialogue_Hash() { return 3390183158U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
