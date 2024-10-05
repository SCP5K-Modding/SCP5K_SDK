// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionAddPromoItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionAddPromoItem() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionAddPromoItem::execAddPromoItemAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_itemdefID);
		P_GET_PROPERTY(FStrProperty,Z_Param_itemPropsJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_UBOOL(Z_Param_bNotify);
		P_GET_PROPERTY(FStrProperty,Z_Param_RequestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionAddPromoItem**)Z_Param__Result=USteamCoreWebAsyncActionAddPromoItem::AddPromoItemAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID,Z_Param_itemdefID,Z_Param_itemPropsJson,Z_Param_SteamID,Z_Param_bNotify,Z_Param_RequestID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionAddPromoItem::StaticRegisterNativesUSteamCoreWebAsyncActionAddPromoItem()
	{
		UClass* Class = USteamCoreWebAsyncActionAddPromoItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPromoItemAsync", &USteamCoreWebAsyncActionAddPromoItem::execAddPromoItemAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics
	{
		struct SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			int32 AppID;
			int32 itemdefID;
			FString itemPropsJson;
			FString SteamID;
			bool bNotify;
			FString RequestID;
			USteamCoreWebAsyncActionAddPromoItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemdefID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemPropsJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemPropsJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static void NewProp_bNotify_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequestID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_itemdefID = { "itemdefID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, itemdefID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_itemPropsJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_itemPropsJson = { "itemPropsJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, itemPropsJson), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_itemPropsJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_itemPropsJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_SteamID_MetaData)) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_bNotify_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms*)Obj)->bNotify = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_bNotify = { "bNotify", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_bNotify_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_RequestID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, RequestID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_RequestID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_RequestID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_itemdefID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_itemPropsJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_bNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_RequestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionAddPromoItem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem, nullptr, "AddPromoItemAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_NoRegister()
	{
		return USteamCoreWebAsyncActionAddPromoItem::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync, "AddPromoItemAsync" }, // 1801108266
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionAddPromoItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionAddPromoItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionAddPromoItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::ClassParams = {
		&USteamCoreWebAsyncActionAddPromoItem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionAddPromoItem, 4153416206);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionAddPromoItem>()
	{
		return USteamCoreWebAsyncActionAddPromoItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionAddPromoItem(Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem, &USteamCoreWebAsyncActionAddPromoItem::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionAddPromoItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionAddPromoItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
