// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreSteamPartiesAsyncActionCreateBeacon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreSteamPartiesAsyncActionCreateBeacon() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamPartyBeaconLocation();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCreateBeaconData();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreSteamPartiesAsyncActionCreateBeacon::execCreateBeaconAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_OpenSlots);
		P_GET_STRUCT(FSteamPartyBeaconLocation,Z_Param_BeaconLocation);
		P_GET_PROPERTY(FStrProperty,Z_Param_ConnectString);
		P_GET_PROPERTY(FStrProperty,Z_Param_MetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreSteamPartiesAsyncActionCreateBeacon**)Z_Param__Result=USteamCoreSteamPartiesAsyncActionCreateBeacon::CreateBeaconAsync(Z_Param_WorldContextObject,Z_Param_OpenSlots,Z_Param_BeaconLocation,Z_Param_ConnectString,Z_Param_MetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreSteamPartiesAsyncActionCreateBeacon::execHandleCallback)
	{
		P_GET_STRUCT_REF(FCreateBeaconData,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	void USteamCoreSteamPartiesAsyncActionCreateBeacon::StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionCreateBeacon()
	{
		UClass* Class = USteamCoreSteamPartiesAsyncActionCreateBeacon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateBeaconAsync", &USteamCoreSteamPartiesAsyncActionCreateBeacon::execCreateBeaconAsync },
			{ "HandleCallback", &USteamCoreSteamPartiesAsyncActionCreateBeacon::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics
	{
		struct SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms
		{
			UObject* WorldContextObject;
			int32 OpenSlots;
			FSteamPartyBeaconLocation BeaconLocation;
			FString ConnectString;
			FString MetaData;
			USteamCoreSteamPartiesAsyncActionCreateBeacon* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OpenSlots;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BeaconLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_OpenSlots = { "OpenSlots", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, OpenSlots), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_BeaconLocation = { "BeaconLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, BeaconLocation), Z_Construct_UScriptStruct_FSteamPartyBeaconLocation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ConnectString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, ConnectString), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ConnectString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ConnectString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, MetaData), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_MetaData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_OpenSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_BeaconLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ConnectString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreSteamPartiesAsyncActionCreateBeacon.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon, nullptr, "CreateBeaconAsync", nullptr, nullptr, sizeof(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms), Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics
	{
		struct SteamCoreSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms
		{
			FCreateBeaconData Data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FCreateBeaconData, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreSteamPartiesAsyncActionCreateBeacon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_NoRegister()
	{
		return USteamCoreSteamPartiesAsyncActionCreateBeacon::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync, "CreateBeaconAsync" }, // 537417790
		{ &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback, "HandleCallback" }, // 14986719
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreSteamPartiesAsyncActionCreateBeacon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreSteamPartiesAsyncActionCreateBeacon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::NewProp_OnCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreSteamPartiesAsyncActionCreateBeacon" },
		{ "ModuleRelativePath", "Public/SteamCoreSteamPartiesAsyncActionCreateBeacon.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreSteamPartiesAsyncActionCreateBeacon, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreSteamPartiesAsyncActionCreateBeacon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::ClassParams = {
		&USteamCoreSteamPartiesAsyncActionCreateBeacon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreSteamPartiesAsyncActionCreateBeacon, 2542079578);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreSteamPartiesAsyncActionCreateBeacon>()
	{
		return USteamCoreSteamPartiesAsyncActionCreateBeacon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon, &USteamCoreSteamPartiesAsyncActionCreateBeacon::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreSteamPartiesAsyncActionCreateBeacon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreSteamPartiesAsyncActionCreateBeacon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
