// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebSteamNews.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSteamNews() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamNews_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamNews();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebSteamNews::execGetNewsForApp)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxLength);
		P_GET_TARRAY(FString,Z_Param_feeds);
		P_GET_PROPERTY(FIntProperty,Z_Param_endDate);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNewsForApp(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_AppID,Z_Param_maxLength,Z_Param_feeds,Z_Param_endDate,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamNews::execGetNewsForAppAuthed)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxLength);
		P_GET_TARRAY(FString,Z_Param_feeds);
		P_GET_PROPERTY(FIntProperty,Z_Param_endDate);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNewsForAppAuthed(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_maxLength,Z_Param_feeds,Z_Param_endDate,Z_Param_Count);
		P_NATIVE_END;
	}
	void UWebSteamNews::StaticRegisterNativesUWebSteamNews()
	{
		UClass* Class = UWebSteamNews::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNewsForApp", &UWebSteamNews::execGetNewsForApp },
			{ "GetNewsForAppAuthed", &UWebSteamNews::execGetNewsForAppAuthed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics
	{
		struct WebSteamNews_eventGetNewsForApp_Parms
		{
			FScriptDelegate Callback;
			int32 AppID;
			int32 maxLength;
			TArray<FString> feeds;
			int32 endDate;
			int32 Count;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxLength;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_feeds_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_feeds;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_endDate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForApp_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForApp_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_maxLength = { "maxLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForApp_Parms, maxLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_feeds_Inner = { "feeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_feeds = { "feeds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForApp_Parms, feeds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_endDate = { "endDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForApp_Parms, endDate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForApp_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_maxLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_feeds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_feeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_endDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamNews.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamNews, nullptr, "GetNewsForApp", nullptr, nullptr, sizeof(WebSteamNews_eventGetNewsForApp_Parms), Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamNews_GetNewsForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics
	{
		struct WebSteamNews_eventGetNewsForAppAuthed_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			int32 maxLength;
			TArray<FString> feeds;
			int32 endDate;
			int32 Count;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxLength;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_feeds_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_feeds;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_endDate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForAppAuthed_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForAppAuthed_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForAppAuthed_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_maxLength = { "maxLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForAppAuthed_Parms, maxLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_feeds_Inner = { "feeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_feeds = { "feeds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForAppAuthed_Parms, feeds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_endDate = { "endDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForAppAuthed_Parms, endDate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForAppAuthed_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_maxLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_feeds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_feeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_endDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamNews.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamNews, nullptr, "GetNewsForAppAuthed", nullptr, nullptr, sizeof(WebSteamNews_eventGetNewsForAppAuthed_Parms), Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSteamNews_NoRegister()
	{
		return UWebSteamNews::StaticClass();
	}
	struct Z_Construct_UClass_UWebSteamNews_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSteamNews_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSteamNews_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSteamNews_GetNewsForApp, "GetNewsForApp" }, // 1193408067
		{ &Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed, "GetNewsForAppAuthed" }, // 3588551571
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSteamNews_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebSteamNews.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebSteamNews.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSteamNews_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSteamNews>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebSteamNews_Statics::ClassParams = {
		&UWebSteamNews::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebSteamNews_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamNews_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSteamNews()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebSteamNews_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSteamNews, 325368041);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebSteamNews>()
	{
		return UWebSteamNews::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSteamNews(Z_Construct_UClass_UWebSteamNews, &UWebSteamNews::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebSteamNews"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSteamNews);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
