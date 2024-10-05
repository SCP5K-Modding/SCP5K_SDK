// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSSight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSSight() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSSight_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSSight();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSAttachment();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSSightData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSSight::execGetSight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UArrowComponent**)Z_Param__Result=P_THIS->GetSight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSSight::execGetSightData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFPSSightData**)Z_Param__Result=P_THIS->GetSightData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSSight::execUpdateEffects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEffects_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AFPSSight_UpdateEffects = FName(TEXT("UpdateEffects"));
	void AFPSSight::UpdateEffects()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSSight_UpdateEffects),NULL);
	}
	void AFPSSight::StaticRegisterNativesAFPSSight()
	{
		UClass* Class = AFPSSight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSight", &AFPSSight::execGetSight },
			{ "GetSightData", &AFPSSight::execGetSightData },
			{ "UpdateEffects", &AFPSSight::execUpdateEffects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSSight_GetSight_Statics
	{
		struct FPSSight_eventGetSight_Parms
		{
			UArrowComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSSight_GetSight_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSSight_GetSight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSSight_eventGetSight_Parms, ReturnValue), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSSight_GetSight_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSSight_GetSight_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSSight_GetSight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSSight_GetSight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSSight_GetSight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSSight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSSight_GetSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSSight, nullptr, "GetSight", nullptr, nullptr, sizeof(FPSSight_eventGetSight_Parms), Z_Construct_UFunction_AFPSSight_GetSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSSight_GetSight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSSight_GetSight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSSight_GetSight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSSight_GetSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSSight_GetSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSSight_GetSightData_Statics
	{
		struct FPSSight_eventGetSightData_Parms
		{
			UFPSSightData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSSight_GetSightData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSSight_eventGetSightData_Parms, ReturnValue), Z_Construct_UClass_UFPSSightData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSSight_GetSightData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSSight_GetSightData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSSight_GetSightData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSSight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSSight_GetSightData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSSight, nullptr, "GetSightData", nullptr, nullptr, sizeof(FPSSight_eventGetSightData_Parms), Z_Construct_UFunction_AFPSSight_GetSightData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSSight_GetSightData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSSight_GetSightData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSSight_GetSightData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSSight_GetSightData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSSight_GetSightData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSSight_UpdateEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSSight_UpdateEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSSight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSSight_UpdateEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSSight, nullptr, "UpdateEffects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSSight_UpdateEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSSight_UpdateEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSSight_UpdateEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSSight_UpdateEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSSight_NoRegister()
	{
		return AFPSSight::StaticClass();
	}
	struct Z_Construct_UClass_AFPSSight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisualsEnabled_MetaData[];
#endif
		static void NewProp_bVisualsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisualsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParameterCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSSight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFPSAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSSight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSSight_GetSight, "GetSight" }, // 1682615502
		{ &Z_Construct_UFunction_AFPSSight_GetSightData, "GetSightData" }, // 2020104907
		{ &Z_Construct_UFunction_AFPSSight_UpdateEffects, "UpdateEffects" }, // 2673747696
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSSight_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSSight.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSSight.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSSight_Statics::NewProp_SightData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSSight" },
		{ "ModuleRelativePath", "Public/FPSSight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSSight_Statics::NewProp_SightData = { "SightData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSSight, SightData), Z_Construct_UClass_UFPSSightData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSSight_Statics::NewProp_SightData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSSight_Statics::NewProp_SightData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSSight_Statics::NewProp_bVisualsEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSSight" },
		{ "ModuleRelativePath", "Public/FPSSight.h" },
	};
#endif
	void Z_Construct_UClass_AFPSSight_Statics::NewProp_bVisualsEnabled_SetBit(void* Obj)
	{
		((AFPSSight*)Obj)->bVisualsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSSight_Statics::NewProp_bVisualsEnabled = { "bVisualsEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSSight), &Z_Construct_UClass_AFPSSight_Statics::NewProp_bVisualsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSSight_Statics::NewProp_bVisualsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSSight_Statics::NewProp_bVisualsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSSight_Statics::NewProp_ParameterCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSSight" },
		{ "ModuleRelativePath", "Public/FPSSight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSSight_Statics::NewProp_ParameterCollection = { "ParameterCollection", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSSight, ParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSSight_Statics::NewProp_ParameterCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSSight_Statics::NewProp_ParameterCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSSight_Statics::NewProp_SightDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSSight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSSight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSSight_Statics::NewProp_SightDirection = { "SightDirection", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSSight, SightDirection), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSSight_Statics::NewProp_SightDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSSight_Statics::NewProp_SightDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSSight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSSight_Statics::NewProp_SightData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSSight_Statics::NewProp_bVisualsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSSight_Statics::NewProp_ParameterCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSSight_Statics::NewProp_SightDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSSight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSSight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSSight_Statics::ClassParams = {
		&AFPSSight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSSight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSSight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSSight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSSight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSSight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSSight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSSight, 1445043257);
	template<> FPSCONTROLLER_API UClass* StaticClass<AFPSSight>()
	{
		return AFPSSight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSSight(Z_Construct_UClass_AFPSSight, &AFPSSight::StaticClass, TEXT("/Script/FPSController"), TEXT("AFPSSight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSSight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
