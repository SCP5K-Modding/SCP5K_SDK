// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreSteamPartiesAsyncActionChangeNumOpenSlots() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPartyBeaconID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FChangeNumOpenSlotsData();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::execChangeNumOpenSlotsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FPartyBeaconID,Z_Param_BeaconID);
		P_GET_PROPERTY(FIntProperty,Z_Param_OpenSlots);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots**)Z_Param__Result=USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::ChangeNumOpenSlotsAsync(Z_Param_WorldContextObject,Z_Param_BeaconID,Z_Param_OpenSlots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::execHandleCallback)
	{
		P_GET_STRUCT_REF(FChangeNumOpenSlotsData,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	void USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionChangeNumOpenSlots()
	{
		UClass* Class = USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeNumOpenSlotsAsync", &USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::execChangeNumOpenSlotsAsync },
			{ "HandleCallback", &USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics
	{
		struct SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms
		{
			UObject* WorldContextObject;
			FPartyBeaconID BeaconID;
			int32 OpenSlots;
			USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BeaconID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OpenSlots;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_BeaconID = { "BeaconID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, BeaconID), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_OpenSlots = { "OpenSlots", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, OpenSlots), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_BeaconID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_OpenSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots, nullptr, "ChangeNumOpenSlotsAsync", nullptr, nullptr, sizeof(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms), Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics
	{
		struct SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms
		{
			FChangeNumOpenSlotsData Data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FChangeNumOpenSlotsData, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_NoRegister()
	{
		return USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync, "ChangeNumOpenSlotsAsync" }, // 1609604103
		{ &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback, "HandleCallback" }, // 1311531554
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::NewProp_OnCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots" },
		{ "ModuleRelativePath", "Public/SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::ClassParams = {
		&USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots, 691936850);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots>()
	{
		return USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots, &USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
