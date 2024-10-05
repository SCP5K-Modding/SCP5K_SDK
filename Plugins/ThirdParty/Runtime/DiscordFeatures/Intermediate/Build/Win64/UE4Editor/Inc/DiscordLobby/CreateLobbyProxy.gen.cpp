// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordLobby/Public/CreateLobbyProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateLobbyProxy() {}
// Cross Module References
	DISCORDLOBBY_API UClass* Z_Construct_UClass_UCreateLobbyProxy_NoRegister();
	DISCORDLOBBY_API UClass* Z_Construct_UClass_UCreateLobbyProxy();
	DISCORDLOBBY_API UClass* Z_Construct_UClass_UBaseLobbyAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordLobby();
	DISCORDLOBBY_API UClass* Z_Construct_UClass_UDiscordLobbyManager_NoRegister();
	DISCORDLOBBY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordLobbyTransaction();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordResult();
	DISCORDLOBBY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordLobby();
	DISCORDLOBBY_API UFunction* Z_Construct_UDelegateFunction_DiscordLobby_LobbyEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UCreateLobbyProxy::execCreateLobby)
	{
		P_GET_OBJECT(UDiscordLobbyManager,Z_Param_LobbyManager);
		P_GET_STRUCT_REF(FDiscordLobbyTransaction,Z_Param_Out_Transaction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCreateLobbyProxy**)Z_Param__Result=UCreateLobbyProxy::CreateLobby(Z_Param_LobbyManager,Z_Param_Out_Transaction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCreateLobbyProxy::execOnResult)
	{
		P_GET_ENUM(EDiscordResult,Z_Param_Result);
		P_GET_STRUCT_REF(FDiscordLobby,Z_Param_Out_Lobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResult(EDiscordResult(Z_Param_Result),Z_Param_Out_Lobby);
		P_NATIVE_END;
	}
	void UCreateLobbyProxy::StaticRegisterNativesUCreateLobbyProxy()
	{
		UClass* Class = UCreateLobbyProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateLobby", &UCreateLobbyProxy::execCreateLobby },
			{ "OnResult", &UCreateLobbyProxy::execOnResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCreateLobbyProxy_CreateLobby_Statics
	{
		struct CreateLobbyProxy_eventCreateLobby_Parms
		{
			UDiscordLobbyManager* LobbyManager;
			FDiscordLobbyTransaction Transaction;
			UCreateLobbyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LobbyManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transaction;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateLobbyProxy_CreateLobby_Statics::NewProp_LobbyManager = { "LobbyManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreateLobbyProxy_eventCreateLobby_Parms, LobbyManager), Z_Construct_UClass_UDiscordLobbyManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateLobbyProxy_CreateLobby_Statics::NewProp_Transaction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCreateLobbyProxy_CreateLobby_Statics::NewProp_Transaction = { "Transaction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreateLobbyProxy_eventCreateLobby_Parms, Transaction), Z_Construct_UScriptStruct_FDiscordLobbyTransaction, METADATA_PARAMS(Z_Construct_UFunction_UCreateLobbyProxy_CreateLobby_Statics::NewProp_Transaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateLobbyProxy_CreateLobby_Statics::NewProp_Transaction_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateLobbyProxy_CreateLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreateLobbyProxy_eventCreateLobby_Parms, ReturnValue), Z_Construct_UClass_UCreateLobbyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreateLobbyProxy_CreateLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateLobbyProxy_CreateLobby_Statics::NewProp_LobbyManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateLobbyProxy_CreateLobby_Statics::NewProp_Transaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateLobbyProxy_CreateLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateLobbyProxy_CreateLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreateLobbyProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreateLobbyProxy_CreateLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreateLobbyProxy, nullptr, "CreateLobby", nullptr, nullptr, sizeof(CreateLobbyProxy_eventCreateLobby_Parms), Z_Construct_UFunction_UCreateLobbyProxy_CreateLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateLobbyProxy_CreateLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreateLobbyProxy_CreateLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateLobbyProxy_CreateLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreateLobbyProxy_CreateLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreateLobbyProxy_CreateLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCreateLobbyProxy_OnResult_Statics
	{
		struct CreateLobbyProxy_eventOnResult_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCreateLobbyProxy_OnResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCreateLobbyProxy_OnResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreateLobbyProxy_eventOnResult_Parms, Result), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCreateLobbyProxy_OnResult_Statics::NewProp_Lobby = { "Lobby", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreateLobbyProxy_eventOnResult_Parms, Lobby), Z_Construct_UScriptStruct_FDiscordLobby, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreateLobbyProxy_OnResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateLobbyProxy_OnResult_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateLobbyProxy_OnResult_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateLobbyProxy_OnResult_Statics::NewProp_Lobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateLobbyProxy_OnResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreateLobbyProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreateLobbyProxy_OnResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreateLobbyProxy, nullptr, "OnResult", nullptr, nullptr, sizeof(CreateLobbyProxy_eventOnResult_Parms), Z_Construct_UFunction_UCreateLobbyProxy_OnResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateLobbyProxy_OnResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreateLobbyProxy_OnResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateLobbyProxy_OnResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreateLobbyProxy_OnResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreateLobbyProxy_OnResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCreateLobbyProxy_NoRegister()
	{
		return UCreateLobbyProxy::StaticClass();
	}
	struct Z_Construct_UClass_UCreateLobbyProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLobbyCreated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyCreated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreateLobbyProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLobbyAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordLobby,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCreateLobbyProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCreateLobbyProxy_CreateLobby, "CreateLobby" }, // 3426443504
		{ &Z_Construct_UFunction_UCreateLobbyProxy_OnResult, "OnResult" }, // 1054171566
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateLobbyProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CreateLobbyProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CreateLobbyProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateLobbyProxy_Statics::NewProp_OnLobbyCreated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreateLobbyProxy" },
		{ "ModuleRelativePath", "Public/CreateLobbyProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCreateLobbyProxy_Statics::NewProp_OnLobbyCreated = { "OnLobbyCreated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreateLobbyProxy, OnLobbyCreated), Z_Construct_UDelegateFunction_DiscordLobby_LobbyEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCreateLobbyProxy_Statics::NewProp_OnLobbyCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateLobbyProxy_Statics::NewProp_OnLobbyCreated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateLobbyProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreateLobbyProxy" },
		{ "ModuleRelativePath", "Public/CreateLobbyProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCreateLobbyProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreateLobbyProxy, OnError), Z_Construct_UDelegateFunction_DiscordLobby_LobbyEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCreateLobbyProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateLobbyProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreateLobbyProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateLobbyProxy_Statics::NewProp_OnLobbyCreated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateLobbyProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreateLobbyProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateLobbyProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCreateLobbyProxy_Statics::ClassParams = {
		&UCreateLobbyProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCreateLobbyProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCreateLobbyProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCreateLobbyProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateLobbyProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreateLobbyProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCreateLobbyProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCreateLobbyProxy, 4248520485);
	template<> DISCORDLOBBY_API UClass* StaticClass<UCreateLobbyProxy>()
	{
		return UCreateLobbyProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCreateLobbyProxy(Z_Construct_UClass_UCreateLobbyProxy, &UCreateLobbyProxy::StaticClass, TEXT("/Script/DiscordLobby"), TEXT("UCreateLobbyProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateLobbyProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
