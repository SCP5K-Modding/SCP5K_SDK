// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dismemberment/Public/OnDismemberDelegateDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnDismemberDelegateDelegate() {}
// Cross Module References
	DISMEMBERMENT_API UFunction* Z_Construct_UDelegateFunction_Dismemberment_OnDismemberDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Dismemberment();
	DISMEMBERMENT_API UEnum* Z_Construct_UEnum_Dismemberment_EDismembermentType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Dismemberment_OnDismemberDelegate__DelegateSignature_Statics
	{
		struct _Script_Dismemberment_eventOnDismemberDelegate_Parms
		{
			FName DismemberableName;
			TEnumAsByte<EDismembermentType> DismembermentType;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DismemberableName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DismembermentType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Dismemberment_OnDismemberDelegate__DelegateSignature_Statics::NewProp_DismemberableName = { "DismemberableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Dismemberment_eventOnDismemberDelegate_Parms, DismemberableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Dismemberment_OnDismemberDelegate__DelegateSignature_Statics::NewProp_DismembermentType = { "DismembermentType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Dismemberment_eventOnDismemberDelegate_Parms, DismembermentType), Z_Construct_UEnum_Dismemberment_EDismembermentType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Dismemberment_OnDismemberDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Dismemberment_OnDismemberDelegate__DelegateSignature_Statics::NewProp_DismemberableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Dismemberment_OnDismemberDelegate__DelegateSignature_Statics::NewProp_DismembermentType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Dismemberment_OnDismemberDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnDismemberDelegateDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Dismemberment_OnDismemberDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Dismemberment, nullptr, "OnDismemberDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Dismemberment_eventOnDismemberDelegate_Parms), Z_Construct_UDelegateFunction_Dismemberment_OnDismemberDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Dismemberment_OnDismemberDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Dismemberment_OnDismemberDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Dismemberment_OnDismemberDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Dismemberment_OnDismemberDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Dismemberment_OnDismemberDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
