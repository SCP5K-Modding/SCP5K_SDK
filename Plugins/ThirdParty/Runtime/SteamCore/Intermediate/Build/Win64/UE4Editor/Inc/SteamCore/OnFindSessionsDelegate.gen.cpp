// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/OnFindSessionsDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnFindSessionsDelegate() {}
// Cross Module References
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnFindSessions_Parms
		{
			TArray<FBlueprintSessionResult> Data;
			bool bWasSuccessful;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnFindSessions_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnFindSessions_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnFindSessions_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnFindSessionsDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFindSessions__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnFindSessions_Parms), Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
