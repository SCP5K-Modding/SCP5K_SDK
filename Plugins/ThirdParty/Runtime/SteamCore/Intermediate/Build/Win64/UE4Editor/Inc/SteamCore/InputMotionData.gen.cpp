// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/InputMotionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputMotionData() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputMotionData();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FInputMotionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FInputMotionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputMotionData, Z_Construct_UPackage__Script_SteamCore(), TEXT("InputMotionData"), sizeof(FInputMotionData), Get_Z_Construct_UScriptStruct_FInputMotionData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FInputMotionData>()
{
	return FInputMotionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputMotionData(FInputMotionData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("InputMotionData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFInputMotionData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFInputMotionData()
	{
		UScriptStruct::DeferCppStructOps<FInputMotionData>(FName(TEXT("InputMotionData")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFInputMotionData;
	struct Z_Construct_UScriptStruct_FInputMotionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotQuatX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotQuatX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotQuatY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotQuatY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotQuatZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotQuatZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotQuatW_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotQuatW;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosAccelX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PosAccelX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosAccelY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PosAccelY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosAccelZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PosAccelZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotVelX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotVelX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotVelY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotVelY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotVelZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotVelZ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InputMotionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputMotionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputMotionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputMotionData" },
		{ "ModuleRelativePath", "Public/InputMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatX = { "RotQuatX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMotionData, RotQuatX), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputMotionData" },
		{ "ModuleRelativePath", "Public/InputMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatY = { "RotQuatY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMotionData, RotQuatY), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputMotionData" },
		{ "ModuleRelativePath", "Public/InputMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatZ = { "RotQuatZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMotionData, RotQuatZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatW_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputMotionData" },
		{ "ModuleRelativePath", "Public/InputMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatW = { "RotQuatW", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMotionData, RotQuatW), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatW_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatW_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputMotionData" },
		{ "ModuleRelativePath", "Public/InputMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelX = { "PosAccelX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMotionData, PosAccelX), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputMotionData" },
		{ "ModuleRelativePath", "Public/InputMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelY = { "PosAccelY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMotionData, PosAccelY), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputMotionData" },
		{ "ModuleRelativePath", "Public/InputMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelZ = { "PosAccelZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMotionData, PosAccelZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputMotionData" },
		{ "ModuleRelativePath", "Public/InputMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelX = { "RotVelX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMotionData, RotVelX), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputMotionData" },
		{ "ModuleRelativePath", "Public/InputMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelY = { "RotVelY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMotionData, RotVelY), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputMotionData" },
		{ "ModuleRelativePath", "Public/InputMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelZ = { "RotVelZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMotionData, RotVelZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelZ_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputMotionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatW,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelZ,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputMotionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"InputMotionData",
		sizeof(FInputMotionData),
		alignof(FInputMotionData),
		Z_Construct_UScriptStruct_FInputMotionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputMotionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputMotionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputMotionData"), sizeof(FInputMotionData), Get_Z_Construct_UScriptStruct_FInputMotionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputMotionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputMotionData_Hash() { return 386733008U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
