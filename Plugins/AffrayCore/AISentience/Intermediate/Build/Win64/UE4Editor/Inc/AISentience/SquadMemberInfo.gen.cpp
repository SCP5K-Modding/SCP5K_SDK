// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SquadMemberInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSquadMemberInfo() {}
// Cross Module References
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FSquadMemberInfo();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSquadMemberInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AISENTIENCE_API uint32 Get_Z_Construct_UScriptStruct_FSquadMemberInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSquadMemberInfo, Z_Construct_UPackage__Script_AISentience(), TEXT("SquadMemberInfo"), sizeof(FSquadMemberInfo), Get_Z_Construct_UScriptStruct_FSquadMemberInfo_Hash());
	}
	return Singleton;
}
template<> AISENTIENCE_API UScriptStruct* StaticStruct<FSquadMemberInfo>()
{
	return FSquadMemberInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSquadMemberInfo(FSquadMemberInfo::StaticStruct, TEXT("/Script/AISentience"), TEXT("SquadMemberInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AISentience_StaticRegisterNativesFSquadMemberInfo
{
	FScriptStruct_AISentience_StaticRegisterNativesFSquadMemberInfo()
	{
		UScriptStruct::DeferCppStructOps<FSquadMemberInfo>(FName(TEXT("SquadMemberInfo")));
	}
} ScriptStruct_AISentience_StaticRegisterNativesFSquadMemberInfo;
	struct Z_Construct_UScriptStruct_FSquadMemberInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConfirmedDead_MetaData[];
#endif
		static void NewProp_bConfirmedDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConfirmedDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastKnownPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastKnownPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastUpdateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SquadMemberInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSquadMemberInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::NewProp_bConfirmedDead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SquadMemberInfo" },
		{ "ModuleRelativePath", "Public/SquadMemberInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::NewProp_bConfirmedDead_SetBit(void* Obj)
	{
		((FSquadMemberInfo*)Obj)->bConfirmedDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::NewProp_bConfirmedDead = { "bConfirmedDead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSquadMemberInfo), &Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::NewProp_bConfirmedDead_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::NewProp_bConfirmedDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::NewProp_bConfirmedDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::NewProp_LastKnownPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SquadMemberInfo" },
		{ "ModuleRelativePath", "Public/SquadMemberInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::NewProp_LastKnownPosition = { "LastKnownPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSquadMemberInfo, LastKnownPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::NewProp_LastKnownPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::NewProp_LastKnownPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::NewProp_LastUpdateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SquadMemberInfo" },
		{ "ModuleRelativePath", "Public/SquadMemberInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::NewProp_LastUpdateTime = { "LastUpdateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSquadMemberInfo, LastUpdateTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::NewProp_LastUpdateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::NewProp_LastUpdateTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::NewProp_bConfirmedDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::NewProp_LastKnownPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::NewProp_LastUpdateTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
		nullptr,
		&NewStructOps,
		"SquadMemberInfo",
		sizeof(FSquadMemberInfo),
		alignof(FSquadMemberInfo),
		Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSquadMemberInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSquadMemberInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SquadMemberInfo"), sizeof(FSquadMemberInfo), Get_Z_Construct_UScriptStruct_FSquadMemberInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSquadMemberInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSquadMemberInfo_Hash() { return 1058117103U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
