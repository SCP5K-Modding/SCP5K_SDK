// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionEndSecureMultiplayerSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionEndSecureMultiplayerSession() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionEndSecureMultiplayerSession::execEndSecureMultiplayerSessionAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionEndSecureMultiplayerSession**)Z_Param__Result=USteamCoreWebAsyncActionEndSecureMultiplayerSession::EndSecureMultiplayerSessionAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamID,Z_Param_AppID,Z_Param_SessionID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticRegisterNativesUSteamCoreWebAsyncActionEndSecureMultiplayerSession()
	{
		UClass* Class = USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndSecureMultiplayerSessionAsync", &USteamCoreWebAsyncActionEndSecureMultiplayerSession::execEndSecureMultiplayerSessionAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics
	{
		struct SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString SteamID;
			int32 AppID;
			FString SessionID;
			USteamCoreWebAsyncActionEndSecureMultiplayerSession* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SessionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, SessionID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SessionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SessionID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionEndSecureMultiplayerSession.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession, nullptr, "EndSecureMultiplayerSessionAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_NoRegister()
	{
		return USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync, "EndSecureMultiplayerSessionAsync" }, // 435292749
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionEndSecureMultiplayerSession.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionEndSecureMultiplayerSession.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionEndSecureMultiplayerSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::ClassParams = {
		&USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionEndSecureMultiplayerSession, 2204560909);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionEndSecureMultiplayerSession>()
	{
		return USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession(Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession, &USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionEndSecureMultiplayerSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionEndSecureMultiplayerSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
