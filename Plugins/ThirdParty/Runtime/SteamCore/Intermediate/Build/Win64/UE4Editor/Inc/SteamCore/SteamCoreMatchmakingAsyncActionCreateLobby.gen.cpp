// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreMatchmakingAsyncActionCreateLobby.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreMatchmakingAsyncActionCreateLobby() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyType();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCreateLobbyData();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreMatchmakingAsyncActionCreateLobby::execCreateLobbyAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESteamLobbyType,Z_Param_LobbyType);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxMembers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreMatchmakingAsyncActionCreateLobby**)Z_Param__Result=USteamCoreMatchmakingAsyncActionCreateLobby::CreateLobbyAsync(Z_Param_WorldContextObject,ESteamLobbyType(Z_Param_LobbyType),Z_Param_MaxMembers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingAsyncActionCreateLobby::execHandleCallback)
	{
		P_GET_STRUCT_REF(FCreateLobbyData,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	void USteamCoreMatchmakingAsyncActionCreateLobby::StaticRegisterNativesUSteamCoreMatchmakingAsyncActionCreateLobby()
	{
		UClass* Class = USteamCoreMatchmakingAsyncActionCreateLobby::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateLobbyAsync", &USteamCoreMatchmakingAsyncActionCreateLobby::execCreateLobbyAsync },
			{ "HandleCallback", &USteamCoreMatchmakingAsyncActionCreateLobby::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics
	{
		struct SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms
		{
			UObject* WorldContextObject;
			ESteamLobbyType LobbyType;
			int32 MaxMembers;
			USteamCoreMatchmakingAsyncActionCreateLobby* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LobbyType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LobbyType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_LobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, LobbyType), Z_Construct_UEnum_SteamCore_ESteamLobbyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, MaxMembers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_LobbyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_LobbyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_MaxMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingAsyncActionCreateLobby.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby, nullptr, "CreateLobbyAsync", nullptr, nullptr, sizeof(SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics
	{
		struct SteamCoreMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms
		{
			FCreateLobbyData Data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FCreateLobbyData, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingAsyncActionCreateLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_NoRegister()
	{
		return USteamCoreMatchmakingAsyncActionCreateLobby::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync, "CreateLobbyAsync" }, // 952419667
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback, "HandleCallback" }, // 2737869675
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreMatchmakingAsyncActionCreateLobby.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingAsyncActionCreateLobby.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::NewProp_OnCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreMatchmakingAsyncActionCreateLobby" },
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingAsyncActionCreateLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreMatchmakingAsyncActionCreateLobby, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreMatchmakingAsyncActionCreateLobby>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::ClassParams = {
		&USteamCoreMatchmakingAsyncActionCreateLobby::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreMatchmakingAsyncActionCreateLobby, 693545333);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreMatchmakingAsyncActionCreateLobby>()
	{
		return USteamCoreMatchmakingAsyncActionCreateLobby::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreMatchmakingAsyncActionCreateLobby(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby, &USteamCoreMatchmakingAsyncActionCreateLobby::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreMatchmakingAsyncActionCreateLobby"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreMatchmakingAsyncActionCreateLobby);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
