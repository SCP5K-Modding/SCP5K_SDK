// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/AIVoiceLines.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIVoiceLines() {}
// Cross Module References
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FAIVoiceLines();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAIVoiceLines>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAIVoiceLines cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FAIVoiceLines::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AISENTIENCE_API uint32 Get_Z_Construct_UScriptStruct_FAIVoiceLines_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIVoiceLines, Z_Construct_UPackage__Script_AISentience(), TEXT("AIVoiceLines"), sizeof(FAIVoiceLines), Get_Z_Construct_UScriptStruct_FAIVoiceLines_Hash());
	}
	return Singleton;
}
template<> AISENTIENCE_API UScriptStruct* StaticStruct<FAIVoiceLines>()
{
	return FAIVoiceLines::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIVoiceLines(FAIVoiceLines::StaticStruct, TEXT("/Script/AISentience"), TEXT("AIVoiceLines"), false, nullptr, nullptr);
static struct FScriptStruct_AISentience_StaticRegisterNativesFAIVoiceLines
{
	FScriptStruct_AISentience_StaticRegisterNativesFAIVoiceLines()
	{
		UScriptStruct::DeferCppStructOps<FAIVoiceLines>(FName(TEXT("AIVoiceLines")));
	}
} ScriptStruct_AISentience_StaticRegisterNativesFAIVoiceLines;
	struct Z_Construct_UScriptStruct_FAIVoiceLines_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Calm_Idle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Calm_Idle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Calm_HearNoise_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Calm_HearNoise;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Calm_HearNoise_Reply_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Calm_HearNoise_Reply;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Calm_HearThreatNoise_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Calm_HearThreatNoise;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Calm_StartInvestigate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Calm_StartInvestigate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Calm_EndInvestigate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Calm_EndInvestigate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Calm_Patrol_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Calm_Patrol;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIVoiceLines_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AIVoiceLines.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIVoiceLines>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_Idle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIVoiceLines" },
		{ "ModuleRelativePath", "Public/AIVoiceLines.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_Idle = { "Calm_Idle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIVoiceLines, Calm_Idle), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_Idle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_Idle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_HearNoise_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIVoiceLines" },
		{ "ModuleRelativePath", "Public/AIVoiceLines.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_HearNoise = { "Calm_HearNoise", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIVoiceLines, Calm_HearNoise), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_HearNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_HearNoise_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_HearNoise_Reply_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIVoiceLines" },
		{ "ModuleRelativePath", "Public/AIVoiceLines.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_HearNoise_Reply = { "Calm_HearNoise_Reply", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIVoiceLines, Calm_HearNoise_Reply), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_HearNoise_Reply_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_HearNoise_Reply_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_HearThreatNoise_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIVoiceLines" },
		{ "ModuleRelativePath", "Public/AIVoiceLines.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_HearThreatNoise = { "Calm_HearThreatNoise", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIVoiceLines, Calm_HearThreatNoise), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_HearThreatNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_HearThreatNoise_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_StartInvestigate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIVoiceLines" },
		{ "ModuleRelativePath", "Public/AIVoiceLines.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_StartInvestigate = { "Calm_StartInvestigate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIVoiceLines, Calm_StartInvestigate), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_StartInvestigate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_StartInvestigate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_EndInvestigate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIVoiceLines" },
		{ "ModuleRelativePath", "Public/AIVoiceLines.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_EndInvestigate = { "Calm_EndInvestigate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIVoiceLines, Calm_EndInvestigate), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_EndInvestigate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_EndInvestigate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_Patrol_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIVoiceLines" },
		{ "ModuleRelativePath", "Public/AIVoiceLines.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_Patrol = { "Calm_Patrol", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIVoiceLines, Calm_Patrol), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_Patrol_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_Patrol_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIVoiceLines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_Idle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_HearNoise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_HearNoise_Reply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_HearThreatNoise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_StartInvestigate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_EndInvestigate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIVoiceLines_Statics::NewProp_Calm_Patrol,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIVoiceLines_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AIVoiceLines",
		sizeof(FAIVoiceLines),
		alignof(FAIVoiceLines),
		Z_Construct_UScriptStruct_FAIVoiceLines_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVoiceLines_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIVoiceLines_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVoiceLines_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIVoiceLines()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIVoiceLines_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIVoiceLines"), sizeof(FAIVoiceLines), Get_Z_Construct_UScriptStruct_FAIVoiceLines_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIVoiceLines_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIVoiceLines_Hash() { return 1166001519U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
