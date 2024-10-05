// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::execGetGlobalAchievementPercentagesForAppAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp**)Z_Param__Result=USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::GetGlobalAchievementPercentagesForAppAsync(Z_Param_WorldContextObject,Z_Param_GameID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::StaticRegisterNativesUSteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp()
	{
		UClass* Class = USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGlobalAchievementPercentagesForAppAsync", &USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::execGetGlobalAchievementPercentagesForAppAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForAppAsync_Parms
		{
			UObject* WorldContextObject;
			FString GameID;
			USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForAppAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::NewProp_GameID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForAppAsync_Parms, GameID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::NewProp_GameID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForAppAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::NewProp_GameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp, nullptr, "GetGlobalAchievementPercentagesForAppAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForAppAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_NoRegister()
	{
		return USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync, "GetGlobalAchievementPercentagesForAppAsync" }, // 3984542689
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp, 178027684);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp>()
	{
		return USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp(Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp, &USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
