// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordActivity/Public/SendRequestReplyProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSendRequestReplyProxy() {}
// Cross Module References
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_USendRequestReplyProxy_NoRegister();
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_USendRequestReplyProxy();
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_UBaseActivityAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordActivity();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordResult();
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_UDiscordActivityManager_NoRegister();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordActivityJoinRequestReply();
	DISCORDACTIVITY_API UFunction* Z_Construct_UDelegateFunction_DiscordActivity_DiscordCallbackEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USendRequestReplyProxy::execOnRequestReplyInternal)
	{
		P_GET_ENUM(EDiscordResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRequestReplyInternal(EDiscordResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USendRequestReplyProxy::execSendRequestReply)
	{
		P_GET_OBJECT(UDiscordActivityManager,Z_Param_ActivityManager);
		P_GET_PROPERTY(FInt64Property,Z_Param_UserId);
		P_GET_ENUM(EDiscordActivityJoinRequestReply,Z_Param_Reply);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USendRequestReplyProxy**)Z_Param__Result=USendRequestReplyProxy::SendRequestReply(Z_Param_ActivityManager,Z_Param_UserId,EDiscordActivityJoinRequestReply(Z_Param_Reply));
		P_NATIVE_END;
	}
	void USendRequestReplyProxy::StaticRegisterNativesUSendRequestReplyProxy()
	{
		UClass* Class = USendRequestReplyProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRequestReplyInternal", &USendRequestReplyProxy::execOnRequestReplyInternal },
			{ "SendRequestReply", &USendRequestReplyProxy::execSendRequestReply },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USendRequestReplyProxy_OnRequestReplyInternal_Statics
	{
		struct SendRequestReplyProxy_eventOnRequestReplyInternal_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USendRequestReplyProxy_OnRequestReplyInternal_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USendRequestReplyProxy_OnRequestReplyInternal_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendRequestReplyProxy_eventOnRequestReplyInternal_Parms, Result), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USendRequestReplyProxy_OnRequestReplyInternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendRequestReplyProxy_OnRequestReplyInternal_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendRequestReplyProxy_OnRequestReplyInternal_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendRequestReplyProxy_OnRequestReplyInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SendRequestReplyProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USendRequestReplyProxy_OnRequestReplyInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USendRequestReplyProxy, nullptr, "OnRequestReplyInternal", nullptr, nullptr, sizeof(SendRequestReplyProxy_eventOnRequestReplyInternal_Parms), Z_Construct_UFunction_USendRequestReplyProxy_OnRequestReplyInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USendRequestReplyProxy_OnRequestReplyInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USendRequestReplyProxy_OnRequestReplyInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USendRequestReplyProxy_OnRequestReplyInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USendRequestReplyProxy_OnRequestReplyInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USendRequestReplyProxy_OnRequestReplyInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics
	{
		struct SendRequestReplyProxy_eventSendRequestReply_Parms
		{
			UDiscordActivityManager* ActivityManager;
			int64 UserId;
			EDiscordActivityJoinRequestReply Reply;
			USendRequestReplyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivityManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Reply_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reply_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Reply;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::NewProp_ActivityManager = { "ActivityManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendRequestReplyProxy_eventSendRequestReply_Parms, ActivityManager), Z_Construct_UClass_UDiscordActivityManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendRequestReplyProxy_eventSendRequestReply_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::NewProp_Reply_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::NewProp_Reply_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::NewProp_Reply = { "Reply", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendRequestReplyProxy_eventSendRequestReply_Parms, Reply), Z_Construct_UEnum_DiscordCore_EDiscordActivityJoinRequestReply, METADATA_PARAMS(Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::NewProp_Reply_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::NewProp_Reply_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendRequestReplyProxy_eventSendRequestReply_Parms, ReturnValue), Z_Construct_UClass_USendRequestReplyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::NewProp_ActivityManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::NewProp_Reply_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::NewProp_Reply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SendRequestReplyProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USendRequestReplyProxy, nullptr, "SendRequestReply", nullptr, nullptr, sizeof(SendRequestReplyProxy_eventSendRequestReply_Parms), Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USendRequestReplyProxy_NoRegister()
	{
		return USendRequestReplyProxy::StaticClass();
	}
	struct Z_Construct_UClass_USendRequestReplyProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRequestReply_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestReply;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USendRequestReplyProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseActivityAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordActivity,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USendRequestReplyProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USendRequestReplyProxy_OnRequestReplyInternal, "OnRequestReplyInternal" }, // 3269209402
		{ &Z_Construct_UFunction_USendRequestReplyProxy_SendRequestReply, "SendRequestReply" }, // 906184911
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USendRequestReplyProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SendRequestReplyProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SendRequestReplyProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USendRequestReplyProxy_Statics::NewProp_OnRequestReply_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SendRequestReplyProxy" },
		{ "ModuleRelativePath", "Public/SendRequestReplyProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USendRequestReplyProxy_Statics::NewProp_OnRequestReply = { "OnRequestReply", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USendRequestReplyProxy, OnRequestReply), Z_Construct_UDelegateFunction_DiscordActivity_DiscordCallbackEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USendRequestReplyProxy_Statics::NewProp_OnRequestReply_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USendRequestReplyProxy_Statics::NewProp_OnRequestReply_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USendRequestReplyProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SendRequestReplyProxy" },
		{ "ModuleRelativePath", "Public/SendRequestReplyProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USendRequestReplyProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USendRequestReplyProxy, OnError), Z_Construct_UDelegateFunction_DiscordActivity_DiscordCallbackEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USendRequestReplyProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USendRequestReplyProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USendRequestReplyProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USendRequestReplyProxy_Statics::NewProp_OnRequestReply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USendRequestReplyProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USendRequestReplyProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USendRequestReplyProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USendRequestReplyProxy_Statics::ClassParams = {
		&USendRequestReplyProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USendRequestReplyProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USendRequestReplyProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USendRequestReplyProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USendRequestReplyProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USendRequestReplyProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USendRequestReplyProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USendRequestReplyProxy, 1427064663);
	template<> DISCORDACTIVITY_API UClass* StaticClass<USendRequestReplyProxy>()
	{
		return USendRequestReplyProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USendRequestReplyProxy(Z_Construct_UClass_USendRequestReplyProxy, &USendRequestReplyProxy::StaticClass, TEXT("/Script/DiscordActivity"), TEXT("USendRequestReplyProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USendRequestReplyProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
