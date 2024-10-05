// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebUserAuth.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebUserAuth() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebUserAuth_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebUserAuth();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebUserAuth::execAuthenticateUser)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_TARRAY(uint8,Z_Param_sessionKey);
		P_GET_TARRAY(uint8,Z_Param_encryptedLoginKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AuthenticateUser(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_SteamID,Z_Param_sessionKey,Z_Param_encryptedLoginKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebUserAuth::execAuthenticateUserTicket)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Ticket);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AuthenticateUserTicket(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_Ticket);
		P_NATIVE_END;
	}
	void UWebUserAuth::StaticRegisterNativesUWebUserAuth()
	{
		UClass* Class = UWebUserAuth::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AuthenticateUser", &UWebUserAuth::execAuthenticateUser },
			{ "AuthenticateUserTicket", &UWebUserAuth::execAuthenticateUserTicket },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics
	{
		struct WebUserAuth_eventAuthenticateUser_Parms
		{
			FScriptDelegate Callback;
			FString SteamID;
			TArray<uint8> sessionKey;
			TArray<uint8> encryptedLoginKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_sessionKey_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_sessionKey;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_encryptedLoginKey_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_encryptedLoginKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUser_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUser_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_sessionKey_Inner = { "sessionKey", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_sessionKey = { "sessionKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUser_Parms, sessionKey), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_encryptedLoginKey_Inner = { "encryptedLoginKey", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_encryptedLoginKey = { "encryptedLoginKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUser_Parms, encryptedLoginKey), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_sessionKey_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_sessionKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_encryptedLoginKey_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_encryptedLoginKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebUserAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebUserAuth, nullptr, "AuthenticateUser", nullptr, nullptr, sizeof(WebUserAuth_eventAuthenticateUser_Parms), Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebUserAuth_AuthenticateUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics
	{
		struct WebUserAuth_eventAuthenticateUserTicket_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString Ticket;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUserTicket_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUserTicket_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUserTicket_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Ticket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUserTicket_Parms, Ticket), METADATA_PARAMS(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Ticket_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Ticket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Ticket,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebUserAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebUserAuth, nullptr, "AuthenticateUserTicket", nullptr, nullptr, sizeof(WebUserAuth_eventAuthenticateUserTicket_Parms), Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebUserAuth_NoRegister()
	{
		return UWebUserAuth::StaticClass();
	}
	struct Z_Construct_UClass_UWebUserAuth_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebUserAuth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebUserAuth_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebUserAuth_AuthenticateUser, "AuthenticateUser" }, // 2576547848
		{ &Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket, "AuthenticateUserTicket" }, // 2460500663
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebUserAuth_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebUserAuth.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebUserAuth.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebUserAuth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebUserAuth>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebUserAuth_Statics::ClassParams = {
		&UWebUserAuth::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebUserAuth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebUserAuth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebUserAuth()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebUserAuth_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebUserAuth, 1884302558);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebUserAuth>()
	{
		return UWebUserAuth::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebUserAuth(Z_Construct_UClass_UWebUserAuth, &UWebUserAuth::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebUserAuth"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebUserAuth);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
