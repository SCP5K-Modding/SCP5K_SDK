// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordApplication/Public/DiscordOnOAuth2TokenReceivedDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordOnOAuth2TokenReceivedDelegate() {}
// Cross Module References
	DISCORDAPPLICATION_API UFunction* Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DiscordApplication();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordResult();
	DISCORDAPPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordOAuth2Token();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature_Statics
	{
		struct _Script_DiscordApplication_eventDiscordOnOAuth2TokenReceived_Parms
		{
			EDiscordResult Result;
			FDiscordOAuth2Token Token;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Token;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordApplication_eventDiscordOnOAuth2TokenReceived_Parms, Result), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature_Statics::NewProp_Token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordApplication_eventDiscordOnOAuth2TokenReceived_Parms, Token), Z_Construct_UScriptStruct_FDiscordOAuth2Token, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature_Statics::NewProp_Token_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature_Statics::NewProp_Token,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordOnOAuth2TokenReceivedDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordApplication, nullptr, "DiscordOnOAuth2TokenReceived__DelegateSignature", nullptr, nullptr, sizeof(_Script_DiscordApplication_eventDiscordOnOAuth2TokenReceived_Parms), Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
