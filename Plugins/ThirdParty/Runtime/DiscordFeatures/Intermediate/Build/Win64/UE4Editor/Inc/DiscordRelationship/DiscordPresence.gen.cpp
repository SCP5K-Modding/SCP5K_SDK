// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordRelationship/Public/DiscordPresence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordPresence() {}
// Cross Module References
	DISCORDRELATIONSHIP_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordPresence();
	UPackage* Z_Construct_UPackage__Script_DiscordRelationship();
	DISCORDRELATIONSHIP_API UEnum* Z_Construct_UEnum_DiscordRelationship_EDiscordStatus();
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordActivity();
// End Cross Module References
class UScriptStruct* FDiscordPresence::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDRELATIONSHIP_API uint32 Get_Z_Construct_UScriptStruct_FDiscordPresence_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordPresence, Z_Construct_UPackage__Script_DiscordRelationship(), TEXT("DiscordPresence"), sizeof(FDiscordPresence), Get_Z_Construct_UScriptStruct_FDiscordPresence_Hash());
	}
	return Singleton;
}
template<> DISCORDRELATIONSHIP_API UScriptStruct* StaticStruct<FDiscordPresence>()
{
	return FDiscordPresence::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordPresence(FDiscordPresence::StaticStruct, TEXT("/Script/DiscordRelationship"), TEXT("DiscordPresence"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordRelationship_StaticRegisterNativesFDiscordPresence
{
	FScriptStruct_DiscordRelationship_StaticRegisterNativesFDiscordPresence()
	{
		UScriptStruct::DeferCppStructOps<FDiscordPresence>(FName(TEXT("DiscordPresence")));
	}
} ScriptStruct_DiscordRelationship_StaticRegisterNativesFDiscordPresence;
	struct Z_Construct_UScriptStruct_FDiscordPresence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Activity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Activity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordPresence_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordPresence.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordPresence_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordPresence>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDiscordPresence_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordPresence_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordPresence" },
		{ "ModuleRelativePath", "Public/DiscordPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDiscordPresence_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordPresence, Status), Z_Construct_UEnum_DiscordRelationship_EDiscordStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordPresence_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordPresence_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordPresence_Statics::NewProp_Activity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordPresence" },
		{ "ModuleRelativePath", "Public/DiscordPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordPresence_Statics::NewProp_Activity = { "Activity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordPresence, Activity), Z_Construct_UScriptStruct_FDiscordActivity, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordPresence_Statics::NewProp_Activity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordPresence_Statics::NewProp_Activity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordPresence_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordPresence_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordPresence_Statics::NewProp_Activity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordPresence_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordRelationship,
		nullptr,
		&NewStructOps,
		"DiscordPresence",
		sizeof(FDiscordPresence),
		alignof(FDiscordPresence),
		Z_Construct_UScriptStruct_FDiscordPresence_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordPresence_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordPresence_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordPresence_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordPresence()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordPresence_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordRelationship();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordPresence"), sizeof(FDiscordPresence), Get_Z_Construct_UScriptStruct_FDiscordPresence_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordPresence_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordPresence_Hash() { return 1887110717U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
