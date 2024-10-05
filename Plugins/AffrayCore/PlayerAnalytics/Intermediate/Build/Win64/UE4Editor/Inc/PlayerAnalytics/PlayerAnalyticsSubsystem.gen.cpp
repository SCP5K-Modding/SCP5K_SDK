// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerAnalytics/Public/PlayerAnalyticsSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnalyticsSubsystem() {}
// Cross Module References
	PLAYERANALYTICS_API UClass* Z_Construct_UClass_UPlayerAnalyticsSubsystem_NoRegister();
	PLAYERANALYTICS_API UClass* Z_Construct_UClass_UPlayerAnalyticsSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_PlayerAnalytics();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	PLAYERANALYTICS_API UEnum* Z_Construct_UEnum_PlayerAnalytics_EPlayerAnalyticsEventType();
	PLAYERANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerAnalyticsSession();
	PLAYERANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerAnalyticsSubsystem::execAddAnalyticsEvent)
	{
		P_GET_OBJECT(APlayerState,Z_Param_Player);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_ENUM(EPlayerAnalyticsEventType,Z_Param_EventType);
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetName);
		P_GET_STRUCT(FVector,Z_Param_TargetLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAnalyticsEvent(Z_Param_Player,Z_Param_Location,Z_Param_Rotation,EPlayerAnalyticsEventType(Z_Param_EventType),Z_Param_TargetName,Z_Param_TargetLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnalyticsSubsystem::execAddGlobalAnalyticsEvent)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_ENUM(EPlayerAnalyticsEventType,Z_Param_EventType);
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetName);
		P_GET_STRUCT(FVector,Z_Param_TargetLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGlobalAnalyticsEvent(Z_Param_Location,Z_Param_Rotation,EPlayerAnalyticsEventType(Z_Param_EventType),Z_Param_TargetName,Z_Param_TargetLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnalyticsSubsystem::execCalculateAverageTimeBetweenObjectives)
	{
		P_GET_TARRAY_REF(FPlayerAnalyticsSession,Z_Param_Out_InSessions);
		P_GET_PROPERTY(FStrProperty,Z_Param_ObjectiveA);
		P_GET_PROPERTY(FStrProperty,Z_Param_ObjectiveB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPlayerAnalyticsSubsystem::CalculateAverageTimeBetweenObjectives(Z_Param_Out_InSessions,Z_Param_ObjectiveA,Z_Param_ObjectiveB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnalyticsSubsystem::execCalculateTimeBetweenObjectives)
	{
		P_GET_STRUCT_REF(FPlayerAnalyticsSession,Z_Param_Out_InSession);
		P_GET_PROPERTY(FStrProperty,Z_Param_ObjectiveA);
		P_GET_PROPERTY(FStrProperty,Z_Param_ObjectiveB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPlayerAnalyticsSubsystem::CalculateTimeBetweenObjectives(Z_Param_Out_InSession,Z_Param_ObjectiveA,Z_Param_ObjectiveB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnalyticsSubsystem::execDebugPlayerAnalytics)
	{
		P_GET_STRUCT_REF(FPlayerAnalyticsSession,Z_Param_Out_InSession);
		P_GET_UBOOL(Z_Param_bDrawText);
		P_GET_UBOOL(Z_Param_bPersistent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugPlayerAnalytics(Z_Param_Out_InSession,Z_Param_bDrawText,Z_Param_bPersistent,Z_Param_Duration,Z_Param_MaxTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnalyticsSubsystem::execGetAnalyticsFileName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAnalyticsFileName(Z_Param_Prefix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnalyticsSubsystem::execGetAverageTimeBetweenDeathsForPlayer)
	{
		P_GET_STRUCT_REF(FPlayerAnalyticsPlayer,Z_Param_Out_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPlayerAnalyticsSubsystem::GetAverageTimeBetweenDeathsForPlayer(Z_Param_Out_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnalyticsSubsystem::execGetCurrentSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlayerAnalyticsSession*)Z_Param__Result=P_THIS->GetCurrentSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnalyticsSubsystem::execGetIsRecording)
	{
		P_GET_ENUM(EPlayerAnalyticsEventType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsRecording(EPlayerAnalyticsEventType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnalyticsSubsystem::execGetLastEventTime)
	{
		P_GET_STRUCT_REF(FPlayerAnalyticsSession,Z_Param_Out_InSession);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPlayerAnalyticsSubsystem::GetLastEventTime(Z_Param_Out_InSession);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnalyticsSubsystem::execGetPlayerColor)
	{
		P_GET_STRUCT_REF(FPlayerAnalyticsSession,Z_Param_Out_InSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=UPlayerAnalyticsSubsystem::GetPlayerColor(Z_Param_Out_InSession,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnalyticsSubsystem::execGetPlayerLastKnownLocation)
	{
		P_GET_OBJECT(APlayerState,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPlayerLastKnownLocation(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnalyticsSubsystem::execGetTotalDeathsForPlayer)
	{
		P_GET_STRUCT_REF(FPlayerAnalyticsPlayer,Z_Param_Out_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPlayerAnalyticsSubsystem::GetTotalDeathsForPlayer(Z_Param_Out_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnalyticsSubsystem::execInitializeSession)
	{
		P_GET_STRUCT_REF(FPlayerAnalyticsSession,Z_Param_Out_InSession);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeSession(Z_Param_Out_InSession);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnalyticsSubsystem::execInitializeSessionColors)
	{
		P_GET_STRUCT(FPlayerAnalyticsSession,Z_Param_InSession);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlayerAnalyticsSession*)Z_Param__Result=P_THIS->InitializeSessionColors(Z_Param_InSession);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnalyticsSubsystem::execLoadCurrentSession)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadCurrentSession(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnalyticsSubsystem::execLoadMultipleSessions)
	{
		P_GET_TARRAY_REF(FPlayerAnalyticsSession,Z_Param_Out_InSessions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPlayerAnalyticsSubsystem::LoadMultipleSessions(Z_Param_Out_InSessions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnalyticsSubsystem::execLoadSession)
	{
		P_GET_STRUCT_REF(FPlayerAnalyticsSession,Z_Param_Out_InSession);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPlayerAnalyticsSubsystem::LoadSession(Z_Param_Out_InSession,Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnalyticsSubsystem::execSaveCurrentSession)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveCurrentSession(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnalyticsSubsystem::execSaveSession)
	{
		P_GET_STRUCT_REF(FPlayerAnalyticsSession,Z_Param_Out_InSession);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPlayerAnalyticsSubsystem::SaveSession(Z_Param_Out_InSession,Z_Param_Filename);
		P_NATIVE_END;
	}
	void UPlayerAnalyticsSubsystem::StaticRegisterNativesUPlayerAnalyticsSubsystem()
	{
		UClass* Class = UPlayerAnalyticsSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAnalyticsEvent", &UPlayerAnalyticsSubsystem::execAddAnalyticsEvent },
			{ "AddGlobalAnalyticsEvent", &UPlayerAnalyticsSubsystem::execAddGlobalAnalyticsEvent },
			{ "CalculateAverageTimeBetweenObjectives", &UPlayerAnalyticsSubsystem::execCalculateAverageTimeBetweenObjectives },
			{ "CalculateTimeBetweenObjectives", &UPlayerAnalyticsSubsystem::execCalculateTimeBetweenObjectives },
			{ "DebugPlayerAnalytics", &UPlayerAnalyticsSubsystem::execDebugPlayerAnalytics },
			{ "GetAnalyticsFileName", &UPlayerAnalyticsSubsystem::execGetAnalyticsFileName },
			{ "GetAverageTimeBetweenDeathsForPlayer", &UPlayerAnalyticsSubsystem::execGetAverageTimeBetweenDeathsForPlayer },
			{ "GetCurrentSession", &UPlayerAnalyticsSubsystem::execGetCurrentSession },
			{ "GetIsRecording", &UPlayerAnalyticsSubsystem::execGetIsRecording },
			{ "GetLastEventTime", &UPlayerAnalyticsSubsystem::execGetLastEventTime },
			{ "GetPlayerColor", &UPlayerAnalyticsSubsystem::execGetPlayerColor },
			{ "GetPlayerLastKnownLocation", &UPlayerAnalyticsSubsystem::execGetPlayerLastKnownLocation },
			{ "GetTotalDeathsForPlayer", &UPlayerAnalyticsSubsystem::execGetTotalDeathsForPlayer },
			{ "InitializeSession", &UPlayerAnalyticsSubsystem::execInitializeSession },
			{ "InitializeSessionColors", &UPlayerAnalyticsSubsystem::execInitializeSessionColors },
			{ "LoadCurrentSession", &UPlayerAnalyticsSubsystem::execLoadCurrentSession },
			{ "LoadMultipleSessions", &UPlayerAnalyticsSubsystem::execLoadMultipleSessions },
			{ "LoadSession", &UPlayerAnalyticsSubsystem::execLoadSession },
			{ "SaveCurrentSession", &UPlayerAnalyticsSubsystem::execSaveCurrentSession },
			{ "SaveSession", &UPlayerAnalyticsSubsystem::execSaveSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics
	{
		struct PlayerAnalyticsSubsystem_eventAddAnalyticsEvent_Parms
		{
			APlayerState* Player;
			FVector Location;
			FRotator Rotation;
			EPlayerAnalyticsEventType EventType;
			FString TargetName;
			FVector TargetLocation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventAddAnalyticsEvent_Parms, Player), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventAddAnalyticsEvent_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventAddAnalyticsEvent_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventAddAnalyticsEvent_Parms, EventType), Z_Construct_UEnum_PlayerAnalytics_EPlayerAnalyticsEventType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::NewProp_TargetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::NewProp_TargetName = { "TargetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventAddAnalyticsEvent_Parms, TargetName), METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::NewProp_TargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::NewProp_TargetName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventAddAnalyticsEvent_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::NewProp_EventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::NewProp_EventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::NewProp_TargetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::NewProp_TargetLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnalyticsSubsystem, nullptr, "AddAnalyticsEvent", nullptr, nullptr, sizeof(PlayerAnalyticsSubsystem_eventAddAnalyticsEvent_Parms), Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics
	{
		struct PlayerAnalyticsSubsystem_eventAddGlobalAnalyticsEvent_Parms
		{
			FVector Location;
			FRotator Rotation;
			EPlayerAnalyticsEventType EventType;
			FString TargetName;
			FVector TargetLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventAddGlobalAnalyticsEvent_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventAddGlobalAnalyticsEvent_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventAddGlobalAnalyticsEvent_Parms, EventType), Z_Construct_UEnum_PlayerAnalytics_EPlayerAnalyticsEventType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::NewProp_TargetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::NewProp_TargetName = { "TargetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventAddGlobalAnalyticsEvent_Parms, TargetName), METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::NewProp_TargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::NewProp_TargetName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventAddGlobalAnalyticsEvent_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::NewProp_EventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::NewProp_EventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::NewProp_TargetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::NewProp_TargetLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnalyticsSubsystem, nullptr, "AddGlobalAnalyticsEvent", nullptr, nullptr, sizeof(PlayerAnalyticsSubsystem_eventAddGlobalAnalyticsEvent_Parms), Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics
	{
		struct PlayerAnalyticsSubsystem_eventCalculateAverageTimeBetweenObjectives_Parms
		{
			TArray<FPlayerAnalyticsSession> InSessions;
			FString ObjectiveA;
			FString ObjectiveB;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSessions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSessions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InSessions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectiveA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectiveB;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::NewProp_InSessions_Inner = { "InSessions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayerAnalyticsSession, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::NewProp_InSessions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::NewProp_InSessions = { "InSessions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventCalculateAverageTimeBetweenObjectives_Parms, InSessions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::NewProp_InSessions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::NewProp_InSessions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::NewProp_ObjectiveA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::NewProp_ObjectiveA = { "ObjectiveA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventCalculateAverageTimeBetweenObjectives_Parms, ObjectiveA), METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::NewProp_ObjectiveA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::NewProp_ObjectiveA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::NewProp_ObjectiveB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::NewProp_ObjectiveB = { "ObjectiveB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventCalculateAverageTimeBetweenObjectives_Parms, ObjectiveB), METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::NewProp_ObjectiveB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::NewProp_ObjectiveB_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventCalculateAverageTimeBetweenObjectives_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::NewProp_InSessions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::NewProp_InSessions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::NewProp_ObjectiveA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::NewProp_ObjectiveB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnalyticsSubsystem, nullptr, "CalculateAverageTimeBetweenObjectives", nullptr, nullptr, sizeof(PlayerAnalyticsSubsystem_eventCalculateAverageTimeBetweenObjectives_Parms), Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics
	{
		struct PlayerAnalyticsSubsystem_eventCalculateTimeBetweenObjectives_Parms
		{
			FPlayerAnalyticsSession InSession;
			FString ObjectiveA;
			FString ObjectiveB;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectiveA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectiveB;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::NewProp_InSession_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::NewProp_InSession = { "InSession", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventCalculateTimeBetweenObjectives_Parms, InSession), Z_Construct_UScriptStruct_FPlayerAnalyticsSession, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::NewProp_InSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::NewProp_InSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::NewProp_ObjectiveA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::NewProp_ObjectiveA = { "ObjectiveA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventCalculateTimeBetweenObjectives_Parms, ObjectiveA), METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::NewProp_ObjectiveA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::NewProp_ObjectiveA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::NewProp_ObjectiveB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::NewProp_ObjectiveB = { "ObjectiveB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventCalculateTimeBetweenObjectives_Parms, ObjectiveB), METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::NewProp_ObjectiveB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::NewProp_ObjectiveB_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventCalculateTimeBetweenObjectives_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::NewProp_InSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::NewProp_ObjectiveA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::NewProp_ObjectiveB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnalyticsSubsystem, nullptr, "CalculateTimeBetweenObjectives", nullptr, nullptr, sizeof(PlayerAnalyticsSubsystem_eventCalculateTimeBetweenObjectives_Parms), Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics
	{
		struct PlayerAnalyticsSubsystem_eventDebugPlayerAnalytics_Parms
		{
			FPlayerAnalyticsSession InSession;
			bool bDrawText;
			bool bPersistent;
			float Duration;
			float MaxTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSession;
		static void NewProp_bDrawText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawText;
		static void NewProp_bPersistent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::NewProp_InSession_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::NewProp_InSession = { "InSession", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventDebugPlayerAnalytics_Parms, InSession), Z_Construct_UScriptStruct_FPlayerAnalyticsSession, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::NewProp_InSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::NewProp_InSession_MetaData)) };
	void Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::NewProp_bDrawText_SetBit(void* Obj)
	{
		((PlayerAnalyticsSubsystem_eventDebugPlayerAnalytics_Parms*)Obj)->bDrawText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::NewProp_bDrawText = { "bDrawText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerAnalyticsSubsystem_eventDebugPlayerAnalytics_Parms), &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::NewProp_bDrawText_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::NewProp_bPersistent_SetBit(void* Obj)
	{
		((PlayerAnalyticsSubsystem_eventDebugPlayerAnalytics_Parms*)Obj)->bPersistent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::NewProp_bPersistent = { "bPersistent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerAnalyticsSubsystem_eventDebugPlayerAnalytics_Parms), &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::NewProp_bPersistent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventDebugPlayerAnalytics_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::NewProp_MaxTime = { "MaxTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventDebugPlayerAnalytics_Parms, MaxTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::NewProp_InSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::NewProp_bDrawText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::NewProp_bPersistent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::NewProp_MaxTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnalyticsSubsystem, nullptr, "DebugPlayerAnalytics", nullptr, nullptr, sizeof(PlayerAnalyticsSubsystem_eventDebugPlayerAnalytics_Parms), Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAnalyticsFileName_Statics
	{
		struct PlayerAnalyticsSubsystem_eventGetAnalyticsFileName_Parms
		{
			FString Prefix;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAnalyticsFileName_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAnalyticsFileName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventGetAnalyticsFileName_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAnalyticsFileName_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAnalyticsFileName_Statics::NewProp_Prefix_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAnalyticsFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventGetAnalyticsFileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAnalyticsFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAnalyticsFileName_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAnalyticsFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAnalyticsFileName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAnalyticsFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnalyticsSubsystem, nullptr, "GetAnalyticsFileName", nullptr, nullptr, sizeof(PlayerAnalyticsSubsystem_eventGetAnalyticsFileName_Parms), Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAnalyticsFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAnalyticsFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAnalyticsFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAnalyticsFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAnalyticsFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAnalyticsFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAverageTimeBetweenDeathsForPlayer_Statics
	{
		struct PlayerAnalyticsSubsystem_eventGetAverageTimeBetweenDeathsForPlayer_Parms
		{
			FPlayerAnalyticsPlayer Player;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAverageTimeBetweenDeathsForPlayer_Statics::NewProp_Player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAverageTimeBetweenDeathsForPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventGetAverageTimeBetweenDeathsForPlayer_Parms, Player), Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAverageTimeBetweenDeathsForPlayer_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAverageTimeBetweenDeathsForPlayer_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAverageTimeBetweenDeathsForPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventGetAverageTimeBetweenDeathsForPlayer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAverageTimeBetweenDeathsForPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAverageTimeBetweenDeathsForPlayer_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAverageTimeBetweenDeathsForPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAverageTimeBetweenDeathsForPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAverageTimeBetweenDeathsForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnalyticsSubsystem, nullptr, "GetAverageTimeBetweenDeathsForPlayer", nullptr, nullptr, sizeof(PlayerAnalyticsSubsystem_eventGetAverageTimeBetweenDeathsForPlayer_Parms), Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAverageTimeBetweenDeathsForPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAverageTimeBetweenDeathsForPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAverageTimeBetweenDeathsForPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAverageTimeBetweenDeathsForPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAverageTimeBetweenDeathsForPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAverageTimeBetweenDeathsForPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetCurrentSession_Statics
	{
		struct PlayerAnalyticsSubsystem_eventGetCurrentSession_Parms
		{
			FPlayerAnalyticsSession ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetCurrentSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventGetCurrentSession_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerAnalyticsSession, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetCurrentSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetCurrentSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetCurrentSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetCurrentSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnalyticsSubsystem, nullptr, "GetCurrentSession", nullptr, nullptr, sizeof(PlayerAnalyticsSubsystem_eventGetCurrentSession_Parms), Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetCurrentSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetCurrentSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetCurrentSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetCurrentSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetCurrentSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetCurrentSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetIsRecording_Statics
	{
		struct PlayerAnalyticsSubsystem_eventGetIsRecording_Parms
		{
			EPlayerAnalyticsEventType Type;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetIsRecording_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetIsRecording_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventGetIsRecording_Parms, Type), Z_Construct_UEnum_PlayerAnalytics_EPlayerAnalyticsEventType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetIsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerAnalyticsSubsystem_eventGetIsRecording_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetIsRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerAnalyticsSubsystem_eventGetIsRecording_Parms), &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetIsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetIsRecording_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetIsRecording_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetIsRecording_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetIsRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetIsRecording_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetIsRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnalyticsSubsystem, nullptr, "GetIsRecording", nullptr, nullptr, sizeof(PlayerAnalyticsSubsystem_eventGetIsRecording_Parms), Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetIsRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetIsRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetIsRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetIsRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetIsRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetIsRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetLastEventTime_Statics
	{
		struct PlayerAnalyticsSubsystem_eventGetLastEventTime_Parms
		{
			FPlayerAnalyticsSession InSession;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSession;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetLastEventTime_Statics::NewProp_InSession_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetLastEventTime_Statics::NewProp_InSession = { "InSession", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventGetLastEventTime_Parms, InSession), Z_Construct_UScriptStruct_FPlayerAnalyticsSession, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetLastEventTime_Statics::NewProp_InSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetLastEventTime_Statics::NewProp_InSession_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetLastEventTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventGetLastEventTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetLastEventTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetLastEventTime_Statics::NewProp_InSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetLastEventTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetLastEventTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetLastEventTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnalyticsSubsystem, nullptr, "GetLastEventTime", nullptr, nullptr, sizeof(PlayerAnalyticsSubsystem_eventGetLastEventTime_Parms), Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetLastEventTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetLastEventTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetLastEventTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetLastEventTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetLastEventTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetLastEventTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor_Statics
	{
		struct PlayerAnalyticsSubsystem_eventGetPlayerColor_Parms
		{
			FPlayerAnalyticsSession InSession;
			int32 Index;
			FColor ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor_Statics::NewProp_InSession_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor_Statics::NewProp_InSession = { "InSession", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventGetPlayerColor_Parms, InSession), Z_Construct_UScriptStruct_FPlayerAnalyticsSession, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor_Statics::NewProp_InSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor_Statics::NewProp_InSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventGetPlayerColor_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventGetPlayerColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor_Statics::NewProp_InSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnalyticsSubsystem, nullptr, "GetPlayerColor", nullptr, nullptr, sizeof(PlayerAnalyticsSubsystem_eventGetPlayerColor_Parms), Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerLastKnownLocation_Statics
	{
		struct PlayerAnalyticsSubsystem_eventGetPlayerLastKnownLocation_Parms
		{
			APlayerState* Player;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerLastKnownLocation_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventGetPlayerLastKnownLocation_Parms, Player), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerLastKnownLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventGetPlayerLastKnownLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerLastKnownLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerLastKnownLocation_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerLastKnownLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerLastKnownLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerLastKnownLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnalyticsSubsystem, nullptr, "GetPlayerLastKnownLocation", nullptr, nullptr, sizeof(PlayerAnalyticsSubsystem_eventGetPlayerLastKnownLocation_Parms), Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerLastKnownLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerLastKnownLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerLastKnownLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerLastKnownLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerLastKnownLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerLastKnownLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetTotalDeathsForPlayer_Statics
	{
		struct PlayerAnalyticsSubsystem_eventGetTotalDeathsForPlayer_Parms
		{
			FPlayerAnalyticsPlayer Player;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetTotalDeathsForPlayer_Statics::NewProp_Player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetTotalDeathsForPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventGetTotalDeathsForPlayer_Parms, Player), Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetTotalDeathsForPlayer_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetTotalDeathsForPlayer_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetTotalDeathsForPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventGetTotalDeathsForPlayer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetTotalDeathsForPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetTotalDeathsForPlayer_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetTotalDeathsForPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetTotalDeathsForPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetTotalDeathsForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnalyticsSubsystem, nullptr, "GetTotalDeathsForPlayer", nullptr, nullptr, sizeof(PlayerAnalyticsSubsystem_eventGetTotalDeathsForPlayer_Parms), Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetTotalDeathsForPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetTotalDeathsForPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetTotalDeathsForPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetTotalDeathsForPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetTotalDeathsForPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetTotalDeathsForPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSession_Statics
	{
		struct PlayerAnalyticsSubsystem_eventInitializeSession_Parms
		{
			FPlayerAnalyticsSession InSession;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSession;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSession_Statics::NewProp_InSession = { "InSession", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventInitializeSession_Parms, InSession), Z_Construct_UScriptStruct_FPlayerAnalyticsSession, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSession_Statics::NewProp_InSession,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnalyticsSubsystem, nullptr, "InitializeSession", nullptr, nullptr, sizeof(PlayerAnalyticsSubsystem_eventInitializeSession_Parms), Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSessionColors_Statics
	{
		struct PlayerAnalyticsSubsystem_eventInitializeSessionColors_Parms
		{
			FPlayerAnalyticsSession InSession;
			FPlayerAnalyticsSession ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSession;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSessionColors_Statics::NewProp_InSession_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSessionColors_Statics::NewProp_InSession = { "InSession", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventInitializeSessionColors_Parms, InSession), Z_Construct_UScriptStruct_FPlayerAnalyticsSession, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSessionColors_Statics::NewProp_InSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSessionColors_Statics::NewProp_InSession_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSessionColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventInitializeSessionColors_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerAnalyticsSession, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSessionColors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSessionColors_Statics::NewProp_InSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSessionColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSessionColors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSessionColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnalyticsSubsystem, nullptr, "InitializeSessionColors", nullptr, nullptr, sizeof(PlayerAnalyticsSubsystem_eventInitializeSessionColors_Parms), Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSessionColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSessionColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSessionColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSessionColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSessionColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSessionColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadCurrentSession_Statics
	{
		struct PlayerAnalyticsSubsystem_eventLoadCurrentSession_Parms
		{
			FString Filename;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadCurrentSession_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadCurrentSession_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventLoadCurrentSession_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadCurrentSession_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadCurrentSession_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadCurrentSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadCurrentSession_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadCurrentSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadCurrentSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnalyticsSubsystem, nullptr, "LoadCurrentSession", nullptr, nullptr, sizeof(PlayerAnalyticsSubsystem_eventLoadCurrentSession_Parms), Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadCurrentSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadCurrentSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadCurrentSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadCurrentSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadCurrentSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadCurrentSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadMultipleSessions_Statics
	{
		struct PlayerAnalyticsSubsystem_eventLoadMultipleSessions_Parms
		{
			TArray<FPlayerAnalyticsSession> InSessions;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSessions_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InSessions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadMultipleSessions_Statics::NewProp_InSessions_Inner = { "InSessions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayerAnalyticsSession, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadMultipleSessions_Statics::NewProp_InSessions = { "InSessions", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventLoadMultipleSessions_Parms, InSessions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadMultipleSessions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerAnalyticsSubsystem_eventLoadMultipleSessions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadMultipleSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerAnalyticsSubsystem_eventLoadMultipleSessions_Parms), &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadMultipleSessions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadMultipleSessions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadMultipleSessions_Statics::NewProp_InSessions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadMultipleSessions_Statics::NewProp_InSessions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadMultipleSessions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadMultipleSessions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadMultipleSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnalyticsSubsystem, nullptr, "LoadMultipleSessions", nullptr, nullptr, sizeof(PlayerAnalyticsSubsystem_eventLoadMultipleSessions_Parms), Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadMultipleSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadMultipleSessions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadMultipleSessions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadMultipleSessions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadMultipleSessions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadMultipleSessions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession_Statics
	{
		struct PlayerAnalyticsSubsystem_eventLoadSession_Parms
		{
			FPlayerAnalyticsSession InSession;
			FString Filename;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession_Statics::NewProp_InSession = { "InSession", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventLoadSession_Parms, InSession), Z_Construct_UScriptStruct_FPlayerAnalyticsSession, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventLoadSession_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession_Statics::NewProp_Filename_MetaData)) };
	void Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerAnalyticsSubsystem_eventLoadSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerAnalyticsSubsystem_eventLoadSession_Parms), &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession_Statics::NewProp_InSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnalyticsSubsystem, nullptr, "LoadSession", nullptr, nullptr, sizeof(PlayerAnalyticsSubsystem_eventLoadSession_Parms), Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveCurrentSession_Statics
	{
		struct PlayerAnalyticsSubsystem_eventSaveCurrentSession_Parms
		{
			FString Filename;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveCurrentSession_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveCurrentSession_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventSaveCurrentSession_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveCurrentSession_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveCurrentSession_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveCurrentSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveCurrentSession_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveCurrentSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveCurrentSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnalyticsSubsystem, nullptr, "SaveCurrentSession", nullptr, nullptr, sizeof(PlayerAnalyticsSubsystem_eventSaveCurrentSession_Parms), Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveCurrentSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveCurrentSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveCurrentSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveCurrentSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveCurrentSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveCurrentSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession_Statics
	{
		struct PlayerAnalyticsSubsystem_eventSaveSession_Parms
		{
			FPlayerAnalyticsSession InSession;
			FString Filename;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession_Statics::NewProp_InSession = { "InSession", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventSaveSession_Parms, InSession), Z_Construct_UScriptStruct_FPlayerAnalyticsSession, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnalyticsSubsystem_eventSaveSession_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession_Statics::NewProp_Filename_MetaData)) };
	void Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerAnalyticsSubsystem_eventSaveSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerAnalyticsSubsystem_eventSaveSession_Parms), &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession_Statics::NewProp_InSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnalyticsSubsystem, nullptr, "SaveSession", nullptr, nullptr, sizeof(PlayerAnalyticsSubsystem_eventSaveSession_Parms), Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerAnalyticsSubsystem_NoRegister()
	{
		return UPlayerAnalyticsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAnalyticsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalyticsMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AnalyticsMask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAnalyticsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerAnalytics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerAnalyticsSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddAnalyticsEvent, "AddAnalyticsEvent" }, // 3278769931
		{ &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_AddGlobalAnalyticsEvent, "AddGlobalAnalyticsEvent" }, // 1980589889
		{ &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateAverageTimeBetweenObjectives, "CalculateAverageTimeBetweenObjectives" }, // 2845471188
		{ &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_CalculateTimeBetweenObjectives, "CalculateTimeBetweenObjectives" }, // 1928832879
		{ &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_DebugPlayerAnalytics, "DebugPlayerAnalytics" }, // 2583379891
		{ &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAnalyticsFileName, "GetAnalyticsFileName" }, // 691128416
		{ &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetAverageTimeBetweenDeathsForPlayer, "GetAverageTimeBetweenDeathsForPlayer" }, // 1530064930
		{ &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetCurrentSession, "GetCurrentSession" }, // 3734506239
		{ &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetIsRecording, "GetIsRecording" }, // 2721091119
		{ &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetLastEventTime, "GetLastEventTime" }, // 2052743723
		{ &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerColor, "GetPlayerColor" }, // 3177882190
		{ &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetPlayerLastKnownLocation, "GetPlayerLastKnownLocation" }, // 1521909147
		{ &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_GetTotalDeathsForPlayer, "GetTotalDeathsForPlayer" }, // 3904697331
		{ &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSession, "InitializeSession" }, // 3586904883
		{ &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_InitializeSessionColors, "InitializeSessionColors" }, // 1967153521
		{ &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadCurrentSession, "LoadCurrentSession" }, // 2472552336
		{ &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadMultipleSessions, "LoadMultipleSessions" }, // 812923104
		{ &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_LoadSession, "LoadSession" }, // 438025878
		{ &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveCurrentSession, "SaveCurrentSession" }, // 1916652850
		{ &Z_Construct_UFunction_UPlayerAnalyticsSubsystem_SaveSession, "SaveSession" }, // 2086708661
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnalyticsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayerAnalyticsSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnalyticsSubsystem_Statics::NewProp_AnalyticsMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerAnalyticsSubsystem" },
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerAnalyticsSubsystem_Statics::NewProp_AnalyticsMask = { "AnalyticsMask", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnalyticsSubsystem, AnalyticsMask), METADATA_PARAMS(Z_Construct_UClass_UPlayerAnalyticsSubsystem_Statics::NewProp_AnalyticsMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnalyticsSubsystem_Statics::NewProp_AnalyticsMask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnalyticsSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnalyticsSubsystem_Statics::NewProp_AnalyticsMask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAnalyticsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnalyticsSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnalyticsSubsystem_Statics::ClassParams = {
		&UPlayerAnalyticsSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerAnalyticsSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnalyticsSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerAnalyticsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnalyticsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerAnalyticsSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerAnalyticsSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerAnalyticsSubsystem, 489553798);
	template<> PLAYERANALYTICS_API UClass* StaticClass<UPlayerAnalyticsSubsystem>()
	{
		return UPlayerAnalyticsSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerAnalyticsSubsystem(Z_Construct_UClass_UPlayerAnalyticsSubsystem, &UPlayerAnalyticsSubsystem::StaticClass, TEXT("/Script/PlayerAnalytics"), TEXT("UPlayerAnalyticsSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAnalyticsSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
