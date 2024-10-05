// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdaptiveMusic/Public/AdaptiveMusicSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdaptiveMusicSubsystem() {}
// Cross Module References
	ADAPTIVEMUSIC_API UClass* Z_Construct_UClass_UAdaptiveMusicSubsystem_NoRegister();
	ADAPTIVEMUSIC_API UClass* Z_Construct_UClass_UAdaptiveMusicSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_AdaptiveMusic();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
	ADAPTIVEMUSIC_API UClass* Z_Construct_UClass_AAdaptiveMusicVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
// End Cross Module References
	DEFINE_FUNCTION(UAdaptiveMusicSubsystem::execBeginEncounter)
	{
		P_GET_OBJECT(UFMODEvent,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginEncounter(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdaptiveMusicSubsystem::execEndEncounter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndEncounter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdaptiveMusicSubsystem::execEnterArea)
	{
		P_GET_OBJECT(AAdaptiveMusicVolume,Z_Param_Area);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterArea(Z_Param_Area);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdaptiveMusicSubsystem::execExitArea)
	{
		P_GET_OBJECT(AAdaptiveMusicVolume,Z_Param_Area);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitArea(Z_Param_Area);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdaptiveMusicSubsystem::execGetDangerLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDangerLevel_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdaptiveMusicSubsystem::execGetEnemyProximity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEnemyProximity_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdaptiveMusicSubsystem::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdaptiveMusicSubsystem::execGetIntensityLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetIntensityLevel_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdaptiveMusicSubsystem::execGetSurroundingEnemyTypes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetSurroundingEnemyTypes_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdaptiveMusicSubsystem::execGetTeamProximity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTeamProximity_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdaptiveMusicSubsystem::execPlayAreaTrack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAreaTrack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdaptiveMusicSubsystem::execPlayTrack)
	{
		P_GET_OBJECT(UFMODEvent,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayTrack(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdaptiveMusicSubsystem::execRegisterMusicPlayerController)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterMusicPlayerController(Z_Param_Controller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdaptiveMusicSubsystem::execStopTrack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopTrack();
		P_NATIVE_END;
	}
	static FName NAME_UAdaptiveMusicSubsystem_GetDangerLevel = FName(TEXT("GetDangerLevel"));
	float UAdaptiveMusicSubsystem::GetDangerLevel() const
	{
		AdaptiveMusicSubsystem_eventGetDangerLevel_Parms Parms;
		const_cast<UAdaptiveMusicSubsystem*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAdaptiveMusicSubsystem_GetDangerLevel),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAdaptiveMusicSubsystem_GetEnemyProximity = FName(TEXT("GetEnemyProximity"));
	float UAdaptiveMusicSubsystem::GetEnemyProximity() const
	{
		AdaptiveMusicSubsystem_eventGetEnemyProximity_Parms Parms;
		const_cast<UAdaptiveMusicSubsystem*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAdaptiveMusicSubsystem_GetEnemyProximity),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAdaptiveMusicSubsystem_GetHealth = FName(TEXT("GetHealth"));
	float UAdaptiveMusicSubsystem::GetHealth() const
	{
		AdaptiveMusicSubsystem_eventGetHealth_Parms Parms;
		const_cast<UAdaptiveMusicSubsystem*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAdaptiveMusicSubsystem_GetHealth),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAdaptiveMusicSubsystem_GetIntensityLevel = FName(TEXT("GetIntensityLevel"));
	float UAdaptiveMusicSubsystem::GetIntensityLevel() const
	{
		AdaptiveMusicSubsystem_eventGetIntensityLevel_Parms Parms;
		const_cast<UAdaptiveMusicSubsystem*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAdaptiveMusicSubsystem_GetIntensityLevel),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAdaptiveMusicSubsystem_GetSurroundingEnemyTypes = FName(TEXT("GetSurroundingEnemyTypes"));
	TArray<uint8> UAdaptiveMusicSubsystem::GetSurroundingEnemyTypes() const
	{
		AdaptiveMusicSubsystem_eventGetSurroundingEnemyTypes_Parms Parms;
		const_cast<UAdaptiveMusicSubsystem*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAdaptiveMusicSubsystem_GetSurroundingEnemyTypes),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAdaptiveMusicSubsystem_GetTeamProximity = FName(TEXT("GetTeamProximity"));
	float UAdaptiveMusicSubsystem::GetTeamProximity() const
	{
		AdaptiveMusicSubsystem_eventGetTeamProximity_Parms Parms;
		const_cast<UAdaptiveMusicSubsystem*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAdaptiveMusicSubsystem_GetTeamProximity),&Parms);
		return Parms.ReturnValue;
	}
	void UAdaptiveMusicSubsystem::StaticRegisterNativesUAdaptiveMusicSubsystem()
	{
		UClass* Class = UAdaptiveMusicSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginEncounter", &UAdaptiveMusicSubsystem::execBeginEncounter },
			{ "EndEncounter", &UAdaptiveMusicSubsystem::execEndEncounter },
			{ "EnterArea", &UAdaptiveMusicSubsystem::execEnterArea },
			{ "ExitArea", &UAdaptiveMusicSubsystem::execExitArea },
			{ "GetDangerLevel", &UAdaptiveMusicSubsystem::execGetDangerLevel },
			{ "GetEnemyProximity", &UAdaptiveMusicSubsystem::execGetEnemyProximity },
			{ "GetHealth", &UAdaptiveMusicSubsystem::execGetHealth },
			{ "GetIntensityLevel", &UAdaptiveMusicSubsystem::execGetIntensityLevel },
			{ "GetSurroundingEnemyTypes", &UAdaptiveMusicSubsystem::execGetSurroundingEnemyTypes },
			{ "GetTeamProximity", &UAdaptiveMusicSubsystem::execGetTeamProximity },
			{ "PlayAreaTrack", &UAdaptiveMusicSubsystem::execPlayAreaTrack },
			{ "PlayTrack", &UAdaptiveMusicSubsystem::execPlayTrack },
			{ "RegisterMusicPlayerController", &UAdaptiveMusicSubsystem::execRegisterMusicPlayerController },
			{ "StopTrack", &UAdaptiveMusicSubsystem::execStopTrack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdaptiveMusicSubsystem_BeginEncounter_Statics
	{
		struct AdaptiveMusicSubsystem_eventBeginEncounter_Parms
		{
			UFMODEvent* Track;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Track;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_BeginEncounter_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdaptiveMusicSubsystem_eventBeginEncounter_Parms, Track), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdaptiveMusicSubsystem_BeginEncounter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdaptiveMusicSubsystem_BeginEncounter_Statics::NewProp_Track,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdaptiveMusicSubsystem_BeginEncounter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdaptiveMusicSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_BeginEncounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdaptiveMusicSubsystem, nullptr, "BeginEncounter", nullptr, nullptr, sizeof(AdaptiveMusicSubsystem_eventBeginEncounter_Parms), Z_Construct_UFunction_UAdaptiveMusicSubsystem_BeginEncounter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_BeginEncounter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdaptiveMusicSubsystem_BeginEncounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_BeginEncounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdaptiveMusicSubsystem_BeginEncounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdaptiveMusicSubsystem_BeginEncounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdaptiveMusicSubsystem_EndEncounter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdaptiveMusicSubsystem_EndEncounter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdaptiveMusicSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_EndEncounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdaptiveMusicSubsystem, nullptr, "EndEncounter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdaptiveMusicSubsystem_EndEncounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_EndEncounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdaptiveMusicSubsystem_EndEncounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdaptiveMusicSubsystem_EndEncounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdaptiveMusicSubsystem_EnterArea_Statics
	{
		struct AdaptiveMusicSubsystem_eventEnterArea_Parms
		{
			AAdaptiveMusicVolume* Area;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Area;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_EnterArea_Statics::NewProp_Area = { "Area", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdaptiveMusicSubsystem_eventEnterArea_Parms, Area), Z_Construct_UClass_AAdaptiveMusicVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdaptiveMusicSubsystem_EnterArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdaptiveMusicSubsystem_EnterArea_Statics::NewProp_Area,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdaptiveMusicSubsystem_EnterArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdaptiveMusicSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_EnterArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdaptiveMusicSubsystem, nullptr, "EnterArea", nullptr, nullptr, sizeof(AdaptiveMusicSubsystem_eventEnterArea_Parms), Z_Construct_UFunction_UAdaptiveMusicSubsystem_EnterArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_EnterArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdaptiveMusicSubsystem_EnterArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_EnterArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdaptiveMusicSubsystem_EnterArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdaptiveMusicSubsystem_EnterArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdaptiveMusicSubsystem_ExitArea_Statics
	{
		struct AdaptiveMusicSubsystem_eventExitArea_Parms
		{
			AAdaptiveMusicVolume* Area;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Area;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_ExitArea_Statics::NewProp_Area = { "Area", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdaptiveMusicSubsystem_eventExitArea_Parms, Area), Z_Construct_UClass_AAdaptiveMusicVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdaptiveMusicSubsystem_ExitArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdaptiveMusicSubsystem_ExitArea_Statics::NewProp_Area,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdaptiveMusicSubsystem_ExitArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdaptiveMusicSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_ExitArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdaptiveMusicSubsystem, nullptr, "ExitArea", nullptr, nullptr, sizeof(AdaptiveMusicSubsystem_eventExitArea_Parms), Z_Construct_UFunction_UAdaptiveMusicSubsystem_ExitArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_ExitArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdaptiveMusicSubsystem_ExitArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_ExitArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdaptiveMusicSubsystem_ExitArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdaptiveMusicSubsystem_ExitArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetDangerLevel_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetDangerLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdaptiveMusicSubsystem_eventGetDangerLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetDangerLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetDangerLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetDangerLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdaptiveMusicSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetDangerLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdaptiveMusicSubsystem, nullptr, "GetDangerLevel", nullptr, nullptr, sizeof(AdaptiveMusicSubsystem_eventGetDangerLevel_Parms), Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetDangerLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetDangerLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetDangerLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetDangerLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetDangerLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetDangerLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetEnemyProximity_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetEnemyProximity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdaptiveMusicSubsystem_eventGetEnemyProximity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetEnemyProximity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetEnemyProximity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetEnemyProximity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdaptiveMusicSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetEnemyProximity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdaptiveMusicSubsystem, nullptr, "GetEnemyProximity", nullptr, nullptr, sizeof(AdaptiveMusicSubsystem_eventGetEnemyProximity_Parms), Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetEnemyProximity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetEnemyProximity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetEnemyProximity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetEnemyProximity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetEnemyProximity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetEnemyProximity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetHealth_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdaptiveMusicSubsystem_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdaptiveMusicSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdaptiveMusicSubsystem, nullptr, "GetHealth", nullptr, nullptr, sizeof(AdaptiveMusicSubsystem_eventGetHealth_Parms), Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetIntensityLevel_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetIntensityLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdaptiveMusicSubsystem_eventGetIntensityLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetIntensityLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetIntensityLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetIntensityLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdaptiveMusicSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetIntensityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdaptiveMusicSubsystem, nullptr, "GetIntensityLevel", nullptr, nullptr, sizeof(AdaptiveMusicSubsystem_eventGetIntensityLevel_Parms), Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetIntensityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetIntensityLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetIntensityLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetIntensityLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetIntensityLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetIntensityLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetSurroundingEnemyTypes_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetSurroundingEnemyTypes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetSurroundingEnemyTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdaptiveMusicSubsystem_eventGetSurroundingEnemyTypes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetSurroundingEnemyTypes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetSurroundingEnemyTypes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetSurroundingEnemyTypes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetSurroundingEnemyTypes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdaptiveMusicSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetSurroundingEnemyTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdaptiveMusicSubsystem, nullptr, "GetSurroundingEnemyTypes", nullptr, nullptr, sizeof(AdaptiveMusicSubsystem_eventGetSurroundingEnemyTypes_Parms), Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetSurroundingEnemyTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetSurroundingEnemyTypes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetSurroundingEnemyTypes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetSurroundingEnemyTypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetSurroundingEnemyTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetSurroundingEnemyTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetTeamProximity_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetTeamProximity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdaptiveMusicSubsystem_eventGetTeamProximity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetTeamProximity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetTeamProximity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetTeamProximity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdaptiveMusicSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetTeamProximity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdaptiveMusicSubsystem, nullptr, "GetTeamProximity", nullptr, nullptr, sizeof(AdaptiveMusicSubsystem_eventGetTeamProximity_Parms), Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetTeamProximity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetTeamProximity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetTeamProximity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetTeamProximity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetTeamProximity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetTeamProximity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdaptiveMusicSubsystem_PlayAreaTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdaptiveMusicSubsystem_PlayAreaTrack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdaptiveMusicSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_PlayAreaTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdaptiveMusicSubsystem, nullptr, "PlayAreaTrack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdaptiveMusicSubsystem_PlayAreaTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_PlayAreaTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdaptiveMusicSubsystem_PlayAreaTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdaptiveMusicSubsystem_PlayAreaTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdaptiveMusicSubsystem_PlayTrack_Statics
	{
		struct AdaptiveMusicSubsystem_eventPlayTrack_Parms
		{
			UFMODEvent* Track;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Track;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_PlayTrack_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdaptiveMusicSubsystem_eventPlayTrack_Parms, Track), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdaptiveMusicSubsystem_PlayTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdaptiveMusicSubsystem_PlayTrack_Statics::NewProp_Track,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdaptiveMusicSubsystem_PlayTrack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdaptiveMusicSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_PlayTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdaptiveMusicSubsystem, nullptr, "PlayTrack", nullptr, nullptr, sizeof(AdaptiveMusicSubsystem_eventPlayTrack_Parms), Z_Construct_UFunction_UAdaptiveMusicSubsystem_PlayTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_PlayTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdaptiveMusicSubsystem_PlayTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_PlayTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdaptiveMusicSubsystem_PlayTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdaptiveMusicSubsystem_PlayTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdaptiveMusicSubsystem_RegisterMusicPlayerController_Statics
	{
		struct AdaptiveMusicSubsystem_eventRegisterMusicPlayerController_Parms
		{
			APlayerController* Controller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_RegisterMusicPlayerController_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdaptiveMusicSubsystem_eventRegisterMusicPlayerController_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdaptiveMusicSubsystem_RegisterMusicPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdaptiveMusicSubsystem_RegisterMusicPlayerController_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdaptiveMusicSubsystem_RegisterMusicPlayerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdaptiveMusicSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_RegisterMusicPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdaptiveMusicSubsystem, nullptr, "RegisterMusicPlayerController", nullptr, nullptr, sizeof(AdaptiveMusicSubsystem_eventRegisterMusicPlayerController_Parms), Z_Construct_UFunction_UAdaptiveMusicSubsystem_RegisterMusicPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_RegisterMusicPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdaptiveMusicSubsystem_RegisterMusicPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_RegisterMusicPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdaptiveMusicSubsystem_RegisterMusicPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdaptiveMusicSubsystem_RegisterMusicPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdaptiveMusicSubsystem_StopTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdaptiveMusicSubsystem_StopTrack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdaptiveMusicSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdaptiveMusicSubsystem_StopTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdaptiveMusicSubsystem, nullptr, "StopTrack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdaptiveMusicSubsystem_StopTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicSubsystem_StopTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdaptiveMusicSubsystem_StopTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdaptiveMusicSubsystem_StopTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdaptiveMusicSubsystem_NoRegister()
	{
		return UAdaptiveMusicSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateDelay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TraceTypes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AdaptiveMusic,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdaptiveMusicSubsystem_BeginEncounter, "BeginEncounter" }, // 2356864823
		{ &Z_Construct_UFunction_UAdaptiveMusicSubsystem_EndEncounter, "EndEncounter" }, // 3786149073
		{ &Z_Construct_UFunction_UAdaptiveMusicSubsystem_EnterArea, "EnterArea" }, // 1353260216
		{ &Z_Construct_UFunction_UAdaptiveMusicSubsystem_ExitArea, "ExitArea" }, // 1588126911
		{ &Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetDangerLevel, "GetDangerLevel" }, // 751953679
		{ &Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetEnemyProximity, "GetEnemyProximity" }, // 3423460646
		{ &Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetHealth, "GetHealth" }, // 3268904088
		{ &Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetIntensityLevel, "GetIntensityLevel" }, // 1330618327
		{ &Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetSurroundingEnemyTypes, "GetSurroundingEnemyTypes" }, // 4135531680
		{ &Z_Construct_UFunction_UAdaptiveMusicSubsystem_GetTeamProximity, "GetTeamProximity" }, // 4119398405
		{ &Z_Construct_UFunction_UAdaptiveMusicSubsystem_PlayAreaTrack, "PlayAreaTrack" }, // 3393299559
		{ &Z_Construct_UFunction_UAdaptiveMusicSubsystem_PlayTrack, "PlayTrack" }, // 1518514119
		{ &Z_Construct_UFunction_UAdaptiveMusicSubsystem_RegisterMusicPlayerController, "RegisterMusicPlayerController" }, // 2147171348
		{ &Z_Construct_UFunction_UAdaptiveMusicSubsystem_StopTrack, "StopTrack" }, // 2445663400
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AdaptiveMusicSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AdaptiveMusicSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::NewProp_UpdateDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdaptiveMusicSubsystem" },
		{ "ModuleRelativePath", "Public/AdaptiveMusicSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::NewProp_UpdateDelay = { "UpdateDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdaptiveMusicSubsystem, UpdateDelay), METADATA_PARAMS(Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::NewProp_UpdateDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::NewProp_UpdateDelay_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::NewProp_TraceTypes_Inner = { "TraceTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::NewProp_TraceTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdaptiveMusicSubsystem" },
		{ "ModuleRelativePath", "Public/AdaptiveMusicSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::NewProp_TraceTypes = { "TraceTypes", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdaptiveMusicSubsystem, TraceTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::NewProp_TraceTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::NewProp_TraceTypes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::NewProp_UpdateDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::NewProp_TraceTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::NewProp_TraceTypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdaptiveMusicSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::ClassParams = {
		&UAdaptiveMusicSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdaptiveMusicSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdaptiveMusicSubsystem, 2756427468);
	template<> ADAPTIVEMUSIC_API UClass* StaticClass<UAdaptiveMusicSubsystem>()
	{
		return UAdaptiveMusicSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdaptiveMusicSubsystem(Z_Construct_UClass_UAdaptiveMusicSubsystem, &UAdaptiveMusicSubsystem::StaticClass, TEXT("/Script/AdaptiveMusic"), TEXT("UAdaptiveMusicSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdaptiveMusicSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
