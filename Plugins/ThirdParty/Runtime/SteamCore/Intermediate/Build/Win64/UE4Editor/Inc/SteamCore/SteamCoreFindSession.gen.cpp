// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreFindSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreFindSession() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFindSession_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFindSession();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSearchSetting();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamSessionFindType();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreFindSession::execFindSteamCoreSessions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TMAP(FString,FSteamSessionSearchSetting,Z_Param_SearchSettings);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_GET_UBOOL(Z_Param_bUseLAN);
		P_GET_ENUM(ESteamSessionFindType,Z_Param_ServerType);
		P_GET_UBOOL(Z_Param_bEmptyServersOnly);
		P_GET_UBOOL(Z_Param_bSecureServersOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreFindSession**)Z_Param__Result=USteamCoreFindSession::FindSteamCoreSessions(Z_Param_WorldContextObject,Z_Param_SearchSettings,Z_Param_MaxResults,Z_Param_bUseLAN,ESteamSessionFindType(Z_Param_ServerType),Z_Param_bEmptyServersOnly,Z_Param_bSecureServersOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreFindSession::execOnCompleted)
	{
		P_GET_UBOOL(Z_Param_bSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompleted(Z_Param_bSuccessful);
		P_NATIVE_END;
	}
	void USteamCoreFindSession::StaticRegisterNativesUSteamCoreFindSession()
	{
		UClass* Class = USteamCoreFindSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindSteamCoreSessions", &USteamCoreFindSession::execFindSteamCoreSessions },
			{ "OnCompleted", &USteamCoreFindSession::execOnCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics
	{
		struct SteamCoreFindSession_eventFindSteamCoreSessions_Parms
		{
			UObject* WorldContextObject;
			TMap<FString,FSteamSessionSearchSetting> SearchSettings;
			int32 MaxResults;
			bool bUseLAN;
			ESteamSessionFindType ServerType;
			bool bEmptyServersOnly;
			bool bSecureServersOnly;
			USteamCoreFindSession* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchSettings_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SearchSettings_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SearchSettings;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static void NewProp_bUseLAN_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ServerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ServerType;
		static void NewProp_bEmptyServersOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEmptyServersOnly;
		static void NewProp_bSecureServersOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSecureServersOnly;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreFindSession_eventFindSteamCoreSessions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_SearchSettings_ValueProp = { "SearchSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSteamSessionSearchSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_SearchSettings_Key_KeyProp = { "SearchSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_SearchSettings = { "SearchSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreFindSession_eventFindSteamCoreSessions_Parms, SearchSettings), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreFindSession_eventFindSteamCoreSessions_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bUseLAN_SetBit(void* Obj)
	{
		((SteamCoreFindSession_eventFindSteamCoreSessions_Parms*)Obj)->bUseLAN = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreFindSession_eventFindSteamCoreSessions_Parms), &Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_ServerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_ServerType = { "ServerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreFindSession_eventFindSteamCoreSessions_Parms, ServerType), Z_Construct_UEnum_SteamCore_ESteamSessionFindType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bEmptyServersOnly_SetBit(void* Obj)
	{
		((SteamCoreFindSession_eventFindSteamCoreSessions_Parms*)Obj)->bEmptyServersOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bEmptyServersOnly = { "bEmptyServersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreFindSession_eventFindSteamCoreSessions_Parms), &Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bEmptyServersOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bSecureServersOnly_SetBit(void* Obj)
	{
		((SteamCoreFindSession_eventFindSteamCoreSessions_Parms*)Obj)->bSecureServersOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bSecureServersOnly = { "bSecureServersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreFindSession_eventFindSteamCoreSessions_Parms), &Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bSecureServersOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreFindSession_eventFindSteamCoreSessions_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFindSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_SearchSettings_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_SearchSettings_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_SearchSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bUseLAN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_ServerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_ServerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bEmptyServersOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bSecureServersOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreFindSession.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFindSession, nullptr, "FindSteamCoreSessions", nullptr, nullptr, sizeof(SteamCoreFindSession_eventFindSteamCoreSessions_Parms), Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics
	{
		struct SteamCoreFindSession_eventOnCompleted_Parms
		{
			bool bSuccessful;
		};
		static void NewProp_bSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::NewProp_bSuccessful_SetBit(void* Obj)
	{
		((SteamCoreFindSession_eventOnCompleted_Parms*)Obj)->bSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::NewProp_bSuccessful = { "bSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreFindSession_eventOnCompleted_Parms), &Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::NewProp_bSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::NewProp_bSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreFindSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFindSession, nullptr, "OnCompleted", nullptr, nullptr, sizeof(SteamCoreFindSession_eventOnCompleted_Parms), Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFindSession_OnCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreFindSession_NoRegister()
	{
		return USteamCoreFindSession::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreFindSession_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreFindSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreFindSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions, "FindSteamCoreSessions" }, // 3323054297
		{ &Z_Construct_UFunction_USteamCoreFindSession_OnCompleted, "OnCompleted" }, // 2391492503
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFindSession_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreFindSession.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreFindSession.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFindSession_Statics::NewProp_OnCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreFindSession" },
		{ "ModuleRelativePath", "Public/SteamCoreFindSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFindSession_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreFindSession, OnCallback), Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreFindSession_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFindSession_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFindSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFindSession_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreFindSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFindSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreFindSession_Statics::ClassParams = {
		&USteamCoreFindSession::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreFindSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFindSession_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreFindSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFindSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreFindSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreFindSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreFindSession, 1730869680);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreFindSession>()
	{
		return USteamCoreFindSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreFindSession(Z_Construct_UClass_USteamCoreFindSession, &USteamCoreFindSession::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreFindSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreFindSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
