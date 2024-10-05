// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreAppsAsyncActionGetServerList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreAppsAsyncActionGetServerList() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreAppsAsyncActionGetServerList::execGetServerListAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filter);
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreAppsAsyncActionGetServerList**)Z_Param__Result=USteamCoreAppsAsyncActionGetServerList::GetServerListAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_Filter,Z_Param_Limit);
		P_NATIVE_END;
	}
	void USteamCoreAppsAsyncActionGetServerList::StaticRegisterNativesUSteamCoreAppsAsyncActionGetServerList()
	{
		UClass* Class = USteamCoreAppsAsyncActionGetServerList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetServerListAsync", &USteamCoreAppsAsyncActionGetServerList::execGetServerListAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics
	{
		struct SteamCoreAppsAsyncActionGetServerList_eventGetServerListAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString Filter;
			int32 Limit;
			USteamCoreAppsAsyncActionGetServerList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetServerList_eventGetServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetServerList_eventGetServerListAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetServerList_eventGetServerListAsync_Parms, Filter), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Filter_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetServerList_eventGetServerListAsync_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetServerList_eventGetServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreAppsAsyncActionGetServerList.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList, nullptr, "GetServerListAsync", nullptr, nullptr, sizeof(SteamCoreAppsAsyncActionGetServerList_eventGetServerListAsync_Parms), Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_NoRegister()
	{
		return USteamCoreAppsAsyncActionGetServerList::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync, "GetServerListAsync" }, // 910099617
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreAppsAsyncActionGetServerList.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreAppsAsyncActionGetServerList.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAppsAsyncActionGetServerList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_Statics::ClassParams = {
		&USteamCoreAppsAsyncActionGetServerList::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreAppsAsyncActionGetServerList, 1515451105);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreAppsAsyncActionGetServerList>()
	{
		return USteamCoreAppsAsyncActionGetServerList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreAppsAsyncActionGetServerList(Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList, &USteamCoreAppsAsyncActionGetServerList::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreAppsAsyncActionGetServerList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreAppsAsyncActionGetServerList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
