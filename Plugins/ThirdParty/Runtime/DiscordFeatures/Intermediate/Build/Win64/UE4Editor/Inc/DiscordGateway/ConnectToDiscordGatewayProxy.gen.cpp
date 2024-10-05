// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordGateway/Public/ConnectToDiscordGatewayProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConnectToDiscordGatewayProxy() {}
// Cross Module References
	DISCORDGATEWAY_API UClass* Z_Construct_UClass_UConnectToDiscordGatewayProxy_NoRegister();
	DISCORDGATEWAY_API UClass* Z_Construct_UClass_UConnectToDiscordGatewayProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_DiscordGateway();
	DISCORDGATEWAY_API UFunction* Z_Construct_UDelegateFunction_DiscordGateway_DiscordGatewaySocketEvent__DelegateSignature();
	DISCORDGATEWAY_API UClass* Z_Construct_UClass_UDiscordGatewaySocket_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UConnectToDiscordGatewayProxy::execConnectToDiscordGateway)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GatewayVersion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UConnectToDiscordGatewayProxy**)Z_Param__Result=UConnectToDiscordGatewayProxy::ConnectToDiscordGateway(Z_Param_GatewayVersion);
		P_NATIVE_END;
	}
	void UConnectToDiscordGatewayProxy::StaticRegisterNativesUConnectToDiscordGatewayProxy()
	{
		UClass* Class = UConnectToDiscordGatewayProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectToDiscordGateway", &UConnectToDiscordGatewayProxy::execConnectToDiscordGateway },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConnectToDiscordGatewayProxy_ConnectToDiscordGateway_Statics
	{
		struct ConnectToDiscordGatewayProxy_eventConnectToDiscordGateway_Parms
		{
			int32 GatewayVersion;
			UConnectToDiscordGatewayProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GatewayVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GatewayVersion;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConnectToDiscordGatewayProxy_ConnectToDiscordGateway_Statics::NewProp_GatewayVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConnectToDiscordGatewayProxy_ConnectToDiscordGateway_Statics::NewProp_GatewayVersion = { "GatewayVersion", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConnectToDiscordGatewayProxy_eventConnectToDiscordGateway_Parms, GatewayVersion), METADATA_PARAMS(Z_Construct_UFunction_UConnectToDiscordGatewayProxy_ConnectToDiscordGateway_Statics::NewProp_GatewayVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnectToDiscordGatewayProxy_ConnectToDiscordGateway_Statics::NewProp_GatewayVersion_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConnectToDiscordGatewayProxy_ConnectToDiscordGateway_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConnectToDiscordGatewayProxy_eventConnectToDiscordGateway_Parms, ReturnValue), Z_Construct_UClass_UConnectToDiscordGatewayProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConnectToDiscordGatewayProxy_ConnectToDiscordGateway_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConnectToDiscordGatewayProxy_ConnectToDiscordGateway_Statics::NewProp_GatewayVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConnectToDiscordGatewayProxy_ConnectToDiscordGateway_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConnectToDiscordGatewayProxy_ConnectToDiscordGateway_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConnectToDiscordGatewayProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConnectToDiscordGatewayProxy_ConnectToDiscordGateway_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConnectToDiscordGatewayProxy, nullptr, "ConnectToDiscordGateway", nullptr, nullptr, sizeof(ConnectToDiscordGatewayProxy_eventConnectToDiscordGateway_Parms), Z_Construct_UFunction_UConnectToDiscordGatewayProxy_ConnectToDiscordGateway_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnectToDiscordGatewayProxy_ConnectToDiscordGateway_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConnectToDiscordGatewayProxy_ConnectToDiscordGateway_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnectToDiscordGatewayProxy_ConnectToDiscordGateway_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConnectToDiscordGatewayProxy_ConnectToDiscordGateway()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConnectToDiscordGatewayProxy_ConnectToDiscordGateway_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConnectToDiscordGatewayProxy_NoRegister()
	{
		return UConnectToDiscordGatewayProxy::StaticClass();
	}
	struct Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketReady_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SocketReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ConnectionError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionClosed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ConnectionClosed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvalidSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_InvalidSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Socket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordGateway,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConnectToDiscordGatewayProxy_ConnectToDiscordGateway, "ConnectToDiscordGateway" }, // 277042491
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ConnectToDiscordGatewayProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConnectToDiscordGatewayProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_SocketReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConnectToDiscordGatewayProxy" },
		{ "ModuleRelativePath", "Public/ConnectToDiscordGatewayProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_SocketReady = { "SocketReady", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConnectToDiscordGatewayProxy, SocketReady), Z_Construct_UDelegateFunction_DiscordGateway_DiscordGatewaySocketEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_SocketReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_SocketReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_ConnectionError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConnectToDiscordGatewayProxy" },
		{ "ModuleRelativePath", "Public/ConnectToDiscordGatewayProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_ConnectionError = { "ConnectionError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConnectToDiscordGatewayProxy, ConnectionError), Z_Construct_UDelegateFunction_DiscordGateway_DiscordGatewaySocketEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_ConnectionError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_ConnectionError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_ConnectionClosed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConnectToDiscordGatewayProxy" },
		{ "ModuleRelativePath", "Public/ConnectToDiscordGatewayProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_ConnectionClosed = { "ConnectionClosed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConnectToDiscordGatewayProxy, ConnectionClosed), Z_Construct_UDelegateFunction_DiscordGateway_DiscordGatewaySocketEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_ConnectionClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_ConnectionClosed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_InvalidSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConnectToDiscordGatewayProxy" },
		{ "ModuleRelativePath", "Public/ConnectToDiscordGatewayProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_InvalidSession = { "InvalidSession", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConnectToDiscordGatewayProxy, InvalidSession), Z_Construct_UDelegateFunction_DiscordGateway_DiscordGatewaySocketEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_InvalidSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_InvalidSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_OnMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConnectToDiscordGatewayProxy" },
		{ "ModuleRelativePath", "Public/ConnectToDiscordGatewayProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_OnMessage = { "OnMessage", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConnectToDiscordGatewayProxy, OnMessage), Z_Construct_UDelegateFunction_DiscordGateway_DiscordGatewaySocketEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_OnMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_OnMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_Socket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConnectToDiscordGatewayProxy" },
		{ "ModuleRelativePath", "Public/ConnectToDiscordGatewayProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConnectToDiscordGatewayProxy, Socket), Z_Construct_UClass_UDiscordGatewaySocket_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_Socket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_Socket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_SocketReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_ConnectionError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_ConnectionClosed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_InvalidSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_OnMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::NewProp_Socket,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConnectToDiscordGatewayProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::ClassParams = {
		&UConnectToDiscordGatewayProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConnectToDiscordGatewayProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConnectToDiscordGatewayProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConnectToDiscordGatewayProxy, 62744778);
	template<> DISCORDGATEWAY_API UClass* StaticClass<UConnectToDiscordGatewayProxy>()
	{
		return UConnectToDiscordGatewayProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConnectToDiscordGatewayProxy(Z_Construct_UClass_UConnectToDiscordGatewayProxy, &UConnectToDiscordGatewayProxy::StaticClass, TEXT("/Script/DiscordGateway"), TEXT("UConnectToDiscordGatewayProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConnectToDiscordGatewayProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
