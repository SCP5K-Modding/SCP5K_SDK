// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordNetwork/Public/DiscordOnMessageDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordOnMessageDelegate() {}
// Cross Module References
	DISCORDNETWORK_API UFunction* Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DiscordNetwork();
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUint64();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics
	{
		struct _Script_DiscordNetwork_eventDiscordOnMessage_Parms
		{
			FUint64 PeerId;
			uint8 ChannelId;
			TArray<uint8> Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PeerId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChannelId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::NewProp_PeerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::NewProp_PeerId = { "PeerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordNetwork_eventDiscordOnMessage_Parms, PeerId), Z_Construct_UScriptStruct_FUint64, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::NewProp_PeerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::NewProp_PeerId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordNetwork_eventDiscordOnMessage_Parms, ChannelId), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordNetwork_eventDiscordOnMessage_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::NewProp_PeerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::NewProp_ChannelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordOnMessageDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordNetwork, nullptr, "DiscordOnMessage__DelegateSignature", nullptr, nullptr, sizeof(_Script_DiscordNetwork_eventDiscordOnMessage_Parms), Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
