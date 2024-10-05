// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurfaceDeformation/Public/SurfaceDeformationCapture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurfaceDeformationCapture() {}
// Cross Module References
	SURFACEDEFORMATION_API UClass* Z_Construct_UClass_ASurfaceDeformationCapture_NoRegister();
	SURFACEDEFORMATION_API UClass* Z_Construct_UClass_ASurfaceDeformationCapture();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SurfaceDeformation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASurfaceDeformationCapture::execAddStaticActorsToHiddenArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStaticActorsToHiddenArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASurfaceDeformationCapture::execReposition)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reposition(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASurfaceDeformationCapture::execRunComputeShader)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunComputeShader(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void ASurfaceDeformationCapture::StaticRegisterNativesASurfaceDeformationCapture()
	{
		UClass* Class = ASurfaceDeformationCapture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddStaticActorsToHiddenArray", &ASurfaceDeformationCapture::execAddStaticActorsToHiddenArray },
			{ "Reposition", &ASurfaceDeformationCapture::execReposition },
			{ "RunComputeShader", &ASurfaceDeformationCapture::execRunComputeShader },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASurfaceDeformationCapture_AddStaticActorsToHiddenArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurfaceDeformationCapture_AddStaticActorsToHiddenArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurfaceDeformationCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurfaceDeformationCapture_AddStaticActorsToHiddenArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurfaceDeformationCapture, nullptr, "AddStaticActorsToHiddenArray", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurfaceDeformationCapture_AddStaticActorsToHiddenArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurfaceDeformationCapture_AddStaticActorsToHiddenArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurfaceDeformationCapture_AddStaticActorsToHiddenArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASurfaceDeformationCapture_AddStaticActorsToHiddenArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurfaceDeformationCapture_Reposition_Statics
	{
		struct SurfaceDeformationCapture_eventReposition_Parms
		{
			FVector Location;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASurfaceDeformationCapture_Reposition_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurfaceDeformationCapture_eventReposition_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurfaceDeformationCapture_Reposition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurfaceDeformationCapture_Reposition_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurfaceDeformationCapture_Reposition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurfaceDeformationCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurfaceDeformationCapture_Reposition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurfaceDeformationCapture, nullptr, "Reposition", nullptr, nullptr, sizeof(SurfaceDeformationCapture_eventReposition_Parms), Z_Construct_UFunction_ASurfaceDeformationCapture_Reposition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurfaceDeformationCapture_Reposition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurfaceDeformationCapture_Reposition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurfaceDeformationCapture_Reposition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurfaceDeformationCapture_Reposition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASurfaceDeformationCapture_Reposition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurfaceDeformationCapture_RunComputeShader_Statics
	{
		struct SurfaceDeformationCapture_eventRunComputeShader_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASurfaceDeformationCapture_RunComputeShader_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurfaceDeformationCapture_eventRunComputeShader_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurfaceDeformationCapture_RunComputeShader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurfaceDeformationCapture_RunComputeShader_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurfaceDeformationCapture_RunComputeShader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurfaceDeformationCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurfaceDeformationCapture_RunComputeShader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurfaceDeformationCapture, nullptr, "RunComputeShader", nullptr, nullptr, sizeof(SurfaceDeformationCapture_eventRunComputeShader_Parms), Z_Construct_UFunction_ASurfaceDeformationCapture_RunComputeShader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurfaceDeformationCapture_RunComputeShader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurfaceDeformationCapture_RunComputeShader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurfaceDeformationCapture_RunComputeShader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurfaceDeformationCapture_RunComputeShader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASurfaceDeformationCapture_RunComputeShader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASurfaceDeformationCapture_NoRegister()
	{
		return ASurfaceDeformationCapture::StaticClass();
	}
	struct Z_Construct_UClass_ASurfaceDeformationCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParameterCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceCaptureComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurfaceCaptureComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompositeTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompositeTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurfaceTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalsTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NormalsTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blur_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Blur;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SurfaceThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Accumulation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Accumulation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HiddenActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HiddenActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenActorTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HiddenActorTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowActorTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ShowActorTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPopulateHiddenActorsFromStaticOnPlay_MetaData[];
#endif
		static void NewProp_bPopulateHiddenActorsFromStaticOnPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPopulateHiddenActorsFromStaticOnPlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurfaceDeformationCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SurfaceDeformation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASurfaceDeformationCapture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASurfaceDeformationCapture_AddStaticActorsToHiddenArray, "AddStaticActorsToHiddenArray" }, // 3875058555
		{ &Z_Construct_UFunction_ASurfaceDeformationCapture_Reposition, "Reposition" }, // 2430157324
		{ &Z_Construct_UFunction_ASurfaceDeformationCapture_RunComputeShader, "RunComputeShader" }, // 3254051022
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurfaceDeformationCapture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SurfaceDeformationCapture.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SurfaceDeformationCapture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_InteractionDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceDeformationCapture" },
		{ "ModuleRelativePath", "Public/SurfaceDeformationCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_InteractionDistance = { "InteractionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurfaceDeformationCapture, InteractionDistance), METADATA_PARAMS(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_InteractionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_InteractionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_MinHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceDeformationCapture" },
		{ "ModuleRelativePath", "Public/SurfaceDeformationCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurfaceDeformationCapture, MinHeight), METADATA_PARAMS(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_MinHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_MinHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceDeformationCapture" },
		{ "ModuleRelativePath", "Public/SurfaceDeformationCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurfaceDeformationCapture, MaxHeight), METADATA_PARAMS(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_MaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_ParameterCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceDeformationCapture" },
		{ "ModuleRelativePath", "Public/SurfaceDeformationCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_ParameterCollection = { "ParameterCollection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurfaceDeformationCapture, ParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_ParameterCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_ParameterCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_CaptureComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceDeformationCapture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SurfaceDeformationCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurfaceDeformationCapture, CaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_CaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_CaptureComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_SurfaceCaptureComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceDeformationCapture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SurfaceDeformationCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_SurfaceCaptureComponent = { "SurfaceCaptureComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurfaceDeformationCapture, SurfaceCaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_SurfaceCaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_SurfaceCaptureComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_RenderTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceDeformationCapture" },
		{ "ModuleRelativePath", "Public/SurfaceDeformationCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_RenderTexture = { "RenderTexture", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurfaceDeformationCapture, RenderTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_RenderTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_RenderTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_CompositeTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceDeformationCapture" },
		{ "ModuleRelativePath", "Public/SurfaceDeformationCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_CompositeTexture = { "CompositeTexture", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurfaceDeformationCapture, CompositeTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_CompositeTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_CompositeTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_SurfaceTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceDeformationCapture" },
		{ "ModuleRelativePath", "Public/SurfaceDeformationCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_SurfaceTexture = { "SurfaceTexture", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurfaceDeformationCapture, SurfaceTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_SurfaceTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_SurfaceTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_NormalsTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceDeformationCapture" },
		{ "ModuleRelativePath", "Public/SurfaceDeformationCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_NormalsTexture = { "NormalsTexture", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurfaceDeformationCapture, NormalsTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_NormalsTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_NormalsTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_Blur_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceDeformationCapture" },
		{ "ModuleRelativePath", "Public/SurfaceDeformationCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_Blur = { "Blur", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurfaceDeformationCapture, Blur), METADATA_PARAMS(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_Blur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_Blur_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_SurfaceThickness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceDeformationCapture" },
		{ "ModuleRelativePath", "Public/SurfaceDeformationCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_SurfaceThickness = { "SurfaceThickness", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurfaceDeformationCapture, SurfaceThickness), METADATA_PARAMS(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_SurfaceThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_SurfaceThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_Accumulation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceDeformationCapture" },
		{ "ModuleRelativePath", "Public/SurfaceDeformationCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_Accumulation = { "Accumulation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurfaceDeformationCapture, Accumulation), METADATA_PARAMS(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_Accumulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_Accumulation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_HiddenActors_Inner = { "HiddenActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_HiddenActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceDeformationCapture" },
		{ "ModuleRelativePath", "Public/SurfaceDeformationCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_HiddenActors = { "HiddenActors", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurfaceDeformationCapture, HiddenActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_HiddenActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_HiddenActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_HiddenActorTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceDeformationCapture" },
		{ "ModuleRelativePath", "Public/SurfaceDeformationCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_HiddenActorTag = { "HiddenActorTag", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurfaceDeformationCapture, HiddenActorTag), METADATA_PARAMS(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_HiddenActorTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_HiddenActorTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_ShowActorTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceDeformationCapture" },
		{ "ModuleRelativePath", "Public/SurfaceDeformationCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_ShowActorTag = { "ShowActorTag", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurfaceDeformationCapture, ShowActorTag), METADATA_PARAMS(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_ShowActorTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_ShowActorTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_bPopulateHiddenActorsFromStaticOnPlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceDeformationCapture" },
		{ "ModuleRelativePath", "Public/SurfaceDeformationCapture.h" },
	};
#endif
	void Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_bPopulateHiddenActorsFromStaticOnPlay_SetBit(void* Obj)
	{
		((ASurfaceDeformationCapture*)Obj)->bPopulateHiddenActorsFromStaticOnPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_bPopulateHiddenActorsFromStaticOnPlay = { "bPopulateHiddenActorsFromStaticOnPlay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASurfaceDeformationCapture), &Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_bPopulateHiddenActorsFromStaticOnPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_bPopulateHiddenActorsFromStaticOnPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_bPopulateHiddenActorsFromStaticOnPlay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASurfaceDeformationCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_InteractionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_MinHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_MaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_ParameterCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_CaptureComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_SurfaceCaptureComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_RenderTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_CompositeTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_SurfaceTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_NormalsTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_Blur,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_SurfaceThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_Accumulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_HiddenActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_HiddenActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_HiddenActorTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_ShowActorTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceDeformationCapture_Statics::NewProp_bPopulateHiddenActorsFromStaticOnPlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASurfaceDeformationCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurfaceDeformationCapture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASurfaceDeformationCapture_Statics::ClassParams = {
		&ASurfaceDeformationCapture::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASurfaceDeformationCapture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceDeformationCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASurfaceDeformationCapture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASurfaceDeformationCapture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASurfaceDeformationCapture, 2423700245);
	template<> SURFACEDEFORMATION_API UClass* StaticClass<ASurfaceDeformationCapture>()
	{
		return ASurfaceDeformationCapture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASurfaceDeformationCapture(Z_Construct_UClass_ASurfaceDeformationCapture, &ASurfaceDeformationCapture::StaticClass, TEXT("/Script/SurfaceDeformation"), TEXT("ASurfaceDeformationCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurfaceDeformationCapture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
