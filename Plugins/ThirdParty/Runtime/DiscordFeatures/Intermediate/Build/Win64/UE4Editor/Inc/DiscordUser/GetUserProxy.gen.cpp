// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordUser/Public/GetUserProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetUserProxy() {}
// Cross Module References
	DISCORDUSER_API UClass* Z_Construct_UClass_UGetUserProxy_NoRegister();
	DISCORDUSER_API UClass* Z_Construct_UClass_UGetUserProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_DiscordUser();
	DISCORDUSER_API UClass* Z_Construct_UClass_UDiscordUserManager_NoRegister();
	DISCORDUSER_API UFunction* Z_Construct_UDelegateFunction_DiscordUser_OnGetUserEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGetUserProxy::execGetUser)
	{
		P_GET_OBJECT(UDiscordUserManager,Z_Param_UserManager);
		P_GET_PROPERTY(FInt64Property,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGetUserProxy**)Z_Param__Result=UGetUserProxy::GetUser(Z_Param_UserManager,Z_Param_UserId);
		P_NATIVE_END;
	}
	void UGetUserProxy::StaticRegisterNativesUGetUserProxy()
	{
		UClass* Class = UGetUserProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUser", &UGetUserProxy::execGetUser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetUserProxy_GetUser_Statics
	{
		struct GetUserProxy_eventGetUser_Parms
		{
			UDiscordUserManager* UserManager;
			int64 UserId;
			UGetUserProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetUserProxy_GetUser_Statics::NewProp_UserManager = { "UserManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetUserProxy_eventGetUser_Parms, UserManager), Z_Construct_UClass_UDiscordUserManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetUserProxy_GetUser_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UGetUserProxy_GetUser_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetUserProxy_eventGetUser_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UGetUserProxy_GetUser_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetUserProxy_GetUser_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetUserProxy_GetUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetUserProxy_eventGetUser_Parms, ReturnValue), Z_Construct_UClass_UGetUserProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetUserProxy_GetUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetUserProxy_GetUser_Statics::NewProp_UserManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetUserProxy_GetUser_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetUserProxy_GetUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetUserProxy_GetUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GetUserProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetUserProxy_GetUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetUserProxy, nullptr, "GetUser", nullptr, nullptr, sizeof(GetUserProxy_eventGetUser_Parms), Z_Construct_UFunction_UGetUserProxy_GetUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetUserProxy_GetUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetUserProxy_GetUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetUserProxy_GetUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetUserProxy_GetUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetUserProxy_GetUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetUserProxy_NoRegister()
	{
		return UGetUserProxy::StaticClass();
	}
	struct Z_Construct_UClass_UGetUserProxy_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetUserProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordUser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetUserProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetUserProxy_GetUser, "GetUser" }, // 169702603
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetUserProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GetUserProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GetUserProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetUserProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetUserProxy" },
		{ "ModuleRelativePath", "Public/GetUserProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetUserProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetUserProxy, OnSuccess), Z_Construct_UDelegateFunction_DiscordUser_OnGetUserEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetUserProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetUserProxy_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetUserProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetUserProxy" },
		{ "ModuleRelativePath", "Public/GetUserProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetUserProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetUserProxy, OnError), Z_Construct_UDelegateFunction_DiscordUser_OnGetUserEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetUserProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetUserProxy_Statics::NewProp_OnError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetUserProxy_Statics::NewProp_Manager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetUserProxy" },
		{ "ModuleRelativePath", "Public/GetUserProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGetUserProxy_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetUserProxy, Manager), Z_Construct_UClass_UDiscordUserManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGetUserProxy_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetUserProxy_Statics::NewProp_Manager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetUserProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetUserProxy_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetUserProxy_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetUserProxy_Statics::NewProp_Manager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetUserProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetUserProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetUserProxy_Statics::ClassParams = {
		&UGetUserProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGetUserProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGetUserProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetUserProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetUserProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetUserProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetUserProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetUserProxy, 1463125146);
	template<> DISCORDUSER_API UClass* StaticClass<UGetUserProxy>()
	{
		return UGetUserProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetUserProxy(Z_Construct_UClass_UGetUserProxy, &UGetUserProxy::StaticClass, TEXT("/Script/DiscordUser"), TEXT("UGetUserProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetUserProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
