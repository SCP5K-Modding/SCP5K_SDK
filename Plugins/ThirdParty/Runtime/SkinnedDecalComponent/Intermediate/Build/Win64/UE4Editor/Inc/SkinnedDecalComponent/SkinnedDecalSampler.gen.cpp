// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkinnedDecalComponent/Public/SkinnedDecalSampler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkinnedDecalSampler() {}
// Cross Module References
	SKINNEDDECALCOMPONENT_API UClass* Z_Construct_UClass_USkinnedDecalSampler_NoRegister();
	SKINNEDDECALCOMPONENT_API UClass* Z_Construct_UClass_USkinnedDecalSampler();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SkinnedDecalComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	SKINNEDDECALCOMPONENT_API UClass* Z_Construct_UClass_USkinnedDecalInstance_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialParameterAssociation();
	SKINNEDDECALCOMPONENT_API UEnum* Z_Construct_UEnum_SkinnedDecalComponent_ESkinnedDecalAdditionalData();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USkinnedDecalSampler::execClearAllDecals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllDecals();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedDecalSampler::execCloneDecals)
	{
		P_GET_OBJECT(USkinnedDecalSampler,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloneDecals(Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedDecalSampler::execGetDataTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetDataTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedDecalSampler::execRemoveDecal)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveDecal(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedDecalSampler::execSetMeshComponent)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComponent);
		P_GET_UBOOL(Z_Param_Child);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshComponent(Z_Param_MeshComponent,Z_Param_Child);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedDecalSampler::execSetupMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupMaterials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedDecalSampler::execSpawnDecal)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FQuat,Z_Param_Rotation);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
		P_GET_PROPERTY(FIntProperty,Z_Param_SubUV);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SpawnDecal(Z_Param_Location,Z_Param_Rotation,Z_Param_BoneName,Z_Param_Size,Z_Param_SubUV,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedDecalSampler::execUpdateAllDecals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAllDecals();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedDecalSampler::execUpdateInstance)
	{
		P_GET_OBJECT(USkinnedDecalInstance,Z_Param_Instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInstance(Z_Param_Instance);
		P_NATIVE_END;
	}
	void USkinnedDecalSampler::StaticRegisterNativesUSkinnedDecalSampler()
	{
		UClass* Class = USkinnedDecalSampler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAllDecals", &USkinnedDecalSampler::execClearAllDecals },
			{ "CloneDecals", &USkinnedDecalSampler::execCloneDecals },
			{ "GetDataTarget", &USkinnedDecalSampler::execGetDataTarget },
			{ "RemoveDecal", &USkinnedDecalSampler::execRemoveDecal },
			{ "SetMeshComponent", &USkinnedDecalSampler::execSetMeshComponent },
			{ "SetupMaterials", &USkinnedDecalSampler::execSetupMaterials },
			{ "SpawnDecal", &USkinnedDecalSampler::execSpawnDecal },
			{ "UpdateAllDecals", &USkinnedDecalSampler::execUpdateAllDecals },
			{ "UpdateInstance", &USkinnedDecalSampler::execUpdateInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkinnedDecalSampler_ClearAllDecals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedDecalSampler_ClearAllDecals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedDecalSampler_ClearAllDecals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedDecalSampler, nullptr, "ClearAllDecals", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedDecalSampler_ClearAllDecals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalSampler_ClearAllDecals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedDecalSampler_ClearAllDecals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedDecalSampler_ClearAllDecals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedDecalSampler_CloneDecals_Statics
	{
		struct SkinnedDecalSampler_eventCloneDecals_Parms
		{
			USkinnedDecalSampler* Source;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedDecalSampler_CloneDecals_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedDecalSampler_CloneDecals_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedDecalSampler_eventCloneDecals_Parms, Source), Z_Construct_UClass_USkinnedDecalSampler_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkinnedDecalSampler_CloneDecals_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalSampler_CloneDecals_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedDecalSampler_CloneDecals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedDecalSampler_CloneDecals_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedDecalSampler_CloneDecals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedDecalSampler_CloneDecals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedDecalSampler, nullptr, "CloneDecals", nullptr, nullptr, sizeof(SkinnedDecalSampler_eventCloneDecals_Parms), Z_Construct_UFunction_USkinnedDecalSampler_CloneDecals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalSampler_CloneDecals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedDecalSampler_CloneDecals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalSampler_CloneDecals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedDecalSampler_CloneDecals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedDecalSampler_CloneDecals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedDecalSampler_GetDataTarget_Statics
	{
		struct SkinnedDecalSampler_eventGetDataTarget_Parms
		{
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedDecalSampler_GetDataTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedDecalSampler_eventGetDataTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedDecalSampler_GetDataTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedDecalSampler_GetDataTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedDecalSampler_GetDataTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedDecalSampler_GetDataTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedDecalSampler, nullptr, "GetDataTarget", nullptr, nullptr, sizeof(SkinnedDecalSampler_eventGetDataTarget_Parms), Z_Construct_UFunction_USkinnedDecalSampler_GetDataTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalSampler_GetDataTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedDecalSampler_GetDataTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalSampler_GetDataTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedDecalSampler_GetDataTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedDecalSampler_GetDataTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedDecalSampler_RemoveDecal_Statics
	{
		struct SkinnedDecalSampler_eventRemoveDecal_Parms
		{
			int32 Index;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedDecalSampler_RemoveDecal_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedDecalSampler_RemoveDecal_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedDecalSampler_eventRemoveDecal_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_USkinnedDecalSampler_RemoveDecal_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalSampler_RemoveDecal_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedDecalSampler_RemoveDecal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedDecalSampler_RemoveDecal_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedDecalSampler_RemoveDecal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedDecalSampler_RemoveDecal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedDecalSampler, nullptr, "RemoveDecal", nullptr, nullptr, sizeof(SkinnedDecalSampler_eventRemoveDecal_Parms), Z_Construct_UFunction_USkinnedDecalSampler_RemoveDecal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalSampler_RemoveDecal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedDecalSampler_RemoveDecal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalSampler_RemoveDecal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedDecalSampler_RemoveDecal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedDecalSampler_RemoveDecal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedDecalSampler_SetMeshComponent_Statics
	{
		struct SkinnedDecalSampler_eventSetMeshComponent_Parms
		{
			USkeletalMeshComponent* MeshComponent;
			bool Child;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static void NewProp_Child_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Child;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedDecalSampler_SetMeshComponent_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedDecalSampler_SetMeshComponent_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedDecalSampler_eventSetMeshComponent_Parms, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkinnedDecalSampler_SetMeshComponent_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalSampler_SetMeshComponent_Statics::NewProp_MeshComponent_MetaData)) };
	void Z_Construct_UFunction_USkinnedDecalSampler_SetMeshComponent_Statics::NewProp_Child_SetBit(void* Obj)
	{
		((SkinnedDecalSampler_eventSetMeshComponent_Parms*)Obj)->Child = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedDecalSampler_SetMeshComponent_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedDecalSampler_eventSetMeshComponent_Parms), &Z_Construct_UFunction_USkinnedDecalSampler_SetMeshComponent_Statics::NewProp_Child_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedDecalSampler_SetMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedDecalSampler_SetMeshComponent_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedDecalSampler_SetMeshComponent_Statics::NewProp_Child,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedDecalSampler_SetMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedDecalSampler_SetMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedDecalSampler, nullptr, "SetMeshComponent", nullptr, nullptr, sizeof(SkinnedDecalSampler_eventSetMeshComponent_Parms), Z_Construct_UFunction_USkinnedDecalSampler_SetMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalSampler_SetMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedDecalSampler_SetMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalSampler_SetMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedDecalSampler_SetMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedDecalSampler_SetMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedDecalSampler_SetupMaterials_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedDecalSampler_SetupMaterials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedDecalSampler_SetupMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedDecalSampler, nullptr, "SetupMaterials", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedDecalSampler_SetupMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalSampler_SetupMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedDecalSampler_SetupMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedDecalSampler_SetupMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics
	{
		struct SkinnedDecalSampler_eventSpawnDecal_Parms
		{
			FVector Location;
			FQuat Rotation;
			FName BoneName;
			float Size;
			int32 SubUV;
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubUV;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedDecalSampler_eventSpawnDecal_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedDecalSampler_eventSpawnDecal_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::NewProp_Rotation_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedDecalSampler_eventSpawnDecal_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedDecalSampler_eventSpawnDecal_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::NewProp_SubUV = { "SubUV", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedDecalSampler_eventSpawnDecal_Parms, SubUV), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedDecalSampler_eventSpawnDecal_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedDecalSampler_eventSpawnDecal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::NewProp_SubUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedDecalSampler, nullptr, "SpawnDecal", nullptr, nullptr, sizeof(SkinnedDecalSampler_eventSpawnDecal_Parms), Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedDecalSampler_UpdateAllDecals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedDecalSampler_UpdateAllDecals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedDecalSampler_UpdateAllDecals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedDecalSampler, nullptr, "UpdateAllDecals", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedDecalSampler_UpdateAllDecals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalSampler_UpdateAllDecals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedDecalSampler_UpdateAllDecals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedDecalSampler_UpdateAllDecals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedDecalSampler_UpdateInstance_Statics
	{
		struct SkinnedDecalSampler_eventUpdateInstance_Parms
		{
			USkinnedDecalInstance* Instance;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedDecalSampler_UpdateInstance_Statics::NewProp_Instance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedDecalSampler_UpdateInstance_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedDecalSampler_eventUpdateInstance_Parms, Instance), Z_Construct_UClass_USkinnedDecalInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkinnedDecalSampler_UpdateInstance_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalSampler_UpdateInstance_Statics::NewProp_Instance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedDecalSampler_UpdateInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedDecalSampler_UpdateInstance_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedDecalSampler_UpdateInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedDecalSampler_UpdateInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedDecalSampler, nullptr, "UpdateInstance", nullptr, nullptr, sizeof(SkinnedDecalSampler_eventUpdateInstance_Parms), Z_Construct_UFunction_USkinnedDecalSampler_UpdateInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalSampler_UpdateInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedDecalSampler_UpdateInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedDecalSampler_UpdateInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedDecalSampler_UpdateInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedDecalSampler_UpdateInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkinnedDecalSampler_NoRegister()
	{
		return USkinnedDecalSampler::StaticClass();
	}
	struct Z_Construct_UClass_USkinnedDecalSampler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalLocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DecalLocations;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EmptyIndexes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyIndexes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EmptyIndexes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Association_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Association;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalData_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AdditionalData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastDecalIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastDecalIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDecalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDecalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentBlend_MetaData[];
#endif
		static void NewProp_TranslucentBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TranslucentBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentBlendMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslucentBlendMaterial;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstanceMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InstanceMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentBlendMaterialDynamic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslucentBlendMaterialDynamic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderMeshes_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RenderMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkinnedDecalSampler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SkinnedDecalComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkinnedDecalSampler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkinnedDecalSampler_ClearAllDecals, "ClearAllDecals" }, // 720269044
		{ &Z_Construct_UFunction_USkinnedDecalSampler_CloneDecals, "CloneDecals" }, // 2469227342
		{ &Z_Construct_UFunction_USkinnedDecalSampler_GetDataTarget, "GetDataTarget" }, // 1322338066
		{ &Z_Construct_UFunction_USkinnedDecalSampler_RemoveDecal, "RemoveDecal" }, // 962170148
		{ &Z_Construct_UFunction_USkinnedDecalSampler_SetMeshComponent, "SetMeshComponent" }, // 1597808903
		{ &Z_Construct_UFunction_USkinnedDecalSampler_SetupMaterials, "SetupMaterials" }, // 4108652291
		{ &Z_Construct_UFunction_USkinnedDecalSampler_SpawnDecal, "SpawnDecal" }, // 739317758
		{ &Z_Construct_UFunction_USkinnedDecalSampler_UpdateAllDecals, "UpdateAllDecals" }, // 3370454089
		{ &Z_Construct_UFunction_USkinnedDecalSampler_UpdateInstance, "UpdateInstance" }, // 822749230
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalSampler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SkinnedDecalSampler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkinnedDecalSampler" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedDecalSampler, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_DecalLocations_Inner = { "DecalLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_DecalLocations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkinnedDecalSampler" },
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_DecalLocations = { "DecalLocations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedDecalSampler, DecalLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_DecalLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_DecalLocations_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_EmptyIndexes_Inner = { "EmptyIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_EmptyIndexes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkinnedDecalSampler" },
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_EmptyIndexes = { "EmptyIndexes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedDecalSampler, EmptyIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_EmptyIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_EmptyIndexes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_LayerIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkinnedDecalSampler" },
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedDecalSampler, LayerIndex), METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_LayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_LayerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_Association_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkinnedDecalSampler" },
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_Association = { "Association", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedDecalSampler, Association), Z_Construct_UEnum_Engine_EMaterialParameterAssociation, METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_Association_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_Association_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_AdditionalData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkinnedDecalSampler" },
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_AdditionalData = { "AdditionalData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedDecalSampler, AdditionalData), Z_Construct_UEnum_SkinnedDecalComponent_ESkinnedDecalAdditionalData, METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_AdditionalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_AdditionalData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_Materials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkinnedDecalSampler" },
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedDecalSampler, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_Materials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_LastDecalIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkinnedDecalSampler" },
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_LastDecalIndex = { "LastDecalIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedDecalSampler, LastDecalIndex), METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_LastDecalIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_LastDecalIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_MaxDecals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkinnedDecalSampler" },
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_MaxDecals = { "MaxDecals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedDecalSampler, MaxDecals), METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_MaxDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_MaxDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_MinDecalDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkinnedDecalSampler" },
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_MinDecalDistance = { "MinDecalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedDecalSampler, MinDecalDistance), METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_MinDecalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_MinDecalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_TranslucentBlend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkinnedDecalSampler" },
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	void Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_TranslucentBlend_SetBit(void* Obj)
	{
		((USkinnedDecalSampler*)Obj)->TranslucentBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_TranslucentBlend = { "TranslucentBlend", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USkinnedDecalSampler), &Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_TranslucentBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_TranslucentBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_TranslucentBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_TranslucentBlendMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkinnedDecalSampler" },
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_TranslucentBlendMaterial = { "TranslucentBlendMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedDecalSampler, TranslucentBlendMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_TranslucentBlendMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_TranslucentBlendMaterial_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_InstanceMap_ValueProp = { "InstanceMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_InstanceMap_Key_KeyProp = { "InstanceMap_Key", nullptr, (EPropertyFlags)0x0000000000080001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkinnedDecalInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_InstanceMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkinnedDecalSampler" },
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_InstanceMap = { "InstanceMap", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedDecalSampler, InstanceMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_InstanceMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_InstanceMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_TranslucentBlendMaterialDynamic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkinnedDecalSampler" },
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_TranslucentBlendMaterialDynamic = { "TranslucentBlendMaterialDynamic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedDecalSampler, TranslucentBlendMaterialDynamic), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_TranslucentBlendMaterialDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_TranslucentBlendMaterialDynamic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_RenderMeshes_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkinnedDecalSampler" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_RenderMeshes_Inner = { "RenderMeshes", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_RenderMeshes_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_RenderMeshes_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_RenderMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkinnedDecalSampler" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_RenderMeshes = { "RenderMeshes", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedDecalSampler, RenderMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_RenderMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_RenderMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_DataTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkinnedDecalSampler" },
		{ "ModuleRelativePath", "Public/SkinnedDecalSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_DataTarget = { "DataTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedDecalSampler, DataTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_DataTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_DataTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkinnedDecalSampler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_DecalLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_DecalLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_EmptyIndexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_EmptyIndexes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_LayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_Association,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_AdditionalData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_LastDecalIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_MaxDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_MinDecalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_TranslucentBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_TranslucentBlendMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_InstanceMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_InstanceMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_InstanceMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_TranslucentBlendMaterialDynamic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_RenderMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_RenderMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedDecalSampler_Statics::NewProp_DataTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkinnedDecalSampler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkinnedDecalSampler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkinnedDecalSampler_Statics::ClassParams = {
		&USkinnedDecalSampler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkinnedDecalSampler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalSampler_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USkinnedDecalSampler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedDecalSampler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkinnedDecalSampler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkinnedDecalSampler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkinnedDecalSampler, 1801805992);
	template<> SKINNEDDECALCOMPONENT_API UClass* StaticClass<USkinnedDecalSampler>()
	{
		return USkinnedDecalSampler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkinnedDecalSampler(Z_Construct_UClass_USkinnedDecalSampler, &USkinnedDecalSampler::StaticClass, TEXT("/Script/SkinnedDecalComponent"), TEXT("USkinnedDecalSampler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkinnedDecalSampler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
