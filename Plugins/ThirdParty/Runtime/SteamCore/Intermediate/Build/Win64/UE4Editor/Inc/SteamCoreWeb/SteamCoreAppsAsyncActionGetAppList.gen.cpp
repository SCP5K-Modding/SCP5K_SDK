// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreAppsAsyncActionGetAppList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreAppsAsyncActionGetAppList() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreAppsAsyncActionGetAppList::execGetAppListAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreAppsAsyncActionGetAppList**)Z_Param__Result=USteamCoreAppsAsyncActionGetAppList::GetAppListAsync(Z_Param_WorldContextObject,Z_Param_Key);
		P_NATIVE_END;
	}
	void USteamCoreAppsAsyncActionGetAppList::StaticRegisterNativesUSteamCoreAppsAsyncActionGetAppList()
	{
		UClass* Class = USteamCoreAppsAsyncActionGetAppList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAppListAsync", &USteamCoreAppsAsyncActionGetAppList::execGetAppListAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics
	{
		struct SteamCoreAppsAsyncActionGetAppList_eventGetAppListAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			USteamCoreAppsAsyncActionGetAppList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetAppList_eventGetAppListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetAppList_eventGetAppListAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetAppList_eventGetAppListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreAppsAsyncActionGetAppList.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList, nullptr, "GetAppListAsync", nullptr, nullptr, sizeof(SteamCoreAppsAsyncActionGetAppList_eventGetAppListAsync_Parms), Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_NoRegister()
	{
		return USteamCoreAppsAsyncActionGetAppList::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync, "GetAppListAsync" }, // 612714953
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreAppsAsyncActionGetAppList.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreAppsAsyncActionGetAppList.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAppsAsyncActionGetAppList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics::ClassParams = {
		&USteamCoreAppsAsyncActionGetAppList::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreAppsAsyncActionGetAppList, 711587078);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreAppsAsyncActionGetAppList>()
	{
		return USteamCoreAppsAsyncActionGetAppList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreAppsAsyncActionGetAppList(Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList, &USteamCoreAppsAsyncActionGetAppList::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreAppsAsyncActionGetAppList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreAppsAsyncActionGetAppList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
