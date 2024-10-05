// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAICoverData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAICoverData() {}
// Cross Module References
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FSAICoverData();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ECoverFiringOptions();
// End Cross Module References
class UScriptStruct* FSAICoverData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AISENTIENCE_API uint32 Get_Z_Construct_UScriptStruct_FSAICoverData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSAICoverData, Z_Construct_UPackage__Script_AISentience(), TEXT("SAICoverData"), sizeof(FSAICoverData), Get_Z_Construct_UScriptStruct_FSAICoverData_Hash());
	}
	return Singleton;
}
template<> AISENTIENCE_API UScriptStruct* StaticStruct<FSAICoverData>()
{
	return FSAICoverData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSAICoverData(FSAICoverData::StaticStruct, TEXT("/Script/AISentience"), TEXT("SAICoverData"), false, nullptr, nullptr);
static struct FScriptStruct_AISentience_StaticRegisterNativesFSAICoverData
{
	FScriptStruct_AISentience_StaticRegisterNativesFSAICoverData()
	{
		UScriptStruct::DeferCppStructOps<FSAICoverData>(FName(TEXT("SAICoverData")));
	}
} ScriptStruct_AISentience_StaticRegisterNativesFSAICoverData;
	struct Z_Construct_UScriptStruct_FSAICoverData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Facing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Facing;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FiringOptions_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FiringOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAICoverData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SAICoverData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSAICoverData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSAICoverData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAICoverData_Statics::NewProp_position_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverData" },
		{ "ModuleRelativePath", "Public/SAICoverData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSAICoverData_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAICoverData, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAICoverData_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAICoverData_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAICoverData_Statics::NewProp_Facing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverData" },
		{ "ModuleRelativePath", "Public/SAICoverData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSAICoverData_Statics::NewProp_Facing = { "Facing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAICoverData, Facing), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAICoverData_Statics::NewProp_Facing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAICoverData_Statics::NewProp_Facing_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSAICoverData_Statics::NewProp_FiringOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAICoverData_Statics::NewProp_FiringOptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverData" },
		{ "ModuleRelativePath", "Public/SAICoverData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSAICoverData_Statics::NewProp_FiringOptions = { "FiringOptions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAICoverData, FiringOptions), Z_Construct_UEnum_AISentience_ECoverFiringOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAICoverData_Statics::NewProp_FiringOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAICoverData_Statics::NewProp_FiringOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSAICoverData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAICoverData_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAICoverData_Statics::NewProp_Facing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAICoverData_Statics::NewProp_FiringOptions_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAICoverData_Statics::NewProp_FiringOptions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSAICoverData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
		nullptr,
		&NewStructOps,
		"SAICoverData",
		sizeof(FSAICoverData),
		alignof(FSAICoverData),
		Z_Construct_UScriptStruct_FSAICoverData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAICoverData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSAICoverData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAICoverData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSAICoverData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSAICoverData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SAICoverData"), sizeof(FSAICoverData), Get_Z_Construct_UScriptStruct_FSAICoverData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSAICoverData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSAICoverData_Hash() { return 2415254545U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
