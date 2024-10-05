// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamGameSearch.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamGameSearch() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamGameSearch_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamGameSearch();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPlayerResult();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamGameSearch::execAcceptGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->AcceptGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameSearch::execAddGameSearchParams)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_KeyToFind);
		P_GET_TARRAY(FString,Z_Param_ValuesToFind);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->AddGameSearchParams(Z_Param_KeyToFind,Z_Param_ValuesToFind);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameSearch::execCancelRequestPlayersForGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->CancelRequestPlayersForGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameSearch::execDeclineGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->DeclineGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameSearch::execEndGame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UniqueGameID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->EndGame(Z_Param_UniqueGameID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameSearch::execEndGameSearch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->EndGameSearch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameSearch::execHostConfirmGameStart)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UniqueGameID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->HostConfirmGameStart(Z_Param_UniqueGameID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameSearch::execRequestPlayersForGame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMin);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMax);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxTeamSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->RequestPlayersForGame(Z_Param_PlayerMin,Z_Param_PlayerMax,Z_Param_MaxTeamSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameSearch::execRetrieveConnectionDetails)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDHost);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ConnectionDetails);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumConnectionDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->RetrieveConnectionDetails(Z_Param_SteamIDHost,Z_Param_Out_ConnectionDetails,Z_Param_NumConnectionDetails);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameSearch::execSearchForGameSolo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMin);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SearchForGameSolo(Z_Param_PlayerMin,Z_Param_PlayerMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameSearch::execSearchForGameWithLobby)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMin);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SearchForGameWithLobby(Z_Param_SteamIDLobby,Z_Param_PlayerMin,Z_Param_PlayerMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameSearch::execSetConnectionDetails)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ConnectionDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SetConnectionDetails(Z_Param_ConnectionDetails);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameSearch::execSetGameHostParams)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY(FString,Z_Param_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SetGameHostParams(Z_Param_Key,Z_Param_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameSearch::execSubmitPlayerResult)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UniqueGameID);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDPlayer);
		P_GET_ENUM(ESteamPlayerResult,Z_Param_PlayerResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SubmitPlayerResult(Z_Param_UniqueGameID,Z_Param_SteamIDPlayer,ESteamPlayerResult(Z_Param_PlayerResult));
		P_NATIVE_END;
	}
	void USteamGameSearch::StaticRegisterNativesUSteamGameSearch()
	{
		UClass* Class = USteamGameSearch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptGame", &USteamGameSearch::execAcceptGame },
			{ "AddGameSearchParams", &USteamGameSearch::execAddGameSearchParams },
			{ "CancelRequestPlayersForGame", &USteamGameSearch::execCancelRequestPlayersForGame },
			{ "DeclineGame", &USteamGameSearch::execDeclineGame },
			{ "EndGame", &USteamGameSearch::execEndGame },
			{ "EndGameSearch", &USteamGameSearch::execEndGameSearch },
			{ "HostConfirmGameStart", &USteamGameSearch::execHostConfirmGameStart },
			{ "RequestPlayersForGame", &USteamGameSearch::execRequestPlayersForGame },
			{ "RetrieveConnectionDetails", &USteamGameSearch::execRetrieveConnectionDetails },
			{ "SearchForGameSolo", &USteamGameSearch::execSearchForGameSolo },
			{ "SearchForGameWithLobby", &USteamGameSearch::execSearchForGameWithLobby },
			{ "SetConnectionDetails", &USteamGameSearch::execSetConnectionDetails },
			{ "SetGameHostParams", &USteamGameSearch::execSetGameHostParams },
			{ "SubmitPlayerResult", &USteamGameSearch::execSubmitPlayerResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics
	{
		struct SteamGameSearch_eventAcceptGame_Parms
		{
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventAcceptGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "AcceptGame", nullptr, nullptr, sizeof(SteamGameSearch_eventAcceptGame_Parms), Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_AcceptGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics
	{
		struct SteamGameSearch_eventAddGameSearchParams_Parms
		{
			FString KeyToFind;
			TArray<FString> ValuesToFind;
			ESteamGameSearchErrorCode ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyToFind_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyToFind;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ValuesToFind_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValuesToFind;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_KeyToFind_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_KeyToFind = { "KeyToFind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventAddGameSearchParams_Parms, KeyToFind), METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_KeyToFind_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_KeyToFind_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ValuesToFind_Inner = { "ValuesToFind", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ValuesToFind = { "ValuesToFind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventAddGameSearchParams_Parms, ValuesToFind), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventAddGameSearchParams_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_KeyToFind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ValuesToFind_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ValuesToFind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "AddGameSearchParams", nullptr, nullptr, sizeof(SteamGameSearch_eventAddGameSearchParams_Parms), Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics
	{
		struct SteamGameSearch_eventCancelRequestPlayersForGame_Parms
		{
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventCancelRequestPlayersForGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "CancelRequestPlayersForGame", nullptr, nullptr, sizeof(SteamGameSearch_eventCancelRequestPlayersForGame_Parms), Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics
	{
		struct SteamGameSearch_eventDeclineGame_Parms
		{
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventDeclineGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "DeclineGame", nullptr, nullptr, sizeof(SteamGameSearch_eventDeclineGame_Parms), Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_DeclineGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_EndGame_Statics
	{
		struct SteamGameSearch_eventEndGame_Parms
		{
			FString UniqueGameID;
			ESteamGameSearchErrorCode ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueGameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::NewProp_UniqueGameID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventEndGame_Parms, UniqueGameID), METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::NewProp_UniqueGameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::NewProp_UniqueGameID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventEndGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::NewProp_UniqueGameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "EndGame", nullptr, nullptr, sizeof(SteamGameSearch_eventEndGame_Parms), Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_EndGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics
	{
		struct SteamGameSearch_eventEndGameSearch_Parms
		{
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventEndGameSearch_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "EndGameSearch", nullptr, nullptr, sizeof(SteamGameSearch_eventEndGameSearch_Parms), Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_EndGameSearch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics
	{
		struct SteamGameSearch_eventHostConfirmGameStart_Parms
		{
			FString UniqueGameID;
			ESteamGameSearchErrorCode ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueGameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::NewProp_UniqueGameID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventHostConfirmGameStart_Parms, UniqueGameID), METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::NewProp_UniqueGameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::NewProp_UniqueGameID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventHostConfirmGameStart_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::NewProp_UniqueGameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "HostConfirmGameStart", nullptr, nullptr, sizeof(SteamGameSearch_eventHostConfirmGameStart_Parms), Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics
	{
		struct SteamGameSearch_eventRequestPlayersForGame_Parms
		{
			int32 PlayerMin;
			int32 PlayerMax;
			int32 MaxTeamSize;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerMin;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerMax;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTeamSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_PlayerMin = { "PlayerMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventRequestPlayersForGame_Parms, PlayerMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_PlayerMax = { "PlayerMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventRequestPlayersForGame_Parms, PlayerMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_MaxTeamSize = { "MaxTeamSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventRequestPlayersForGame_Parms, MaxTeamSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventRequestPlayersForGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_PlayerMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_PlayerMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_MaxTeamSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "RequestPlayersForGame", nullptr, nullptr, sizeof(SteamGameSearch_eventRequestPlayersForGame_Parms), Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics
	{
		struct SteamGameSearch_eventRetrieveConnectionDetails_Parms
		{
			FSteamID SteamIDHost;
			FString ConnectionDetails;
			int32 NumConnectionDetails;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDHost;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectionDetails;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumConnectionDetails;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_SteamIDHost = { "SteamIDHost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventRetrieveConnectionDetails_Parms, SteamIDHost), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ConnectionDetails = { "ConnectionDetails", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventRetrieveConnectionDetails_Parms, ConnectionDetails), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_NumConnectionDetails = { "NumConnectionDetails", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventRetrieveConnectionDetails_Parms, NumConnectionDetails), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventRetrieveConnectionDetails_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_SteamIDHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ConnectionDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_NumConnectionDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "RetrieveConnectionDetails", nullptr, nullptr, sizeof(SteamGameSearch_eventRetrieveConnectionDetails_Parms), Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics
	{
		struct SteamGameSearch_eventSearchForGameSolo_Parms
		{
			int32 PlayerMin;
			int32 PlayerMax;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerMin;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerMax;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_PlayerMin = { "PlayerMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventSearchForGameSolo_Parms, PlayerMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_PlayerMax = { "PlayerMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventSearchForGameSolo_Parms, PlayerMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventSearchForGameSolo_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_PlayerMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_PlayerMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "SearchForGameSolo", nullptr, nullptr, sizeof(SteamGameSearch_eventSearchForGameSolo_Parms), Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics
	{
		struct SteamGameSearch_eventSearchForGameWithLobby_Parms
		{
			FSteamID SteamIDLobby;
			int32 PlayerMin;
			int32 PlayerMax;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerMin;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerMax;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventSearchForGameWithLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_PlayerMin = { "PlayerMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventSearchForGameWithLobby_Parms, PlayerMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_PlayerMax = { "PlayerMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventSearchForGameWithLobby_Parms, PlayerMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventSearchForGameWithLobby_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_PlayerMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_PlayerMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "SearchForGameWithLobby", nullptr, nullptr, sizeof(SteamGameSearch_eventSearchForGameWithLobby_Parms), Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics
	{
		struct SteamGameSearch_eventSetConnectionDetails_Parms
		{
			FString ConnectionDetails;
			ESteamGameSearchErrorCode ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectionDetails;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::NewProp_ConnectionDetails_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::NewProp_ConnectionDetails = { "ConnectionDetails", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventSetConnectionDetails_Parms, ConnectionDetails), METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::NewProp_ConnectionDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::NewProp_ConnectionDetails_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventSetConnectionDetails_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::NewProp_ConnectionDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "SetConnectionDetails", nullptr, nullptr, sizeof(SteamGameSearch_eventSetConnectionDetails_Parms), Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics
	{
		struct SteamGameSearch_eventSetGameHostParams_Parms
		{
			FString Key;
			TArray<FString> Values;
			ESteamGameSearchErrorCode ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Values_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventSetGameHostParams_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventSetGameHostParams_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventSetGameHostParams_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "SetGameHostParams", nullptr, nullptr, sizeof(SteamGameSearch_eventSetGameHostParams_Parms), Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_SetGameHostParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics
	{
		struct SteamGameSearch_eventSubmitPlayerResult_Parms
		{
			FString UniqueGameID;
			FSteamID SteamIDPlayer;
			ESteamPlayerResult PlayerResult;
			ESteamGameSearchErrorCode ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueGameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDPlayer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_UniqueGameID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventSubmitPlayerResult_Parms, UniqueGameID), METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_UniqueGameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_UniqueGameID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_SteamIDPlayer = { "SteamIDPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventSubmitPlayerResult_Parms, SteamIDPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_PlayerResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_PlayerResult = { "PlayerResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventSubmitPlayerResult_Parms, PlayerResult), Z_Construct_UEnum_SteamCore_ESteamPlayerResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameSearch_eventSubmitPlayerResult_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_UniqueGameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_SteamIDPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_PlayerResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_PlayerResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "SubmitPlayerResult", nullptr, nullptr, sizeof(SteamGameSearch_eventSubmitPlayerResult_Parms), Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamGameSearch_NoRegister()
	{
		return USteamGameSearch::StaticClass();
	}
	struct Z_Construct_UClass_USteamGameSearch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchForGameProgressDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SearchForGameProgressDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchForGameResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SearchForGameResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestPlayersForGameProgressDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestPlayersForGameProgressDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestPlayersForGameResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestPlayersForGameResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestPlayersForGameFinalResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestPlayersForGameFinalResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmitPlayerResultResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SubmitPlayerResultResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndGameResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EndGameResultDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamGameSearch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamGameSearch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamGameSearch_AcceptGame, "AcceptGame" }, // 4116277323
		{ &Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams, "AddGameSearchParams" }, // 3814816723
		{ &Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame, "CancelRequestPlayersForGame" }, // 583574229
		{ &Z_Construct_UFunction_USteamGameSearch_DeclineGame, "DeclineGame" }, // 1069965547
		{ &Z_Construct_UFunction_USteamGameSearch_EndGame, "EndGame" }, // 4190155178
		{ &Z_Construct_UFunction_USteamGameSearch_EndGameSearch, "EndGameSearch" }, // 3864709298
		{ &Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart, "HostConfirmGameStart" }, // 1821471030
		{ &Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame, "RequestPlayersForGame" }, // 956656878
		{ &Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails, "RetrieveConnectionDetails" }, // 1048372245
		{ &Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo, "SearchForGameSolo" }, // 106184821
		{ &Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby, "SearchForGameWithLobby" }, // 879610754
		{ &Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails, "SetConnectionDetails" }, // 3515074422
		{ &Z_Construct_UFunction_USteamGameSearch_SetGameHostParams, "SetGameHostParams" }, // 15128268
		{ &Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult, "SubmitPlayerResult" }, // 3508039478
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameSearch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamGameSearch.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameProgressDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamGameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameProgressDelegate = { "SearchForGameProgressDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamGameSearch, SearchForGameProgressDelegate), Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameProgressDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameProgressDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameResultDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamGameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameResultDelegate = { "SearchForGameResultDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamGameSearch, SearchForGameResultDelegate), Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameProgressDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamGameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameProgressDelegate = { "RequestPlayersForGameProgressDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamGameSearch, RequestPlayersForGameProgressDelegate), Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameProgressDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameProgressDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameResultDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamGameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameResultDelegate = { "RequestPlayersForGameResultDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamGameSearch, RequestPlayersForGameResultDelegate), Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameFinalResultDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamGameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameFinalResultDelegate = { "RequestPlayersForGameFinalResultDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamGameSearch, RequestPlayersForGameFinalResultDelegate), Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameFinalResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameFinalResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SubmitPlayerResultResultDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamGameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SubmitPlayerResultResultDelegate = { "SubmitPlayerResultResultDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamGameSearch, SubmitPlayerResultResultDelegate), Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SubmitPlayerResultResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SubmitPlayerResultResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameSearch_Statics::NewProp_EndGameResultDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamGameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameSearch_Statics::NewProp_EndGameResultDelegate = { "EndGameResultDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamGameSearch, EndGameResultDelegate), Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_EndGameResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_EndGameResultDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamGameSearch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameProgressDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameProgressDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameFinalResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SubmitPlayerResultResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameSearch_Statics::NewProp_EndGameResultDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamGameSearch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamGameSearch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamGameSearch_Statics::ClassParams = {
		&USteamGameSearch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamGameSearch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameSearch_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamGameSearch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameSearch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamGameSearch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamGameSearch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamGameSearch, 1797465919);
	template<> STEAMCORE_API UClass* StaticClass<USteamGameSearch>()
	{
		return USteamGameSearch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamGameSearch(Z_Construct_UClass_USteamGameSearch, &USteamGameSearch::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamGameSearch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamGameSearch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
