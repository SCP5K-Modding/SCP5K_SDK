// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayConsole/Public/MessageDelegateDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMessageDelegateDelegate() {}
// Cross Module References
	GAMEPLAYCONSOLE_API UFunction* Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayConsole();
	GAMEPLAYCONSOLE_API UEnum* Z_Construct_UEnum_GameplayConsole_EMessageType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature_Statics
	{
		struct _Script_GameplayConsole_eventMessageDelegate_Parms
		{
			FString Text;
			TEnumAsByte<EMessageType> MessageType;
			FString Tooltip;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MessageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tooltip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GameplayConsole_eventMessageDelegate_Parms, Text), METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GameplayConsole_eventMessageDelegate_Parms, MessageType), Z_Construct_UEnum_GameplayConsole_EMessageType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature_Statics::NewProp_Tooltip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GameplayConsole_eventMessageDelegate_Parms, Tooltip), METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature_Statics::NewProp_Tooltip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature_Statics::NewProp_MessageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature_Statics::NewProp_Tooltip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MessageDelegateDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayConsole, nullptr, "MessageDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_GameplayConsole_eventMessageDelegate_Parms), Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
