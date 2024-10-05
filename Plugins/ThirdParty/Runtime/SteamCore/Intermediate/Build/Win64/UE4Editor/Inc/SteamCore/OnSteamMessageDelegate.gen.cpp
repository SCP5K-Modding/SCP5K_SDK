// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/OnSteamMessageDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnSteamMessageDelegate() {}
// Cross Module References
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamMessageType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnSteamMessage_Parms
		{
			ESteamMessageType Type;
			FString Message;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamMessage_Parms, Type), Z_Construct_UEnum_SteamCore_ESteamMessageType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnSteamMessageDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamMessage__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnSteamMessage_Parms), Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
