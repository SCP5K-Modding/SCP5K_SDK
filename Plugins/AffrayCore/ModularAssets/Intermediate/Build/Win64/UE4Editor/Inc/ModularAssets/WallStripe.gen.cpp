// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularAssets/Public/WallStripe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWallStripe() {}
// Cross Module References
	MODULARASSETS_API UClass* Z_Construct_UClass_AWallStripe_NoRegister();
	MODULARASSETS_API UClass* Z_Construct_UClass_AWallStripe();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ModularAssets();
	MODULARASSETS_API UClass* Z_Construct_UClass_UWallStripeSplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	MODULARASSETS_API UClass* Z_Construct_UClass_UWallStripeMetadata_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWallStripe::execGetCornerRadiusAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCornerRadiusAtSplinePoint(Z_Param_PointIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWallStripe::execGetFlipSideAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFlipSideAtSplinePoint(Z_Param_PointIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWallStripe::execGetScaleAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScaleAtSplinePoint(Z_Param_PointIndex);
		P_NATIVE_END;
	}
	void AWallStripe::StaticRegisterNativesAWallStripe()
	{
		UClass* Class = AWallStripe::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCornerRadiusAtSplinePoint", &AWallStripe::execGetCornerRadiusAtSplinePoint },
			{ "GetFlipSideAtSplinePoint", &AWallStripe::execGetFlipSideAtSplinePoint },
			{ "GetScaleAtSplinePoint", &AWallStripe::execGetScaleAtSplinePoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWallStripe_GetCornerRadiusAtSplinePoint_Statics
	{
		struct WallStripe_eventGetCornerRadiusAtSplinePoint_Parms
		{
			int32 PointIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWallStripe_GetCornerRadiusAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WallStripe_eventGetCornerRadiusAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWallStripe_GetCornerRadiusAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WallStripe_eventGetCornerRadiusAtSplinePoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWallStripe_GetCornerRadiusAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWallStripe_GetCornerRadiusAtSplinePoint_Statics::NewProp_PointIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWallStripe_GetCornerRadiusAtSplinePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWallStripe_GetCornerRadiusAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WallStripe.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWallStripe_GetCornerRadiusAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWallStripe, nullptr, "GetCornerRadiusAtSplinePoint", nullptr, nullptr, sizeof(WallStripe_eventGetCornerRadiusAtSplinePoint_Parms), Z_Construct_UFunction_AWallStripe_GetCornerRadiusAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWallStripe_GetCornerRadiusAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWallStripe_GetCornerRadiusAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWallStripe_GetCornerRadiusAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWallStripe_GetCornerRadiusAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWallStripe_GetCornerRadiusAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWallStripe_GetFlipSideAtSplinePoint_Statics
	{
		struct WallStripe_eventGetFlipSideAtSplinePoint_Parms
		{
			int32 PointIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWallStripe_GetFlipSideAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WallStripe_eventGetFlipSideAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AWallStripe_GetFlipSideAtSplinePoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WallStripe_eventGetFlipSideAtSplinePoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWallStripe_GetFlipSideAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WallStripe_eventGetFlipSideAtSplinePoint_Parms), &Z_Construct_UFunction_AWallStripe_GetFlipSideAtSplinePoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWallStripe_GetFlipSideAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWallStripe_GetFlipSideAtSplinePoint_Statics::NewProp_PointIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWallStripe_GetFlipSideAtSplinePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWallStripe_GetFlipSideAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WallStripe.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWallStripe_GetFlipSideAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWallStripe, nullptr, "GetFlipSideAtSplinePoint", nullptr, nullptr, sizeof(WallStripe_eventGetFlipSideAtSplinePoint_Parms), Z_Construct_UFunction_AWallStripe_GetFlipSideAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWallStripe_GetFlipSideAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWallStripe_GetFlipSideAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWallStripe_GetFlipSideAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWallStripe_GetFlipSideAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWallStripe_GetFlipSideAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWallStripe_GetScaleAtSplinePoint_Statics
	{
		struct WallStripe_eventGetScaleAtSplinePoint_Parms
		{
			int32 PointIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWallStripe_GetScaleAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WallStripe_eventGetScaleAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWallStripe_GetScaleAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WallStripe_eventGetScaleAtSplinePoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWallStripe_GetScaleAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWallStripe_GetScaleAtSplinePoint_Statics::NewProp_PointIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWallStripe_GetScaleAtSplinePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWallStripe_GetScaleAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WallStripe.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWallStripe_GetScaleAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWallStripe, nullptr, "GetScaleAtSplinePoint", nullptr, nullptr, sizeof(WallStripe_eventGetScaleAtSplinePoint_Parms), Z_Construct_UFunction_AWallStripe_GetScaleAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWallStripe_GetScaleAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWallStripe_GetScaleAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWallStripe_GetScaleAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWallStripe_GetScaleAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWallStripe_GetScaleAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWallStripe_NoRegister()
	{
		return AWallStripe::StaticClass();
	}
	struct Z_Construct_UClass_AWallStripe_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Meshes_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Meshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CornerRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CornerRadius;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallStripeSplineMetadata_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WallStripeSplineMetadata;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWallStripe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWallStripe_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWallStripe_GetCornerRadiusAtSplinePoint, "GetCornerRadiusAtSplinePoint" }, // 3703934961
		{ &Z_Construct_UFunction_AWallStripe_GetFlipSideAtSplinePoint, "GetFlipSideAtSplinePoint" }, // 3358848417
		{ &Z_Construct_UFunction_AWallStripe_GetScaleAtSplinePoint, "GetScaleAtSplinePoint" }, // 3205023599
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWallStripe_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WallStripe.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WallStripe.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWallStripe_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WallStripe" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WallStripe.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWallStripe_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWallStripe, SplineComponent), Z_Construct_UClass_UWallStripeSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWallStripe_Statics::NewProp_SplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWallStripe_Statics::NewProp_SplineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWallStripe_Statics::NewProp_Meshes_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WallStripe" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WallStripe.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWallStripe_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWallStripe_Statics::NewProp_Meshes_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWallStripe_Statics::NewProp_Meshes_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWallStripe_Statics::NewProp_Meshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WallStripe" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WallStripe.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWallStripe_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWallStripe, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWallStripe_Statics::NewProp_Meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWallStripe_Statics::NewProp_Meshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWallStripe_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WallStripe" },
		{ "ModuleRelativePath", "Public/WallStripe.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWallStripe_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWallStripe, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWallStripe_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWallStripe_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWallStripe_Statics::NewProp_CornerRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WallStripe" },
		{ "ModuleRelativePath", "Public/WallStripe.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWallStripe_Statics::NewProp_CornerRadius = { "CornerRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWallStripe, CornerRadius), METADATA_PARAMS(Z_Construct_UClass_AWallStripe_Statics::NewProp_CornerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWallStripe_Statics::NewProp_CornerRadius_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWallStripe_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWallStripe_Statics::NewProp_Materials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WallStripe" },
		{ "ModuleRelativePath", "Public/WallStripe.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWallStripe_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWallStripe, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWallStripe_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWallStripe_Statics::NewProp_Materials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWallStripe_Statics::NewProp_Color_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WallStripe" },
		{ "ModuleRelativePath", "Public/WallStripe.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWallStripe_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWallStripe, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AWallStripe_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWallStripe_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWallStripe_Statics::NewProp_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WallStripe" },
		{ "ModuleRelativePath", "Public/WallStripe.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWallStripe_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWallStripe, Offset), METADATA_PARAMS(Z_Construct_UClass_AWallStripe_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWallStripe_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWallStripe_Statics::NewProp_WallStripeSplineMetadata_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WallStripe" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WallStripe.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWallStripe_Statics::NewProp_WallStripeSplineMetadata = { "WallStripeSplineMetadata", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWallStripe, WallStripeSplineMetadata), Z_Construct_UClass_UWallStripeMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWallStripe_Statics::NewProp_WallStripeSplineMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWallStripe_Statics::NewProp_WallStripeSplineMetadata_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWallStripe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWallStripe_Statics::NewProp_SplineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWallStripe_Statics::NewProp_Meshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWallStripe_Statics::NewProp_Meshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWallStripe_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWallStripe_Statics::NewProp_CornerRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWallStripe_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWallStripe_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWallStripe_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWallStripe_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWallStripe_Statics::NewProp_WallStripeSplineMetadata,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWallStripe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWallStripe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWallStripe_Statics::ClassParams = {
		&AWallStripe::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWallStripe_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWallStripe_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWallStripe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWallStripe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWallStripe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWallStripe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWallStripe, 3282984274);
	template<> MODULARASSETS_API UClass* StaticClass<AWallStripe>()
	{
		return AWallStripe::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWallStripe(Z_Construct_UClass_AWallStripe, &AWallStripe::StaticClass, TEXT("/Script/ModularAssets"), TEXT("AWallStripe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWallStripe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
