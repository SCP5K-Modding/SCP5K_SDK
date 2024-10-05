// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordActivity/Public/SendInviteProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSendInviteProxy() {}
// Cross Module References
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_USendInviteProxy_NoRegister();
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_USendInviteProxy();
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_UBaseActivityAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordActivity();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordResult();
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_UDiscordActivityManager_NoRegister();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordActivityActionType();
	DISCORDACTIVITY_API UFunction* Z_Construct_UDelegateFunction_DiscordActivity_DiscordCallbackEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USendInviteProxy::execOnInviteSentInternal)
	{
		P_GET_ENUM(EDiscordResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInviteSentInternal(EDiscordResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USendInviteProxy::execSendInvite)
	{
		P_GET_OBJECT(UDiscordActivityManager,Z_Param_ActivityManager);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_UserId);
		P_GET_ENUM(EDiscordActivityActionType,Z_Param_Action);
		P_GET_PROPERTY(FStrProperty,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USendInviteProxy**)Z_Param__Result=USendInviteProxy::SendInvite(Z_Param_ActivityManager,Z_Param_Out_UserId,EDiscordActivityActionType(Z_Param_Action),Z_Param_Content);
		P_NATIVE_END;
	}
	void USendInviteProxy::StaticRegisterNativesUSendInviteProxy()
	{
		UClass* Class = USendInviteProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInviteSentInternal", &USendInviteProxy::execOnInviteSentInternal },
			{ "SendInvite", &USendInviteProxy::execSendInvite },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USendInviteProxy_OnInviteSentInternal_Statics
	{
		struct SendInviteProxy_eventOnInviteSentInternal_Parms
		{
			EDiscordResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USendInviteProxy_OnInviteSentInternal_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USendInviteProxy_OnInviteSentInternal_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendInviteProxy_eventOnInviteSentInternal_Parms, Result), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USendInviteProxy_OnInviteSentInternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendInviteProxy_OnInviteSentInternal_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendInviteProxy_OnInviteSentInternal_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendInviteProxy_OnInviteSentInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SendInviteProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USendInviteProxy_OnInviteSentInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USendInviteProxy, nullptr, "OnInviteSentInternal", nullptr, nullptr, sizeof(SendInviteProxy_eventOnInviteSentInternal_Parms), Z_Construct_UFunction_USendInviteProxy_OnInviteSentInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USendInviteProxy_OnInviteSentInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USendInviteProxy_OnInviteSentInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USendInviteProxy_OnInviteSentInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USendInviteProxy_OnInviteSentInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USendInviteProxy_OnInviteSentInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics
	{
		struct SendInviteProxy_eventSendInvite_Parms
		{
			UDiscordActivityManager* ActivityManager;
			int64 UserId;
			EDiscordActivityActionType Action;
			FString Content;
			USendInviteProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivityManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::NewProp_ActivityManager = { "ActivityManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendInviteProxy_eventSendInvite_Parms, ActivityManager), Z_Construct_UClass_UDiscordActivityManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendInviteProxy_eventSendInvite_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendInviteProxy_eventSendInvite_Parms, Action), Z_Construct_UEnum_DiscordCore_EDiscordActivityActionType, METADATA_PARAMS(Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendInviteProxy_eventSendInvite_Parms, Content), METADATA_PARAMS(Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendInviteProxy_eventSendInvite_Parms, ReturnValue), Z_Construct_UClass_USendInviteProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::NewProp_ActivityManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::NewProp_Action_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SendInviteProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USendInviteProxy, nullptr, "SendInvite", nullptr, nullptr, sizeof(SendInviteProxy_eventSendInvite_Parms), Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USendInviteProxy_SendInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USendInviteProxy_SendInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USendInviteProxy_NoRegister()
	{
		return USendInviteProxy::StaticClass();
	}
	struct Z_Construct_UClass_USendInviteProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInviteSent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInviteSent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USendInviteProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseActivityAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordActivity,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USendInviteProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USendInviteProxy_OnInviteSentInternal, "OnInviteSentInternal" }, // 3740834187
		{ &Z_Construct_UFunction_USendInviteProxy_SendInvite, "SendInvite" }, // 3708875935
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USendInviteProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SendInviteProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SendInviteProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USendInviteProxy_Statics::NewProp_OnInviteSent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SendInviteProxy" },
		{ "ModuleRelativePath", "Public/SendInviteProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USendInviteProxy_Statics::NewProp_OnInviteSent = { "OnInviteSent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USendInviteProxy, OnInviteSent), Z_Construct_UDelegateFunction_DiscordActivity_DiscordCallbackEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USendInviteProxy_Statics::NewProp_OnInviteSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USendInviteProxy_Statics::NewProp_OnInviteSent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USendInviteProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SendInviteProxy" },
		{ "ModuleRelativePath", "Public/SendInviteProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USendInviteProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USendInviteProxy, OnError), Z_Construct_UDelegateFunction_DiscordActivity_DiscordCallbackEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USendInviteProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USendInviteProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USendInviteProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USendInviteProxy_Statics::NewProp_OnInviteSent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USendInviteProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USendInviteProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USendInviteProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USendInviteProxy_Statics::ClassParams = {
		&USendInviteProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USendInviteProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USendInviteProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USendInviteProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USendInviteProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USendInviteProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USendInviteProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USendInviteProxy, 3787412792);
	template<> DISCORDACTIVITY_API UClass* StaticClass<USendInviteProxy>()
	{
		return USendInviteProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USendInviteProxy(Z_Construct_UClass_USendInviteProxy, &USendInviteProxy::StaticClass, TEXT("/Script/DiscordActivity"), TEXT("USendInviteProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USendInviteProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
