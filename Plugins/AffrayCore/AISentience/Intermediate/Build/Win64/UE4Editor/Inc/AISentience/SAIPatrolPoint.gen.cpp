// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAIPatrolPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIPatrolPoint() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAIPatrolPoint_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAIPatrolPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASAIPatrolPoint::execGetPatrolWaitTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPatrolWaitTime();
		P_NATIVE_END;
	}
	void ASAIPatrolPoint::StaticRegisterNativesASAIPatrolPoint()
	{
		UClass* Class = ASAIPatrolPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPatrolWaitTime", &ASAIPatrolPoint::execGetPatrolWaitTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASAIPatrolPoint_GetPatrolWaitTime_Statics
	{
		struct SAIPatrolPoint_eventGetPatrolWaitTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASAIPatrolPoint_GetPatrolWaitTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIPatrolPoint_eventGetPatrolWaitTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIPatrolPoint_GetPatrolWaitTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIPatrolPoint_GetPatrolWaitTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIPatrolPoint_GetPatrolWaitTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIPatrolPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIPatrolPoint_GetPatrolWaitTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIPatrolPoint, nullptr, "GetPatrolWaitTime", nullptr, nullptr, sizeof(SAIPatrolPoint_eventGetPatrolWaitTime_Parms), Z_Construct_UFunction_ASAIPatrolPoint_GetPatrolWaitTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIPatrolPoint_GetPatrolWaitTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIPatrolPoint_GetPatrolWaitTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIPatrolPoint_GetPatrolWaitTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIPatrolPoint_GetPatrolWaitTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIPatrolPoint_GetPatrolWaitTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASAIPatrolPoint_NoRegister()
	{
		return ASAIPatrolPoint::StaticClass();
	}
	struct Z_Construct_UClass_ASAIPatrolPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PatrolWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatrolPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASAIPatrolPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASAIPatrolPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASAIPatrolPoint_GetPatrolWaitTime, "GetPatrolWaitTime" }, // 2629684899
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIPatrolPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAIPatrolPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAIPatrolPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIPatrolPoint_Statics::NewProp_PatrolWaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIPatrolPoint" },
		{ "ModuleRelativePath", "Public/SAIPatrolPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIPatrolPoint_Statics::NewProp_PatrolWaitTime = { "PatrolWaitTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIPatrolPoint, PatrolWaitTime), METADATA_PARAMS(Z_Construct_UClass_ASAIPatrolPoint_Statics::NewProp_PatrolWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIPatrolPoint_Statics::NewProp_PatrolWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIPatrolPoint_Statics::NewProp_PatrolPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIPatrolPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SAIPatrolPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAIPatrolPoint_Statics::NewProp_PatrolPoint = { "PatrolPoint", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIPatrolPoint, PatrolPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASAIPatrolPoint_Statics::NewProp_PatrolPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIPatrolPoint_Statics::NewProp_PatrolPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASAIPatrolPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIPatrolPoint_Statics::NewProp_PatrolWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIPatrolPoint_Statics::NewProp_PatrolPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASAIPatrolPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAIPatrolPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASAIPatrolPoint_Statics::ClassParams = {
		&ASAIPatrolPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASAIPatrolPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASAIPatrolPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASAIPatrolPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIPatrolPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASAIPatrolPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASAIPatrolPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASAIPatrolPoint, 2583313846);
	template<> AISENTIENCE_API UClass* StaticClass<ASAIPatrolPoint>()
	{
		return ASAIPatrolPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASAIPatrolPoint(Z_Construct_UClass_ASAIPatrolPoint, &ASAIPatrolPoint::StaticClass, TEXT("/Script/AISentience"), TEXT("ASAIPatrolPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASAIPatrolPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
