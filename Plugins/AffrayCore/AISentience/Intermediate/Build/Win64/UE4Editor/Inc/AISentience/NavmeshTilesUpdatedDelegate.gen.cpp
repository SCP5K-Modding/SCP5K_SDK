// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/NavmeshTilesUpdatedDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavmeshTilesUpdatedDelegate() {}
// Cross Module References
	AISENTIENCE_API UFunction* Z_Construct_UDelegateFunction_AISentience_NavmeshTilesUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AISentience_NavmeshTilesUpdated__DelegateSignature_Statics
	{
		struct _Script_AISentience_eventNavmeshTilesUpdated_Parms
		{
			TSet<uint32> ChangedTiles;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ChangedTiles_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangedTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ChangedTiles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UDelegateFunction_AISentience_NavmeshTilesUpdated__DelegateSignature_Statics::NewProp_ChangedTiles_ElementProp = { "ChangedTiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AISentience_NavmeshTilesUpdated__DelegateSignature_Statics::NewProp_ChangedTiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UDelegateFunction_AISentience_NavmeshTilesUpdated__DelegateSignature_Statics::NewProp_ChangedTiles = { "ChangedTiles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AISentience_eventNavmeshTilesUpdated_Parms, ChangedTiles), METADATA_PARAMS(Z_Construct_UDelegateFunction_AISentience_NavmeshTilesUpdated__DelegateSignature_Statics::NewProp_ChangedTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AISentience_NavmeshTilesUpdated__DelegateSignature_Statics::NewProp_ChangedTiles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AISentience_NavmeshTilesUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AISentience_NavmeshTilesUpdated__DelegateSignature_Statics::NewProp_ChangedTiles_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AISentience_NavmeshTilesUpdated__DelegateSignature_Statics::NewProp_ChangedTiles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AISentience_NavmeshTilesUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavmeshTilesUpdatedDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AISentience_NavmeshTilesUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AISentience, nullptr, "NavmeshTilesUpdated__DelegateSignature", nullptr, nullptr, sizeof(_Script_AISentience_eventNavmeshTilesUpdated_Parms), Z_Construct_UDelegateFunction_AISentience_NavmeshTilesUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AISentience_NavmeshTilesUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AISentience_NavmeshTilesUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AISentience_NavmeshTilesUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AISentience_NavmeshTilesUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AISentience_NavmeshTilesUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
