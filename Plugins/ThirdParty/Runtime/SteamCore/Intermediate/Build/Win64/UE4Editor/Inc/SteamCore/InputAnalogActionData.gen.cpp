// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/InputAnalogActionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputAnalogActionData() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionData();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode();
// End Cross Module References
class UScriptStruct* FInputAnalogActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FInputAnalogActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAnalogActionData, Z_Construct_UPackage__Script_SteamCore(), TEXT("InputAnalogActionData"), sizeof(FInputAnalogActionData), Get_Z_Construct_UScriptStruct_FInputAnalogActionData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FInputAnalogActionData>()
{
	return FInputAnalogActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputAnalogActionData(FInputAnalogActionData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("InputAnalogActionData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFInputAnalogActionData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFInputAnalogActionData()
	{
		UScriptStruct::DeferCppStructOps<FInputAnalogActionData>(FName(TEXT("InputAnalogActionData")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFInputAnalogActionData;
	struct Z_Construct_UScriptStruct_FInputAnalogActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InputAnalogActionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAnalogActionData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputAnalogActionData" },
		{ "ModuleRelativePath", "Public/InputAnalogActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputAnalogActionData, Mode), Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_X_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputAnalogActionData" },
		{ "ModuleRelativePath", "Public/InputAnalogActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputAnalogActionData, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Y_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputAnalogActionData" },
		{ "ModuleRelativePath", "Public/InputAnalogActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputAnalogActionData, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputAnalogActionData" },
		{ "ModuleRelativePath", "Public/InputAnalogActionData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((FInputAnalogActionData*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInputAnalogActionData), &Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"InputAnalogActionData",
		sizeof(FInputAnalogActionData),
		alignof(FInputAnalogActionData),
		Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputAnalogActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputAnalogActionData"), sizeof(FInputAnalogActionData), Get_Z_Construct_UScriptStruct_FInputAnalogActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputAnalogActionData_Hash() { return 1248288719U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
