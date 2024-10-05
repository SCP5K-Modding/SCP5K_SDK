// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSTracer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSTracer() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSTracer_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSTracer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FBallisticHitData();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSRangedWeaponData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSCharacterBase_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UObjectPoolComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UPoolable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSTracer::execFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Finished_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSTracer::execFollowPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FollowPath_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSTracer::execPlayCrack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayCrack_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSTracer::execStart)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_TARRAY(FBallisticHitData,Z_Param_InHits);
		P_GET_OBJECT(UFPSRangedWeaponData,Z_Param_InData);
		P_GET_OBJECT(AFPSCharacterBase,Z_Param_InOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start(Z_Param_Location,Z_Param_InHits,Z_Param_InData,Z_Param_InOwner);
		P_NATIVE_END;
	}
	static FName NAME_AFPSTracer_Finished = FName(TEXT("Finished"));
	void AFPSTracer::Finished()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSTracer_Finished),NULL);
	}
	static FName NAME_AFPSTracer_FollowPath = FName(TEXT("FollowPath"));
	void AFPSTracer::FollowPath()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSTracer_FollowPath),NULL);
	}
	static FName NAME_AFPSTracer_PlayCrack = FName(TEXT("PlayCrack"));
	void AFPSTracer::PlayCrack()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSTracer_PlayCrack),NULL);
	}
	void AFPSTracer::StaticRegisterNativesAFPSTracer()
	{
		UClass* Class = AFPSTracer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Finished", &AFPSTracer::execFinished },
			{ "FollowPath", &AFPSTracer::execFollowPath },
			{ "PlayCrack", &AFPSTracer::execPlayCrack },
			{ "Start", &AFPSTracer::execStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSTracer_Finished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSTracer_Finished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSTracer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSTracer_Finished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSTracer, nullptr, "Finished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSTracer_Finished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSTracer_Finished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSTracer_Finished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSTracer_Finished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSTracer_FollowPath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSTracer_FollowPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSTracer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSTracer_FollowPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSTracer, nullptr, "FollowPath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSTracer_FollowPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSTracer_FollowPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSTracer_FollowPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSTracer_FollowPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSTracer_PlayCrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSTracer_PlayCrack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSTracer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSTracer_PlayCrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSTracer, nullptr, "PlayCrack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSTracer_PlayCrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSTracer_PlayCrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSTracer_PlayCrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSTracer_PlayCrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSTracer_Start_Statics
	{
		struct FPSTracer_eventStart_Parms
		{
			FVector Location;
			TArray<FBallisticHitData> InHits;
			UFPSRangedWeaponData* InData;
			AFPSCharacterBase* InOwner;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InHits_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InHits;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSTracer_Start_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSTracer_eventStart_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSTracer_Start_Statics::NewProp_InHits_Inner = { "InHits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBallisticHitData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFPSTracer_Start_Statics::NewProp_InHits = { "InHits", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSTracer_eventStart_Parms, InHits), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSTracer_Start_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSTracer_eventStart_Parms, InData), Z_Construct_UClass_UFPSRangedWeaponData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSTracer_Start_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSTracer_eventStart_Parms, InOwner), Z_Construct_UClass_AFPSCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSTracer_Start_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSTracer_Start_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSTracer_Start_Statics::NewProp_InHits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSTracer_Start_Statics::NewProp_InHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSTracer_Start_Statics::NewProp_InData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSTracer_Start_Statics::NewProp_InOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSTracer_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSTracer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSTracer_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSTracer, nullptr, "Start", nullptr, nullptr, sizeof(FPSTracer_eventStart_Parms), Z_Construct_UFunction_AFPSTracer_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSTracer_Start_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSTracer_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSTracer_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSTracer_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSTracer_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSTracer_NoRegister()
	{
		return AFPSTracer::StaticClass();
	}
	struct Z_Construct_UClass_AFPSTracer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectPool;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Hits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracerSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TracerSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasPlayedCrack_MetaData[];
#endif
		static void NewProp_bHasPlayedCrack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasPlayedCrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrackDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrackDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrackDotThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrackDotThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosestPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClosestPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBulletTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBulletTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastPosition;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsPlayedCrack_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsPlayedCrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsPlayedCrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuppressionAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuppressionAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSTracer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSTracer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSTracer_Finished, "Finished" }, // 973807847
		{ &Z_Construct_UFunction_AFPSTracer_FollowPath, "FollowPath" }, // 3475344791
		{ &Z_Construct_UFunction_AFPSTracer_PlayCrack, "PlayCrack" }, // 2184597242
		{ &Z_Construct_UFunction_AFPSTracer_Start, "Start" }, // 780744689
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSTracer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSTracer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSTracer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSTracer_Statics::NewProp_ObjectPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSTracer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSTracer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSTracer_Statics::NewProp_ObjectPool = { "ObjectPool", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSTracer, ObjectPool), Z_Construct_UClass_UObjectPoolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSTracer_Statics::NewProp_ObjectPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSTracer_Statics::NewProp_ObjectPool_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSTracer_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBallisticHitData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSTracer_Statics::NewProp_Hits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSTracer" },
		{ "ModuleRelativePath", "Public/FPSTracer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSTracer_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSTracer, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSTracer_Statics::NewProp_Hits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSTracer_Statics::NewProp_Hits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSTracer_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSTracer" },
		{ "ModuleRelativePath", "Public/FPSTracer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSTracer_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSTracer, Data), Z_Construct_UClass_UFPSRangedWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSTracer_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSTracer_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSTracer_Statics::NewProp_StartPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSTracer" },
		{ "ModuleRelativePath", "Public/FPSTracer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSTracer_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSTracer, StartPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFPSTracer_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSTracer_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSTracer_Statics::NewProp_Time_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSTracer" },
		{ "ModuleRelativePath", "Public/FPSTracer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSTracer_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSTracer, Time), METADATA_PARAMS(Z_Construct_UClass_AFPSTracer_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSTracer_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSTracer_Statics::NewProp_TracerSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSTracer" },
		{ "ModuleRelativePath", "Public/FPSTracer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSTracer_Statics::NewProp_TracerSpeed = { "TracerSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSTracer, TracerSpeed), METADATA_PARAMS(Z_Construct_UClass_AFPSTracer_Statics::NewProp_TracerSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSTracer_Statics::NewProp_TracerSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSTracer_Statics::NewProp_bHasPlayedCrack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSTracer" },
		{ "ModuleRelativePath", "Public/FPSTracer.h" },
	};
#endif
	void Z_Construct_UClass_AFPSTracer_Statics::NewProp_bHasPlayedCrack_SetBit(void* Obj)
	{
		((AFPSTracer*)Obj)->bHasPlayedCrack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSTracer_Statics::NewProp_bHasPlayedCrack = { "bHasPlayedCrack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSTracer), &Z_Construct_UClass_AFPSTracer_Statics::NewProp_bHasPlayedCrack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSTracer_Statics::NewProp_bHasPlayedCrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSTracer_Statics::NewProp_bHasPlayedCrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSTracer_Statics::NewProp_CrackDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSTracer" },
		{ "ModuleRelativePath", "Public/FPSTracer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSTracer_Statics::NewProp_CrackDistance = { "CrackDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSTracer, CrackDistance), METADATA_PARAMS(Z_Construct_UClass_AFPSTracer_Statics::NewProp_CrackDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSTracer_Statics::NewProp_CrackDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSTracer_Statics::NewProp_CrackDotThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSTracer" },
		{ "ModuleRelativePath", "Public/FPSTracer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSTracer_Statics::NewProp_CrackDotThreshold = { "CrackDotThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSTracer, CrackDotThreshold), METADATA_PARAMS(Z_Construct_UClass_AFPSTracer_Statics::NewProp_CrackDotThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSTracer_Statics::NewProp_CrackDotThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSTracer_Statics::NewProp_StartVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSTracer" },
		{ "ModuleRelativePath", "Public/FPSTracer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSTracer_Statics::NewProp_StartVelocity = { "StartVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSTracer, StartVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFPSTracer_Statics::NewProp_StartVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSTracer_Statics::NewProp_StartVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSTracer_Statics::NewProp_ClosestPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSTracer" },
		{ "ModuleRelativePath", "Public/FPSTracer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSTracer_Statics::NewProp_ClosestPoint = { "ClosestPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSTracer, ClosestPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFPSTracer_Statics::NewProp_ClosestPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSTracer_Statics::NewProp_ClosestPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSTracer_Statics::NewProp_MaxBulletTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSTracer" },
		{ "ModuleRelativePath", "Public/FPSTracer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSTracer_Statics::NewProp_MaxBulletTime = { "MaxBulletTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSTracer, MaxBulletTime), METADATA_PARAMS(Z_Construct_UClass_AFPSTracer_Statics::NewProp_MaxBulletTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSTracer_Statics::NewProp_MaxBulletTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSTracer_Statics::NewProp_LastPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSTracer" },
		{ "ModuleRelativePath", "Public/FPSTracer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSTracer_Statics::NewProp_LastPosition = { "LastPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSTracer, LastPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFPSTracer_Statics::NewProp_LastPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSTracer_Statics::NewProp_LastPosition_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSTracer_Statics::NewProp_ActorsPlayedCrack_Inner = { "ActorsPlayedCrack", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSTracer_Statics::NewProp_ActorsPlayedCrack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSTracer" },
		{ "ModuleRelativePath", "Public/FPSTracer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSTracer_Statics::NewProp_ActorsPlayedCrack = { "ActorsPlayedCrack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSTracer, ActorsPlayedCrack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSTracer_Statics::NewProp_ActorsPlayedCrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSTracer_Statics::NewProp_ActorsPlayedCrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSTracer_Statics::NewProp_SuppressionAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSTracer" },
		{ "ModuleRelativePath", "Public/FPSTracer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSTracer_Statics::NewProp_SuppressionAmount = { "SuppressionAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSTracer, SuppressionAmount), METADATA_PARAMS(Z_Construct_UClass_AFPSTracer_Statics::NewProp_SuppressionAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSTracer_Statics::NewProp_SuppressionAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSTracer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSTracer_Statics::NewProp_ObjectPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSTracer_Statics::NewProp_Hits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSTracer_Statics::NewProp_Hits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSTracer_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSTracer_Statics::NewProp_StartPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSTracer_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSTracer_Statics::NewProp_TracerSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSTracer_Statics::NewProp_bHasPlayedCrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSTracer_Statics::NewProp_CrackDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSTracer_Statics::NewProp_CrackDotThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSTracer_Statics::NewProp_StartVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSTracer_Statics::NewProp_ClosestPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSTracer_Statics::NewProp_MaxBulletTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSTracer_Statics::NewProp_LastPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSTracer_Statics::NewProp_ActorsPlayedCrack_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSTracer_Statics::NewProp_ActorsPlayedCrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSTracer_Statics::NewProp_SuppressionAmount,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFPSTracer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPoolable_NoRegister, (int32)VTABLE_OFFSET(AFPSTracer, IPoolable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSTracer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSTracer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSTracer_Statics::ClassParams = {
		&AFPSTracer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSTracer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSTracer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSTracer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSTracer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSTracer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSTracer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSTracer, 317095728);
	template<> FPSCONTROLLER_API UClass* StaticClass<AFPSTracer>()
	{
		return AFPSTracer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSTracer(Z_Construct_UClass_AFPSTracer, &AFPSTracer::StaticClass, TEXT("/Script/FPSController"), TEXT("AFPSTracer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSTracer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
