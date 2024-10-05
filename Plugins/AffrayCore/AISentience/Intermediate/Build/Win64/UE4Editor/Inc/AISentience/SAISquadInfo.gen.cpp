// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAISquadInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAISquadInfo() {}
// Cross Module References
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FSAISquadInfo();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FSquadMemberInfo();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAISquadComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FSAISquadInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AISENTIENCE_API uint32 Get_Z_Construct_UScriptStruct_FSAISquadInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSAISquadInfo, Z_Construct_UPackage__Script_AISentience(), TEXT("SAISquadInfo"), sizeof(FSAISquadInfo), Get_Z_Construct_UScriptStruct_FSAISquadInfo_Hash());
	}
	return Singleton;
}
template<> AISENTIENCE_API UScriptStruct* StaticStruct<FSAISquadInfo>()
{
	return FSAISquadInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSAISquadInfo(FSAISquadInfo::StaticStruct, TEXT("/Script/AISentience"), TEXT("SAISquadInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AISentience_StaticRegisterNativesFSAISquadInfo
{
	FScriptStruct_AISentience_StaticRegisterNativesFSAISquadInfo()
	{
		UScriptStruct::DeferCppStructOps<FSAISquadInfo>(FName(TEXT("SAISquadInfo")));
	}
} ScriptStruct_AISentience_StaticRegisterNativesFSAISquadInfo;
	struct Z_Construct_UScriptStruct_FSAISquadInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLeaderConfirmedDead_MetaData[];
#endif
		static void NewProp_bLeaderConfirmedDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeaderConfirmedDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SquadLeaderLastKnownPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SquadLeaderLastKnownPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SquadInfoMap_ValueProp;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_SquadInfoMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SquadInfoMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SquadInfoMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastUpdateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAISquadInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SAISquadInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSAISquadInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_bLeaderConfirmedDead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISquadInfo" },
		{ "ModuleRelativePath", "Public/SAISquadInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_bLeaderConfirmedDead_SetBit(void* Obj)
	{
		((FSAISquadInfo*)Obj)->bLeaderConfirmedDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_bLeaderConfirmedDead = { "bLeaderConfirmedDead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSAISquadInfo), &Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_bLeaderConfirmedDead_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_bLeaderConfirmedDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_bLeaderConfirmedDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_SquadLeaderLastKnownPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISquadInfo" },
		{ "ModuleRelativePath", "Public/SAISquadInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_SquadLeaderLastKnownPosition = { "SquadLeaderLastKnownPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAISquadInfo, SquadLeaderLastKnownPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_SquadLeaderLastKnownPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_SquadLeaderLastKnownPosition_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_SquadInfoMap_ValueProp = { "SquadInfoMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSquadMemberInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_SquadInfoMap_Key_KeyProp = { "SquadInfoMap_Key", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USAISquadComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_SquadInfoMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISquadInfo" },
		{ "ModuleRelativePath", "Public/SAISquadInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_SquadInfoMap = { "SquadInfoMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAISquadInfo, SquadInfoMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_SquadInfoMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_SquadInfoMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_LastUpdateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISquadInfo" },
		{ "ModuleRelativePath", "Public/SAISquadInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_LastUpdateTime = { "LastUpdateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAISquadInfo, LastUpdateTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_LastUpdateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_LastUpdateTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSAISquadInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_bLeaderConfirmedDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_SquadLeaderLastKnownPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_SquadInfoMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_SquadInfoMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_SquadInfoMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAISquadInfo_Statics::NewProp_LastUpdateTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSAISquadInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
		nullptr,
		&NewStructOps,
		"SAISquadInfo",
		sizeof(FSAISquadInfo),
		alignof(FSAISquadInfo),
		Z_Construct_UScriptStruct_FSAISquadInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAISquadInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSAISquadInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAISquadInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSAISquadInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSAISquadInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SAISquadInfo"), sizeof(FSAISquadInfo), Get_Z_Construct_UScriptStruct_FSAISquadInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSAISquadInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSAISquadInfo_Hash() { return 3504518314U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
