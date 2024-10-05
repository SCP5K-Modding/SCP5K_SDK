// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionConsolidate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionConsolidate() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionConsolidate::execConsolidateAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_TARRAY(int32,Z_Param_itemdefIDs);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionConsolidate**)Z_Param__Result=USteamCoreWebAsyncActionConsolidate::ConsolidateAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID,Z_Param_SteamID,Z_Param_itemdefIDs,Z_Param_bForce);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionConsolidate::StaticRegisterNativesUSteamCoreWebAsyncActionConsolidate()
	{
		UClass* Class = USteamCoreWebAsyncActionConsolidate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConsolidateAsync", &USteamCoreWebAsyncActionConsolidate::execConsolidateAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics
	{
		struct SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			int32 AppID;
			FString SteamID;
			TArray<int32> itemdefIDs;
			bool bForce;
			USteamCoreWebAsyncActionConsolidate* ReturnValue;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemdefIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_itemdefIDs;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_itemdefIDs_Inner = { "itemdefIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_itemdefIDs = { "itemdefIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms, itemdefIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_itemdefIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_itemdefIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_bForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionConsolidate.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate, nullptr, "ConsolidateAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_NoRegister()
	{
		return USteamCoreWebAsyncActionConsolidate::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync, "ConsolidateAsync" }, // 244645528
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionConsolidate.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionConsolidate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionConsolidate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::ClassParams = {
		&USteamCoreWebAsyncActionConsolidate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionConsolidate, 643988242);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionConsolidate>()
	{
		return USteamCoreWebAsyncActionConsolidate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionConsolidate(Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate, &USteamCoreWebAsyncActionConsolidate::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionConsolidate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionConsolidate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
