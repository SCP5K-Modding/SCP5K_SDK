// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Electronics/Public/LiftState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiftState() {}
// Cross Module References
	ELECTRONICS_API UScriptStruct* Z_Construct_UScriptStruct_FLiftState();
	UPackage* Z_Construct_UPackage__Script_Electronics();
// End Cross Module References
class UScriptStruct* FLiftState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELECTRONICS_API uint32 Get_Z_Construct_UScriptStruct_FLiftState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiftState, Z_Construct_UPackage__Script_Electronics(), TEXT("LiftState"), sizeof(FLiftState), Get_Z_Construct_UScriptStruct_FLiftState_Hash());
	}
	return Singleton;
}
template<> ELECTRONICS_API UScriptStruct* StaticStruct<FLiftState>()
{
	return FLiftState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiftState(FLiftState::StaticStruct, TEXT("/Script/Electronics"), TEXT("LiftState"), false, nullptr, nullptr);
static struct FScriptStruct_Electronics_StaticRegisterNativesFLiftState
{
	FScriptStruct_Electronics_StaticRegisterNativesFLiftState()
	{
		UScriptStruct::DeferCppStructOps<FLiftState>(FName(TEXT("LiftState")));
	}
} ScriptStruct_Electronics_StaticRegisterNativesFLiftState;
	struct Z_Construct_UScriptStruct_FLiftState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousFloor_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviousFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextFloor_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NextFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiftState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LiftState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiftState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiftState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiftState_Statics::NewProp_PreviousFloor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LiftState" },
		{ "ModuleRelativePath", "Public/LiftState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLiftState_Statics::NewProp_PreviousFloor = { "PreviousFloor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiftState, PreviousFloor), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiftState_Statics::NewProp_PreviousFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiftState_Statics::NewProp_PreviousFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiftState_Statics::NewProp_NextFloor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LiftState" },
		{ "ModuleRelativePath", "Public/LiftState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLiftState_Statics::NewProp_NextFloor = { "NextFloor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiftState, NextFloor), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiftState_Statics::NewProp_NextFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiftState_Statics::NewProp_NextFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiftState_Statics::NewProp_Time_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LiftState" },
		{ "ModuleRelativePath", "Public/LiftState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiftState_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiftState, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiftState_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiftState_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiftState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiftState_Statics::NewProp_PreviousFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiftState_Statics::NewProp_NextFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiftState_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiftState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Electronics,
		nullptr,
		&NewStructOps,
		"LiftState",
		sizeof(FLiftState),
		alignof(FLiftState),
		Z_Construct_UScriptStruct_FLiftState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiftState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiftState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiftState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiftState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiftState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Electronics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiftState"), sizeof(FLiftState), Get_Z_Construct_UScriptStruct_FLiftState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiftState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiftState_Hash() { return 3366906428U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
