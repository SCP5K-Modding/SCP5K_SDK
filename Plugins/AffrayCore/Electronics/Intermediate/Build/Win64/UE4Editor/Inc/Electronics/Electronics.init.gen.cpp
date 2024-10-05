// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElectronics_init() {}
	ELECTRONICS_API UFunction* Z_Construct_UDelegateFunction_Electronics_ElectronicUpdatedDelegate__DelegateSignature();
	ELECTRONICS_API UFunction* Z_Construct_UDelegateFunction_Electronics_ElectronicValueUpdatedDelegate__DelegateSignature();
	ELECTRONICS_API UFunction* Z_Construct_UDelegateFunction_Electronics_DoorLinkReachedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Electronics()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Electronics_ElectronicUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Electronics_ElectronicValueUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Electronics_DoorLinkReachedSignature__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/Electronics",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xBB8F929D,
				0x25D1A18D,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
