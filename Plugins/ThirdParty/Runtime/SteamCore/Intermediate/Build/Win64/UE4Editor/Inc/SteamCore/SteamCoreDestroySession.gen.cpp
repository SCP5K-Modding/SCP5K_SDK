// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreDestroySession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreDestroySession() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreDestroySession_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreDestroySession();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreDestroySession::execDestroySteamCoreSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreDestroySession**)Z_Param__Result=USteamCoreDestroySession::DestroySteamCoreSession(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreDestroySession::execOnCompleted)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompleted(Z_Param_SessionName,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	void USteamCoreDestroySession::StaticRegisterNativesUSteamCoreDestroySession()
	{
		UClass* Class = USteamCoreDestroySession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroySteamCoreSession", &USteamCoreDestroySession::execDestroySteamCoreSession },
			{ "OnCompleted", &USteamCoreDestroySession::execOnCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics
	{
		struct SteamCoreDestroySession_eventDestroySteamCoreSession_Parms
		{
			UObject* WorldContextObject;
			USteamCoreDestroySession* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreDestroySession_eventDestroySteamCoreSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreDestroySession_eventDestroySteamCoreSession_Parms, ReturnValue), Z_Construct_UClass_USteamCoreDestroySession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreDestroySession.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreDestroySession, nullptr, "DestroySteamCoreSession", nullptr, nullptr, sizeof(SteamCoreDestroySession_eventDestroySteamCoreSession_Parms), Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics
	{
		struct SteamCoreDestroySession_eventOnCompleted_Parms
		{
			FName SessionName;
			bool bWasSuccessful;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreDestroySession_eventOnCompleted_Parms, SessionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreDestroySession_eventOnCompleted_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreDestroySession_eventOnCompleted_Parms), &Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_SessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreDestroySession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreDestroySession, nullptr, "OnCompleted", nullptr, nullptr, sizeof(SteamCoreDestroySession_eventOnCompleted_Parms), Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreDestroySession_NoRegister()
	{
		return USteamCoreDestroySession::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreDestroySession_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreDestroySession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreDestroySession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession, "DestroySteamCoreSession" }, // 599399493
		{ &Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted, "OnCompleted" }, // 525629797
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreDestroySession_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreDestroySession.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreDestroySession.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreDestroySession" },
		{ "ModuleRelativePath", "Public/SteamCoreDestroySession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreDestroySession, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreDestroySession" },
		{ "ModuleRelativePath", "Public/SteamCoreDestroySession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreDestroySession, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreDestroySession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreDestroySession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreDestroySession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreDestroySession_Statics::ClassParams = {
		&USteamCoreDestroySession::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreDestroySession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreDestroySession_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreDestroySession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreDestroySession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreDestroySession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreDestroySession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreDestroySession, 1459761964);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreDestroySession>()
	{
		return USteamCoreDestroySession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreDestroySession(Z_Construct_UClass_USteamCoreDestroySession, &USteamCoreDestroySession::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreDestroySession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreDestroySession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
