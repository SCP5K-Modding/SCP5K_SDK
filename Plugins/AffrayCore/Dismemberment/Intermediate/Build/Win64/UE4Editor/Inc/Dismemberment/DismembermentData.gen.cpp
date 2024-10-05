// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dismemberment/Public/DismembermentData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDismembermentData() {}
// Cross Module References
	DISMEMBERMENT_API UScriptStruct* Z_Construct_UScriptStruct_FDismembermentData();
	UPackage* Z_Construct_UPackage__Script_Dismemberment();
	DISMEMBERMENT_API UEnum* Z_Construct_UEnum_Dismemberment_EDismembermentType();
// End Cross Module References
class UScriptStruct* FDismembermentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISMEMBERMENT_API uint32 Get_Z_Construct_UScriptStruct_FDismembermentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDismembermentData, Z_Construct_UPackage__Script_Dismemberment(), TEXT("DismembermentData"), sizeof(FDismembermentData), Get_Z_Construct_UScriptStruct_FDismembermentData_Hash());
	}
	return Singleton;
}
template<> DISMEMBERMENT_API UScriptStruct* StaticStruct<FDismembermentData>()
{
	return FDismembermentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDismembermentData(FDismembermentData::StaticStruct, TEXT("/Script/Dismemberment"), TEXT("DismembermentData"), false, nullptr, nullptr);
static struct FScriptStruct_Dismemberment_StaticRegisterNativesFDismembermentData
{
	FScriptStruct_Dismemberment_StaticRegisterNativesFDismembermentData()
	{
		UScriptStruct::DeferCppStructOps<FDismembermentData>(FName(TEXT("DismembermentData")));
	}
} ScriptStruct_Dismemberment_StaticRegisterNativesFDismembermentData;
	struct Z_Construct_UScriptStruct_FDismembermentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DismembermentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DismembermentType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDismembermentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DismembermentData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDismembermentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDismembermentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDismembermentData_Statics::NewProp_BoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismembermentData" },
		{ "ModuleRelativePath", "Public/DismembermentData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDismembermentData_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDismembermentData, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDismembermentData_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismembermentData_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDismembermentData_Statics::NewProp_DismembermentType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismembermentData" },
		{ "ModuleRelativePath", "Public/DismembermentData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDismembermentData_Statics::NewProp_DismembermentType = { "DismembermentType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDismembermentData, DismembermentType), Z_Construct_UEnum_Dismemberment_EDismembermentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDismembermentData_Statics::NewProp_DismembermentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismembermentData_Statics::NewProp_DismembermentType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDismembermentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismembermentData_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismembermentData_Statics::NewProp_DismembermentType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDismembermentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Dismemberment,
		nullptr,
		&NewStructOps,
		"DismembermentData",
		sizeof(FDismembermentData),
		alignof(FDismembermentData),
		Z_Construct_UScriptStruct_FDismembermentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismembermentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDismembermentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismembermentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDismembermentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDismembermentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Dismemberment();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DismembermentData"), sizeof(FDismembermentData), Get_Z_Construct_UScriptStruct_FDismembermentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDismembermentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDismembermentData_Hash() { return 1965189733U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
