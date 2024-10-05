// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordLobby/Public/ConnectLobbyWithActivitySecretProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConnectLobbyWithActivitySecretProxy() {}
// Cross Module References
	DISCORDLOBBY_API UClass* Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_NoRegister();
	DISCORDLOBBY_API UClass* Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy();
	DISCORDLOBBY_API UClass* Z_Construct_UClass_UBaseLobbyAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordLobby();
	DISCORDLOBBY_API UClass* Z_Construct_UClass_UDiscordLobbyManager_NoRegister();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordResult();
	DISCORDLOBBY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordLobby();
	DISCORDLOBBY_API UFunction* Z_Construct_UDelegateFunction_DiscordLobby_LobbyEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UConnectLobbyWithActivitySecretProxy::execConnectLobbyWithActivitySecret)
	{
		P_GET_OBJECT(UDiscordLobbyManager,Z_Param_LobbyManager);
		P_GET_PROPERTY(FStrProperty,Z_Param_ActivitySecret);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UConnectLobbyWithActivitySecretProxy**)Z_Param__Result=UConnectLobbyWithActivitySecretProxy::ConnectLobbyWithActivitySecret(Z_Param_LobbyManager,Z_Param_ActivitySecret);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConnectLobbyWithActivitySecretProxy::execOnResult)
	{
		P_GET_ENUM(EDiscordResult,Z_Param_Result);
		P_GET_STRUCT_REF(FDiscordLobby,Z_Param_Out_Lobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResult(EDiscordResult(Z_Param_Result),Z_Param_Out_Lobby);
		P_NATIVE_END;
	}
	void UConnectLobbyWithActivitySecretProxy::StaticRegisterNativesUConnectLobbyWithActivitySecretProxy()
	{
		UClass* Class = UConnectLobbyWithActivitySecretProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectLobbyWithActivitySecret", &UConnectLobbyWithActivitySecretProxy::execConnectLobbyWithActivitySecret },
			{ "OnResult", &UConnectLobbyWithActivitySecretProxy::execOnResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_ConnectLobbyWithActivitySecret_Statics
	{
		struct ConnectLobbyWithActivitySecretProxy_eventConnectLobbyWithActivitySecret_Parms
		{
			UDiscordLobbyManager* LobbyManager;
			FString ActivitySecret;
			UConnectLobbyWithActivitySecretProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LobbyManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivitySecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActivitySecret;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_ConnectLobbyWithActivitySecret_Statics::NewProp_LobbyManager = { "LobbyManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConnectLobbyWithActivitySecretProxy_eventConnectLobbyWithActivitySecret_Parms, LobbyManager), Z_Construct_UClass_UDiscordLobbyManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_ConnectLobbyWithActivitySecret_Statics::NewProp_ActivitySecret_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_ConnectLobbyWithActivitySecret_Statics::NewProp_ActivitySecret = { "ActivitySecret", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConnectLobbyWithActivitySecretProxy_eventConnectLobbyWithActivitySecret_Parms, ActivitySecret), METADATA_PARAMS(Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_ConnectLobbyWithActivitySecret_Statics::NewProp_ActivitySecret_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_ConnectLobbyWithActivitySecret_Statics::NewProp_ActivitySecret_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_ConnectLobbyWithActivitySecret_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConnectLobbyWithActivitySecretProxy_eventConnectLobbyWithActivitySecret_Parms, ReturnValue), Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_ConnectLobbyWithActivitySecret_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_ConnectLobbyWithActivitySecret_Statics::NewProp_LobbyManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_ConnectLobbyWithActivitySecret_Statics::NewProp_ActivitySecret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_ConnectLobbyWithActivitySecret_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_ConnectLobbyWithActivitySecret_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConnectLobbyWithActivitySecretProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_ConnectLobbyWithActivitySecret_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy, nullptr, "ConnectLobbyWithActivitySecret", nullptr, nullptr, sizeof(ConnectLobbyWithActivitySecretProxy_eventConnectLobbyWithActivitySecret_Parms), Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_ConnectLobbyWithActivitySecret_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_ConnectLobbyWithActivitySecret_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_ConnectLobbyWithActivitySecret_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_ConnectLobbyWithActivitySecret_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_ConnectLobbyWithActivitySecret()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_ConnectLobbyWithActivitySecret_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_OnResult_Statics
	{
		struct ConnectLobbyWithActivitySecretProxy_eventOnResult_Parms
		{
			EDiscordResult Result;
			FDiscordLobby Lobby;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Lobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_OnResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_OnResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConnectLobbyWithActivitySecretProxy_eventOnResult_Parms, Result), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_OnResult_Statics::NewProp_Lobby = { "Lobby", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConnectLobbyWithActivitySecretProxy_eventOnResult_Parms, Lobby), Z_Construct_UScriptStruct_FDiscordLobby, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_OnResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_OnResult_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_OnResult_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_OnResult_Statics::NewProp_Lobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_OnResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConnectLobbyWithActivitySecretProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_OnResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy, nullptr, "OnResult", nullptr, nullptr, sizeof(ConnectLobbyWithActivitySecretProxy_eventOnResult_Parms), Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_OnResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_OnResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_OnResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_OnResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_OnResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_OnResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_NoRegister()
	{
		return UConnectLobbyWithActivitySecretProxy::StaticClass();
	}
	struct Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLobbyConnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyConnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLobbyAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordLobby,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_ConnectLobbyWithActivitySecret, "ConnectLobbyWithActivitySecret" }, // 4109452208
		{ &Z_Construct_UFunction_UConnectLobbyWithActivitySecretProxy_OnResult, "OnResult" }, // 3995907296
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ConnectLobbyWithActivitySecretProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConnectLobbyWithActivitySecretProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics::NewProp_OnLobbyConnected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConnectLobbyWithActivitySecretProxy" },
		{ "ModuleRelativePath", "Public/ConnectLobbyWithActivitySecretProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics::NewProp_OnLobbyConnected = { "OnLobbyConnected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConnectLobbyWithActivitySecretProxy, OnLobbyConnected), Z_Construct_UDelegateFunction_DiscordLobby_LobbyEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics::NewProp_OnLobbyConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics::NewProp_OnLobbyConnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConnectLobbyWithActivitySecretProxy" },
		{ "ModuleRelativePath", "Public/ConnectLobbyWithActivitySecretProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConnectLobbyWithActivitySecretProxy, OnError), Z_Construct_UDelegateFunction_DiscordLobby_LobbyEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics::NewProp_OnLobbyConnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConnectLobbyWithActivitySecretProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics::ClassParams = {
		&UConnectLobbyWithActivitySecretProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConnectLobbyWithActivitySecretProxy, 1837924752);
	template<> DISCORDLOBBY_API UClass* StaticClass<UConnectLobbyWithActivitySecretProxy>()
	{
		return UConnectLobbyWithActivitySecretProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConnectLobbyWithActivitySecretProxy(Z_Construct_UClass_UConnectLobbyWithActivitySecretProxy, &UConnectLobbyWithActivitySecretProxy::StaticClass, TEXT("/Script/DiscordLobby"), TEXT("UConnectLobbyWithActivitySecretProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConnectLobbyWithActivitySecretProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
