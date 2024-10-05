// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionEnumerateSessionsForApp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionEnumerateSessionsForApp() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionEnumerateSessionsForApp::execEnumerateSessionsForAppAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_UBOOL(Z_Param_bIncludeAllUserMessages);
		P_GET_UBOOL(Z_Param_bIncludeAuthUserMessage);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionEnumerateSessionsForApp**)Z_Param__Result=USteamCoreWebAsyncActionEnumerateSessionsForApp::EnumerateSessionsForAppAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID,Z_Param_SteamID,Z_Param_bIncludeAllUserMessages,Z_Param_bIncludeAuthUserMessage,Z_Param_Language);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionEnumerateSessionsForApp::StaticRegisterNativesUSteamCoreWebAsyncActionEnumerateSessionsForApp()
	{
		UClass* Class = USteamCoreWebAsyncActionEnumerateSessionsForApp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnumerateSessionsForAppAsync", &USteamCoreWebAsyncActionEnumerateSessionsForApp::execEnumerateSessionsForAppAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics
	{
		struct SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			int32 AppID;
			FString SteamID;
			bool bIncludeAllUserMessages;
			bool bIncludeAuthUserMessage;
			FString Language;
			USteamCoreWebAsyncActionEnumerateSessionsForApp* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static void NewProp_bIncludeAllUserMessages_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeAllUserMessages;
		static void NewProp_bIncludeAuthUserMessage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeAuthUserMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_SteamID_MetaData)) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAllUserMessages_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms*)Obj)->bIncludeAllUserMessages = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAllUserMessages = { "bIncludeAllUserMessages", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAllUserMessages_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAuthUserMessage_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms*)Obj)->bIncludeAuthUserMessage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAuthUserMessage = { "bIncludeAuthUserMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAuthUserMessage_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAllUserMessages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAuthUserMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionEnumerateSessionsForApp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp, nullptr, "EnumerateSessionsForAppAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_NoRegister()
	{
		return USteamCoreWebAsyncActionEnumerateSessionsForApp::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync, "EnumerateSessionsForAppAsync" }, // 3207923490
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionEnumerateSessionsForApp.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionEnumerateSessionsForApp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionEnumerateSessionsForApp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_Statics::ClassParams = {
		&USteamCoreWebAsyncActionEnumerateSessionsForApp::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionEnumerateSessionsForApp, 2948898291);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionEnumerateSessionsForApp>()
	{
		return USteamCoreWebAsyncActionEnumerateSessionsForApp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp(Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp, &USteamCoreWebAsyncActionEnumerateSessionsForApp::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionEnumerateSessionsForApp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionEnumerateSessionsForApp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
