// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreUserAsyncActionRequestEncryptedAppTicket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreUserAsyncActionRequestEncryptedAppTicket() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEncryptedAppTicketResponse();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreUserAsyncActionRequestEncryptedAppTicket::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEncryptedAppTicketResponse,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreUserAsyncActionRequestEncryptedAppTicket::execRequestEncryptedAppTicketAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY(uint8,Z_Param_DataToInclude);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreUserAsyncActionRequestEncryptedAppTicket**)Z_Param__Result=USteamCoreUserAsyncActionRequestEncryptedAppTicket::RequestEncryptedAppTicketAsync(Z_Param_WorldContextObject,Z_Param_DataToInclude);
		P_NATIVE_END;
	}
	void USteamCoreUserAsyncActionRequestEncryptedAppTicket::StaticRegisterNativesUSteamCoreUserAsyncActionRequestEncryptedAppTicket()
	{
		UClass* Class = USteamCoreUserAsyncActionRequestEncryptedAppTicket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreUserAsyncActionRequestEncryptedAppTicket::execHandleCallback },
			{ "RequestEncryptedAppTicketAsync", &USteamCoreUserAsyncActionRequestEncryptedAppTicket::execRequestEncryptedAppTicketAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics
	{
		struct SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms
		{
			FEncryptedAppTicketResponse Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FEncryptedAppTicketResponse, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUserAsyncActionRequestEncryptedAppTicket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics
	{
		struct SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms
		{
			UObject* WorldContextObject;
			TArray<uint8> DataToInclude;
			USteamCoreUserAsyncActionRequestEncryptedAppTicket* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataToInclude_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataToInclude;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_DataToInclude_Inner = { "DataToInclude", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_DataToInclude = { "DataToInclude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms, DataToInclude), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_DataToInclude_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_DataToInclude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUserAsyncActionRequestEncryptedAppTicket.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket, nullptr, "RequestEncryptedAppTicketAsync", nullptr, nullptr, sizeof(SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms), Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_NoRegister()
	{
		return USteamCoreUserAsyncActionRequestEncryptedAppTicket::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback, "HandleCallback" }, // 1608520400
		{ &Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync, "RequestEncryptedAppTicketAsync" }, // 2341353262
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreUserAsyncActionRequestEncryptedAppTicket.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreUserAsyncActionRequestEncryptedAppTicket.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::NewProp_OnCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreUserAsyncActionRequestEncryptedAppTicket" },
		{ "ModuleRelativePath", "Public/SteamCoreUserAsyncActionRequestEncryptedAppTicket.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreUserAsyncActionRequestEncryptedAppTicket, OnCallback), Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUserAsyncActionRequestEncryptedAppTicket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::ClassParams = {
		&USteamCoreUserAsyncActionRequestEncryptedAppTicket::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreUserAsyncActionRequestEncryptedAppTicket, 1837817262);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreUserAsyncActionRequestEncryptedAppTicket>()
	{
		return USteamCoreUserAsyncActionRequestEncryptedAppTicket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket(Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket, &USteamCoreUserAsyncActionRequestEncryptedAppTicket::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreUserAsyncActionRequestEncryptedAppTicket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreUserAsyncActionRequestEncryptedAppTicket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
