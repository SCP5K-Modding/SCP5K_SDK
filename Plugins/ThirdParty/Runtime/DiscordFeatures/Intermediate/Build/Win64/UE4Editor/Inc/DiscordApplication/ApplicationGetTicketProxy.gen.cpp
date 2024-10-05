// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordApplication/Public/ApplicationGetTicketProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApplicationGetTicketProxy() {}
// Cross Module References
	DISCORDAPPLICATION_API UClass* Z_Construct_UClass_UApplicationGetTicketProxy_NoRegister();
	DISCORDAPPLICATION_API UClass* Z_Construct_UClass_UApplicationGetTicketProxy();
	DISCORDAPPLICATION_API UClass* Z_Construct_UClass_UBaseApplicationAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordApplication();
	DISCORDAPPLICATION_API UClass* Z_Construct_UClass_UDiscordApplicationManager_NoRegister();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordResult();
	DISCORDAPPLICATION_API UFunction* Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnTickerReceived__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UApplicationGetTicketProxy::execGetTicket)
	{
		P_GET_OBJECT(UDiscordApplicationManager,Z_Param_ApplicationManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApplicationGetTicketProxy**)Z_Param__Result=UApplicationGetTicketProxy::GetTicket(Z_Param_ApplicationManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApplicationGetTicketProxy::execOnResultInternal)
	{
		P_GET_ENUM(EDiscordResult,Z_Param_Result);
		P_GET_PROPERTY(FStrProperty,Z_Param_Ticket);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResultInternal(EDiscordResult(Z_Param_Result),Z_Param_Ticket);
		P_NATIVE_END;
	}
	void UApplicationGetTicketProxy::StaticRegisterNativesUApplicationGetTicketProxy()
	{
		UClass* Class = UApplicationGetTicketProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTicket", &UApplicationGetTicketProxy::execGetTicket },
			{ "OnResultInternal", &UApplicationGetTicketProxy::execOnResultInternal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApplicationGetTicketProxy_GetTicket_Statics
	{
		struct ApplicationGetTicketProxy_eventGetTicket_Parms
		{
			UDiscordApplicationManager* ApplicationManager;
			UApplicationGetTicketProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ApplicationManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApplicationGetTicketProxy_GetTicket_Statics::NewProp_ApplicationManager = { "ApplicationManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ApplicationGetTicketProxy_eventGetTicket_Parms, ApplicationManager), Z_Construct_UClass_UDiscordApplicationManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApplicationGetTicketProxy_GetTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ApplicationGetTicketProxy_eventGetTicket_Parms, ReturnValue), Z_Construct_UClass_UApplicationGetTicketProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApplicationGetTicketProxy_GetTicket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApplicationGetTicketProxy_GetTicket_Statics::NewProp_ApplicationManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApplicationGetTicketProxy_GetTicket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApplicationGetTicketProxy_GetTicket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ApplicationGetTicketProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApplicationGetTicketProxy_GetTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApplicationGetTicketProxy, nullptr, "GetTicket", nullptr, nullptr, sizeof(ApplicationGetTicketProxy_eventGetTicket_Parms), Z_Construct_UFunction_UApplicationGetTicketProxy_GetTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApplicationGetTicketProxy_GetTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApplicationGetTicketProxy_GetTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApplicationGetTicketProxy_GetTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApplicationGetTicketProxy_GetTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApplicationGetTicketProxy_GetTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApplicationGetTicketProxy_OnResultInternal_Statics
	{
		struct ApplicationGetTicketProxy_eventOnResultInternal_Parms
		{
			EDiscordResult Result;
			FString Ticket;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ticket_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ticket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UApplicationGetTicketProxy_OnResultInternal_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UApplicationGetTicketProxy_OnResultInternal_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ApplicationGetTicketProxy_eventOnResultInternal_Parms, Result), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApplicationGetTicketProxy_OnResultInternal_Statics::NewProp_Ticket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApplicationGetTicketProxy_OnResultInternal_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ApplicationGetTicketProxy_eventOnResultInternal_Parms, Ticket), METADATA_PARAMS(Z_Construct_UFunction_UApplicationGetTicketProxy_OnResultInternal_Statics::NewProp_Ticket_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UApplicationGetTicketProxy_OnResultInternal_Statics::NewProp_Ticket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApplicationGetTicketProxy_OnResultInternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApplicationGetTicketProxy_OnResultInternal_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApplicationGetTicketProxy_OnResultInternal_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApplicationGetTicketProxy_OnResultInternal_Statics::NewProp_Ticket,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApplicationGetTicketProxy_OnResultInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ApplicationGetTicketProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApplicationGetTicketProxy_OnResultInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApplicationGetTicketProxy, nullptr, "OnResultInternal", nullptr, nullptr, sizeof(ApplicationGetTicketProxy_eventOnResultInternal_Parms), Z_Construct_UFunction_UApplicationGetTicketProxy_OnResultInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApplicationGetTicketProxy_OnResultInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApplicationGetTicketProxy_OnResultInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApplicationGetTicketProxy_OnResultInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApplicationGetTicketProxy_OnResultInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApplicationGetTicketProxy_OnResultInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UApplicationGetTicketProxy_NoRegister()
	{
		return UApplicationGetTicketProxy::StaticClass();
	}
	struct Z_Construct_UClass_UApplicationGetTicketProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTicketReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTicketReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UApplicationGetTicketProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseApplicationAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordApplication,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApplicationGetTicketProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApplicationGetTicketProxy_GetTicket, "GetTicket" }, // 3766545382
		{ &Z_Construct_UFunction_UApplicationGetTicketProxy_OnResultInternal, "OnResultInternal" }, // 3421317113
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationGetTicketProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ApplicationGetTicketProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ApplicationGetTicketProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationGetTicketProxy_Statics::NewProp_OnTicketReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ApplicationGetTicketProxy" },
		{ "ModuleRelativePath", "Public/ApplicationGetTicketProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationGetTicketProxy_Statics::NewProp_OnTicketReceived = { "OnTicketReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UApplicationGetTicketProxy, OnTicketReceived), Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnTickerReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationGetTicketProxy_Statics::NewProp_OnTicketReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationGetTicketProxy_Statics::NewProp_OnTicketReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationGetTicketProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ApplicationGetTicketProxy" },
		{ "ModuleRelativePath", "Public/ApplicationGetTicketProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationGetTicketProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UApplicationGetTicketProxy, OnError), Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnTickerReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationGetTicketProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationGetTicketProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApplicationGetTicketProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationGetTicketProxy_Statics::NewProp_OnTicketReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationGetTicketProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApplicationGetTicketProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApplicationGetTicketProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UApplicationGetTicketProxy_Statics::ClassParams = {
		&UApplicationGetTicketProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApplicationGetTicketProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationGetTicketProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApplicationGetTicketProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationGetTicketProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApplicationGetTicketProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UApplicationGetTicketProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UApplicationGetTicketProxy, 2109035773);
	template<> DISCORDAPPLICATION_API UClass* StaticClass<UApplicationGetTicketProxy>()
	{
		return UApplicationGetTicketProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UApplicationGetTicketProxy(Z_Construct_UClass_UApplicationGetTicketProxy, &UApplicationGetTicketProxy::StaticClass, TEXT("/Script/DiscordApplication"), TEXT("UApplicationGetTicketProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApplicationGetTicketProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
