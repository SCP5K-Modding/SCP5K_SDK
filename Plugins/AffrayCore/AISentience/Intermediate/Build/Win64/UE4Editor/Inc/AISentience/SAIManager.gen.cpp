// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAIManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIManager() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAIManager_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAIManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIPointOfInterest_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIComponent_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAIPatrolPath_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FAISquad();
// End Cross Module References
	DEFINE_FUNCTION(ASAIManager::execAddPointOfInterest)
	{
		P_GET_OBJECT(USAIPointOfInterest,Z_Param_Point);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPointOfInterest(Z_Param_Point);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIManager::execGetInterestPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USAIPointOfInterest*>*)Z_Param__Result=P_THIS->GetInterestPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIManager::execGetRelevantPointOfInterest)
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
	DEFINE_FUNCTION(ASAIManager::execInitializeAI)
	{
		P_GET_OBJECT(USAIComponent,Z_Param_SAI);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeAI(Z_Param_SAI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIManager::execInitializePatrol)
	{
		P_GET_OBJECT(ASAIPatrolPath,Z_Param_Patrol);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializePatrol(Z_Param_Patrol);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIManager::execInitializeSquad)
	{
		P_GET_OBJECT(ACharacter,Z_Param_SquadLeader);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeSquad(Z_Param_SquadLeader);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIManager::execRemovePointOfInterest)
	{
		P_GET_OBJECT(USAIPointOfInterest,Z_Param_Point);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePointOfInterest(Z_Param_Point);
		P_NATIVE_END;
	}
	void ASAIManager::StaticRegisterNativesASAIManager()
	{
		UClass* Class = ASAIManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPointOfInterest", &ASAIManager::execAddPointOfInterest },
			{ "GetInterestPoints", &ASAIManager::execGetInterestPoints },
			{ "GetRelevantPointOfInterest", &ASAIManager::execGetRelevantPointOfInterest },
			{ "InitializeAI", &ASAIManager::execInitializeAI },
			{ "InitializePatrol", &ASAIManager::execInitializePatrol },
			{ "InitializeSquad", &ASAIManager::execInitializeSquad },
			{ "RemovePointOfInterest", &ASAIManager::execRemovePointOfInterest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASAIManager_AddPointOfInterest_Statics
	{
		struct SAIManager_eventAddPointOfInterest_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIManager_AddPointOfInterest_Statics::NewProp_Point_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIManager_AddPointOfInterest_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIManager_eventAddPointOfInterest_Parms, Point), Z_Construct_UClass_USAIPointOfInterest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASAIManager_AddPointOfInterest_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIManager_AddPointOfInterest_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIManager_AddPointOfInterest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIManager_AddPointOfInterest_Statics::NewProp_Point,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIManager_AddPointOfInterest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIManager_AddPointOfInterest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIManager, nullptr, "AddPointOfInterest", nullptr, nullptr, sizeof(SAIManager_eventAddPointOfInterest_Parms), Z_Construct_UFunction_ASAIManager_AddPointOfInterest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIManager_AddPointOfInterest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIManager_AddPointOfInterest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIManager_AddPointOfInterest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIManager_AddPointOfInterest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIManager_AddPointOfInterest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIManager_GetInterestPoints_Statics
	{
		struct SAIManager_eventGetInterestPoints_Parms
		{
			TArray<USAIPointOfInterest*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIManager_GetInterestPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USAIPointOfInterest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIManager_GetInterestPoints_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASAIManager_GetInterestPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIManager_eventGetInterestPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASAIManager_GetInterestPoints_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIManager_GetInterestPoints_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIManager_GetInterestPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIManager_GetInterestPoints_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIManager_GetInterestPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIManager_GetInterestPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIManager_GetInterestPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIManager, nullptr, "GetInterestPoints", nullptr, nullptr, sizeof(SAIManager_eventGetInterestPoints_Parms), Z_Construct_UFunction_ASAIManager_GetInterestPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIManager_GetInterestPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIManager_GetInterestPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIManager_GetInterestPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIManager_GetInterestPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIManager_GetInterestPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics
	{
		struct SAIManager_eventGetRelevantPointOfInterest_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIManager_eventGetRelevantPointOfInterest_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIManager_eventGetRelevantPointOfInterest_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::NewProp_MaxRadius = { "MaxRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIManager_eventGetRelevantPointOfInterest_Parms, MaxRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::NewProp_MinRadius = { "MinRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIManager_eventGetRelevantPointOfInterest_Parms, MinRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIManager_eventGetRelevantPointOfInterest_Parms, MaxAngle), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::NewProp_bUseFirst_SetBit(void* Obj)
	{
		((SAIManager_eventGetRelevantPointOfInterest_Parms*)Obj)->bUseFirst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::NewProp_bUseFirst = { "bUseFirst", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIManager_eventGetRelevantPointOfInterest_Parms), &Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::NewProp_bUseFirst_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIManager_eventGetRelevantPointOfInterest_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::NewProp_MaxRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::NewProp_MinRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::NewProp_MaxAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::NewProp_bUseFirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIManager, nullptr, "GetRelevantPointOfInterest", nullptr, nullptr, sizeof(SAIManager_eventGetRelevantPointOfInterest_Parms), Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIManager_InitializeAI_Statics
	{
		struct SAIManager_eventInitializeAI_Parms
		{
			USAIComponent* SAI;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SAI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SAI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIManager_InitializeAI_Statics::NewProp_SAI_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIManager_InitializeAI_Statics::NewProp_SAI = { "SAI", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIManager_eventInitializeAI_Parms, SAI), Z_Construct_UClass_USAIComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASAIManager_InitializeAI_Statics::NewProp_SAI_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIManager_InitializeAI_Statics::NewProp_SAI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIManager_InitializeAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIManager_InitializeAI_Statics::NewProp_SAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIManager_InitializeAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIManager_InitializeAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIManager, nullptr, "InitializeAI", nullptr, nullptr, sizeof(SAIManager_eventInitializeAI_Parms), Z_Construct_UFunction_ASAIManager_InitializeAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIManager_InitializeAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIManager_InitializeAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIManager_InitializeAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIManager_InitializeAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIManager_InitializeAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIManager_InitializePatrol_Statics
	{
		struct SAIManager_eventInitializePatrol_Parms
		{
			ASAIPatrolPath* Patrol;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Patrol;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIManager_InitializePatrol_Statics::NewProp_Patrol = { "Patrol", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIManager_eventInitializePatrol_Parms, Patrol), Z_Construct_UClass_ASAIPatrolPath_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIManager_InitializePatrol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIManager_InitializePatrol_Statics::NewProp_Patrol,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIManager_InitializePatrol_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIManager_InitializePatrol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIManager, nullptr, "InitializePatrol", nullptr, nullptr, sizeof(SAIManager_eventInitializePatrol_Parms), Z_Construct_UFunction_ASAIManager_InitializePatrol_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIManager_InitializePatrol_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIManager_InitializePatrol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIManager_InitializePatrol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIManager_InitializePatrol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIManager_InitializePatrol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIManager_InitializeSquad_Statics
	{
		struct SAIManager_eventInitializeSquad_Parms
		{
			ACharacter* SquadLeader;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SquadLeader;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIManager_InitializeSquad_Statics::NewProp_SquadLeader = { "SquadLeader", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIManager_eventInitializeSquad_Parms, SquadLeader), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIManager_InitializeSquad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIManager_InitializeSquad_Statics::NewProp_SquadLeader,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIManager_InitializeSquad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIManager_InitializeSquad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIManager, nullptr, "InitializeSquad", nullptr, nullptr, sizeof(SAIManager_eventInitializeSquad_Parms), Z_Construct_UFunction_ASAIManager_InitializeSquad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIManager_InitializeSquad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIManager_InitializeSquad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIManager_InitializeSquad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIManager_InitializeSquad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIManager_InitializeSquad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIManager_RemovePointOfInterest_Statics
	{
		struct SAIManager_eventRemovePointOfInterest_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIManager_RemovePointOfInterest_Statics::NewProp_Point_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIManager_RemovePointOfInterest_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIManager_eventRemovePointOfInterest_Parms, Point), Z_Construct_UClass_USAIPointOfInterest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASAIManager_RemovePointOfInterest_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIManager_RemovePointOfInterest_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIManager_RemovePointOfInterest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIManager_RemovePointOfInterest_Statics::NewProp_Point,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIManager_RemovePointOfInterest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIManager_RemovePointOfInterest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIManager, nullptr, "RemovePointOfInterest", nullptr, nullptr, sizeof(SAIManager_eventRemovePointOfInterest_Parms), Z_Construct_UFunction_ASAIManager_RemovePointOfInterest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIManager_RemovePointOfInterest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIManager_RemovePointOfInterest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIManager_RemovePointOfInterest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIManager_RemovePointOfInterest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIManager_RemovePointOfInterest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASAIManager_NoRegister()
	{
		return ASAIManager::StaticClass();
	}
	struct Z_Construct_UClass_ASAIManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDynamicPatrols_MetaData[];
#endif
		static void NewProp_bDynamicPatrols_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDynamicPatrols;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDynamicSquads_MetaData[];
#endif
		static void NewProp_bDynamicSquads_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDynamicSquads;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllInterestPoints_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllInterestPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllInterestPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllInterestPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllPatrols_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllPatrols_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllPatrols;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllSquads_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllSquads_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllSquads;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASAIManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASAIManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASAIManager_AddPointOfInterest, "AddPointOfInterest" }, // 2652477754
		{ &Z_Construct_UFunction_ASAIManager_GetInterestPoints, "GetInterestPoints" }, // 949418419
		{ &Z_Construct_UFunction_ASAIManager_GetRelevantPointOfInterest, "GetRelevantPointOfInterest" }, // 2793752174
		{ &Z_Construct_UFunction_ASAIManager_InitializeAI, "InitializeAI" }, // 2542352740
		{ &Z_Construct_UFunction_ASAIManager_InitializePatrol, "InitializePatrol" }, // 822844151
		{ &Z_Construct_UFunction_ASAIManager_InitializeSquad, "InitializeSquad" }, // 938329153
		{ &Z_Construct_UFunction_ASAIManager_RemovePointOfInterest, "RemovePointOfInterest" }, // 1626376078
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAIManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAIManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIManager_Statics::NewProp_bDynamicPatrols_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIManager" },
		{ "ModuleRelativePath", "Public/SAIManager.h" },
	};
#endif
	void Z_Construct_UClass_ASAIManager_Statics::NewProp_bDynamicPatrols_SetBit(void* Obj)
	{
		((ASAIManager*)Obj)->bDynamicPatrols = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASAIManager_Statics::NewProp_bDynamicPatrols = { "bDynamicPatrols", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAIManager), &Z_Construct_UClass_ASAIManager_Statics::NewProp_bDynamicPatrols_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASAIManager_Statics::NewProp_bDynamicPatrols_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIManager_Statics::NewProp_bDynamicPatrols_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIManager_Statics::NewProp_bDynamicSquads_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIManager" },
		{ "ModuleRelativePath", "Public/SAIManager.h" },
	};
#endif
	void Z_Construct_UClass_ASAIManager_Statics::NewProp_bDynamicSquads_SetBit(void* Obj)
	{
		((ASAIManager*)Obj)->bDynamicSquads = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASAIManager_Statics::NewProp_bDynamicSquads = { "bDynamicSquads", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAIManager), &Z_Construct_UClass_ASAIManager_Statics::NewProp_bDynamicSquads_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASAIManager_Statics::NewProp_bDynamicSquads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIManager_Statics::NewProp_bDynamicSquads_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIManager_Statics::NewProp_EditorIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SAIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAIManager_Statics::NewProp_EditorIcon = { "EditorIcon", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIManager, EditorIcon), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASAIManager_Statics::NewProp_EditorIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIManager_Statics::NewProp_EditorIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIManager_Statics::NewProp_AllInterestPoints_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SAIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAIManager_Statics::NewProp_AllInterestPoints_Inner = { "AllInterestPoints", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USAIPointOfInterest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASAIManager_Statics::NewProp_AllInterestPoints_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIManager_Statics::NewProp_AllInterestPoints_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIManager_Statics::NewProp_AllInterestPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SAIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASAIManager_Statics::NewProp_AllInterestPoints = { "AllInterestPoints", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIManager, AllInterestPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASAIManager_Statics::NewProp_AllInterestPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIManager_Statics::NewProp_AllInterestPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAIManager_Statics::NewProp_AllPatrols_Inner = { "AllPatrols", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASAIPatrolPath_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIManager_Statics::NewProp_AllPatrols_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIManager" },
		{ "ModuleRelativePath", "Public/SAIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASAIManager_Statics::NewProp_AllPatrols = { "AllPatrols", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIManager, AllPatrols), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASAIManager_Statics::NewProp_AllPatrols_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIManager_Statics::NewProp_AllPatrols_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASAIManager_Statics::NewProp_AllSquads_Inner = { "AllSquads", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAISquad, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIManager_Statics::NewProp_AllSquads_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIManager" },
		{ "ModuleRelativePath", "Public/SAIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASAIManager_Statics::NewProp_AllSquads = { "AllSquads", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIManager, AllSquads), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASAIManager_Statics::NewProp_AllSquads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIManager_Statics::NewProp_AllSquads_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASAIManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIManager_Statics::NewProp_bDynamicPatrols,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIManager_Statics::NewProp_bDynamicSquads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIManager_Statics::NewProp_EditorIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIManager_Statics::NewProp_AllInterestPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIManager_Statics::NewProp_AllInterestPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIManager_Statics::NewProp_AllPatrols_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIManager_Statics::NewProp_AllPatrols,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIManager_Statics::NewProp_AllSquads_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIManager_Statics::NewProp_AllSquads,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASAIManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAIManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASAIManager_Statics::ClassParams = {
		&ASAIManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASAIManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASAIManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASAIManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASAIManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASAIManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASAIManager, 2696057440);
	template<> AISENTIENCE_API UClass* StaticClass<ASAIManager>()
	{
		return ASAIManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASAIManager(Z_Construct_UClass_ASAIManager, &ASAIManager::StaticClass, TEXT("/Script/AISentience"), TEXT("ASAIManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASAIManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
