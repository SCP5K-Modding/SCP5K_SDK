// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelStreaming/Public/LevelStreamingInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingInfo() {}
// Cross Module References
	LEVELSTREAMING_API UScriptStruct* Z_Construct_UScriptStruct_FLevelStreamingInfo();
	UPackage* Z_Construct_UPackage__Script_LevelStreaming();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	LEVELSTREAMING_API UEnum* Z_Construct_UEnum_LevelStreaming_EStreamingState();
// End Cross Module References
class UScriptStruct* FLevelStreamingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSTREAMING_API uint32 Get_Z_Construct_UScriptStruct_FLevelStreamingInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelStreamingInfo, Z_Construct_UPackage__Script_LevelStreaming(), TEXT("LevelStreamingInfo"), sizeof(FLevelStreamingInfo), Get_Z_Construct_UScriptStruct_FLevelStreamingInfo_Hash());
	}
	return Singleton;
}
template<> LEVELSTREAMING_API UScriptStruct* StaticStruct<FLevelStreamingInfo>()
{
	return FLevelStreamingInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelStreamingInfo(FLevelStreamingInfo::StaticStruct, TEXT("/Script/LevelStreaming"), TEXT("LevelStreamingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_LevelStreaming_StaticRegisterNativesFLevelStreamingInfo
{
	FScriptStruct_LevelStreaming_StaticRegisterNativesFLevelStreamingInfo()
	{
		UScriptStruct::DeferCppStructOps<FLevelStreamingInfo>(FName(TEXT("LevelStreamingInfo")));
	}
} ScriptStruct_LevelStreaming_StaticRegisterNativesFLevelStreamingInfo;
	struct Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StreamingState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StreamingState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlockOnLoad_MetaData[];
#endif
		static void NewProp_bBlockOnLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockOnLoad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelStreamingInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelStreamingInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelStreamingInfo" },
		{ "ModuleRelativePath", "Public/LevelStreamingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelStreamingInfo, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::NewProp_Level_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::NewProp_StreamingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::NewProp_StreamingState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelStreamingInfo" },
		{ "ModuleRelativePath", "Public/LevelStreamingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::NewProp_StreamingState = { "StreamingState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelStreamingInfo, StreamingState), Z_Construct_UEnum_LevelStreaming_EStreamingState, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::NewProp_StreamingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::NewProp_StreamingState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::NewProp_bBlockOnLoad_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelStreamingInfo" },
		{ "ModuleRelativePath", "Public/LevelStreamingInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::NewProp_bBlockOnLoad_SetBit(void* Obj)
	{
		((FLevelStreamingInfo*)Obj)->bBlockOnLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::NewProp_bBlockOnLoad = { "bBlockOnLoad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelStreamingInfo), &Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::NewProp_bBlockOnLoad_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::NewProp_bBlockOnLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::NewProp_bBlockOnLoad_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::NewProp_StreamingState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::NewProp_StreamingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::NewProp_bBlockOnLoad,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelStreaming,
		nullptr,
		&NewStructOps,
		"LevelStreamingInfo",
		sizeof(FLevelStreamingInfo),
		alignof(FLevelStreamingInfo),
		Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelStreamingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelStreamingInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelStreaming();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelStreamingInfo"), sizeof(FLevelStreamingInfo), Get_Z_Construct_UScriptStruct_FLevelStreamingInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelStreamingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelStreamingInfo_Hash() { return 868716335U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
