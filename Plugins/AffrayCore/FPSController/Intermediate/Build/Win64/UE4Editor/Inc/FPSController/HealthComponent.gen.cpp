// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/HealthComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthComponent() {}
// Cross Module References
	FPSCONTROLLER_API UFunction* Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDamagedDelegate__DelegateSignature();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UHealthComponent();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleHitData();
	FPSCONTROLLER_API UFunction* Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDiedDelegate__DelegateSignature();
	FPSCONTROLLER_API UFunction* Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentHealthChangedDelegate__DelegateSignature();
	FPSCONTROLLER_API UFunction* Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentRevivedDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDamagedDelegate__DelegateSignature_Statics
	{
		struct HealthComponent_eventOnHealthComponentDamagedDelegate_Parms
		{
			UHealthComponent* HealthComponent;
			FSimpleHitData HitData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDamagedDelegate__DelegateSignature_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDamagedDelegate__DelegateSignature_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnHealthComponentDamagedDelegate_Parms, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDamagedDelegate__DelegateSignature_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDamagedDelegate__DelegateSignature_Statics::NewProp_HealthComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDamagedDelegate__DelegateSignature_Statics::NewProp_HitData = { "HitData", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnHealthComponentDamagedDelegate_Parms, HitData), Z_Construct_UScriptStruct_FSimpleHitData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDamagedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDamagedDelegate__DelegateSignature_Statics::NewProp_HealthComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDamagedDelegate__DelegateSignature_Statics::NewProp_HitData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDamagedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDamagedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "OnHealthComponentDamagedDelegate__DelegateSignature", nullptr, nullptr, sizeof(HealthComponent_eventOnHealthComponentDamagedDelegate_Parms), Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDamagedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDamagedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDamagedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDamagedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDamagedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDamagedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDiedDelegate__DelegateSignature_Statics
	{
		struct HealthComponent_eventOnHealthComponentDiedDelegate_Parms
		{
			UHealthComponent* HealthComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDiedDelegate__DelegateSignature_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDiedDelegate__DelegateSignature_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnHealthComponentDiedDelegate_Parms, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDiedDelegate__DelegateSignature_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDiedDelegate__DelegateSignature_Statics::NewProp_HealthComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDiedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDiedDelegate__DelegateSignature_Statics::NewProp_HealthComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDiedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDiedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "OnHealthComponentDiedDelegate__DelegateSignature", nullptr, nullptr, sizeof(HealthComponent_eventOnHealthComponentDiedDelegate_Parms), Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDiedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDiedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDiedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDiedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDiedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDiedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentHealthChangedDelegate__DelegateSignature_Statics
	{
		struct HealthComponent_eventOnHealthComponentHealthChangedDelegate_Parms
		{
			UHealthComponent* HealthComponent;
			float Health;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentHealthChangedDelegate__DelegateSignature_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentHealthChangedDelegate__DelegateSignature_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnHealthComponentHealthChangedDelegate_Parms, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentHealthChangedDelegate__DelegateSignature_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentHealthChangedDelegate__DelegateSignature_Statics::NewProp_HealthComponent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentHealthChangedDelegate__DelegateSignature_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnHealthComponentHealthChangedDelegate_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentHealthChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentHealthChangedDelegate__DelegateSignature_Statics::NewProp_HealthComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentHealthChangedDelegate__DelegateSignature_Statics::NewProp_Health,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentHealthChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentHealthChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "OnHealthComponentHealthChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(HealthComponent_eventOnHealthComponentHealthChangedDelegate_Parms), Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentHealthChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentHealthChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentHealthChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentHealthChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentHealthChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentHealthChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentRevivedDelegate__DelegateSignature_Statics
	{
		struct HealthComponent_eventOnHealthComponentRevivedDelegate_Parms
		{
			UHealthComponent* HealthComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentRevivedDelegate__DelegateSignature_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentRevivedDelegate__DelegateSignature_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnHealthComponentRevivedDelegate_Parms, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentRevivedDelegate__DelegateSignature_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentRevivedDelegate__DelegateSignature_Statics::NewProp_HealthComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentRevivedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentRevivedDelegate__DelegateSignature_Statics::NewProp_HealthComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentRevivedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentRevivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "OnHealthComponentRevivedDelegate__DelegateSignature", nullptr, nullptr, sizeof(HealthComponent_eventOnHealthComponentRevivedDelegate_Parms), Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentRevivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentRevivedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentRevivedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentRevivedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentRevivedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentRevivedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UHealthComponent::execAddHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_HealthDelta);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_GET_UBOOL(Z_Param_bCheckDeath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddHealth(Z_Param_HealthDelta,Z_Param_InstigatedBy,Z_Param_DamageCauser,Z_Param_bCheckDeath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthComponent::execCheckDeath)
	{
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckDeath(Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthComponent::execDie)
	{
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Die(Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthComponent::execGetCurrentHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthComponent::execGetLastHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSimpleHitData*)Z_Param__Result=P_THIS->GetLastHit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthComponent::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthComponent::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthComponent::execOnDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(UDamageType,Z_Param_RecievingDamageType);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_RecievingDamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthComponent::execOnPointDamage)
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
		P_THIS->OnPointDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_InstigatedBy,Z_Param_HitLocation,Z_Param_FHitComponent,Z_Param_BoneName,Z_Param_ShotFromDirection,Z_Param_DamageType,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthComponent::execOnRadialDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FHitResult,Z_Param_HitInfo);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRadialDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_Origin,Z_Param_HitInfo,Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthComponent::execOnRep_bIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bIsDead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthComponent::execOnRep_CurrentHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthComponent::execOnRep_LastHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LastHit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthComponent::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthComponent::execRevive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Revive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthComponent::execSetHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealth);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_GET_UBOOL(Z_Param_bCheckDeath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHealth(Z_Param_NewHealth,Z_Param_InstigatedBy,Z_Param_DamageCauser,Z_Param_bCheckDeath);
		P_NATIVE_END;
	}
	void UHealthComponent::StaticRegisterNativesUHealthComponent()
	{
		UClass* Class = UHealthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddHealth", &UHealthComponent::execAddHealth },
			{ "CheckDeath", &UHealthComponent::execCheckDeath },
			{ "Die", &UHealthComponent::execDie },
			{ "GetCurrentHealth", &UHealthComponent::execGetCurrentHealth },
			{ "GetLastHit", &UHealthComponent::execGetLastHit },
			{ "GetMaxHealth", &UHealthComponent::execGetMaxHealth },
			{ "IsDead", &UHealthComponent::execIsDead },
			{ "OnDamage", &UHealthComponent::execOnDamage },
			{ "OnPointDamage", &UHealthComponent::execOnPointDamage },
			{ "OnRadialDamage", &UHealthComponent::execOnRadialDamage },
			{ "OnRep_bIsDead", &UHealthComponent::execOnRep_bIsDead },
			{ "OnRep_CurrentHealth", &UHealthComponent::execOnRep_CurrentHealth },
			{ "OnRep_LastHit", &UHealthComponent::execOnRep_LastHit },
			{ "Reset", &UHealthComponent::execReset },
			{ "Revive", &UHealthComponent::execRevive },
			{ "SetHealth", &UHealthComponent::execSetHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHealthComponent_AddHealth_Statics
	{
		struct HealthComponent_eventAddHealth_Parms
		{
			float HealthDelta;
			AController* InstigatedBy;
			AActor* DamageCauser;
			bool bCheckDeath;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthDelta;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static void NewProp_bCheckDeath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckDeath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::NewProp_HealthDelta = { "HealthDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventAddHealth_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventAddHealth_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventAddHealth_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::NewProp_bCheckDeath_SetBit(void* Obj)
	{
		((HealthComponent_eventAddHealth_Parms*)Obj)->bCheckDeath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::NewProp_bCheckDeath = { "bCheckDeath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HealthComponent_eventAddHealth_Parms), &Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::NewProp_bCheckDeath_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::NewProp_HealthDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::NewProp_bCheckDeath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "AddHealth", nullptr, nullptr, sizeof(HealthComponent_eventAddHealth_Parms), Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_AddHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_CheckDeath_Statics
	{
		struct HealthComponent_eventCheckDeath_Parms
		{
			AController* InstigatedBy;
			AActor* DamageCauser;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_CheckDeath_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventCheckDeath_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_CheckDeath_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventCheckDeath_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHealthComponent_CheckDeath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HealthComponent_eventCheckDeath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHealthComponent_CheckDeath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HealthComponent_eventCheckDeath_Parms), &Z_Construct_UFunction_UHealthComponent_CheckDeath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_CheckDeath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_CheckDeath_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_CheckDeath_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_CheckDeath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_CheckDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_CheckDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "CheckDeath", nullptr, nullptr, sizeof(HealthComponent_eventCheckDeath_Parms), Z_Construct_UFunction_UHealthComponent_CheckDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_CheckDeath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_CheckDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_CheckDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_CheckDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_CheckDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_Die_Statics
	{
		struct HealthComponent_eventDie_Parms
		{
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_Die_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventDie_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_Die_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventDie_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_Die_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_Die_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_Die_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_Die_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "Die", nullptr, nullptr, sizeof(HealthComponent_eventDie_Parms), Z_Construct_UFunction_UHealthComponent_Die_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_Die_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_Die_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_Die_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_Die()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_Die_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics
	{
		struct HealthComponent_eventGetCurrentHealth_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "GetCurrentHealth", nullptr, nullptr, sizeof(HealthComponent_eventGetCurrentHealth_Parms), Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_GetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_GetLastHit_Statics
	{
		struct HealthComponent_eventGetLastHit_Parms
		{
			FSimpleHitData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHealthComponent_GetLastHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventGetLastHit_Parms, ReturnValue), Z_Construct_UScriptStruct_FSimpleHitData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_GetLastHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_GetLastHit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_GetLastHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_GetLastHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "GetLastHit", nullptr, nullptr, sizeof(HealthComponent_eventGetLastHit_Parms), Z_Construct_UFunction_UHealthComponent_GetLastHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetLastHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_GetLastHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetLastHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_GetLastHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_GetLastHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics
	{
		struct HealthComponent_eventGetMaxHealth_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "GetMaxHealth", nullptr, nullptr, sizeof(HealthComponent_eventGetMaxHealth_Parms), Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_IsDead_Statics
	{
		struct HealthComponent_eventIsDead_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHealthComponent_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HealthComponent_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHealthComponent_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HealthComponent_eventIsDead_Parms), &Z_Construct_UFunction_UHealthComponent_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_IsDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "IsDead", nullptr, nullptr, sizeof(HealthComponent_eventIsDead_Parms), Z_Construct_UFunction_UHealthComponent_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_IsDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_IsDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_IsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_OnDamage_Statics
	{
		struct HealthComponent_eventOnDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			const UDamageType* RecievingDamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecievingDamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RecievingDamageType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_OnDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_OnDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_OnDamage_Statics::NewProp_RecievingDamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_OnDamage_Statics::NewProp_RecievingDamageType = { "RecievingDamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnDamage_Parms, RecievingDamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_OnDamage_Statics::NewProp_RecievingDamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_OnDamage_Statics::NewProp_RecievingDamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_OnDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_OnDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_OnDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnDamage_Statics::NewProp_RecievingDamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_OnDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_OnDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "OnDamage", nullptr, nullptr, sizeof(HealthComponent_eventOnDamage_Parms), Z_Construct_UFunction_UHealthComponent_OnDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_OnDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_OnDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_OnDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_OnDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_OnDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics
	{
		struct HealthComponent_eventOnPointDamage_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnPointDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnPointDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnPointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnPointDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_FHitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_FHitComponent = { "FHitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnPointDamage_Parms, FHitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_FHitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_FHitComponent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnPointDamage_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnPointDamage_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnPointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnPointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_FHitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_ShotFromDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "OnPointDamage", nullptr, nullptr, sizeof(HealthComponent_eventOnPointDamage_Parms), Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_OnPointDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_OnPointDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics
	{
		struct HealthComponent_eventOnRadialDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			const UDamageType* DamageType;
			FVector Origin;
			FHitResult HitInfo;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnRadialDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnRadialDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnRadialDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnRadialDamage_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnRadialDamage_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnRadialDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnRadialDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::NewProp_HitInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "OnRadialDamage", nullptr, nullptr, sizeof(HealthComponent_eventOnRadialDamage_Parms), Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_OnRadialDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_OnRadialDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_OnRep_bIsDead_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_OnRep_bIsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_OnRep_bIsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "OnRep_bIsDead", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_OnRep_bIsDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_OnRep_bIsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_OnRep_bIsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_OnRep_bIsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_OnRep_CurrentHealth_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_OnRep_CurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_OnRep_CurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "OnRep_CurrentHealth", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_OnRep_CurrentHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_OnRep_CurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_OnRep_CurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_OnRep_CurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_OnRep_LastHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_OnRep_LastHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_OnRep_LastHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "OnRep_LastHit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_OnRep_LastHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_OnRep_LastHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_OnRep_LastHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_OnRep_LastHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_Revive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_Revive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_Revive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "Revive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_Revive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_Revive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_Revive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_Revive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_SetHealth_Statics
	{
		struct HealthComponent_eventSetHealth_Parms
		{
			float NewHealth;
			AController* InstigatedBy;
			AActor* DamageCauser;
			bool bCheckDeath;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static void NewProp_bCheckDeath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckDeath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventSetHealth_Parms, NewHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventSetHealth_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventSetHealth_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::NewProp_bCheckDeath_SetBit(void* Obj)
	{
		((HealthComponent_eventSetHealth_Parms*)Obj)->bCheckDeath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::NewProp_bCheckDeath = { "bCheckDeath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HealthComponent_eventSetHealth_Parms), &Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::NewProp_bCheckDeath_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::NewProp_NewHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::NewProp_bCheckDeath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "SetHealth", nullptr, nullptr, sizeof(HealthComponent_eventSetHealth_Parms), Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_SetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHealthComponent_NoRegister()
	{
		return UHealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDamaged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDamaged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDied_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDied;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRevived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRevived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[];
#endif
		static void NewProp_bIsDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastHit;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoneDamageMultipliers_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneDamageMultipliers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneDamageMultipliers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BoneDamageMultipliers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDamageMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultDamageMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHealthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthComponent_AddHealth, "AddHealth" }, // 2017196453
		{ &Z_Construct_UFunction_UHealthComponent_CheckDeath, "CheckDeath" }, // 1881189489
		{ &Z_Construct_UFunction_UHealthComponent_Die, "Die" }, // 3184319857
		{ &Z_Construct_UFunction_UHealthComponent_GetCurrentHealth, "GetCurrentHealth" }, // 1797359147
		{ &Z_Construct_UFunction_UHealthComponent_GetLastHit, "GetLastHit" }, // 981723189
		{ &Z_Construct_UFunction_UHealthComponent_GetMaxHealth, "GetMaxHealth" }, // 4120805600
		{ &Z_Construct_UFunction_UHealthComponent_IsDead, "IsDead" }, // 957743496
		{ &Z_Construct_UFunction_UHealthComponent_OnDamage, "OnDamage" }, // 1655905789
		{ &Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDamagedDelegate__DelegateSignature, "OnHealthComponentDamagedDelegate__DelegateSignature" }, // 295926777
		{ &Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDiedDelegate__DelegateSignature, "OnHealthComponentDiedDelegate__DelegateSignature" }, // 158640625
		{ &Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentHealthChangedDelegate__DelegateSignature, "OnHealthComponentHealthChangedDelegate__DelegateSignature" }, // 3418928553
		{ &Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentRevivedDelegate__DelegateSignature, "OnHealthComponentRevivedDelegate__DelegateSignature" }, // 862743174
		{ &Z_Construct_UFunction_UHealthComponent_OnPointDamage, "OnPointDamage" }, // 1772537872
		{ &Z_Construct_UFunction_UHealthComponent_OnRadialDamage, "OnRadialDamage" }, // 3932613779
		{ &Z_Construct_UFunction_UHealthComponent_OnRep_bIsDead, "OnRep_bIsDead" }, // 3870462949
		{ &Z_Construct_UFunction_UHealthComponent_OnRep_CurrentHealth, "OnRep_CurrentHealth" }, // 690844499
		{ &Z_Construct_UFunction_UHealthComponent_OnRep_LastHit, "OnRep_LastHit" }, // 1682052984
		{ &Z_Construct_UFunction_UHealthComponent_Reset, "Reset" }, // 2197156219
		{ &Z_Construct_UFunction_UHealthComponent_Revive, "Revive" }, // 4199537012
		{ &Z_Construct_UFunction_UHealthComponent_SetHealth, "SetHealth" }, // 429892518
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HealthComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDamaged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDamaged = { "OnDamaged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealthComponent, OnDamaged), Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDamagedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDamaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDamaged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDied_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDied = { "OnDied", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealthComponent, OnDied), Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentDiedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDied_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDied_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnRevived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnRevived = { "OnRevived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealthComponent, OnRevived), Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentRevivedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnRevived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnRevived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnHealthChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealthComponent, OnHealthChanged), Z_Construct_UDelegateFunction_UHealthComponent_OnHealthComponentHealthChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnHealthChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnHealthChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth = { "CurrentHealth", "OnRep_CurrentHealth", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealthComponent, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealthComponent, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_bIsDead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHealthComponent_Statics::NewProp_bIsDead_SetBit(void* Obj)
	{
		((UHealthComponent*)Obj)->bIsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_bIsDead = { "bIsDead", "OnRep_bIsDead", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHealthComponent), &Z_Construct_UClass_UHealthComponent_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::NewProp_bIsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_bIsDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_LastHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_LastHit = { "LastHit", "OnRep_LastHit", (EPropertyFlags)0x0020088100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealthComponent, LastHit), Z_Construct_UScriptStruct_FSimpleHitData, METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::NewProp_LastHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_LastHit_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_BoneDamageMultipliers_ValueProp = { "BoneDamageMultipliers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_BoneDamageMultipliers_Key_KeyProp = { "BoneDamageMultipliers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_BoneDamageMultipliers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_BoneDamageMultipliers = { "BoneDamageMultipliers", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealthComponent, BoneDamageMultipliers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::NewProp_BoneDamageMultipliers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_BoneDamageMultipliers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_DefaultDamageMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_DefaultDamageMultiplier = { "DefaultDamageMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealthComponent, DefaultDamageMultiplier), METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::NewProp_DefaultDamageMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_DefaultDamageMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDamaged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDied,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnRevived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnHealthChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_bIsDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_LastHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_BoneDamageMultipliers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_BoneDamageMultipliers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_BoneDamageMultipliers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_DefaultDamageMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHealthComponent_Statics::ClassParams = {
		&UHealthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHealthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHealthComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHealthComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHealthComponent, 4192938376);
	template<> FPSCONTROLLER_API UClass* StaticClass<UHealthComponent>()
	{
		return UHealthComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHealthComponent(Z_Construct_UClass_UHealthComponent, &UHealthComponent::StaticClass, TEXT("/Script/FPSController"), TEXT("UHealthComponent"), false, nullptr, nullptr, nullptr);

	void UHealthComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentHealth(TEXT("CurrentHealth"));
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_bIsDead(TEXT("bIsDead"));
		static const FName Name_LastHit(TEXT("LastHit"));

		const bool bIsValid = true
			&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_bIsDead == ClassReps[(int32)ENetFields_Private::bIsDead].Property->GetFName()
			&& Name_LastHit == ClassReps[(int32)ENetFields_Private::LastHit].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UHealthComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
