// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreCreateSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreCreateSession() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreCreateSession_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreCreateSession();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSetting();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreCreateSession::execCreateSteamCoreSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TMAP(FString,FSteamSessionSetting,Z_Param_SessionSettings);
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayers);
		P_GET_UBOOL(Z_Param_bUseLAN);
		P_GET_UBOOL(Z_Param_bAllowInvites);
		P_GET_UBOOL(Z_Param_bUsesPresence);
		P_GET_UBOOL(Z_Param_bAllowJoinViaPresence);
		P_GET_UBOOL(Z_Param_bAllowJoinViaPresenceFriendsOnly);
		P_GET_UBOOL(Z_Param_bAntiCheatProtected);
		P_GET_UBOOL(Z_Param_bUsesStats);
		P_GET_UBOOL(Z_Param_bShouldAdvertise);
		P_GET_UBOOL(Z_Param_bUseLobbiesVoiceChatIfAvailable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreCreateSession**)Z_Param__Result=USteamCoreCreateSession::CreateSteamCoreSession(Z_Param_WorldContextObject,Z_Param_SessionSettings,Z_Param_SessionName,Z_Param_MaxPlayers,Z_Param_bUseLAN,Z_Param_bAllowInvites,Z_Param_bUsesPresence,Z_Param_bAllowJoinViaPresence,Z_Param_bAllowJoinViaPresenceFriendsOnly,Z_Param_bAntiCheatProtected,Z_Param_bUsesStats,Z_Param_bShouldAdvertise,Z_Param_bUseLobbiesVoiceChatIfAvailable);
		P_NATIVE_END;
	}
	void USteamCoreCreateSession::StaticRegisterNativesUSteamCoreCreateSession()
	{
		UClass* Class = USteamCoreCreateSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSteamCoreSession", &USteamCoreCreateSession::execCreateSteamCoreSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics
	{
		struct SteamCoreCreateSession_eventCreateSteamCoreSession_Parms
		{
			UObject* WorldContextObject;
			TMap<FString,FSteamSessionSetting> SessionSettings;
			FString SessionName;
			int32 MaxPlayers;
			bool bUseLAN;
			bool bAllowInvites;
			bool bUsesPresence;
			bool bAllowJoinViaPresence;
			bool bAllowJoinViaPresenceFriendsOnly;
			bool bAntiCheatProtected;
			bool bUsesStats;
			bool bShouldAdvertise;
			bool bUseLobbiesVoiceChatIfAvailable;
			USteamCoreCreateSession* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionSettings_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionSettings_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SessionSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
		static void NewProp_bUseLAN_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
		static void NewProp_bAllowInvites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
		static void NewProp_bUsesPresence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesPresence;
		static void NewProp_bAllowJoinViaPresence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresence;
		static void NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresenceFriendsOnly;
		static void NewProp_bAntiCheatProtected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAntiCheatProtected;
		static void NewProp_bUsesStats_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesStats;
		static void NewProp_bShouldAdvertise_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldAdvertise;
		static void NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLobbiesVoiceChatIfAvailable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionSettings_ValueProp = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionSettings_Key_KeyProp = { "SessionSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, SessionSettings), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, SessionName), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, MaxPlayers), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLAN_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bUseLAN = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bAllowInvites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesPresence_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bUsesPresence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesPresence = { "bUsesPresence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesPresence_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresence_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bAllowJoinViaPresence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresence = { "bAllowJoinViaPresence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresence_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bAllowJoinViaPresenceFriendsOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly = { "bAllowJoinViaPresenceFriendsOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAntiCheatProtected_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bAntiCheatProtected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAntiCheatProtected = { "bAntiCheatProtected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAntiCheatProtected_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesStats_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bUsesStats = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesStats = { "bUsesStats", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesStats_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bShouldAdvertise_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bShouldAdvertise = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bShouldAdvertise = { "bShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bShouldAdvertise_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bUseLobbiesVoiceChatIfAvailable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable = { "bUseLobbiesVoiceChatIfAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, ReturnValue), Z_Construct_UClass_USteamCoreCreateSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionSettings_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionSettings_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_MaxPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLAN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowInvites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesPresence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAntiCheatProtected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bShouldAdvertise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreCreateSession.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreCreateSession, nullptr, "CreateSteamCoreSession", nullptr, nullptr, sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreCreateSession_NoRegister()
	{
		return USteamCoreCreateSession::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreCreateSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreCreateSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreCreateSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession, "CreateSteamCoreSession" }, // 3835830058
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreCreateSession_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreCreateSession.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreCreateSession.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreCreateSession" },
		{ "ModuleRelativePath", "Public/SteamCoreCreateSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreCreateSession, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreCreateSession" },
		{ "ModuleRelativePath", "Public/SteamCoreCreateSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreCreateSession, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreCreateSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreCreateSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreCreateSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreCreateSession_Statics::ClassParams = {
		&USteamCoreCreateSession::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreCreateSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreCreateSession_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreCreateSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreCreateSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreCreateSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreCreateSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreCreateSession, 3450252416);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreCreateSession>()
	{
		return USteamCoreCreateSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreCreateSession(Z_Construct_UClass_USteamCoreCreateSession, &USteamCoreCreateSession::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreCreateSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreCreateSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
