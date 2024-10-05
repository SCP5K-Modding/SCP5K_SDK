// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Public/GetFriendsCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetFriendsCallbackProxy() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UGetFriendsCallbackProxy_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UGetFriendsCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetFriendsListDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGetFriendsCallbackProxy::execGetAndStoreFriendsList)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGetFriendsCallbackProxy**)Z_Param__Result=UGetFriendsCallbackProxy::GetAndStoreFriendsList(Z_Param_WorldContextObject,Z_Param_PlayerController);
		P_NATIVE_END;
	}
	void UGetFriendsCallbackProxy::StaticRegisterNativesUGetFriendsCallbackProxy()
	{
		UClass* Class = UGetFriendsCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAndStoreFriendsList", &UGetFriendsCallbackProxy::execGetAndStoreFriendsList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetFriendsCallbackProxy_GetAndStoreFriendsList_Statics
	{
		struct GetFriendsCallbackProxy_eventGetAndStoreFriendsList_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			UGetFriendsCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetFriendsCallbackProxy_GetAndStoreFriendsList_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetFriendsCallbackProxy_eventGetAndStoreFriendsList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetFriendsCallbackProxy_GetAndStoreFriendsList_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetFriendsCallbackProxy_eventGetAndStoreFriendsList_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetFriendsCallbackProxy_GetAndStoreFriendsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetFriendsCallbackProxy_eventGetAndStoreFriendsList_Parms, ReturnValue), Z_Construct_UClass_UGetFriendsCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetFriendsCallbackProxy_GetAndStoreFriendsList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetFriendsCallbackProxy_GetAndStoreFriendsList_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetFriendsCallbackProxy_GetAndStoreFriendsList_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetFriendsCallbackProxy_GetAndStoreFriendsList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetFriendsCallbackProxy_GetAndStoreFriendsList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GetFriendsCallbackProxy.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetFriendsCallbackProxy_GetAndStoreFriendsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetFriendsCallbackProxy, nullptr, "GetAndStoreFriendsList", nullptr, nullptr, sizeof(GetFriendsCallbackProxy_eventGetAndStoreFriendsList_Parms), Z_Construct_UFunction_UGetFriendsCallbackProxy_GetAndStoreFriendsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetFriendsCallbackProxy_GetAndStoreFriendsList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetFriendsCallbackProxy_GetAndStoreFriendsList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetFriendsCallbackProxy_GetAndStoreFriendsList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetFriendsCallbackProxy_GetAndStoreFriendsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetFriendsCallbackProxy_GetAndStoreFriendsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetFriendsCallbackProxy_NoRegister()
	{
		return UGetFriendsCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UGetFriendsCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UGetFriendsCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetFriendsCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetFriendsCallbackProxy_GetAndStoreFriendsList, "GetAndStoreFriendsList" }, // 422106227
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetFriendsCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GetFriendsCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GetFriendsCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetFriendsCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetFriendsCallbackProxy" },
		{ "ModuleRelativePath", "Public/GetFriendsCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetFriendsCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetFriendsCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetFriendsListDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetFriendsCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetFriendsCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetFriendsCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetFriendsCallbackProxy" },
		{ "ModuleRelativePath", "Public/GetFriendsCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetFriendsCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetFriendsCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetFriendsListDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetFriendsCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetFriendsCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetFriendsCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetFriendsCallbackProxy_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetFriendsCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetFriendsCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetFriendsCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetFriendsCallbackProxy_Statics::ClassParams = {
		&UGetFriendsCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGetFriendsCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGetFriendsCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetFriendsCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetFriendsCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetFriendsCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetFriendsCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetFriendsCallbackProxy, 2560393268);
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UGetFriendsCallbackProxy>()
	{
		return UGetFriendsCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetFriendsCallbackProxy(Z_Construct_UClass_UGetFriendsCallbackProxy, &UGetFriendsCallbackProxy::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UGetFriendsCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetFriendsCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
