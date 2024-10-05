// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/SplatterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplatterComponent() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_USplatterComponent_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_USplatterComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleHitData();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UKismetSystemLibrary_OnAssetLoaded__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USplatterComponent::execAddTrace)
	{
		P_GET_STRUCT(FVector,Z_Param_HitLocation);
		P_GET_STRUCT(FVector,Z_Param_ShotFromDirection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddTrace(Z_Param_HitLocation,Z_Param_ShotFromDirection,Z_Param_Damage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplatterComponent::execOnDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_STRUCT(FVector,Z_Param_HitLocation);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT(FVector,Z_Param_ShotFromDirection);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_InstigatedBy,Z_Param_HitLocation,Z_Param_HitComponent,Z_Param_BoneName,Z_Param_ShotFromDirection,Z_Param_DamageType,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplatterComponent::execOnRep_LastHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LastHit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplatterComponent::execSpawnDeathDecal)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnDeathDecal(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplatterComponent::execSpawnDecal)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FVector,Z_Param_Normal);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnDecal(Z_Param_Location,Z_Param_Normal,Z_Param_Direction,Z_Param_Distance,Z_Param_HitComponent,Z_Param_Damage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplatterComponent::execSpawnSplatterDecals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnSplatterDecals();
		P_NATIVE_END;
	}
	void USplatterComponent::StaticRegisterNativesUSplatterComponent()
	{
		UClass* Class = USplatterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTrace", &USplatterComponent::execAddTrace },
			{ "OnDamage", &USplatterComponent::execOnDamage },
			{ "OnRep_LastHit", &USplatterComponent::execOnRep_LastHit },
			{ "SpawnDeathDecal", &USplatterComponent::execSpawnDeathDecal },
			{ "SpawnDecal", &USplatterComponent::execSpawnDecal },
			{ "SpawnSplatterDecals", &USplatterComponent::execSpawnSplatterDecals },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USplatterComponent_AddTrace_Statics
	{
		struct SplatterComponent_eventAddTrace_Parms
		{
			FVector HitLocation;
			FVector ShotFromDirection;
			float Damage;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShotFromDirection;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplatterComponent_AddTrace_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplatterComponent_eventAddTrace_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplatterComponent_AddTrace_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplatterComponent_eventAddTrace_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplatterComponent_AddTrace_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplatterComponent_eventAddTrace_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplatterComponent_AddTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SplatterComponent_eventAddTrace_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplatterComponent_AddTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplatterComponent_eventAddTrace_Parms), &Z_Construct_UFunction_USplatterComponent_AddTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplatterComponent_AddTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplatterComponent_AddTrace_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplatterComponent_AddTrace_Statics::NewProp_ShotFromDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplatterComponent_AddTrace_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplatterComponent_AddTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplatterComponent_AddTrace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplatterComponent_AddTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplatterComponent, nullptr, "AddTrace", nullptr, nullptr, sizeof(SplatterComponent_eventAddTrace_Parms), Z_Construct_UFunction_USplatterComponent_AddTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplatterComponent_AddTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplatterComponent_AddTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplatterComponent_AddTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplatterComponent_AddTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplatterComponent_AddTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplatterComponent_OnDamage_Statics
	{
		struct SplatterComponent_eventOnDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			AController* InstigatedBy;
			FVector HitLocation;
			UPrimitiveComponent* HitComponent;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplatterComponent_eventOnDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplatterComponent_eventOnDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplatterComponent_eventOnDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplatterComponent_eventOnDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplatterComponent_eventOnDamage_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplatterComponent_eventOnDamage_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplatterComponent_eventOnDamage_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplatterComponent_eventOnDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplatterComponent_eventOnDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_ShotFromDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplatterComponent, nullptr, "OnDamage", nullptr, nullptr, sizeof(SplatterComponent_eventOnDamage_Parms), Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplatterComponent_OnDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplatterComponent_OnDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplatterComponent_OnRep_LastHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplatterComponent_OnRep_LastHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplatterComponent_OnRep_LastHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplatterComponent, nullptr, "OnRep_LastHit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplatterComponent_OnRep_LastHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplatterComponent_OnRep_LastHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplatterComponent_OnRep_LastHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplatterComponent_OnRep_LastHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplatterComponent_SpawnDeathDecal_Statics
	{
		struct SplatterComponent_eventSpawnDeathDecal_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplatterComponent_SpawnDeathDecal_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplatterComponent_eventSpawnDeathDecal_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplatterComponent_SpawnDeathDecal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplatterComponent_SpawnDeathDecal_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplatterComponent_SpawnDeathDecal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplatterComponent_SpawnDeathDecal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplatterComponent, nullptr, "SpawnDeathDecal", nullptr, nullptr, sizeof(SplatterComponent_eventSpawnDeathDecal_Parms), Z_Construct_UFunction_USplatterComponent_SpawnDeathDecal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplatterComponent_SpawnDeathDecal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplatterComponent_SpawnDeathDecal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplatterComponent_SpawnDeathDecal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplatterComponent_SpawnDeathDecal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplatterComponent_SpawnDeathDecal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics
	{
		struct SplatterComponent_eventSpawnDecal_Parms
		{
			FVector Location;
			FVector Normal;
			FVector Direction;
			float Distance;
			UPrimitiveComponent* HitComponent;
			float Damage;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplatterComponent_eventSpawnDecal_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplatterComponent_eventSpawnDecal_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplatterComponent_eventSpawnDecal_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplatterComponent_eventSpawnDecal_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplatterComponent_eventSpawnDecal_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplatterComponent_eventSpawnDecal_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::NewProp_Damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplatterComponent, nullptr, "SpawnDecal", nullptr, nullptr, sizeof(SplatterComponent_eventSpawnDecal_Parms), Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplatterComponent_SpawnDecal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplatterComponent_SpawnDecal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplatterComponent_SpawnSplatterDecals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplatterComponent_SpawnSplatterDecals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplatterComponent_SpawnSplatterDecals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplatterComponent, nullptr, "SpawnSplatterDecals", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplatterComponent_SpawnSplatterDecals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplatterComponent_SpawnSplatterDecals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplatterComponent_SpawnSplatterDecals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplatterComponent_SpawnSplatterDecals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USplatterComponent_NoRegister()
	{
		return USplatterComponent::StaticClass();
	}
	struct Z_Construct_UClass_USplatterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyTrigger_MetaData[];
#endif
		static void NewProp_bAutomaticallyTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlipAngledDecal_MetaData[];
#endif
		static void NewProp_bFlipAngledDecal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipAngledDecal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngledThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngledThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDecalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDecalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDecalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDecalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecalThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseDecalSizeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CloseDecalSizeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseDecalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CloseDecalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSplatterTraces_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSplatterTraces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplatterTraceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplatterTraceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSplatterDecalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSplatterDecalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSplatterDecalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSplatterDecalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalLifeSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecalLifeSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalFadeInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecalFadeInTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalFadeOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecalFadeOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolDecal_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PoolDecal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactDecal_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ImpactDecal;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HitCloseDecals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitCloseDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitCloseDecals;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HitFlatDecals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitFlatDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitFlatDecals;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HitAngledDecals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitAngledDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitAngledDecals;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SplatterDecals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplatterDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SplatterDecals;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_DamageTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DamageTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCheckDamageTypes_MetaData[];
#endif
		static void NewProp_bCheckDamageTypes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckDamageTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoLoadResources_MetaData[];
#endif
		static void NewProp_bAutoLoadResources_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoLoadResources;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAssetLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnAssetLoaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplatterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USplatterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USplatterComponent_AddTrace, "AddTrace" }, // 3311492209
		{ &Z_Construct_UFunction_USplatterComponent_OnDamage, "OnDamage" }, // 2264090858
		{ &Z_Construct_UFunction_USplatterComponent_OnRep_LastHit, "OnRep_LastHit" }, // 2433934215
		{ &Z_Construct_UFunction_USplatterComponent_SpawnDeathDecal, "SpawnDeathDecal" }, // 1190611263
		{ &Z_Construct_UFunction_USplatterComponent_SpawnDecal, "SpawnDecal" }, // 2397577547
		{ &Z_Construct_UFunction_USplatterComponent_SpawnSplatterDecals, "SpawnSplatterDecals" }, // 2496223166
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SplatterComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_bAutomaticallyTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	void Z_Construct_UClass_USplatterComponent_Statics::NewProp_bAutomaticallyTrigger_SetBit(void* Obj)
	{
		((USplatterComponent*)Obj)->bAutomaticallyTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_bAutomaticallyTrigger = { "bAutomaticallyTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USplatterComponent), &Z_Construct_UClass_USplatterComponent_Statics::NewProp_bAutomaticallyTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_bAutomaticallyTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_bAutomaticallyTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_bFlipAngledDecal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	void Z_Construct_UClass_USplatterComponent_Statics::NewProp_bFlipAngledDecal_SetBit(void* Obj)
	{
		((USplatterComponent*)Obj)->bFlipAngledDecal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_bFlipAngledDecal = { "bFlipAngledDecal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USplatterComponent), &Z_Construct_UClass_USplatterComponent_Statics::NewProp_bFlipAngledDecal_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_bFlipAngledDecal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_bFlipAngledDecal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_TraceOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_TraceOffset = { "TraceOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, TraceOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_TraceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_TraceOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_TraceLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_TraceLength = { "TraceLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, TraceLength), METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_TraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_TraceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_AngledThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_AngledThreshold = { "AngledThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, AngledThreshold), METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_AngledThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_AngledThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_MinDecalSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_MinDecalSize = { "MinDecalSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, MinDecalSize), METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_MinDecalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_MinDecalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_MaxDecalSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_MaxDecalSize = { "MaxDecalSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, MaxDecalSize), METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_MaxDecalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_MaxDecalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_DecalThickness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_DecalThickness = { "DecalThickness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, DecalThickness), METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_DecalThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_DecalThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_CloseDecalSizeMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_CloseDecalSizeMultiplier = { "CloseDecalSizeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, CloseDecalSizeMultiplier), METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_CloseDecalSizeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_CloseDecalSizeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_CloseDecalDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_CloseDecalDistance = { "CloseDecalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, CloseDecalDistance), METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_CloseDecalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_CloseDecalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_NumSplatterTraces_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_NumSplatterTraces = { "NumSplatterTraces", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, NumSplatterTraces), METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_NumSplatterTraces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_NumSplatterTraces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_SplatterTraceLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_SplatterTraceLength = { "SplatterTraceLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, SplatterTraceLength), METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_SplatterTraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_SplatterTraceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_MinSplatterDecalSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_MinSplatterDecalSize = { "MinSplatterDecalSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, MinSplatterDecalSize), METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_MinSplatterDecalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_MinSplatterDecalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_MaxSplatterDecalSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_MaxSplatterDecalSize = { "MaxSplatterDecalSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, MaxSplatterDecalSize), METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_MaxSplatterDecalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_MaxSplatterDecalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_DecalLifeSpan_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_DecalLifeSpan = { "DecalLifeSpan", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, DecalLifeSpan), METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_DecalLifeSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_DecalLifeSpan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_DecalFadeInTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_DecalFadeInTime = { "DecalFadeInTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, DecalFadeInTime), METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_DecalFadeInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_DecalFadeInTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_DecalFadeOutTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_DecalFadeOutTime = { "DecalFadeOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, DecalFadeOutTime), METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_DecalFadeOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_DecalFadeOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_LastHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_LastHit = { "LastHit", "OnRep_LastHit", (EPropertyFlags)0x0010008100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, LastHit), Z_Construct_UScriptStruct_FSimpleHitData, METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_LastHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_LastHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_PoolDecal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_PoolDecal = { "PoolDecal", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, PoolDecal), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_PoolDecal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_PoolDecal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_ImpactDecal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_ImpactDecal = { "ImpactDecal", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, ImpactDecal), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_ImpactDecal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_ImpactDecal_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_HitCloseDecals_Inner = { "HitCloseDecals", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_HitCloseDecals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_HitCloseDecals = { "HitCloseDecals", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, HitCloseDecals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_HitCloseDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_HitCloseDecals_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_HitFlatDecals_Inner = { "HitFlatDecals", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_HitFlatDecals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_HitFlatDecals = { "HitFlatDecals", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, HitFlatDecals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_HitFlatDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_HitFlatDecals_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_HitAngledDecals_Inner = { "HitAngledDecals", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_HitAngledDecals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_HitAngledDecals = { "HitAngledDecals", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, HitAngledDecals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_HitAngledDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_HitAngledDecals_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_SplatterDecals_Inner = { "SplatterDecals", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_SplatterDecals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_SplatterDecals = { "SplatterDecals", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, SplatterDecals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_SplatterDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_SplatterDecals_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_DamageTypes_Inner = { "DamageTypes", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_DamageTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_DamageTypes = { "DamageTypes", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, DamageTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_DamageTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_DamageTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_bCheckDamageTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	void Z_Construct_UClass_USplatterComponent_Statics::NewProp_bCheckDamageTypes_SetBit(void* Obj)
	{
		((USplatterComponent*)Obj)->bCheckDamageTypes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_bCheckDamageTypes = { "bCheckDamageTypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USplatterComponent), &Z_Construct_UClass_USplatterComponent_Statics::NewProp_bCheckDamageTypes_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_bCheckDamageTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_bCheckDamageTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_bAutoLoadResources_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	void Z_Construct_UClass_USplatterComponent_Statics::NewProp_bAutoLoadResources_SetBit(void* Obj)
	{
		((USplatterComponent*)Obj)->bAutoLoadResources = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_bAutoLoadResources = { "bAutoLoadResources", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USplatterComponent), &Z_Construct_UClass_USplatterComponent_Statics::NewProp_bAutoLoadResources_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_bAutoLoadResources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_bAutoLoadResources_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplatterComponent_Statics::NewProp_OnAssetLoaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplatterComponent" },
		{ "ModuleRelativePath", "Public/SplatterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_USplatterComponent_Statics::NewProp_OnAssetLoaded = { "OnAssetLoaded", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplatterComponent, OnAssetLoaded), Z_Construct_UDelegateFunction_UKismetSystemLibrary_OnAssetLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::NewProp_OnAssetLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::NewProp_OnAssetLoaded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplatterComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_bAutomaticallyTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_bFlipAngledDecal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_TraceOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_TraceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_AngledThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_MinDecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_MaxDecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_DecalThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_CloseDecalSizeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_CloseDecalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_NumSplatterTraces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_SplatterTraceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_MinSplatterDecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_MaxSplatterDecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_DecalLifeSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_DecalFadeInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_DecalFadeOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_LastHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_PoolDecal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_ImpactDecal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_HitCloseDecals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_HitCloseDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_HitFlatDecals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_HitFlatDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_HitAngledDecals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_HitAngledDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_SplatterDecals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_SplatterDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_DamageTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_DamageTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_bCheckDamageTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_bAutoLoadResources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplatterComponent_Statics::NewProp_OnAssetLoaded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplatterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplatterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USplatterComponent_Statics::ClassParams = {
		&USplatterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USplatterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USplatterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USplatterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USplatterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USplatterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USplatterComponent, 516098301);
	template<> FPSCONTROLLER_API UClass* StaticClass<USplatterComponent>()
	{
		return USplatterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USplatterComponent(Z_Construct_UClass_USplatterComponent, &USplatterComponent::StaticClass, TEXT("/Script/FPSController"), TEXT("USplatterComponent"), false, nullptr, nullptr, nullptr);

	void USplatterComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_LastHit(TEXT("LastHit"));

		const bool bIsValid = true
			&& Name_LastHit == ClassReps[(int32)ENetFields_Private::LastHit].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USplatterComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplatterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
