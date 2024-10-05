// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAIInterestPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIInterestPoint() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAIInterestPoint_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAIInterestPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASAIInterestPoint::execGetPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPriority();
		P_NATIVE_END;
	}
	void ASAIInterestPoint::StaticRegisterNativesASAIInterestPoint()
	{
		UClass* Class = ASAIInterestPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPriority", &ASAIInterestPoint::execGetPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASAIInterestPoint_GetPriority_Statics
	{
		struct SAIInterestPoint_eventGetPriority_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASAIInterestPoint_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIInterestPoint_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIInterestPoint_GetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIInterestPoint_GetPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIInterestPoint_GetPriority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIInterestPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIInterestPoint_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIInterestPoint, nullptr, "GetPriority", nullptr, nullptr, sizeof(SAIInterestPoint_eventGetPriority_Parms), Z_Construct_UFunction_ASAIInterestPoint_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIInterestPoint_GetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIInterestPoint_GetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIInterestPoint_GetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIInterestPoint_GetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIInterestPoint_GetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASAIInterestPoint_NoRegister()
	{
		return ASAIInterestPoint::StaticClass();
	}
	struct Z_Construct_UClass_ASAIInterestPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterestRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterestRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterestPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InterestPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASAIInterestPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASAIInterestPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASAIInterestPoint_GetPriority, "GetPriority" }, // 3798491478
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIInterestPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAIInterestPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAIInterestPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIInterestPoint_Statics::NewProp_InterestRoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIInterestPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SAIInterestPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAIInterestPoint_Statics::NewProp_InterestRoot = { "InterestRoot", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIInterestPoint, InterestRoot), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASAIInterestPoint_Statics::NewProp_InterestRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIInterestPoint_Statics::NewProp_InterestRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIInterestPoint_Statics::NewProp_InterestPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIInterestPoint" },
		{ "ModuleRelativePath", "Public/SAIInterestPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASAIInterestPoint_Statics::NewProp_InterestPriority = { "InterestPriority", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIInterestPoint, InterestPriority), METADATA_PARAMS(Z_Construct_UClass_ASAIInterestPoint_Statics::NewProp_InterestPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIInterestPoint_Statics::NewProp_InterestPriority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASAIInterestPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIInterestPoint_Statics::NewProp_InterestRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIInterestPoint_Statics::NewProp_InterestPriority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASAIInterestPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAIInterestPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASAIInterestPoint_Statics::ClassParams = {
		&ASAIInterestPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASAIInterestPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASAIInterestPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASAIInterestPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIInterestPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASAIInterestPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASAIInterestPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASAIInterestPoint, 4263104590);
	template<> AISENTIENCE_API UClass* StaticClass<ASAIInterestPoint>()
	{
		return ASAIInterestPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASAIInterestPoint(Z_Construct_UClass_ASAIInterestPoint, &ASAIInterestPoint::StaticClass, TEXT("/Script/AISentience"), TEXT("ASAIInterestPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASAIInterestPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
