// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/AddChatMessageDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddChatMessageDelegate() {}
// Cross Module References
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature_Statics
	{
		struct _Script_UserInterface_eventAddChatMessage_Parms
		{
			FString Name;
			FString Message;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UserInterface_eventAddChatMessage_Parms, Name), METADATA_PARAMS(Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UserInterface_eventAddChatMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AddChatMessageDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UserInterface, nullptr, "AddChatMessage__DelegateSignature", nullptr, nullptr, sizeof(_Script_UserInterface_eventAddChatMessage_Parms), Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
