// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularAssets/Public/ModularSplineAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularSplineAsset() {}
// Cross Module References
	MODULARASSETS_API UClass* Z_Construct_UClass_AModularSplineAsset_NoRegister();
	MODULARASSETS_API UClass* Z_Construct_UClass_AModularSplineAsset();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ModularAssets();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplineMeshAxis();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AModularSplineAsset::execEditorTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EditorTick_Implementation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModularSplineAsset::execGetDistanceToEndOfMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDistanceToEndOfMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModularSplineAsset::execRefreshAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModularSplineAsset::execSetSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplinePoint(Z_Param_Index,Z_Param_Location);
		P_NATIVE_END;
	}
	static FName NAME_AModularSplineAsset_EditorTick = FName(TEXT("EditorTick"));
	void AModularSplineAsset::EditorTick(const float DeltaTime)
	{
		ModularSplineAsset_eventEditorTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AModularSplineAsset_EditorTick),&Parms);
	}
	void AModularSplineAsset::StaticRegisterNativesAModularSplineAsset()
	{
		UClass* Class = AModularSplineAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EditorTick", &AModularSplineAsset::execEditorTick },
			{ "GetDistanceToEndOfMesh", &AModularSplineAsset::execGetDistanceToEndOfMesh },
			{ "RefreshAsset", &AModularSplineAsset::execRefreshAsset },
			{ "SetSplinePoint", &AModularSplineAsset::execSetSplinePoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AModularSplineAsset_EditorTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModularSplineAsset_EditorTick_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AModularSplineAsset_EditorTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSplineAsset_eventEditorTick_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_AModularSplineAsset_EditorTick_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularSplineAsset_EditorTick_Statics::NewProp_DeltaTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModularSplineAsset_EditorTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularSplineAsset_EditorTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModularSplineAsset_EditorTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModularSplineAsset_EditorTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModularSplineAsset, nullptr, "EditorTick", nullptr, nullptr, sizeof(ModularSplineAsset_eventEditorTick_Parms), Z_Construct_UFunction_AModularSplineAsset_EditorTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularSplineAsset_EditorTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModularSplineAsset_EditorTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularSplineAsset_EditorTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModularSplineAsset_EditorTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModularSplineAsset_EditorTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModularSplineAsset_GetDistanceToEndOfMesh_Statics
	{
		struct ModularSplineAsset_eventGetDistanceToEndOfMesh_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AModularSplineAsset_GetDistanceToEndOfMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSplineAsset_eventGetDistanceToEndOfMesh_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModularSplineAsset_GetDistanceToEndOfMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularSplineAsset_GetDistanceToEndOfMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModularSplineAsset_GetDistanceToEndOfMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModularSplineAsset_GetDistanceToEndOfMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModularSplineAsset, nullptr, "GetDistanceToEndOfMesh", nullptr, nullptr, sizeof(ModularSplineAsset_eventGetDistanceToEndOfMesh_Parms), Z_Construct_UFunction_AModularSplineAsset_GetDistanceToEndOfMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularSplineAsset_GetDistanceToEndOfMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModularSplineAsset_GetDistanceToEndOfMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularSplineAsset_GetDistanceToEndOfMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModularSplineAsset_GetDistanceToEndOfMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModularSplineAsset_GetDistanceToEndOfMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModularSplineAsset_RefreshAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModularSplineAsset_RefreshAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModularSplineAsset_RefreshAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModularSplineAsset, nullptr, "RefreshAsset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModularSplineAsset_RefreshAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularSplineAsset_RefreshAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModularSplineAsset_RefreshAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModularSplineAsset_RefreshAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModularSplineAsset_SetSplinePoint_Statics
	{
		struct ModularSplineAsset_eventSetSplinePoint_Parms
		{
			int32 Index;
			FVector Location;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AModularSplineAsset_SetSplinePoint_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSplineAsset_eventSetSplinePoint_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModularSplineAsset_SetSplinePoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSplineAsset_eventSetSplinePoint_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModularSplineAsset_SetSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularSplineAsset_SetSplinePoint_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularSplineAsset_SetSplinePoint_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModularSplineAsset_SetSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModularSplineAsset_SetSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModularSplineAsset, nullptr, "SetSplinePoint", nullptr, nullptr, sizeof(ModularSplineAsset_eventSetSplinePoint_Parms), Z_Construct_UFunction_AModularSplineAsset_SetSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularSplineAsset_SetSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModularSplineAsset_SetSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularSplineAsset_SetSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModularSplineAsset_SetSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModularSplineAsset_SetSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AModularSplineAsset_NoRegister()
	{
		return AModularSplineAsset::StaticClass();
	}
	struct Z_Construct_UClass_AModularSplineAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponents_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ForwardAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Roll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CollisionProfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAssetLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAssetLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxElements;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[];
#endif
		static void NewProp_bCastShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VirtualTextureRenderPassType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureRenderPassType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VirtualTextureRenderPassType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DrawInVirtualTextures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawInVirtualTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DrawInVirtualTextures;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModularSplineAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AModularSplineAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AModularSplineAsset_EditorTick, "EditorTick" }, // 57386917
		{ &Z_Construct_UFunction_AModularSplineAsset_GetDistanceToEndOfMesh, "GetDistanceToEndOfMesh" }, // 1758161498
		{ &Z_Construct_UFunction_AModularSplineAsset_RefreshAsset, "RefreshAsset" }, // 648619256
		{ &Z_Construct_UFunction_AModularSplineAsset_SetSplinePoint, "SetSplinePoint" }, // 592645301
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularSplineAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ModularSplineAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularSplineAsset" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularSplineAsset, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularSplineAsset" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularSplineAsset, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_SplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_SplineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_MeshComponents_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularSplineAsset" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_MeshComponents_Inner = { "MeshComponents", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_MeshComponents_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_MeshComponents_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_MeshComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularSplineAsset" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_MeshComponents = { "MeshComponents", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularSplineAsset, MeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_MeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_MeshComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_ForwardAxis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularSplineAsset" },
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_ForwardAxis = { "ForwardAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularSplineAsset, ForwardAxis), Z_Construct_UEnum_Engine_ESplineMeshAxis, METADATA_PARAMS(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_ForwardAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_ForwardAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_UpVector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularSplineAsset" },
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularSplineAsset, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_UpVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_UpVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Roll_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularSplineAsset" },
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularSplineAsset, Roll), METADATA_PARAMS(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Roll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_CollisionProfileName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularSplineAsset" },
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_CollisionProfileName = { "CollisionProfileName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularSplineAsset, CollisionProfileName), METADATA_PARAMS(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_CollisionProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_CollisionProfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularSplineAsset" },
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularSplineAsset, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_EndMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularSplineAsset" },
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_EndMesh = { "EndMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularSplineAsset, EndMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_EndMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_EndMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_MaxAssetLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularSplineAsset" },
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_MaxAssetLength = { "MaxAssetLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularSplineAsset, MaxAssetLength), METADATA_PARAMS(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_MaxAssetLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_MaxAssetLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Scale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularSplineAsset" },
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularSplineAsset, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_MaxElements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularSplineAsset" },
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_MaxElements = { "MaxElements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularSplineAsset, MaxElements), METADATA_PARAMS(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_MaxElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_MaxElements_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_bCastShadow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularSplineAsset" },
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
	};
#endif
	void Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_bCastShadow_SetBit(void* Obj)
	{
		((AModularSplineAsset*)Obj)->bCastShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AModularSplineAsset), &Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_bCastShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_bCastShadow_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Materials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularSplineAsset" },
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularSplineAsset, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Materials_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_VirtualTextureRenderPassType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_VirtualTextureRenderPassType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularSplineAsset" },
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_VirtualTextureRenderPassType = { "VirtualTextureRenderPassType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularSplineAsset, VirtualTextureRenderPassType), Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType, METADATA_PARAMS(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_VirtualTextureRenderPassType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_VirtualTextureRenderPassType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_DrawInVirtualTextures_Inner = { "DrawInVirtualTextures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_DrawInVirtualTextures_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularSplineAsset" },
		{ "ModuleRelativePath", "Public/ModularSplineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_DrawInVirtualTextures = { "DrawInVirtualTextures", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularSplineAsset, DrawInVirtualTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_DrawInVirtualTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_DrawInVirtualTextures_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModularSplineAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_SplineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_MeshComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_MeshComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_ForwardAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_UpVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Roll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_CollisionProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_EndMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_MaxAssetLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_MaxElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_bCastShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_VirtualTextureRenderPassType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_VirtualTextureRenderPassType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_DrawInVirtualTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularSplineAsset_Statics::NewProp_DrawInVirtualTextures,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModularSplineAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularSplineAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AModularSplineAsset_Statics::ClassParams = {
		&AModularSplineAsset::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AModularSplineAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AModularSplineAsset_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AModularSplineAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModularSplineAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModularSplineAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModularSplineAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModularSplineAsset, 1225618592);
	template<> MODULARASSETS_API UClass* StaticClass<AModularSplineAsset>()
	{
		return AModularSplineAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModularSplineAsset(Z_Construct_UClass_AModularSplineAsset, &AModularSplineAsset::StaticClass, TEXT("/Script/ModularAssets"), TEXT("AModularSplineAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModularSplineAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
