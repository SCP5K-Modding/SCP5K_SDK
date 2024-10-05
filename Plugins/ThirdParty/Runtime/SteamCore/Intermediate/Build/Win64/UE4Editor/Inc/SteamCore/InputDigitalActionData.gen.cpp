// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/InputDigitalActionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputDigitalActionData() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionData();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FInputDigitalActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FInputDigitalActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputDigitalActionData, Z_Construct_UPackage__Script_SteamCore(), TEXT("InputDigitalActionData"), sizeof(FInputDigitalActionData), Get_Z_Construct_UScriptStruct_FInputDigitalActionData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FInputDigitalActionData>()
{
	return FInputDigitalActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputDigitalActionData(FInputDigitalActionData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("InputDigitalActionData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFInputDigitalActionData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFInputDigitalActionData()
	{
		UScriptStruct::DeferCppStructOps<FInputDigitalActionData>(FName(TEXT("InputDigitalActionData")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFInputDigitalActionData;
	struct Z_Construct_UScriptStruct_FInputDigitalActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bState_MetaData[];
#endif
		static void NewProp_bState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InputDigitalActionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputDigitalActionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputDigitalActionData" },
		{ "ModuleRelativePath", "Public/InputDigitalActionData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState_SetBit(void* Obj)
	{
		((FInputDigitalActionData*)Obj)->bState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState = { "bState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInputDigitalActionData), &Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputDigitalActionData" },
		{ "ModuleRelativePath", "Public/InputDigitalActionData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((FInputDigitalActionData*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInputDigitalActionData), &Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"InputDigitalActionData",
		sizeof(FInputDigitalActionData),
		alignof(FInputDigitalActionData),
		Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputDigitalActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputDigitalActionData"), sizeof(FInputDigitalActionData), Get_Z_Construct_UScriptStruct_FInputDigitalActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputDigitalActionData_Hash() { return 1724669183U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
