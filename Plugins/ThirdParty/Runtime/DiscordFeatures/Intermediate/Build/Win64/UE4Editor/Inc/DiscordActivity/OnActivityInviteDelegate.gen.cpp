// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordActivity/Public/OnActivityInviteDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnActivityInviteDelegate() {}
// Cross Module References
	DISCORDACTIVITY_API UFunction* Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DiscordActivity();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordActivityActionType();
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordUser();
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordActivity();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics
	{
		struct _Script_DiscordActivity_eventOnActivityInvite_Parms
		{
			EDiscordActivityActionType Action;
			FDiscordUser User;
			FDiscordActivity Activity;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_User;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Activity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Activity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordActivity_eventOnActivityInvite_Parms, Action), Z_Construct_UEnum_DiscordCore_EDiscordActivityActionType, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::NewProp_User_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordActivity_eventOnActivityInvite_Parms, User), Z_Construct_UScriptStruct_FDiscordUser, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::NewProp_User_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::NewProp_User_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::NewProp_Activity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::NewProp_Activity = { "Activity", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordActivity_eventOnActivityInvite_Parms, Activity), Z_Construct_UScriptStruct_FDiscordActivity, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::NewProp_Activity_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::NewProp_Activity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::NewProp_Action_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::NewProp_Activity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnActivityInviteDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordActivity, nullptr, "OnActivityInvite__DelegateSignature", nullptr, nullptr, sizeof(_Script_DiscordActivity_eventOnActivityInvite_Parms), Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
