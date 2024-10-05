// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dismemberment/Public/GoreComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoreComponent() {}
// Cross Module References
	DISMEMBERMENT_API UClass* Z_Construct_UClass_UGoreComponent_NoRegister();
	DISMEMBERMENT_API UClass* Z_Construct_UClass_UGoreComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Dismemberment();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	DISMEMBERMENT_API UScriptStruct* Z_Construct_UScriptStruct_FGoreMesh();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DISMEMBERMENT_API UScriptStruct* Z_Construct_UScriptStruct_FShortVector();
	DISMEMBERMENT_API UScriptStruct* Z_Construct_UScriptStruct_FGoreHitData();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UKismetSystemLibrary_OnAssetLoaded__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGoreComponent::execAddGoreEllipse)
	{
		P_GET_STRUCT(FVector,Z_Param_position);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FVector,Z_Param_Scale);
		P_GET_UBOOL(Z_Param_bUpdateTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGoreEllipse(Z_Param_position,Z_Param_Rotation,Z_Param_Scale,Z_Param_bUpdateTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoreComponent::execAddGorePoint)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT(FVector,Z_Param_position);
		P_GET_STRUCT(FVector,Z_Param_Normal);
		P_GET_STRUCT(FVector,Z_Param_Tangent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DecalScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BloodAlpha);
		P_GET_UBOOL(Z_Param_bUpdateTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGorePoint(Z_Param_BoneName,Z_Param_position,Z_Param_Normal,Z_Param_Tangent,Z_Param_Scale,Z_Param_DecalScale,Z_Param_BloodAlpha,Z_Param_bUpdateTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoreComponent::execAssetLoaded)
	{
		P_GET_OBJECT(UObject,Z_Param_Loaded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssetLoaded(Z_Param_Loaded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoreComponent::execDeinitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Deinitialize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoreComponent::execGetMaxEllipsoids)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxEllipsoids();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoreComponent::execInitialize)
	{
		P_GET_UBOOL(Z_Param_bForceInitialize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_bForceInitialize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoreComponent::execOnRep_LastHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LastHit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoreComponent::execOnTakePointDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_STRUCT(FVector,Z_Param_HitLocation);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_FHitComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT(FVector,Z_Param_ShotFromDirection);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTakePointDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_InstigatedBy,Z_Param_HitLocation,Z_Param_FHitComponent,Z_Param_BoneName,Z_Param_ShotFromDirection,Z_Param_DamageType,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoreComponent::execTryAddGoreMesh)
	{
		P_GET_STRUCT(FVector,Z_Param_position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryAddGoreMesh(Z_Param_position,Z_Param_Damage,Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoreComponent::execUpdateGoreEllipse)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FVector,Z_Param_position);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FVector,Z_Param_Scale);
		P_GET_UBOOL(Z_Param_bUpdateTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGoreEllipse(Z_Param_Index,Z_Param_position,Z_Param_Rotation,Z_Param_Scale,Z_Param_bUpdateTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoreComponent::execUpdateGorePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT(FVector,Z_Param_position);
		P_GET_STRUCT(FVector,Z_Param_Normal);
		P_GET_STRUCT(FVector,Z_Param_Tangent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DecalScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BloodAlpha);
		P_GET_UBOOL(Z_Param_bUpdateTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGorePoint(Z_Param_Index,Z_Param_BoneName,Z_Param_position,Z_Param_Normal,Z_Param_Tangent,Z_Param_Scale,Z_Param_DecalScale,Z_Param_BloodAlpha,Z_Param_bUpdateTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoreComponent::execUpdateGorePointAlpha)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGorePointAlpha(Z_Param_Index,Z_Param_Alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoreComponent::execUpdateGorePointSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGorePointSize(Z_Param_Index,Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoreComponent::execUpdateMaxIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMaxIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoreComponent::execUpdateTexture)
	{
		P_GET_UBOOL(Z_Param_bUpdatePoints);
		P_GET_UBOOL(Z_Param_bUpdateNormals);
		P_GET_UBOOL(Z_Param_bUpdateElipses);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTexture(Z_Param_bUpdatePoints,Z_Param_bUpdateNormals,Z_Param_bUpdateElipses);
		P_NATIVE_END;
	}
	void UGoreComponent::StaticRegisterNativesUGoreComponent()
	{
		UClass* Class = UGoreComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGoreEllipse", &UGoreComponent::execAddGoreEllipse },
			{ "AddGorePoint", &UGoreComponent::execAddGorePoint },
			{ "AssetLoaded", &UGoreComponent::execAssetLoaded },
			{ "Deinitialize", &UGoreComponent::execDeinitialize },
			{ "GetMaxEllipsoids", &UGoreComponent::execGetMaxEllipsoids },
			{ "Initialize", &UGoreComponent::execInitialize },
			{ "OnRep_LastHit", &UGoreComponent::execOnRep_LastHit },
			{ "OnTakePointDamage", &UGoreComponent::execOnTakePointDamage },
			{ "TryAddGoreMesh", &UGoreComponent::execTryAddGoreMesh },
			{ "UpdateGoreEllipse", &UGoreComponent::execUpdateGoreEllipse },
			{ "UpdateGorePoint", &UGoreComponent::execUpdateGorePoint },
			{ "UpdateGorePointAlpha", &UGoreComponent::execUpdateGorePointAlpha },
			{ "UpdateGorePointSize", &UGoreComponent::execUpdateGorePointSize },
			{ "UpdateMaxIndex", &UGoreComponent::execUpdateMaxIndex },
			{ "UpdateTexture", &UGoreComponent::execUpdateTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGoreComponent_AddGoreEllipse_Statics
	{
		struct GoreComponent_eventAddGoreEllipse_Parms
		{
			FVector position;
			FRotator Rotation;
			FVector Scale;
			bool bUpdateTexture;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
		static void NewProp_bUpdateTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_AddGoreEllipse_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventAddGoreEllipse_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_AddGoreEllipse_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventAddGoreEllipse_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_AddGoreEllipse_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventAddGoreEllipse_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGoreComponent_AddGoreEllipse_Statics::NewProp_bUpdateTexture_SetBit(void* Obj)
	{
		((GoreComponent_eventAddGoreEllipse_Parms*)Obj)->bUpdateTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGoreComponent_AddGoreEllipse_Statics::NewProp_bUpdateTexture = { "bUpdateTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GoreComponent_eventAddGoreEllipse_Parms), &Z_Construct_UFunction_UGoreComponent_AddGoreEllipse_Statics::NewProp_bUpdateTexture_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoreComponent_AddGoreEllipse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_AddGoreEllipse_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_AddGoreEllipse_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_AddGoreEllipse_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_AddGoreEllipse_Statics::NewProp_bUpdateTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoreComponent_AddGoreEllipse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_AddGoreEllipse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "AddGoreEllipse", nullptr, nullptr, sizeof(GoreComponent_eventAddGoreEllipse_Parms), Z_Construct_UFunction_UGoreComponent_AddGoreEllipse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_AddGoreEllipse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoreComponent_AddGoreEllipse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_AddGoreEllipse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoreComponent_AddGoreEllipse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoreComponent_AddGoreEllipse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics
	{
		struct GoreComponent_eventAddGorePoint_Parms
		{
			FName BoneName;
			FVector position;
			FVector Normal;
			FVector Tangent;
			float Scale;
			float DecalScale;
			float BloodAlpha;
			bool bUpdateTexture;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecalScale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloodAlpha;
		static void NewProp_bUpdateTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventAddGorePoint_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventAddGorePoint_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventAddGorePoint_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventAddGorePoint_Parms, Tangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventAddGorePoint_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::NewProp_DecalScale = { "DecalScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventAddGorePoint_Parms, DecalScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::NewProp_BloodAlpha = { "BloodAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventAddGorePoint_Parms, BloodAlpha), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::NewProp_bUpdateTexture_SetBit(void* Obj)
	{
		((GoreComponent_eventAddGorePoint_Parms*)Obj)->bUpdateTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::NewProp_bUpdateTexture = { "bUpdateTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GoreComponent_eventAddGorePoint_Parms), &Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::NewProp_bUpdateTexture_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::NewProp_Tangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::NewProp_DecalScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::NewProp_BloodAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::NewProp_bUpdateTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "AddGorePoint", nullptr, nullptr, sizeof(GoreComponent_eventAddGorePoint_Parms), Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoreComponent_AddGorePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoreComponent_AddGorePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoreComponent_AssetLoaded_Statics
	{
		struct GoreComponent_eventAssetLoaded_Parms
		{
			UObject* Loaded;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Loaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoreComponent_AssetLoaded_Statics::NewProp_Loaded = { "Loaded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventAssetLoaded_Parms, Loaded), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoreComponent_AssetLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_AssetLoaded_Statics::NewProp_Loaded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoreComponent_AssetLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_AssetLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "AssetLoaded", nullptr, nullptr, sizeof(GoreComponent_eventAssetLoaded_Parms), Z_Construct_UFunction_UGoreComponent_AssetLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_AssetLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoreComponent_AssetLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_AssetLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoreComponent_AssetLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoreComponent_AssetLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoreComponent_Deinitialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoreComponent_Deinitialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_Deinitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "Deinitialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoreComponent_Deinitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_Deinitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoreComponent_Deinitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoreComponent_Deinitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoreComponent_GetMaxEllipsoids_Statics
	{
		struct GoreComponent_eventGetMaxEllipsoids_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGoreComponent_GetMaxEllipsoids_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventGetMaxEllipsoids_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoreComponent_GetMaxEllipsoids_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_GetMaxEllipsoids_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoreComponent_GetMaxEllipsoids_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_GetMaxEllipsoids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "GetMaxEllipsoids", nullptr, nullptr, sizeof(GoreComponent_eventGetMaxEllipsoids_Parms), Z_Construct_UFunction_UGoreComponent_GetMaxEllipsoids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_GetMaxEllipsoids_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoreComponent_GetMaxEllipsoids_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_GetMaxEllipsoids_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoreComponent_GetMaxEllipsoids()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoreComponent_GetMaxEllipsoids_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoreComponent_Initialize_Statics
	{
		struct GoreComponent_eventInitialize_Parms
		{
			bool bForceInitialize;
		};
		static void NewProp_bForceInitialize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceInitialize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGoreComponent_Initialize_Statics::NewProp_bForceInitialize_SetBit(void* Obj)
	{
		((GoreComponent_eventInitialize_Parms*)Obj)->bForceInitialize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGoreComponent_Initialize_Statics::NewProp_bForceInitialize = { "bForceInitialize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GoreComponent_eventInitialize_Parms), &Z_Construct_UFunction_UGoreComponent_Initialize_Statics::NewProp_bForceInitialize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoreComponent_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_Initialize_Statics::NewProp_bForceInitialize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoreComponent_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "Initialize", nullptr, nullptr, sizeof(GoreComponent_eventInitialize_Parms), Z_Construct_UFunction_UGoreComponent_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoreComponent_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoreComponent_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoreComponent_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoreComponent_OnRep_LastHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoreComponent_OnRep_LastHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_OnRep_LastHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "OnRep_LastHit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoreComponent_OnRep_LastHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_OnRep_LastHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoreComponent_OnRep_LastHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoreComponent_OnRep_LastHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics
	{
		struct GoreComponent_eventOnTakePointDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			AController* InstigatedBy;
			FVector HitLocation;
			UPrimitiveComponent* FHitComponent;
			FName BoneName;
			FVector ShotFromDirection;
			const UDamageType* DamageType;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FHitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FHitComponent;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShotFromDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventOnTakePointDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventOnTakePointDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventOnTakePointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventOnTakePointDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_FHitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_FHitComponent = { "FHitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventOnTakePointDamage_Parms, FHitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_FHitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_FHitComponent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventOnTakePointDamage_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventOnTakePointDamage_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventOnTakePointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventOnTakePointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_FHitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_ShotFromDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "OnTakePointDamage", nullptr, nullptr, sizeof(GoreComponent_eventOnTakePointDamage_Parms), Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoreComponent_OnTakePointDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoreComponent_OnTakePointDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoreComponent_TryAddGoreMesh_Statics
	{
		struct GoreComponent_eventTryAddGoreMesh_Parms
		{
			FVector position;
			float Damage;
			FName BoneName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_TryAddGoreMesh_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventTryAddGoreMesh_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoreComponent_TryAddGoreMesh_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventTryAddGoreMesh_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGoreComponent_TryAddGoreMesh_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventTryAddGoreMesh_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGoreComponent_TryAddGoreMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GoreComponent_eventTryAddGoreMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGoreComponent_TryAddGoreMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GoreComponent_eventTryAddGoreMesh_Parms), &Z_Construct_UFunction_UGoreComponent_TryAddGoreMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoreComponent_TryAddGoreMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_TryAddGoreMesh_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_TryAddGoreMesh_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_TryAddGoreMesh_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_TryAddGoreMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoreComponent_TryAddGoreMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_TryAddGoreMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "TryAddGoreMesh", nullptr, nullptr, sizeof(GoreComponent_eventTryAddGoreMesh_Parms), Z_Construct_UFunction_UGoreComponent_TryAddGoreMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_TryAddGoreMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoreComponent_TryAddGoreMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_TryAddGoreMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoreComponent_TryAddGoreMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoreComponent_TryAddGoreMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse_Statics
	{
		struct GoreComponent_eventUpdateGoreEllipse_Parms
		{
			int32 Index;
			FVector position;
			FRotator Rotation;
			FVector Scale;
			bool bUpdateTexture;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
		static void NewProp_bUpdateTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventUpdateGoreEllipse_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventUpdateGoreEllipse_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventUpdateGoreEllipse_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventUpdateGoreEllipse_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse_Statics::NewProp_bUpdateTexture_SetBit(void* Obj)
	{
		((GoreComponent_eventUpdateGoreEllipse_Parms*)Obj)->bUpdateTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse_Statics::NewProp_bUpdateTexture = { "bUpdateTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GoreComponent_eventUpdateGoreEllipse_Parms), &Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse_Statics::NewProp_bUpdateTexture_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse_Statics::NewProp_bUpdateTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "UpdateGoreEllipse", nullptr, nullptr, sizeof(GoreComponent_eventUpdateGoreEllipse_Parms), Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics
	{
		struct GoreComponent_eventUpdateGorePoint_Parms
		{
			int32 Index;
			FName BoneName;
			FVector position;
			FVector Normal;
			FVector Tangent;
			float Scale;
			float DecalScale;
			float BloodAlpha;
			bool bUpdateTexture;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecalScale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloodAlpha;
		static void NewProp_bUpdateTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventUpdateGorePoint_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventUpdateGorePoint_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventUpdateGorePoint_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventUpdateGorePoint_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventUpdateGorePoint_Parms, Tangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventUpdateGorePoint_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::NewProp_DecalScale = { "DecalScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventUpdateGorePoint_Parms, DecalScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::NewProp_BloodAlpha = { "BloodAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventUpdateGorePoint_Parms, BloodAlpha), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::NewProp_bUpdateTexture_SetBit(void* Obj)
	{
		((GoreComponent_eventUpdateGorePoint_Parms*)Obj)->bUpdateTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::NewProp_bUpdateTexture = { "bUpdateTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GoreComponent_eventUpdateGorePoint_Parms), &Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::NewProp_bUpdateTexture_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::NewProp_Tangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::NewProp_DecalScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::NewProp_BloodAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::NewProp_bUpdateTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "UpdateGorePoint", nullptr, nullptr, sizeof(GoreComponent_eventUpdateGorePoint_Parms), Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoreComponent_UpdateGorePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoreComponent_UpdateGorePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoreComponent_UpdateGorePointAlpha_Statics
	{
		struct GoreComponent_eventUpdateGorePointAlpha_Parms
		{
			int32 Index;
			float Alpha;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGoreComponent_UpdateGorePointAlpha_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventUpdateGorePointAlpha_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoreComponent_UpdateGorePointAlpha_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventUpdateGorePointAlpha_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoreComponent_UpdateGorePointAlpha_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_UpdateGorePointAlpha_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_UpdateGorePointAlpha_Statics::NewProp_Alpha,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoreComponent_UpdateGorePointAlpha_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_UpdateGorePointAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "UpdateGorePointAlpha", nullptr, nullptr, sizeof(GoreComponent_eventUpdateGorePointAlpha_Parms), Z_Construct_UFunction_UGoreComponent_UpdateGorePointAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_UpdateGorePointAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoreComponent_UpdateGorePointAlpha_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_UpdateGorePointAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoreComponent_UpdateGorePointAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoreComponent_UpdateGorePointAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoreComponent_UpdateGorePointSize_Statics
	{
		struct GoreComponent_eventUpdateGorePointSize_Parms
		{
			int32 Index;
			float Scale;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGoreComponent_UpdateGorePointSize_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventUpdateGorePointSize_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoreComponent_UpdateGorePointSize_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoreComponent_eventUpdateGorePointSize_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoreComponent_UpdateGorePointSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_UpdateGorePointSize_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_UpdateGorePointSize_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoreComponent_UpdateGorePointSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_UpdateGorePointSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "UpdateGorePointSize", nullptr, nullptr, sizeof(GoreComponent_eventUpdateGorePointSize_Parms), Z_Construct_UFunction_UGoreComponent_UpdateGorePointSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_UpdateGorePointSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoreComponent_UpdateGorePointSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_UpdateGorePointSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoreComponent_UpdateGorePointSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoreComponent_UpdateGorePointSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoreComponent_UpdateMaxIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoreComponent_UpdateMaxIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_UpdateMaxIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "UpdateMaxIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoreComponent_UpdateMaxIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_UpdateMaxIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoreComponent_UpdateMaxIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoreComponent_UpdateMaxIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoreComponent_UpdateTexture_Statics
	{
		struct GoreComponent_eventUpdateTexture_Parms
		{
			bool bUpdatePoints;
			bool bUpdateNormals;
			bool bUpdateElipses;
		};
		static void NewProp_bUpdatePoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdatePoints;
		static void NewProp_bUpdateNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateNormals;
		static void NewProp_bUpdateElipses_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateElipses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGoreComponent_UpdateTexture_Statics::NewProp_bUpdatePoints_SetBit(void* Obj)
	{
		((GoreComponent_eventUpdateTexture_Parms*)Obj)->bUpdatePoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGoreComponent_UpdateTexture_Statics::NewProp_bUpdatePoints = { "bUpdatePoints", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GoreComponent_eventUpdateTexture_Parms), &Z_Construct_UFunction_UGoreComponent_UpdateTexture_Statics::NewProp_bUpdatePoints_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGoreComponent_UpdateTexture_Statics::NewProp_bUpdateNormals_SetBit(void* Obj)
	{
		((GoreComponent_eventUpdateTexture_Parms*)Obj)->bUpdateNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGoreComponent_UpdateTexture_Statics::NewProp_bUpdateNormals = { "bUpdateNormals", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GoreComponent_eventUpdateTexture_Parms), &Z_Construct_UFunction_UGoreComponent_UpdateTexture_Statics::NewProp_bUpdateNormals_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGoreComponent_UpdateTexture_Statics::NewProp_bUpdateElipses_SetBit(void* Obj)
	{
		((GoreComponent_eventUpdateTexture_Parms*)Obj)->bUpdateElipses = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGoreComponent_UpdateTexture_Statics::NewProp_bUpdateElipses = { "bUpdateElipses", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GoreComponent_eventUpdateTexture_Parms), &Z_Construct_UFunction_UGoreComponent_UpdateTexture_Statics::NewProp_bUpdateElipses_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoreComponent_UpdateTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_UpdateTexture_Statics::NewProp_bUpdatePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_UpdateTexture_Statics::NewProp_bUpdateNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_UpdateTexture_Statics::NewProp_bUpdateElipses,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoreComponent_UpdateTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_UpdateTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "UpdateTexture", nullptr, nullptr, sizeof(GoreComponent_eventUpdateTexture_Parms), Z_Construct_UFunction_UGoreComponent_UpdateTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_UpdateTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoreComponent_UpdateTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_UpdateTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoreComponent_UpdateTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoreComponent_UpdateTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGoreComponent_NoRegister()
	{
		return UGoreComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGoreComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoreMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoreMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GoreMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGoreEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultGoreEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGoreParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultGoreParticle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DynamicMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoreDataTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoreDataTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyGoreOnDamage_MetaData[];
#endif
		static void NewProp_bApplyGoreOnDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyGoreOnDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoreDamageThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GoreDamageThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnGoreEffectsWhenOffscreen_MetaData[];
#endif
		static void NewProp_bSpawnGoreEffectsWhenOffscreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnGoreEffectsWhenOffscreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayGoreSounds_MetaData[];
#endif
		static void NewProp_bPlayGoreSounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayGoreSounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnGoreEffects_MetaData[];
#endif
		static void NewProp_bSpawnGoreEffects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnGoreEffects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFadeBlood_MetaData[];
#endif
		static void NewProp_bFadeBlood_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFadeBlood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodFadeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloodFadeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExpandBlood_MetaData[];
#endif
		static void NewProp_bExpandBlood_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExpandBlood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBloodExpandSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBloodExpandSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodExpandSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloodExpandSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureRows_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureRows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoInitialize_MetaData[];
#endif
		static void NewProp_bAutoInitialize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoInitialize;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GoreBoneNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoreBoneNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GoreBoneNames;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GorePoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GorePoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GorePoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoreNormals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoreNormals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GoreNormals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoreTangents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoreTangents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GoreTangents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoreEllipsePositions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoreEllipsePositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GoreEllipsePositions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoreEllipseXBasis_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoreEllipseXBasis_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GoreEllipseXBasis;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoreEllipseYBasis_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoreEllipseYBasis_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GoreEllipseYBasis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAssetLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnAssetLoaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoreComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Dismemberment,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGoreComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoreComponent_AddGoreEllipse, "AddGoreEllipse" }, // 2843318846
		{ &Z_Construct_UFunction_UGoreComponent_AddGorePoint, "AddGorePoint" }, // 316629100
		{ &Z_Construct_UFunction_UGoreComponent_AssetLoaded, "AssetLoaded" }, // 2554154929
		{ &Z_Construct_UFunction_UGoreComponent_Deinitialize, "Deinitialize" }, // 1186319703
		{ &Z_Construct_UFunction_UGoreComponent_GetMaxEllipsoids, "GetMaxEllipsoids" }, // 3711049379
		{ &Z_Construct_UFunction_UGoreComponent_Initialize, "Initialize" }, // 3010119229
		{ &Z_Construct_UFunction_UGoreComponent_OnRep_LastHit, "OnRep_LastHit" }, // 877780749
		{ &Z_Construct_UFunction_UGoreComponent_OnTakePointDamage, "OnTakePointDamage" }, // 985755101
		{ &Z_Construct_UFunction_UGoreComponent_TryAddGoreMesh, "TryAddGoreMesh" }, // 4061042188
		{ &Z_Construct_UFunction_UGoreComponent_UpdateGoreEllipse, "UpdateGoreEllipse" }, // 1401718202
		{ &Z_Construct_UFunction_UGoreComponent_UpdateGorePoint, "UpdateGorePoint" }, // 4193086293
		{ &Z_Construct_UFunction_UGoreComponent_UpdateGorePointAlpha, "UpdateGorePointAlpha" }, // 2198141661
		{ &Z_Construct_UFunction_UGoreComponent_UpdateGorePointSize, "UpdateGorePointSize" }, // 3097289436
		{ &Z_Construct_UFunction_UGoreComponent_UpdateMaxIndex, "UpdateMaxIndex" }, // 137096287
		{ &Z_Construct_UFunction_UGoreComponent_UpdateTexture, "UpdateTexture" }, // 2562697626
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GoreComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreMeshes_Inner = { "GoreMeshes", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGoreMesh, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreMeshes = { "GoreMeshes", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoreComponent, GoreMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_DefaultGoreEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_DefaultGoreEvent = { "DefaultGoreEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoreComponent, DefaultGoreEvent), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_DefaultGoreEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_DefaultGoreEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_DefaultGoreParticle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_DefaultGoreParticle = { "DefaultGoreParticle", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoreComponent, DefaultGoreParticle), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_DefaultGoreParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_DefaultGoreParticle_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_DynamicMaterials_Inner = { "DynamicMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_DynamicMaterials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_DynamicMaterials = { "DynamicMaterials", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoreComponent, DynamicMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_DynamicMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_DynamicMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreDataTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreDataTexture = { "GoreDataTexture", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoreComponent, GoreDataTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreDataTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreDataTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_bApplyGoreOnDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGoreComponent_Statics::NewProp_bApplyGoreOnDamage_SetBit(void* Obj)
	{
		((UGoreComponent*)Obj)->bApplyGoreOnDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_bApplyGoreOnDamage = { "bApplyGoreOnDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGoreComponent), &Z_Construct_UClass_UGoreComponent_Statics::NewProp_bApplyGoreOnDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_bApplyGoreOnDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_bApplyGoreOnDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreDamageThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreDamageThreshold = { "GoreDamageThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoreComponent, GoreDamageThreshold), METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreDamageThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreDamageThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_bSpawnGoreEffectsWhenOffscreen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGoreComponent_Statics::NewProp_bSpawnGoreEffectsWhenOffscreen_SetBit(void* Obj)
	{
		((UGoreComponent*)Obj)->bSpawnGoreEffectsWhenOffscreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_bSpawnGoreEffectsWhenOffscreen = { "bSpawnGoreEffectsWhenOffscreen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGoreComponent), &Z_Construct_UClass_UGoreComponent_Statics::NewProp_bSpawnGoreEffectsWhenOffscreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_bSpawnGoreEffectsWhenOffscreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_bSpawnGoreEffectsWhenOffscreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_bPlayGoreSounds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGoreComponent_Statics::NewProp_bPlayGoreSounds_SetBit(void* Obj)
	{
		((UGoreComponent*)Obj)->bPlayGoreSounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_bPlayGoreSounds = { "bPlayGoreSounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGoreComponent), &Z_Construct_UClass_UGoreComponent_Statics::NewProp_bPlayGoreSounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_bPlayGoreSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_bPlayGoreSounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_bSpawnGoreEffects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGoreComponent_Statics::NewProp_bSpawnGoreEffects_SetBit(void* Obj)
	{
		((UGoreComponent*)Obj)->bSpawnGoreEffects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_bSpawnGoreEffects = { "bSpawnGoreEffects", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGoreComponent), &Z_Construct_UClass_UGoreComponent_Statics::NewProp_bSpawnGoreEffects_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_bSpawnGoreEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_bSpawnGoreEffects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_bFadeBlood_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGoreComponent_Statics::NewProp_bFadeBlood_SetBit(void* Obj)
	{
		((UGoreComponent*)Obj)->bFadeBlood = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_bFadeBlood = { "bFadeBlood", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGoreComponent), &Z_Construct_UClass_UGoreComponent_Statics::NewProp_bFadeBlood_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_bFadeBlood_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_bFadeBlood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodFadeTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodFadeTime = { "BloodFadeTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoreComponent, BloodFadeTime), METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodFadeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodFadeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_bExpandBlood_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGoreComponent_Statics::NewProp_bExpandBlood_SetBit(void* Obj)
	{
		((UGoreComponent*)Obj)->bExpandBlood = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_bExpandBlood = { "bExpandBlood", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGoreComponent), &Z_Construct_UClass_UGoreComponent_Statics::NewProp_bExpandBlood_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_bExpandBlood_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_bExpandBlood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_MaxBloodExpandSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_MaxBloodExpandSize = { "MaxBloodExpandSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoreComponent, MaxBloodExpandSize), METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_MaxBloodExpandSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_MaxBloodExpandSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodExpandSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodExpandSpeed = { "BloodExpandSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoreComponent, BloodExpandSpeed), METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodExpandSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodExpandSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_MaxPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_MaxPoints = { "MaxPoints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoreComponent, MaxPoints), METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_MaxPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_MaxPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_TextureRows_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_TextureRows = { "TextureRows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoreComponent, TextureRows), METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_TextureRows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_TextureRows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_bAutoInitialize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGoreComponent_Statics::NewProp_bAutoInitialize_SetBit(void* Obj)
	{
		((UGoreComponent*)Obj)->bAutoInitialize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_bAutoInitialize = { "bAutoInitialize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGoreComponent), &Z_Construct_UClass_UGoreComponent_Statics::NewProp_bAutoInitialize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_bAutoInitialize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_bAutoInitialize_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreBoneNames_Inner = { "GoreBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreBoneNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreBoneNames = { "GoreBoneNames", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoreComponent, GoreBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreBoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreBoneNames_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_GorePoints_Inner = { "GorePoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FShortVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_GorePoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_GorePoints = { "GorePoints", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoreComponent, GorePoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_GorePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_GorePoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreNormals_Inner = { "GoreNormals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FShortVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreNormals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreNormals = { "GoreNormals", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoreComponent, GoreNormals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreNormals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreTangents_Inner = { "GoreTangents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FShortVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreTangents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreTangents = { "GoreTangents", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoreComponent, GoreTangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreTangents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreEllipsePositions_Inner = { "GoreEllipsePositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FShortVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreEllipsePositions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreEllipsePositions = { "GoreEllipsePositions", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoreComponent, GoreEllipsePositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreEllipsePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreEllipsePositions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreEllipseXBasis_Inner = { "GoreEllipseXBasis", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FShortVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreEllipseXBasis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreEllipseXBasis = { "GoreEllipseXBasis", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoreComponent, GoreEllipseXBasis), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreEllipseXBasis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreEllipseXBasis_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreEllipseYBasis_Inner = { "GoreEllipseYBasis", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FShortVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreEllipseYBasis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreEllipseYBasis = { "GoreEllipseYBasis", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoreComponent, GoreEllipseYBasis), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreEllipseYBasis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreEllipseYBasis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_LastHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_LastHit = { "LastHit", "OnRep_LastHit", (EPropertyFlags)0x0010008100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoreComponent, LastHit), Z_Construct_UScriptStruct_FGoreHitData, METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_LastHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_LastHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoreComponent_Statics::NewProp_OnAssetLoaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreComponent" },
		{ "ModuleRelativePath", "Public/GoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_OnAssetLoaded = { "OnAssetLoaded", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoreComponent, OnAssetLoaded), Z_Construct_UDelegateFunction_UKismetSystemLibrary_OnAssetLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::NewProp_OnAssetLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::NewProp_OnAssetLoaded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoreComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_DefaultGoreEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_DefaultGoreParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_DynamicMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_DynamicMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreDataTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_bApplyGoreOnDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreDamageThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_bSpawnGoreEffectsWhenOffscreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_bPlayGoreSounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_bSpawnGoreEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_bFadeBlood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodFadeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_bExpandBlood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_MaxBloodExpandSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodExpandSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_MaxPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_TextureRows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_bAutoInitialize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreBoneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreBoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_GorePoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_GorePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreNormals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreTangents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreTangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreEllipsePositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreEllipsePositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreEllipseXBasis_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreEllipseXBasis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreEllipseYBasis_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_GoreEllipseYBasis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_LastHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_OnAssetLoaded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoreComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoreComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGoreComponent_Statics::ClassParams = {
		&UGoreComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGoreComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGoreComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoreComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGoreComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGoreComponent, 1926904192);
	template<> DISMEMBERMENT_API UClass* StaticClass<UGoreComponent>()
	{
		return UGoreComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGoreComponent(Z_Construct_UClass_UGoreComponent, &UGoreComponent::StaticClass, TEXT("/Script/Dismemberment"), TEXT("UGoreComponent"), false, nullptr, nullptr, nullptr);

	void UGoreComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_LastHit(TEXT("LastHit"));

		const bool bIsValid = true
			&& Name_LastHit == ClassReps[(int32)ENetFields_Private::LastHit].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGoreComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoreComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
