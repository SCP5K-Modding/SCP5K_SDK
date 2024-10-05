// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAIPatrolPath.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIPatrolPath() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAIPatrolPath_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAIPatrolPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_EPatrolType();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAIPatrolPoint_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASAIPatrolPath::execGetPatrolKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetPatrolKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIPatrolPath::execGetPatrolType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EPatrolType::Type>*)Z_Param__Result=P_THIS->GetPatrolType();
		P_NATIVE_END;
	}
	void ASAIPatrolPath::StaticRegisterNativesASAIPatrolPath()
	{
		UClass* Class = ASAIPatrolPath::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPatrolKey", &ASAIPatrolPath::execGetPatrolKey },
			{ "GetPatrolType", &ASAIPatrolPath::execGetPatrolType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASAIPatrolPath_GetPatrolKey_Statics
	{
		struct SAIPatrolPath_eventGetPatrolKey_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASAIPatrolPath_GetPatrolKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIPatrolPath_eventGetPatrolKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIPatrolPath_GetPatrolKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIPatrolPath_GetPatrolKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIPatrolPath_GetPatrolKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIPatrolPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIPatrolPath_GetPatrolKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIPatrolPath, nullptr, "GetPatrolKey", nullptr, nullptr, sizeof(SAIPatrolPath_eventGetPatrolKey_Parms), Z_Construct_UFunction_ASAIPatrolPath_GetPatrolKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIPatrolPath_GetPatrolKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIPatrolPath_GetPatrolKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIPatrolPath_GetPatrolKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIPatrolPath_GetPatrolKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIPatrolPath_GetPatrolKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIPatrolPath_GetPatrolType_Statics
	{
		struct SAIPatrolPath_eventGetPatrolType_Parms
		{
			TEnumAsByte<EPatrolType::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASAIPatrolPath_GetPatrolType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIPatrolPath_eventGetPatrolType_Parms, ReturnValue), Z_Construct_UEnum_AISentience_EPatrolType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIPatrolPath_GetPatrolType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIPatrolPath_GetPatrolType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIPatrolPath_GetPatrolType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIPatrolPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIPatrolPath_GetPatrolType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIPatrolPath, nullptr, "GetPatrolType", nullptr, nullptr, sizeof(SAIPatrolPath_eventGetPatrolType_Parms), Z_Construct_UFunction_ASAIPatrolPath_GetPatrolType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIPatrolPath_GetPatrolType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIPatrolPath_GetPatrolType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIPatrolPath_GetPatrolType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIPatrolPath_GetPatrolType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIPatrolPath_GetPatrolType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASAIPatrolPath_NoRegister()
	{
		return ASAIPatrolPath::StaticClass();
	}
	struct Z_Construct_UClass_ASAIPatrolPath_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatrolPath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatrolPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PatrolPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PatrolKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PatrolType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASAIPatrolPath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASAIPatrolPath_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASAIPatrolPath_GetPatrolKey, "GetPatrolKey" }, // 764770562
		{ &Z_Construct_UFunction_ASAIPatrolPath_GetPatrolType, "GetPatrolType" }, // 1152372599
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIPatrolPath_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAIPatrolPath.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAIPatrolPath.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIPatrolPath" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SAIPatrolPath.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolPath = { "PatrolPath", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIPatrolPath, PatrolPath), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolPath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolPoints_Inner = { "PatrolPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASAIPatrolPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIPatrolPath" },
		{ "ModuleRelativePath", "Public/SAIPatrolPath.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolPoints = { "PatrolPoints", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIPatrolPath, PatrolPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIPatrolPath" },
		{ "ModuleRelativePath", "Public/SAIPatrolPath.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolKey = { "PatrolKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIPatrolPath, PatrolKey), METADATA_PARAMS(Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIPatrolPath" },
		{ "ModuleRelativePath", "Public/SAIPatrolPath.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolType = { "PatrolType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIPatrolPath, PatrolType), Z_Construct_UEnum_AISentience_EPatrolType, METADATA_PARAMS(Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIPatrolPath" },
		{ "ModuleRelativePath", "Public/SAIPatrolPath.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIPatrolPath, Priority), METADATA_PARAMS(Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASAIPatrolPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_PatrolType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIPatrolPath_Statics::NewProp_Priority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASAIPatrolPath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAIPatrolPath>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASAIPatrolPath_Statics::ClassParams = {
		&ASAIPatrolPath::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASAIPatrolPath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASAIPatrolPath_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASAIPatrolPath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIPatrolPath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASAIPatrolPath()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASAIPatrolPath_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASAIPatrolPath, 472282849);
	template<> AISENTIENCE_API UClass* StaticClass<ASAIPatrolPath>()
	{
		return ASAIPatrolPath::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASAIPatrolPath(Z_Construct_UClass_ASAIPatrolPath, &ASAIPatrolPath::StaticClass, TEXT("/Script/AISentience"), TEXT("ASAIPatrolPath"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASAIPatrolPath);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
