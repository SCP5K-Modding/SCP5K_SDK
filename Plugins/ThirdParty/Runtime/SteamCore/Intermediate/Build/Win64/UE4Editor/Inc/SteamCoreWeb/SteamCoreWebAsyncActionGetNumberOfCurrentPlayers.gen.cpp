// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionGetNumberOfCurrentPlayers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionGetNumberOfCurrentPlayers() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::execGetNumberOfCurrentPlayersAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetNumberOfCurrentPlayers**)Z_Param__Result=USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::GetNumberOfCurrentPlayersAsync(Z_Param_WorldContextObject,Z_Param_AppID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::StaticRegisterNativesUSteamCoreWebAsyncActionGetNumberOfCurrentPlayers()
	{
		UClass* Class = USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNumberOfCurrentPlayersAsync", &USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::execGetNumberOfCurrentPlayersAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms
		{
			UObject* WorldContextObject;
			int32 AppID;
			USteamCoreWebAsyncActionGetNumberOfCurrentPlayers* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetNumberOfCurrentPlayers.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers, nullptr, "GetNumberOfCurrentPlayersAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_NoRegister()
	{
		return USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync, "GetNumberOfCurrentPlayersAsync" }, // 1652247285
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionGetNumberOfCurrentPlayers.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetNumberOfCurrentPlayers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetNumberOfCurrentPlayers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetNumberOfCurrentPlayers, 3514108800);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetNumberOfCurrentPlayers>()
	{
		return USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers(Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers, &USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetNumberOfCurrentPlayers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetNumberOfCurrentPlayers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
