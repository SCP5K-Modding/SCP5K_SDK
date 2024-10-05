// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreUGCAsyncActionAddItemToFavorites.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreUGCAsyncActionAddItemToFavorites() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUserFavoriteItemsListChanged();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAddItemToFavoritesAsyncDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreUGCAsyncActionAddItemToFavorites::execAddItemToFavoritesAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreUGCAsyncActionAddItemToFavorites**)Z_Param__Result=USteamCoreUGCAsyncActionAddItemToFavorites::AddItemToFavoritesAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreUGCAsyncActionAddItemToFavorites::execHandleCallback)
	{
		P_GET_STRUCT_REF(FUserFavoriteItemsListChanged,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	void USteamCoreUGCAsyncActionAddItemToFavorites::StaticRegisterNativesUSteamCoreUGCAsyncActionAddItemToFavorites()
	{
		UClass* Class = USteamCoreUGCAsyncActionAddItemToFavorites::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemToFavoritesAsync", &USteamCoreUGCAsyncActionAddItemToFavorites::execAddItemToFavoritesAsync },
			{ "HandleCallback", &USteamCoreUGCAsyncActionAddItemToFavorites::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Statics
	{
		struct SteamCoreUGCAsyncActionAddItemToFavorites_eventAddItemToFavoritesAsync_Parms
		{
			UObject* WorldContextObject;
			int32 AppID;
			FPublishedFileID PublishedFileID;
			USteamCoreUGCAsyncActionAddItemToFavorites* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUGCAsyncActionAddItemToFavorites_eventAddItemToFavoritesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUGCAsyncActionAddItemToFavorites_eventAddItemToFavoritesAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUGCAsyncActionAddItemToFavorites_eventAddItemToFavoritesAsync_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUGCAsyncActionAddItemToFavorites_eventAddItemToFavoritesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUGCAsyncActionAddItemToFavorites.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites, nullptr, "AddItemToFavoritesAsync", nullptr, nullptr, sizeof(SteamCoreUGCAsyncActionAddItemToFavorites_eventAddItemToFavoritesAsync_Parms), Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Statics
	{
		struct SteamCoreUGCAsyncActionAddItemToFavorites_eventHandleCallback_Parms
		{
			FUserFavoriteItemsListChanged Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUGCAsyncActionAddItemToFavorites_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FUserFavoriteItemsListChanged, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreUGCAsyncActionAddItemToFavorites_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreUGCAsyncActionAddItemToFavorites_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUGCAsyncActionAddItemToFavorites.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreUGCAsyncActionAddItemToFavorites_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_NoRegister()
	{
		return USteamCoreUGCAsyncActionAddItemToFavorites::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync, "AddItemToFavoritesAsync" }, // 783741274
		{ &Z_Construct_UFunction_USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback, "HandleCallback" }, // 3087401145
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreUGCAsyncActionAddItemToFavorites.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreUGCAsyncActionAddItemToFavorites.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_Statics::NewProp_OnCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreUGCAsyncActionAddItemToFavorites" },
		{ "ModuleRelativePath", "Public/SteamCoreUGCAsyncActionAddItemToFavorites.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreUGCAsyncActionAddItemToFavorites, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnAddItemToFavoritesAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUGCAsyncActionAddItemToFavorites>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_Statics::ClassParams = {
		&USteamCoreUGCAsyncActionAddItemToFavorites::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreUGCAsyncActionAddItemToFavorites, 809460299);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreUGCAsyncActionAddItemToFavorites>()
	{
		return USteamCoreUGCAsyncActionAddItemToFavorites::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreUGCAsyncActionAddItemToFavorites(Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites, &USteamCoreUGCAsyncActionAddItemToFavorites::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreUGCAsyncActionAddItemToFavorites"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreUGCAsyncActionAddItemToFavorites);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
