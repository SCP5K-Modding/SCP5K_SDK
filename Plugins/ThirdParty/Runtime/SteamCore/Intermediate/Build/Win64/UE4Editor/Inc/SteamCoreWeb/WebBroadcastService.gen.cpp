// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebBroadcastService.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebBroadcastService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebBroadcastService_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebBroadcastService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebBroadcastService::execPostGameDataFrame)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_broadcastID);
		P_GET_PROPERTY(FStrProperty,Z_Param_FrameData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostGameDataFrame(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_SteamID,Z_Param_broadcastID,Z_Param_FrameData);
		P_NATIVE_END;
	}
	void UWebBroadcastService::StaticRegisterNativesUWebBroadcastService()
	{
		UClass* Class = UWebBroadcastService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PostGameDataFrame", &UWebBroadcastService::execPostGameDataFrame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics
	{
		struct WebBroadcastService_eventPostGameDataFrame_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString SteamID;
			FString broadcastID;
			FString FrameData;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_broadcastID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_broadcastID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FrameData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_broadcastID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_broadcastID = { "broadcastID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, broadcastID), METADATA_PARAMS(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_broadcastID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_broadcastID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_FrameData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, FrameData), METADATA_PARAMS(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_FrameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_FrameData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_broadcastID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_FrameData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebBroadcastService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBroadcastService, nullptr, "PostGameDataFrame", nullptr, nullptr, sizeof(WebBroadcastService_eventPostGameDataFrame_Parms), Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebBroadcastService_NoRegister()
	{
		return UWebBroadcastService::StaticClass();
	}
	struct Z_Construct_UClass_UWebBroadcastService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebBroadcastService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebBroadcastService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame, "PostGameDataFrame" }, // 1296123143
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBroadcastService_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebBroadcastService.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebBroadcastService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebBroadcastService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebBroadcastService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebBroadcastService_Statics::ClassParams = {
		&UWebBroadcastService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebBroadcastService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBroadcastService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebBroadcastService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebBroadcastService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebBroadcastService, 3457815231);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebBroadcastService>()
	{
		return UWebBroadcastService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebBroadcastService(Z_Construct_UClass_UWebBroadcastService, &UWebBroadcastService::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebBroadcastService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebBroadcastService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
