// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreFriendsAsyncActionSetPersonaName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreFriendsAsyncActionSetPersonaName() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSetPersonaNameResponse();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreFriendsAsyncActionSetPersonaName::execHandleCallback)
	{
		P_GET_STRUCT_REF(FSetPersonaNameResponse,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreFriendsAsyncActionSetPersonaName::execSetPersonaNameAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreFriendsAsyncActionSetPersonaName**)Z_Param__Result=USteamCoreFriendsAsyncActionSetPersonaName::SetPersonaNameAsync(Z_Param_WorldContextObject,Z_Param_Name);
		P_NATIVE_END;
	}
	void USteamCoreFriendsAsyncActionSetPersonaName::StaticRegisterNativesUSteamCoreFriendsAsyncActionSetPersonaName()
	{
		UClass* Class = USteamCoreFriendsAsyncActionSetPersonaName::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreFriendsAsyncActionSetPersonaName::execHandleCallback },
			{ "SetPersonaNameAsync", &USteamCoreFriendsAsyncActionSetPersonaName::execSetPersonaNameAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics
	{
		struct SteamCoreFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms
		{
			FSetPersonaNameResponse Data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FSetPersonaNameResponse, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreFriendsAsyncActionSetPersonaName.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics
	{
		struct SteamCoreFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms
		{
			UObject* WorldContextObject;
			FString Name;
			USteamCoreFriendsAsyncActionSetPersonaName* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreFriendsAsyncActionSetPersonaName.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName, nullptr, "SetPersonaNameAsync", nullptr, nullptr, sizeof(SteamCoreFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms), Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_NoRegister()
	{
		return USteamCoreFriendsAsyncActionSetPersonaName::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback, "HandleCallback" }, // 1957919135
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync, "SetPersonaNameAsync" }, // 3965119041
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreFriendsAsyncActionSetPersonaName.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreFriendsAsyncActionSetPersonaName.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::NewProp_OnCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreFriendsAsyncActionSetPersonaName" },
		{ "ModuleRelativePath", "Public/SteamCoreFriendsAsyncActionSetPersonaName.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreFriendsAsyncActionSetPersonaName, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFriendsAsyncActionSetPersonaName>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::ClassParams = {
		&USteamCoreFriendsAsyncActionSetPersonaName::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreFriendsAsyncActionSetPersonaName, 4001068358);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreFriendsAsyncActionSetPersonaName>()
	{
		return USteamCoreFriendsAsyncActionSetPersonaName::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreFriendsAsyncActionSetPersonaName(Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName, &USteamCoreFriendsAsyncActionSetPersonaName::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreFriendsAsyncActionSetPersonaName"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreFriendsAsyncActionSetPersonaName);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
