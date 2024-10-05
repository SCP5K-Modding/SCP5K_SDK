// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dismemberment/Public/DismembermentComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDismembermentComponent() {}
// Cross Module References
	DISMEMBERMENT_API UClass* Z_Construct_UClass_UDismembermentComponent_NoRegister();
	DISMEMBERMENT_API UClass* Z_Construct_UClass_UDismembermentComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Dismemberment();
	DISMEMBERMENT_API UEnum* Z_Construct_UEnum_Dismemberment_EDismembermentType();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	DISMEMBERMENT_API UScriptStruct* Z_Construct_UScriptStruct_FDismemberableData();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister();
	DISMEMBERMENT_API UFunction* Z_Construct_UDelegateFunction_Dismemberment_OnDismemberDelegate__DelegateSignature();
	DISMEMBERMENT_API UScriptStruct* Z_Construct_UScriptStruct_FDismembermentData();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDismembermentComponent::execCosmeticDismember)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FByteProperty,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticDismember(Z_Param_BoneName,EDismembermentType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDismembermentComponent::execCosmeticDismemberBone)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FByteProperty,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticDismemberBone(Z_Param_BoneName,EDismembermentType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDismembermentComponent::execDismember)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FByteProperty,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Dismember(Z_Param_BoneName,EDismembermentType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDismembermentComponent::execGetDismemberedBones)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetDismemberedBones();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDismembermentComponent::execIsDismembered)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDismembered(Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDismembermentComponent::execOnRep_DismemberedBones)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DismemberedBones();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDismembermentComponent::execOnTakePointDamage)
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
	DEFINE_FUNCTION(UDismembermentComponent::execSpawnParticle)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FByteProperty,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnParticle(Z_Param_BoneName,EDismembermentType(Z_Param_Type));
		P_NATIVE_END;
	}
	void UDismembermentComponent::StaticRegisterNativesUDismembermentComponent()
	{
		UClass* Class = UDismembermentComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CosmeticDismember", &UDismembermentComponent::execCosmeticDismember },
			{ "CosmeticDismemberBone", &UDismembermentComponent::execCosmeticDismemberBone },
			{ "Dismember", &UDismembermentComponent::execDismember },
			{ "GetDismemberedBones", &UDismembermentComponent::execGetDismemberedBones },
			{ "IsDismembered", &UDismembermentComponent::execIsDismembered },
			{ "OnRep_DismemberedBones", &UDismembermentComponent::execOnRep_DismemberedBones },
			{ "OnTakePointDamage", &UDismembermentComponent::execOnTakePointDamage },
			{ "SpawnParticle", &UDismembermentComponent::execSpawnParticle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDismembermentComponent_CosmeticDismember_Statics
	{
		struct DismembermentComponent_eventCosmeticDismember_Parms
		{
			FName BoneName;
			TEnumAsByte<EDismembermentType> Type;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismembermentComponent_CosmeticDismember_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DismembermentComponent_eventCosmeticDismember_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDismembermentComponent_CosmeticDismember_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DismembermentComponent_eventCosmeticDismember_Parms, Type), Z_Construct_UEnum_Dismemberment_EDismembermentType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismembermentComponent_CosmeticDismember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_CosmeticDismember_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_CosmeticDismember_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDismembermentComponent_CosmeticDismember_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_CosmeticDismember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "CosmeticDismember", nullptr, nullptr, sizeof(DismembermentComponent_eventCosmeticDismember_Parms), Z_Construct_UFunction_UDismembermentComponent_CosmeticDismember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_CosmeticDismember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDismembermentComponent_CosmeticDismember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_CosmeticDismember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDismembermentComponent_CosmeticDismember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_CosmeticDismember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDismembermentComponent_CosmeticDismemberBone_Statics
	{
		struct DismembermentComponent_eventCosmeticDismemberBone_Parms
		{
			FName BoneName;
			TEnumAsByte<EDismembermentType> Type;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismembermentComponent_CosmeticDismemberBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DismembermentComponent_eventCosmeticDismemberBone_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDismembermentComponent_CosmeticDismemberBone_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DismembermentComponent_eventCosmeticDismemberBone_Parms, Type), Z_Construct_UEnum_Dismemberment_EDismembermentType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismembermentComponent_CosmeticDismemberBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_CosmeticDismemberBone_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_CosmeticDismemberBone_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDismembermentComponent_CosmeticDismemberBone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_CosmeticDismemberBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "CosmeticDismemberBone", nullptr, nullptr, sizeof(DismembermentComponent_eventCosmeticDismemberBone_Parms), Z_Construct_UFunction_UDismembermentComponent_CosmeticDismemberBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_CosmeticDismemberBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDismembermentComponent_CosmeticDismemberBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_CosmeticDismemberBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDismembermentComponent_CosmeticDismemberBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_CosmeticDismemberBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics
	{
		struct DismembermentComponent_eventDismember_Parms
		{
			FName BoneName;
			TEnumAsByte<EDismembermentType> Type;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DismembermentComponent_eventDismember_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DismembermentComponent_eventDismember_Parms, Type), Z_Construct_UEnum_Dismemberment_EDismembermentType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DismembermentComponent_eventDismember_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DismembermentComponent_eventDismember_Parms), &Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "Dismember", nullptr, nullptr, sizeof(DismembermentComponent_eventDismember_Parms), Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDismembermentComponent_Dismember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDismembermentComponent_GetDismemberedBones_Statics
	{
		struct DismembermentComponent_eventGetDismemberedBones_Parms
		{
			TSet<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismembermentComponent_GetDismemberedBones_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDismembermentComponent_GetDismemberedBones_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DismembermentComponent_eventGetDismemberedBones_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismembermentComponent_GetDismemberedBones_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_GetDismemberedBones_Statics::NewProp_ReturnValue_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_GetDismemberedBones_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDismembermentComponent_GetDismemberedBones_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_GetDismemberedBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "GetDismemberedBones", nullptr, nullptr, sizeof(DismembermentComponent_eventGetDismemberedBones_Parms), Z_Construct_UFunction_UDismembermentComponent_GetDismemberedBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_GetDismemberedBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDismembermentComponent_GetDismemberedBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_GetDismemberedBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDismembermentComponent_GetDismemberedBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_GetDismemberedBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDismembermentComponent_IsDismembered_Statics
	{
		struct DismembermentComponent_eventIsDismembered_Parms
		{
			FName BoneName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismembermentComponent_IsDismembered_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DismembermentComponent_eventIsDismembered_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDismembermentComponent_IsDismembered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DismembermentComponent_eventIsDismembered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDismembermentComponent_IsDismembered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DismembermentComponent_eventIsDismembered_Parms), &Z_Construct_UFunction_UDismembermentComponent_IsDismembered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismembermentComponent_IsDismembered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_IsDismembered_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_IsDismembered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDismembermentComponent_IsDismembered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_IsDismembered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "IsDismembered", nullptr, nullptr, sizeof(DismembermentComponent_eventIsDismembered_Parms), Z_Construct_UFunction_UDismembermentComponent_IsDismembered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_IsDismembered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDismembermentComponent_IsDismembered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_IsDismembered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDismembermentComponent_IsDismembered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_IsDismembered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDismembermentComponent_OnRep_DismemberedBones_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDismembermentComponent_OnRep_DismemberedBones_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_OnRep_DismemberedBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "OnRep_DismemberedBones", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDismembermentComponent_OnRep_DismemberedBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_OnRep_DismemberedBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDismembermentComponent_OnRep_DismemberedBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_OnRep_DismemberedBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics
	{
		struct DismembermentComponent_eventOnTakePointDamage_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DismembermentComponent_eventOnTakePointDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DismembermentComponent_eventOnTakePointDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DismembermentComponent_eventOnTakePointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DismembermentComponent_eventOnTakePointDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_FHitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_FHitComponent = { "FHitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DismembermentComponent_eventOnTakePointDamage_Parms, FHitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_FHitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_FHitComponent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DismembermentComponent_eventOnTakePointDamage_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DismembermentComponent_eventOnTakePointDamage_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DismembermentComponent_eventOnTakePointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DismembermentComponent_eventOnTakePointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_FHitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_ShotFromDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "OnTakePointDamage", nullptr, nullptr, sizeof(DismembermentComponent_eventOnTakePointDamage_Parms), Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDismembermentComponent_SpawnParticle_Statics
	{
		struct DismembermentComponent_eventSpawnParticle_Parms
		{
			FName BoneName;
			TEnumAsByte<EDismembermentType> Type;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismembermentComponent_SpawnParticle_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DismembermentComponent_eventSpawnParticle_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDismembermentComponent_SpawnParticle_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DismembermentComponent_eventSpawnParticle_Parms, Type), Z_Construct_UEnum_Dismemberment_EDismembermentType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismembermentComponent_SpawnParticle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_SpawnParticle_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_SpawnParticle_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDismembermentComponent_SpawnParticle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_SpawnParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "SpawnParticle", nullptr, nullptr, sizeof(DismembermentComponent_eventSpawnParticle_Parms), Z_Construct_UFunction_UDismembermentComponent_SpawnParticle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_SpawnParticle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDismembermentComponent_SpawnParticle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_SpawnParticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDismembermentComponent_SpawnParticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_SpawnParticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDismembermentComponent_NoRegister()
	{
		return UDismembermentComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDismembermentComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dismemberables_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Dismemberables_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dismemberables_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Dismemberables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideBonesOnDismember_MetaData[];
#endif
		static void NewProp_bHideBonesOnDismember_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideBonesOnDismember;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideChildMeshesOnDismember_MetaData[];
#endif
		static void NewProp_bHideChildMeshesOnDismember_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideChildMeshesOnDismember;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDismemberOnDamage_MetaData[];
#endif
		static void NewProp_bDismemberOnDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDismemberOnDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DismembermentDamageThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DismembermentDamageThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StumpMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StumpMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StumpRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StumpRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftDismembermentParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoftDismembermentParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosiveDismembermentParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosiveDismembermentParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDismember_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDismember;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DismemberedBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DismemberedBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DismemberedBones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildMeshes_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StumpMeshes_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StumpMeshes_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StumpMeshes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StumpMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StumpMeshes;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClientDismemberedBones_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientDismemberedBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ClientDismemberedBones;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DismembermentSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DismembermentSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDismembermentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Dismemberment,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDismembermentComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDismembermentComponent_CosmeticDismember, "CosmeticDismember" }, // 2792857496
		{ &Z_Construct_UFunction_UDismembermentComponent_CosmeticDismemberBone, "CosmeticDismemberBone" }, // 1496597287
		{ &Z_Construct_UFunction_UDismembermentComponent_Dismember, "Dismember" }, // 1615130479
		{ &Z_Construct_UFunction_UDismembermentComponent_GetDismemberedBones, "GetDismemberedBones" }, // 657359491
		{ &Z_Construct_UFunction_UDismembermentComponent_IsDismembered, "IsDismembered" }, // 4173109494
		{ &Z_Construct_UFunction_UDismembermentComponent_OnRep_DismemberedBones, "OnRep_DismemberedBones" }, // 1480814215
		{ &Z_Construct_UFunction_UDismembermentComponent_OnTakePointDamage, "OnTakePointDamage" }, // 256364215
		{ &Z_Construct_UFunction_UDismembermentComponent_SpawnParticle, "SpawnParticle" }, // 4036438368
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDismembermentComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DismembermentComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_Dismemberables_ValueProp = { "Dismemberables", nullptr, (EPropertyFlags)0x0000008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FDismemberableData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_Dismemberables_Key_KeyProp = { "Dismemberables_Key", nullptr, (EPropertyFlags)0x0000008000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_Dismemberables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismembermentComponent" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_Dismemberables = { "Dismemberables", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDismembermentComponent, Dismemberables), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_Dismemberables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_Dismemberables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bHideBonesOnDismember_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismembermentComponent" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bHideBonesOnDismember_SetBit(void* Obj)
	{
		((UDismembermentComponent*)Obj)->bHideBonesOnDismember = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bHideBonesOnDismember = { "bHideBonesOnDismember", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDismembermentComponent), &Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bHideBonesOnDismember_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bHideBonesOnDismember_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bHideBonesOnDismember_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bHideChildMeshesOnDismember_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismembermentComponent" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bHideChildMeshesOnDismember_SetBit(void* Obj)
	{
		((UDismembermentComponent*)Obj)->bHideChildMeshesOnDismember = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bHideChildMeshesOnDismember = { "bHideChildMeshesOnDismember", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDismembermentComponent), &Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bHideChildMeshesOnDismember_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bHideChildMeshesOnDismember_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bHideChildMeshesOnDismember_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bDismemberOnDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismembermentComponent" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bDismemberOnDamage_SetBit(void* Obj)
	{
		((UDismembermentComponent*)Obj)->bDismemberOnDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bDismemberOnDamage = { "bDismemberOnDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDismembermentComponent), &Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bDismemberOnDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bDismemberOnDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bDismemberOnDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismembermentDamageThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismembermentComponent" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismembermentDamageThreshold = { "DismembermentDamageThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDismembermentComponent, DismembermentDamageThreshold), METADATA_PARAMS(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismembermentDamageThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismembermentDamageThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismembermentComponent" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpMesh = { "StumpMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDismembermentComponent, StumpMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpRotationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismembermentComponent" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpRotationOffset = { "StumpRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDismembermentComponent, StumpRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_SoftDismembermentParticle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismembermentComponent" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_SoftDismembermentParticle = { "SoftDismembermentParticle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDismembermentComponent, SoftDismembermentParticle), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_SoftDismembermentParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_SoftDismembermentParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ExplosiveDismembermentParticle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismembermentComponent" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ExplosiveDismembermentParticle = { "ExplosiveDismembermentParticle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDismembermentComponent, ExplosiveDismembermentParticle), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ExplosiveDismembermentParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ExplosiveDismembermentParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_OnDismember_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismembermentComponent" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_OnDismember = { "OnDismember", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDismembermentComponent, OnDismember), Z_Construct_UDelegateFunction_Dismemberment_OnDismemberDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_OnDismember_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_OnDismember_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismemberedBones_Inner = { "DismemberedBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDismembermentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismemberedBones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismembermentComponent" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismemberedBones = { "DismemberedBones", "OnRep_DismemberedBones", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDismembermentComponent, DismemberedBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismemberedBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismemberedBones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismembermentComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x00220c000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDismembermentComponent, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ChildMeshes_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismembermentComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ChildMeshes_Inner = { "ChildMeshes", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ChildMeshes_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ChildMeshes_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ChildMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismembermentComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ChildMeshes = { "ChildMeshes", nullptr, (EPropertyFlags)0x00200c800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDismembermentComponent, ChildMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ChildMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ChildMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpMeshes_ValueProp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismembermentComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpMeshes_ValueProp = { "StumpMeshes", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpMeshes_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpMeshes_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpMeshes_Key_KeyProp = { "StumpMeshes_Key", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismembermentComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpMeshes = { "StumpMeshes", nullptr, (EPropertyFlags)0x00200c800000000d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDismembermentComponent, StumpMeshes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpMeshes_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ClientDismemberedBones_ElementProp = { "ClientDismemberedBones", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ClientDismemberedBones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismembermentComponent" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ClientDismemberedBones = { "ClientDismemberedBones", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDismembermentComponent, ClientDismemberedBones), METADATA_PARAMS(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ClientDismemberedBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ClientDismemberedBones_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_BoneNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismembermentComponent" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDismembermentComponent, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_BoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_BoneNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismembermentSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismembermentComponent" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismembermentSound = { "DismembermentSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDismembermentComponent, DismembermentSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismembermentSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismembermentSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDismembermentComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_Dismemberables_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_Dismemberables_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_Dismemberables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bHideBonesOnDismember,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bHideChildMeshesOnDismember,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bDismemberOnDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismembermentDamageThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_SoftDismembermentParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ExplosiveDismembermentParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_OnDismember,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismemberedBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismemberedBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ChildMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ChildMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpMeshes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpMeshes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_StumpMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ClientDismemberedBones_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ClientDismemberedBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_BoneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_BoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismembermentSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDismembermentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDismembermentComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDismembermentComponent_Statics::ClassParams = {
		&UDismembermentComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDismembermentComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDismembermentComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDismembermentComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDismembermentComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDismembermentComponent, 3102355065);
	template<> DISMEMBERMENT_API UClass* StaticClass<UDismembermentComponent>()
	{
		return UDismembermentComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDismembermentComponent(Z_Construct_UClass_UDismembermentComponent, &UDismembermentComponent::StaticClass, TEXT("/Script/Dismemberment"), TEXT("UDismembermentComponent"), false, nullptr, nullptr, nullptr);

	void UDismembermentComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_DismemberedBones(TEXT("DismemberedBones"));

		const bool bIsValid = true
			&& Name_DismemberedBones == ClassReps[(int32)ENetFields_Private::DismemberedBones].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDismembermentComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDismembermentComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
