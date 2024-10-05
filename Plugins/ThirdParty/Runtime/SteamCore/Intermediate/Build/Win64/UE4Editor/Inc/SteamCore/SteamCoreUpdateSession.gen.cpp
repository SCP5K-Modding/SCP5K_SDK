// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreUpdateSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreUpdateSession() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUpdateSession_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUpdateSession();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSearchSetting();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreUpdateSession::execOnCompleted)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompleted(Z_Param_SessionName,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreUpdateSession::execUpdateSteamCoreSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TMAP(FString,FSteamSessionSearchSetting,Z_Param_settings);
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreUpdateSession**)Z_Param__Result=USteamCoreUpdateSession::UpdateSteamCoreSession(Z_Param_WorldContextObject,Z_Param_settings,Z_Param_SessionName,Z_Param_MaxPlayers);
		P_NATIVE_END;
	}
	void USteamCoreUpdateSession::StaticRegisterNativesUSteamCoreUpdateSession()
	{
		UClass* Class = USteamCoreUpdateSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCompleted", &USteamCoreUpdateSession::execOnCompleted },
			{ "UpdateSteamCoreSession", &USteamCoreUpdateSession::execUpdateSteamCoreSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics
	{
		struct SteamCoreUpdateSession_eventOnCompleted_Parms
		{
			FName SessionName;
			bool bWasSuccessful;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUpdateSession_eventOnCompleted_Parms, SessionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreUpdateSession_eventOnCompleted_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreUpdateSession_eventOnCompleted_Parms), &Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::NewProp_SessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUpdateSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUpdateSession, nullptr, "OnCompleted", nullptr, nullptr, sizeof(SteamCoreUpdateSession_eventOnCompleted_Parms), Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics
	{
		struct SteamCoreUpdateSession_eventUpdateSteamCoreSession_Parms
		{
			UObject* WorldContextObject;
			TMap<FString,FSteamSessionSearchSetting> settings;
			FString SessionName;
			int32 MaxPlayers;
			USteamCoreUpdateSession* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_settings_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_settings_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUpdateSession_eventUpdateSteamCoreSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_settings_ValueProp = { "settings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSteamSessionSearchSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_settings_Key_KeyProp = { "settings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_settings = { "settings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUpdateSession_eventUpdateSteamCoreSession_Parms, settings), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_SessionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUpdateSession_eventUpdateSteamCoreSession_Parms, SessionName), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_SessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_SessionName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUpdateSession_eventUpdateSteamCoreSession_Parms, MaxPlayers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUpdateSession_eventUpdateSteamCoreSession_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUpdateSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_settings_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_settings_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_SessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_MaxPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUpdateSession.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUpdateSession, nullptr, "UpdateSteamCoreSession", nullptr, nullptr, sizeof(SteamCoreUpdateSession_eventUpdateSteamCoreSession_Parms), Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreUpdateSession_NoRegister()
	{
		return USteamCoreUpdateSession::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreUpdateSession_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreUpdateSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreUpdateSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted, "OnCompleted" }, // 3578262505
		{ &Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession, "UpdateSteamCoreSession" }, // 4033410662
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUpdateSession_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreUpdateSession.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreUpdateSession.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUpdateSession_Statics::NewProp_OnCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreUpdateSession" },
		{ "ModuleRelativePath", "Public/SteamCoreUpdateSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUpdateSession_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreUpdateSession, OnCallback), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreUpdateSession_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUpdateSession_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUpdateSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUpdateSession_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreUpdateSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUpdateSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUpdateSession_Statics::ClassParams = {
		&USteamCoreUpdateSession::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreUpdateSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUpdateSession_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreUpdateSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUpdateSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreUpdateSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreUpdateSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreUpdateSession, 4084855953);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreUpdateSession>()
	{
		return USteamCoreUpdateSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreUpdateSession(Z_Construct_UClass_USteamCoreUpdateSession, &USteamCoreUpdateSession::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreUpdateSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreUpdateSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
