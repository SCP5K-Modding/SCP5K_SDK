// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAISubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAISubsystem() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_USAISubsystem_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAISubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIPointOfInterest_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAISquadComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FSAISquad();
// End Cross Module References
	DEFINE_FUNCTION(USAISubsystem::execAddPointOfInterest)
	{
		P_GET_OBJECT(USAIPointOfInterest,Z_Param_Point);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPointOfInterest(Z_Param_Point);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAISubsystem::execGetLeader)
	{
		P_GET_STRUCT(FGuid,Z_Param_SquadID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USAISquadComponent**)Z_Param__Result=P_THIS->GetLeader(Z_Param_SquadID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAISubsystem::execGetRelevantPointOfInterest)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxAngle);
		P_GET_UBOOL(Z_Param_bUseFirst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetRelevantPointOfInterest(Z_Param_Location,Z_Param_Direction,Z_Param_MaxRadius,Z_Param_MinRadius,Z_Param_MaxAngle,Z_Param_bUseFirst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAISubsystem::execRemovePointOfInterest)
	{
		P_GET_OBJECT(USAIPointOfInterest,Z_Param_Point);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePointOfInterest(Z_Param_Point);
		P_NATIVE_END;
	}
	void USAISubsystem::StaticRegisterNativesUSAISubsystem()
	{
		UClass* Class = USAISubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPointOfInterest", &USAISubsystem::execAddPointOfInterest },
			{ "GetLeader", &USAISubsystem::execGetLeader },
			{ "GetRelevantPointOfInterest", &USAISubsystem::execGetRelevantPointOfInterest },
			{ "RemovePointOfInterest", &USAISubsystem::execRemovePointOfInterest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USAISubsystem_AddPointOfInterest_Statics
	{
		struct SAISubsystem_eventAddPointOfInterest_Parms
		{
			USAIPointOfInterest* Point;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAISubsystem_AddPointOfInterest_Statics::NewProp_Point_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAISubsystem_AddPointOfInterest_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISubsystem_eventAddPointOfInterest_Parms, Point), Z_Construct_UClass_USAIPointOfInterest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USAISubsystem_AddPointOfInterest_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISubsystem_AddPointOfInterest_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAISubsystem_AddPointOfInterest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISubsystem_AddPointOfInterest_Statics::NewProp_Point,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAISubsystem_AddPointOfInterest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAISubsystem_AddPointOfInterest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAISubsystem, nullptr, "AddPointOfInterest", nullptr, nullptr, sizeof(SAISubsystem_eventAddPointOfInterest_Parms), Z_Construct_UFunction_USAISubsystem_AddPointOfInterest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISubsystem_AddPointOfInterest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAISubsystem_AddPointOfInterest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISubsystem_AddPointOfInterest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAISubsystem_AddPointOfInterest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAISubsystem_AddPointOfInterest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAISubsystem_GetLeader_Statics
	{
		struct SAISubsystem_eventGetLeader_Parms
		{
			FGuid SquadID;
			USAISquadComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SquadID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAISubsystem_GetLeader_Statics::NewProp_SquadID = { "SquadID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISubsystem_eventGetLeader_Parms, SquadID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAISubsystem_GetLeader_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAISubsystem_GetLeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISubsystem_eventGetLeader_Parms, ReturnValue), Z_Construct_UClass_USAISquadComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USAISubsystem_GetLeader_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISubsystem_GetLeader_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAISubsystem_GetLeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISubsystem_GetLeader_Statics::NewProp_SquadID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISubsystem_GetLeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAISubsystem_GetLeader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAISubsystem_GetLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAISubsystem, nullptr, "GetLeader", nullptr, nullptr, sizeof(SAISubsystem_eventGetLeader_Parms), Z_Construct_UFunction_USAISubsystem_GetLeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISubsystem_GetLeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAISubsystem_GetLeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISubsystem_GetLeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAISubsystem_GetLeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAISubsystem_GetLeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics
	{
		struct SAISubsystem_eventGetRelevantPointOfInterest_Parms
		{
			FVector Location;
			FVector Direction;
			float MaxRadius;
			float MinRadius;
			float MaxAngle;
			bool bUseFirst;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRadius;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRadius;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngle;
		static void NewProp_bUseFirst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFirst;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISubsystem_eventGetRelevantPointOfInterest_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISubsystem_eventGetRelevantPointOfInterest_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::NewProp_MaxRadius = { "MaxRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISubsystem_eventGetRelevantPointOfInterest_Parms, MaxRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::NewProp_MinRadius = { "MinRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISubsystem_eventGetRelevantPointOfInterest_Parms, MinRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISubsystem_eventGetRelevantPointOfInterest_Parms, MaxAngle), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::NewProp_bUseFirst_SetBit(void* Obj)
	{
		((SAISubsystem_eventGetRelevantPointOfInterest_Parms*)Obj)->bUseFirst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::NewProp_bUseFirst = { "bUseFirst", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAISubsystem_eventGetRelevantPointOfInterest_Parms), &Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::NewProp_bUseFirst_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISubsystem_eventGetRelevantPointOfInterest_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::NewProp_MaxRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::NewProp_MinRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::NewProp_MaxAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::NewProp_bUseFirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAISubsystem, nullptr, "GetRelevantPointOfInterest", nullptr, nullptr, sizeof(SAISubsystem_eventGetRelevantPointOfInterest_Parms), Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAISubsystem_RemovePointOfInterest_Statics
	{
		struct SAISubsystem_eventRemovePointOfInterest_Parms
		{
			USAIPointOfInterest* Point;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAISubsystem_RemovePointOfInterest_Statics::NewProp_Point_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAISubsystem_RemovePointOfInterest_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISubsystem_eventRemovePointOfInterest_Parms, Point), Z_Construct_UClass_USAIPointOfInterest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USAISubsystem_RemovePointOfInterest_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISubsystem_RemovePointOfInterest_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAISubsystem_RemovePointOfInterest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISubsystem_RemovePointOfInterest_Statics::NewProp_Point,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAISubsystem_RemovePointOfInterest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAISubsystem_RemovePointOfInterest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAISubsystem, nullptr, "RemovePointOfInterest", nullptr, nullptr, sizeof(SAISubsystem_eventRemovePointOfInterest_Parms), Z_Construct_UFunction_USAISubsystem_RemovePointOfInterest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISubsystem_RemovePointOfInterest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAISubsystem_RemovePointOfInterest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISubsystem_RemovePointOfInterest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAISubsystem_RemovePointOfInterest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAISubsystem_RemovePointOfInterest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USAISubsystem_NoRegister()
	{
		return USAISubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USAISubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllInterestPoints_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllInterestPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllInterestPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllInterestPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Squads_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Squads_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Squads_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Squads;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAISubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USAISubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USAISubsystem_AddPointOfInterest, "AddPointOfInterest" }, // 1962209304
		{ &Z_Construct_UFunction_USAISubsystem_GetLeader, "GetLeader" }, // 2765961852
		{ &Z_Construct_UFunction_USAISubsystem_GetRelevantPointOfInterest, "GetRelevantPointOfInterest" }, // 2454130588
		{ &Z_Construct_UFunction_USAISubsystem_RemovePointOfInterest, "RemovePointOfInterest" }, // 796552683
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAISubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAISubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAISubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAISubsystem_Statics::NewProp_AllInterestPoints_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISubsystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SAISubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USAISubsystem_Statics::NewProp_AllInterestPoints_Inner = { "AllInterestPoints", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USAIPointOfInterest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USAISubsystem_Statics::NewProp_AllInterestPoints_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAISubsystem_Statics::NewProp_AllInterestPoints_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAISubsystem_Statics::NewProp_AllInterestPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISubsystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SAISubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USAISubsystem_Statics::NewProp_AllInterestPoints = { "AllInterestPoints", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAISubsystem, AllInterestPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USAISubsystem_Statics::NewProp_AllInterestPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAISubsystem_Statics::NewProp_AllInterestPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAISubsystem_Statics::NewProp_Squads_ValueProp = { "Squads", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSAISquad, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAISubsystem_Statics::NewProp_Squads_Key_KeyProp = { "Squads_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAISubsystem_Statics::NewProp_Squads_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISubsystem" },
		{ "ModuleRelativePath", "Public/SAISubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USAISubsystem_Statics::NewProp_Squads = { "Squads", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAISubsystem, Squads), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USAISubsystem_Statics::NewProp_Squads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAISubsystem_Statics::NewProp_Squads_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USAISubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAISubsystem_Statics::NewProp_AllInterestPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAISubsystem_Statics::NewProp_AllInterestPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAISubsystem_Statics::NewProp_Squads_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAISubsystem_Statics::NewProp_Squads_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAISubsystem_Statics::NewProp_Squads,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAISubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAISubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAISubsystem_Statics::ClassParams = {
		&USAISubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USAISubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USAISubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USAISubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAISubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAISubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAISubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAISubsystem, 3715321994);
	template<> AISENTIENCE_API UClass* StaticClass<USAISubsystem>()
	{
		return USAISubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAISubsystem(Z_Construct_UClass_USAISubsystem, &USAISubsystem::StaticClass, TEXT("/Script/AISentience"), TEXT("USAISubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAISubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
