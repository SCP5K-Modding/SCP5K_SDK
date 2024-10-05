// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkinnedDecalComponent/Public/SkinnedDecalInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkinnedDecalInstance() {}
// Cross Module References
	SKINNEDDECALCOMPONENT_API UClass* Z_Construct_UClass_USkinnedDecalInstance_NoRegister();
	SKINNEDDECALCOMPONENT_API UClass* Z_Construct_UClass_USkinnedDecalInstance();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_SkinnedDecalComponent();
	SKINNEDDECALCOMPONENT_API UClass* Z_Construct_UClass_USkinnedDecalSampler_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USkinnedDecalInstance::execGetSampler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkinnedDecalSampler**)Z_Param__Result=P_THIS->GetSampler();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedDecalInstance::execUpdateDecal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDecal();
		P_NATIVE_END;
	}
	void USkinnedDecalInstance::StaticRegisterNativesUSkinnedDecalInstance()
	{
		UClass* Class = USkinnedDecalInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSampler", &USkinnedDecalInstance::execGetSampler },
			{ "UpdateDecal", &USkinnedDecalInstance::execUpdateDecal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkinnedDecalInstance_GetSampler_Statics
	{
		struct SkinnedDecalInstance_eventGetSampler_Parms
		{
			USkinnedDecalSampler* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedDecalInstance_GetSampler_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedDecalInstance_GetSampler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedDecalInstance_eventGetSampler_Parms, ReturnValue), Z_Construct_UClass_USkinnedDecalSampler_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkinnedDecalInstance_GetSampler_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalInstance_GetSampler_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedDecalInstance_GetSampler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedDecalInstance_GetSampler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedDecalInstance_GetSampler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkinnedDecalInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedDecalInstance_GetSampler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedDecalInstance, nullptr, "GetSampler", nullptr, nullptr, sizeof(SkinnedDecalInstance_eventGetSampler_Parms), Z_Construct_UFunction_USkinnedDecalInstance_GetSampler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalInstance_GetSampler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedDecalInstance_GetSampler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalInstance_GetSampler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedDecalInstance_GetSampler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedDecalInstance_GetSampler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedDecalInstance_UpdateDecal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedDecalInstance_UpdateDecal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkinnedDecalInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedDecalInstance_UpdateDecal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedDecalInstance, nullptr, "UpdateDecal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedDecalInstance_UpdateDecal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalInstance_UpdateDecal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedDecalInstance_UpdateDecal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedDecalInstance_UpdateDecal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkinnedDecalInstance_NoRegister()
	{
		return USkinnedDecalInstance::StaticClass();
	}
	struct Z_Construct_UClass_USkinnedDecalInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubUV_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubUV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkinnedDecalInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SkinnedDecalComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkinnedDecalInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkinnedDecalInstance_GetSampler, "GetSampler" }, // 2138118839
		{ &Z_Construct_UFunction_USkinnedDecalInstance_UpdateDecal, "UpdateDecal" }, // 1535902096
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SkinnedDecalInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SkinnedDecalInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalInstance_Statics::NewProp_Index_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkinnedDecalInstance" },
		{ "ModuleRelativePath", "Public/SkinnedDecalInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkinnedDecalInstance_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedDecalInstance, Index), METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalInstance_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalInstance_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalInstance_Statics::NewProp_SubUV_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkinnedDecalInstance" },
		{ "ModuleRelativePath", "Public/SkinnedDecalInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkinnedDecalInstance_Statics::NewProp_SubUV = { "SubUV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedDecalInstance, SubUV), METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalInstance_Statics::NewProp_SubUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalInstance_Statics::NewProp_SubUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalInstance_Statics::NewProp_Size_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkinnedDecalInstance" },
		{ "ModuleRelativePath", "Public/SkinnedDecalInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkinnedDecalInstance_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedDecalInstance, Size), METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalInstance_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalInstance_Statics::NewProp_Size_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkinnedDecalInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalInstance_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalInstance_Statics::NewProp_SubUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalInstance_Statics::NewProp_Size,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkinnedDecalInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkinnedDecalInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkinnedDecalInstance_Statics::ClassParams = {
		&USkinnedDecalInstance::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkinnedDecalInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalInstance_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkinnedDecalInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkinnedDecalInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkinnedDecalInstance, 747355696);
	template<> SKINNEDDECALCOMPONENT_API UClass* StaticClass<USkinnedDecalInstance>()
	{
		return USkinnedDecalInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkinnedDecalInstance(Z_Construct_UClass_USkinnedDecalInstance, &USkinnedDecalInstance::StaticClass, TEXT("/Script/SkinnedDecalComponent"), TEXT("USkinnedDecalInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkinnedDecalInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
