// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionGetOwnedGames.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionGetOwnedGames() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetOwnedGames::execGetOwnedGamesAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_UBOOL(Z_Param_bIncludeAppInfo);
		P_GET_UBOOL(Z_Param_bIncludePlayedFreeGames);
		P_GET_TARRAY(int32,Z_Param_Filter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetOwnedGames**)Z_Param__Result=USteamCoreWebAsyncActionGetOwnedGames::GetOwnedGamesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamID,Z_Param_bIncludeAppInfo,Z_Param_bIncludePlayedFreeGames,Z_Param_Filter);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetOwnedGames::StaticRegisterNativesUSteamCoreWebAsyncActionGetOwnedGames()
	{
		UClass* Class = USteamCoreWebAsyncActionGetOwnedGames::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwnedGamesAsync", &USteamCoreWebAsyncActionGetOwnedGames::execGetOwnedGamesAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString SteamID;
			bool bIncludeAppInfo;
			bool bIncludePlayedFreeGames;
			TArray<int32> Filter;
			USteamCoreWebAsyncActionGetOwnedGames* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static void NewProp_bIncludeAppInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeAppInfo;
		static void NewProp_bIncludePlayedFreeGames_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludePlayedFreeGames;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Filter_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_SteamID_MetaData)) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludeAppInfo_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms*)Obj)->bIncludeAppInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludeAppInfo = { "bIncludeAppInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludeAppInfo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludePlayedFreeGames_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms*)Obj)->bIncludePlayedFreeGames = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludePlayedFreeGames = { "bIncludePlayedFreeGames", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludePlayedFreeGames_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_Filter_Inner = { "Filter", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms, Filter), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludeAppInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludePlayedFreeGames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_Filter_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_Filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetOwnedGames.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames, nullptr, "GetOwnedGamesAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_NoRegister()
	{
		return USteamCoreWebAsyncActionGetOwnedGames::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync, "GetOwnedGamesAsync" }, // 2625274485
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionGetOwnedGames.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetOwnedGames.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetOwnedGames>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetOwnedGames::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetOwnedGames, 1116623113);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetOwnedGames>()
	{
		return USteamCoreWebAsyncActionGetOwnedGames::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetOwnedGames(Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames, &USteamCoreWebAsyncActionGetOwnedGames::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetOwnedGames"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetOwnedGames);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
