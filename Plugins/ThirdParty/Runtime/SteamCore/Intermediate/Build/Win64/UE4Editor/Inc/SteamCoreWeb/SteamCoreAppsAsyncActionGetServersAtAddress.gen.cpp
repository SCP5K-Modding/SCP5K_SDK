// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreAppsAsyncActionGetServersAtAddress.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreAppsAsyncActionGetServersAtAddress() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreAppsAsyncActionGetServersAtAddress::execGetServersAtAddressAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_addr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreAppsAsyncActionGetServersAtAddress**)Z_Param__Result=USteamCoreAppsAsyncActionGetServersAtAddress::GetServersAtAddressAsync(Z_Param_WorldContextObject,Z_Param_addr);
		P_NATIVE_END;
	}
	void USteamCoreAppsAsyncActionGetServersAtAddress::StaticRegisterNativesUSteamCoreAppsAsyncActionGetServersAtAddress()
	{
		UClass* Class = USteamCoreAppsAsyncActionGetServersAtAddress::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetServersAtAddressAsync", &USteamCoreAppsAsyncActionGetServersAtAddress::execGetServersAtAddressAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics
	{
		struct SteamCoreAppsAsyncActionGetServersAtAddress_eventGetServersAtAddressAsync_Parms
		{
			UObject* WorldContextObject;
			FString addr;
			USteamCoreAppsAsyncActionGetServersAtAddress* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_addr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_addr;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetServersAtAddress_eventGetServersAtAddressAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::NewProp_addr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::NewProp_addr = { "addr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetServersAtAddress_eventGetServersAtAddressAsync_Parms, addr), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::NewProp_addr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::NewProp_addr_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetServersAtAddress_eventGetServersAtAddressAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::NewProp_addr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreAppsAsyncActionGetServersAtAddress.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress, nullptr, "GetServersAtAddressAsync", nullptr, nullptr, sizeof(SteamCoreAppsAsyncActionGetServersAtAddress_eventGetServersAtAddressAsync_Parms), Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_NoRegister()
	{
		return USteamCoreAppsAsyncActionGetServersAtAddress::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync, "GetServersAtAddressAsync" }, // 2099197803
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreAppsAsyncActionGetServersAtAddress.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreAppsAsyncActionGetServersAtAddress.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAppsAsyncActionGetServersAtAddress>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_Statics::ClassParams = {
		&USteamCoreAppsAsyncActionGetServersAtAddress::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreAppsAsyncActionGetServersAtAddress, 2814566434);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreAppsAsyncActionGetServersAtAddress>()
	{
		return USteamCoreAppsAsyncActionGetServersAtAddress::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreAppsAsyncActionGetServersAtAddress(Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress, &USteamCoreAppsAsyncActionGetServersAtAddress::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreAppsAsyncActionGetServersAtAddress"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreAppsAsyncActionGetServersAtAddress);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
