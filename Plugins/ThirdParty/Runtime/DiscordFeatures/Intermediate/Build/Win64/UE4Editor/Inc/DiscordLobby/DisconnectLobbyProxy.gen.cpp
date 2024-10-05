// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordLobby/Public/DisconnectLobbyProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisconnectLobbyProxy() {}
// Cross Module References
	DISCORDLOBBY_API UClass* Z_Construct_UClass_UDisconnectLobbyProxy_NoRegister();
	DISCORDLOBBY_API UClass* Z_Construct_UClass_UDisconnectLobbyProxy();
	DISCORDLOBBY_API UClass* Z_Construct_UClass_UBaseLobbyAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordLobby();
	DISCORDLOBBY_API UClass* Z_Construct_UClass_UDiscordLobbyManager_NoRegister();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordResult();
	DISCORDLOBBY_API UFunction* Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyResultEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UDisconnectLobbyProxy::execDisconnectLobby)
	{
		P_GET_OBJECT(UDiscordLobbyManager,Z_Param_LobbyManager);
		P_GET_PROPERTY(FInt64Property,Z_Param_LobbyId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDisconnectLobbyProxy**)Z_Param__Result=UDisconnectLobbyProxy::DisconnectLobby(Z_Param_LobbyManager,Z_Param_LobbyId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisconnectLobbyProxy::execOnResult)
	{
		P_GET_ENUM(EDiscordResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResult(EDiscordResult(Z_Param_Result));
		P_NATIVE_END;
	}
	void UDisconnectLobbyProxy::StaticRegisterNativesUDisconnectLobbyProxy()
	{
		UClass* Class = UDisconnectLobbyProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisconnectLobby", &UDisconnectLobbyProxy::execDisconnectLobby },
			{ "OnResult", &UDisconnectLobbyProxy::execOnResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDisconnectLobbyProxy_DisconnectLobby_Statics
	{
		struct DisconnectLobbyProxy_eventDisconnectLobby_Parms
		{
			UDiscordLobbyManager* LobbyManager;
			int64 LobbyId;
			UDisconnectLobbyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LobbyManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LobbyId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDisconnectLobbyProxy_DisconnectLobby_Statics::NewProp_LobbyManager = { "LobbyManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DisconnectLobbyProxy_eventDisconnectLobby_Parms, LobbyManager), Z_Construct_UClass_UDiscordLobbyManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisconnectLobbyProxy_DisconnectLobby_Statics::NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDisconnectLobbyProxy_DisconnectLobby_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DisconnectLobbyProxy_eventDisconnectLobby_Parms, LobbyId), METADATA_PARAMS(Z_Construct_UFunction_UDisconnectLobbyProxy_DisconnectLobby_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisconnectLobbyProxy_DisconnectLobby_Statics::NewProp_LobbyId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDisconnectLobbyProxy_DisconnectLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DisconnectLobbyProxy_eventDisconnectLobby_Parms, ReturnValue), Z_Construct_UClass_UDisconnectLobbyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisconnectLobbyProxy_DisconnectLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisconnectLobbyProxy_DisconnectLobby_Statics::NewProp_LobbyManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisconnectLobbyProxy_DisconnectLobby_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisconnectLobbyProxy_DisconnectLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisconnectLobbyProxy_DisconnectLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisconnectLobbyProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisconnectLobbyProxy_DisconnectLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisconnectLobbyProxy, nullptr, "DisconnectLobby", nullptr, nullptr, sizeof(DisconnectLobbyProxy_eventDisconnectLobby_Parms), Z_Construct_UFunction_UDisconnectLobbyProxy_DisconnectLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisconnectLobbyProxy_DisconnectLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisconnectLobbyProxy_DisconnectLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisconnectLobbyProxy_DisconnectLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisconnectLobbyProxy_DisconnectLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDisconnectLobbyProxy_DisconnectLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisconnectLobbyProxy_OnResult_Statics
	{
		struct DisconnectLobbyProxy_eventOnResult_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDisconnectLobbyProxy_OnResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDisconnectLobbyProxy_OnResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DisconnectLobbyProxy_eventOnResult_Parms, Result), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisconnectLobbyProxy_OnResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisconnectLobbyProxy_OnResult_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisconnectLobbyProxy_OnResult_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisconnectLobbyProxy_OnResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisconnectLobbyProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisconnectLobbyProxy_OnResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisconnectLobbyProxy, nullptr, "OnResult", nullptr, nullptr, sizeof(DisconnectLobbyProxy_eventOnResult_Parms), Z_Construct_UFunction_UDisconnectLobbyProxy_OnResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisconnectLobbyProxy_OnResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisconnectLobbyProxy_OnResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisconnectLobbyProxy_OnResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisconnectLobbyProxy_OnResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDisconnectLobbyProxy_OnResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDisconnectLobbyProxy_NoRegister()
	{
		return UDisconnectLobbyProxy::StaticClass();
	}
	struct Z_Construct_UClass_UDisconnectLobbyProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisconnectLobbyProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLobbyAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordLobby,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDisconnectLobbyProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDisconnectLobbyProxy_DisconnectLobby, "DisconnectLobby" }, // 2620186052
		{ &Z_Construct_UFunction_UDisconnectLobbyProxy_OnResult, "OnResult" }, // 617842615
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisconnectLobbyProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DisconnectLobbyProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisconnectLobbyProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisconnectLobbyProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DisconnectLobbyProxy" },
		{ "ModuleRelativePath", "Public/DisconnectLobbyProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDisconnectLobbyProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDisconnectLobbyProxy, OnSuccess), Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyResultEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDisconnectLobbyProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisconnectLobbyProxy_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisconnectLobbyProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DisconnectLobbyProxy" },
		{ "ModuleRelativePath", "Public/DisconnectLobbyProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDisconnectLobbyProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDisconnectLobbyProxy, OnError), Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyResultEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDisconnectLobbyProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisconnectLobbyProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisconnectLobbyProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisconnectLobbyProxy_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisconnectLobbyProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisconnectLobbyProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisconnectLobbyProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDisconnectLobbyProxy_Statics::ClassParams = {
		&UDisconnectLobbyProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDisconnectLobbyProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisconnectLobbyProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDisconnectLobbyProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisconnectLobbyProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisconnectLobbyProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDisconnectLobbyProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDisconnectLobbyProxy, 2552995644);
	template<> DISCORDLOBBY_API UClass* StaticClass<UDisconnectLobbyProxy>()
	{
		return UDisconnectLobbyProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDisconnectLobbyProxy(Z_Construct_UClass_UDisconnectLobbyProxy, &UDisconnectLobbyProxy::StaticClass, TEXT("/Script/DiscordLobby"), TEXT("UDisconnectLobbyProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisconnectLobbyProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
