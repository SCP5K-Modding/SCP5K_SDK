// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/OnGetWebhookDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnGetWebhookDelegate() {}
// Cross Module References
	DISCORDHTTPAPI_API UFunction* Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
	DISCORDHTTPAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhook();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature_Statics
	{
		struct _Script_DiscordHttpApi_eventOnGetWebhook_Parms
		{
			FDiscordWebhook Webhoook;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Webhoook_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Webhoook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature_Statics::NewProp_Webhoook_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature_Statics::NewProp_Webhoook = { "Webhoook", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordHttpApi_eventOnGetWebhook_Parms, Webhoook), Z_Construct_UScriptStruct_FDiscordWebhook, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature_Statics::NewProp_Webhoook_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature_Statics::NewProp_Webhoook_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature_Statics::NewProp_Webhoook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnGetWebhookDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordHttpApi, nullptr, "OnGetWebhook__DelegateSignature", nullptr, nullptr, sizeof(_Script_DiscordHttpApi_eventOnGetWebhook_Parms), Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
