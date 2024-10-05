// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionResolveVanityURL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionResolveVanityURL() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionResolveVanityURL::execResolveVanityURLAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_vanityURL);
		P_GET_ENUM(EVanityUrlType,Z_Param_urlType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionResolveVanityURL**)Z_Param__Result=USteamCoreWebAsyncActionResolveVanityURL::ResolveVanityURLAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_vanityURL,EVanityUrlType(Z_Param_urlType));
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionResolveVanityURL::StaticRegisterNativesUSteamCoreWebAsyncActionResolveVanityURL()
	{
		UClass* Class = USteamCoreWebAsyncActionResolveVanityURL::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResolveVanityURLAsync", &USteamCoreWebAsyncActionResolveVanityURL::execResolveVanityURLAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics
	{
		struct SteamCoreWebAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString vanityURL;
			EVanityUrlType urlType;
			USteamCoreWebAsyncActionResolveVanityURL* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vanityURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_vanityURL;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_urlType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_urlType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_vanityURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_vanityURL = { "vanityURL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms, vanityURL), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_vanityURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_vanityURL_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_urlType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_urlType = { "urlType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms, urlType), Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_vanityURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_urlType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_urlType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionResolveVanityURL.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL, nullptr, "ResolveVanityURLAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_NoRegister()
	{
		return USteamCoreWebAsyncActionResolveVanityURL::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync, "ResolveVanityURLAsync" }, // 3595815591
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionResolveVanityURL.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionResolveVanityURL.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionResolveVanityURL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::ClassParams = {
		&USteamCoreWebAsyncActionResolveVanityURL::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionResolveVanityURL, 1559472551);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionResolveVanityURL>()
	{
		return USteamCoreWebAsyncActionResolveVanityURL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionResolveVanityURL(Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL, &USteamCoreWebAsyncActionResolveVanityURL::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionResolveVanityURL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionResolveVanityURL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
