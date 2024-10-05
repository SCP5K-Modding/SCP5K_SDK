// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSBallistics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSBallistics() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSBallistics_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSBallistics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FBallisticProjectileData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileData();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UBallisticPhysicsMaterial_NoRegister();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FBallisticHitData();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFPSBallistics::execApplyBallisticDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_User);
		P_GET_TARRAY(FBallisticProjectileData,Z_Param_Projectiles);
		P_GET_PROPERTY(FFloatProperty,Z_Param_IdealRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ProjectileVelocity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(UClass,Z_Param_DamageType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFPSBallistics::ApplyBallisticDamage(Z_Param_User,Z_Param_Projectiles,Z_Param_IdealRange,Z_Param_MaxRange,Z_Param_ProjectileVelocity,Z_Param_Damage,Z_Param_DamageType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSBallistics::execCalculateBallistics)
	{
		P_GET_OBJECT(AActor,Z_Param_User);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ProjectileMass);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ProjectilePiercing);
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream);
		P_GET_STRUCT(FVector,Z_Param_position);
		P_GET_STRUCT(FVector,Z_Param_Velocity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStep);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Drag);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_UBOOL(Z_Param_bWasHit);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutVelocity);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutDistance);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFPSBallistics::CalculateBallistics(Z_Param_User,Z_Param_ProjectileMass,Z_Param_ProjectilePiercing,Z_Param_Out_Stream,Z_Param_position,Z_Param_Velocity,Z_Param_TimeStep,Z_Param_Drag,Z_Param_Time,Z_Param_bWasHit,Z_Param_Out_OutPosition,Z_Param_Out_OutVelocity,Z_Param_Out_OutDistance,Z_Param_Out_OutHit,Z_Param_Out_OutTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSBallistics::execCalculateSpread)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Spread);
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFPSBallistics::CalculateSpread(Z_Param_Spread,Z_Param_Out_Stream);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSBallistics::execConvertFromByte)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Input);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Max);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFPSBallistics::ConvertFromByte(Z_Param_Input,Z_Param_Max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSBallistics::execConvertToByte)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Input);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Max);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=UFPSBallistics::ConvertToByte(Z_Param_Input,Z_Param_Max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSBallistics::execDidHitSurface)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_HitChance);
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFPSBallistics::DidHitSurface(Z_Param_HitChance,Z_Param_Out_Stream);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSBallistics::execGetBallisticDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Velocity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_IdealRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ProjectileVelocity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFPSBallistics::GetBallisticDamage(Z_Param_Distance,Z_Param_Velocity,Z_Param_IdealRange,Z_Param_MaxRange,Z_Param_ProjectileVelocity,Z_Param_Damage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSBallistics::execGetResultingImpactVelocity)
	{
		P_GET_STRUCT(FVector,Z_Param_ProjectileVelocity);
		P_GET_STRUCT(FVector,Z_Param_ImpactNormal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ProjectilePiercing);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ProjectileMass);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SurfaceHardness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SurfaceThickness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SurfaceFriction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SurfaceRicochetChance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UFPSBallistics::GetResultingImpactVelocity(Z_Param_ProjectileVelocity,Z_Param_ImpactNormal,Z_Param_ProjectilePiercing,Z_Param_ProjectileMass,Z_Param_SurfaceHardness,Z_Param_SurfaceThickness,Z_Param_SurfaceFriction,Z_Param_SurfaceRicochetChance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSBallistics::execSimulateBallistics)
	{
		P_GET_OBJECT(AActor,Z_Param_User);
		P_GET_STRUCT(FProjectileData,Z_Param_Projectile);
		P_GET_TARRAY_REF(TSoftObjectPtr<UBallisticPhysicsMaterial>,Z_Param_Out_Physmats);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStep);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL(Z_Param_bFilterHits);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Drag);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRange);
		P_GET_STRUCT(FVector,Z_Param_StartingPosition);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_TARRAY_REF(FBallisticHitData,Z_Param_Out_OutHits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFPSBallistics::SimulateBallistics(Z_Param_User,Z_Param_Projectile,Z_Param_Out_Physmats,Z_Param_TimeStep,Z_Param_Time,Z_Param_Index,Z_Param_bFilterHits,Z_Param_Drag,Z_Param_MaxRange,Z_Param_StartingPosition,Z_Param_Direction,Z_Param_Out_OutHits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSBallistics::execSpawnBallisticEffects)
	{
		P_GET_TARRAY(FBallisticProjectileData,Z_Param_Projectiles);
		P_GET_TARRAY_REF(TSoftObjectPtr<UBallisticPhysicsMaterial>,Z_Param_Out_Physmats);
		P_GET_UBOOL(Z_Param_bTwoSidedDecals);
		P_GET_OBJECT(UStaticMesh,Z_Param_TransparentDecalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFPSBallistics::SpawnBallisticEffects(Z_Param_Projectiles,Z_Param_Out_Physmats,Z_Param_bTwoSidedDecals,Z_Param_TransparentDecalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSBallistics::execVerifyBallistics)
	{
		P_GET_OBJECT(AActor,Z_Param_User);
		P_GET_STRUCT(FProjectileData,Z_Param_Projectile);
		P_GET_TARRAY_REF(TSoftObjectPtr<UBallisticPhysicsMaterial>,Z_Param_Out_Physmats);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStep);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL(Z_Param_bFilterHits);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Drag);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRange);
		P_GET_STRUCT(FVector,Z_Param_StartingPosition);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_TARRAY_REF(FBallisticHitData,Z_Param_Out_Hits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFPSBallistics::VerifyBallistics(Z_Param_User,Z_Param_Projectile,Z_Param_Out_Physmats,Z_Param_TimeStep,Z_Param_Time,Z_Param_Index,Z_Param_bFilterHits,Z_Param_Drag,Z_Param_MaxRange,Z_Param_StartingPosition,Z_Param_Direction,Z_Param_Out_Hits);
		P_NATIVE_END;
	}
	void UFPSBallistics::StaticRegisterNativesUFPSBallistics()
	{
		UClass* Class = UFPSBallistics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyBallisticDamage", &UFPSBallistics::execApplyBallisticDamage },
			{ "CalculateBallistics", &UFPSBallistics::execCalculateBallistics },
			{ "CalculateSpread", &UFPSBallistics::execCalculateSpread },
			{ "ConvertFromByte", &UFPSBallistics::execConvertFromByte },
			{ "ConvertToByte", &UFPSBallistics::execConvertToByte },
			{ "DidHitSurface", &UFPSBallistics::execDidHitSurface },
			{ "GetBallisticDamage", &UFPSBallistics::execGetBallisticDamage },
			{ "GetResultingImpactVelocity", &UFPSBallistics::execGetResultingImpactVelocity },
			{ "SimulateBallistics", &UFPSBallistics::execSimulateBallistics },
			{ "SpawnBallisticEffects", &UFPSBallistics::execSpawnBallisticEffects },
			{ "VerifyBallistics", &UFPSBallistics::execVerifyBallistics },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics
	{
		struct FPSBallistics_eventApplyBallisticDamage_Parms
		{
			AActor* User;
			TArray<FBallisticProjectileData> Projectiles;
			float IdealRange;
			float MaxRange;
			float ProjectileVelocity;
			float Damage;
			TSubclassOf<UDamageType>  DamageType;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Projectiles_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Projectiles;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdealRange;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileVelocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventApplyBallisticDamage_Parms, User), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::NewProp_Projectiles_Inner = { "Projectiles", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBallisticProjectileData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::NewProp_Projectiles = { "Projectiles", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventApplyBallisticDamage_Parms, Projectiles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::NewProp_IdealRange = { "IdealRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventApplyBallisticDamage_Parms, IdealRange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventApplyBallisticDamage_Parms, MaxRange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::NewProp_ProjectileVelocity = { "ProjectileVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventApplyBallisticDamage_Parms, ProjectileVelocity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventApplyBallisticDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventApplyBallisticDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::NewProp_Projectiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::NewProp_Projectiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::NewProp_IdealRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::NewProp_MaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::NewProp_ProjectileVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::NewProp_DamageType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSBallistics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSBallistics, nullptr, "ApplyBallisticDamage", nullptr, nullptr, sizeof(FPSBallistics_eventApplyBallisticDamage_Parms), Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics
	{
		struct FPSBallistics_eventCalculateBallistics_Parms
		{
			AActor* User;
			float ProjectileMass;
			float ProjectilePiercing;
			FRandomStream Stream;
			FVector position;
			FVector Velocity;
			float TimeStep;
			float Drag;
			float Time;
			bool bWasHit;
			FVector OutPosition;
			FVector OutVelocity;
			float OutDistance;
			FHitResult OutHit;
			float OutTime;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileMass;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectilePiercing;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStep;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Drag;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static void NewProp_bWasHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasHit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutVelocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutDistance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventCalculateBallistics_Parms, User), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_ProjectileMass = { "ProjectileMass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventCalculateBallistics_Parms, ProjectileMass), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_ProjectilePiercing = { "ProjectilePiercing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventCalculateBallistics_Parms, ProjectilePiercing), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventCalculateBallistics_Parms, Stream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventCalculateBallistics_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventCalculateBallistics_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_TimeStep = { "TimeStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventCalculateBallistics_Parms, TimeStep), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_Drag = { "Drag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventCalculateBallistics_Parms, Drag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventCalculateBallistics_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_bWasHit_SetBit(void* Obj)
	{
		((FPSBallistics_eventCalculateBallistics_Parms*)Obj)->bWasHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_bWasHit = { "bWasHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSBallistics_eventCalculateBallistics_Parms), &Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_bWasHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventCalculateBallistics_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_OutVelocity = { "OutVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventCalculateBallistics_Parms, OutVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_OutDistance = { "OutDistance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventCalculateBallistics_Parms, OutDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventCalculateBallistics_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_OutTime = { "OutTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventCalculateBallistics_Parms, OutTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_ProjectileMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_ProjectilePiercing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_Stream,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_TimeStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_Drag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_bWasHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_OutPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_OutVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_OutDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_OutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::NewProp_OutTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSBallistics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSBallistics, nullptr, "CalculateBallistics", nullptr, nullptr, sizeof(FPSBallistics_eventCalculateBallistics_Parms), Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSBallistics_CalculateBallistics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSBallistics_CalculateBallistics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSBallistics_CalculateSpread_Statics
	{
		struct FPSBallistics_eventCalculateSpread_Parms
		{
			float Spread;
			FRandomStream Stream;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spread;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_CalculateSpread_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventCalculateSpread_Parms, Spread), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSBallistics_CalculateSpread_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventCalculateSpread_Parms, Stream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_CalculateSpread_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventCalculateSpread_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSBallistics_CalculateSpread_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_CalculateSpread_Statics::NewProp_Spread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_CalculateSpread_Statics::NewProp_Stream,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_CalculateSpread_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSBallistics_CalculateSpread_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSBallistics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSBallistics_CalculateSpread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSBallistics, nullptr, "CalculateSpread", nullptr, nullptr, sizeof(FPSBallistics_eventCalculateSpread_Parms), Z_Construct_UFunction_UFPSBallistics_CalculateSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_CalculateSpread_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSBallistics_CalculateSpread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_CalculateSpread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSBallistics_CalculateSpread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSBallistics_CalculateSpread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSBallistics_ConvertFromByte_Statics
	{
		struct FPSBallistics_eventConvertFromByte_Parms
		{
			uint8 Input;
			float Max;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFPSBallistics_ConvertFromByte_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventConvertFromByte_Parms, Input), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_ConvertFromByte_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventConvertFromByte_Parms, Max), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_ConvertFromByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventConvertFromByte_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSBallistics_ConvertFromByte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_ConvertFromByte_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_ConvertFromByte_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_ConvertFromByte_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSBallistics_ConvertFromByte_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSBallistics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSBallistics_ConvertFromByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSBallistics, nullptr, "ConvertFromByte", nullptr, nullptr, sizeof(FPSBallistics_eventConvertFromByte_Parms), Z_Construct_UFunction_UFPSBallistics_ConvertFromByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_ConvertFromByte_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSBallistics_ConvertFromByte_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_ConvertFromByte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSBallistics_ConvertFromByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSBallistics_ConvertFromByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSBallistics_ConvertToByte_Statics
	{
		struct FPSBallistics_eventConvertToByte_Parms
		{
			float Input;
			float Max;
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_ConvertToByte_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventConvertToByte_Parms, Input), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_ConvertToByte_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventConvertToByte_Parms, Max), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFPSBallistics_ConvertToByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventConvertToByte_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSBallistics_ConvertToByte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_ConvertToByte_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_ConvertToByte_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_ConvertToByte_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSBallistics_ConvertToByte_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSBallistics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSBallistics_ConvertToByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSBallistics, nullptr, "ConvertToByte", nullptr, nullptr, sizeof(FPSBallistics_eventConvertToByte_Parms), Z_Construct_UFunction_UFPSBallistics_ConvertToByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_ConvertToByte_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSBallistics_ConvertToByte_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_ConvertToByte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSBallistics_ConvertToByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSBallistics_ConvertToByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSBallistics_DidHitSurface_Statics
	{
		struct FPSBallistics_eventDidHitSurface_Parms
		{
			float HitChance;
			FRandomStream Stream;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitChance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stream;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_DidHitSurface_Statics::NewProp_HitChance = { "HitChance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventDidHitSurface_Parms, HitChance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSBallistics_DidHitSurface_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventDidHitSurface_Parms, Stream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFPSBallistics_DidHitSurface_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSBallistics_eventDidHitSurface_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSBallistics_DidHitSurface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSBallistics_eventDidHitSurface_Parms), &Z_Construct_UFunction_UFPSBallistics_DidHitSurface_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSBallistics_DidHitSurface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_DidHitSurface_Statics::NewProp_HitChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_DidHitSurface_Statics::NewProp_Stream,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_DidHitSurface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSBallistics_DidHitSurface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSBallistics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSBallistics_DidHitSurface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSBallistics, nullptr, "DidHitSurface", nullptr, nullptr, sizeof(FPSBallistics_eventDidHitSurface_Parms), Z_Construct_UFunction_UFPSBallistics_DidHitSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_DidHitSurface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSBallistics_DidHitSurface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_DidHitSurface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSBallistics_DidHitSurface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSBallistics_DidHitSurface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics
	{
		struct FPSBallistics_eventGetBallisticDamage_Parms
		{
			float Distance;
			float Velocity;
			float IdealRange;
			float MaxRange;
			float ProjectileVelocity;
			float Damage;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdealRange;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileVelocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventGetBallisticDamage_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventGetBallisticDamage_Parms, Velocity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::NewProp_IdealRange = { "IdealRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventGetBallisticDamage_Parms, IdealRange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventGetBallisticDamage_Parms, MaxRange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::NewProp_ProjectileVelocity = { "ProjectileVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventGetBallisticDamage_Parms, ProjectileVelocity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventGetBallisticDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventGetBallisticDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::NewProp_IdealRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::NewProp_MaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::NewProp_ProjectileVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSBallistics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSBallistics, nullptr, "GetBallisticDamage", nullptr, nullptr, sizeof(FPSBallistics_eventGetBallisticDamage_Parms), Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics
	{
		struct FPSBallistics_eventGetResultingImpactVelocity_Parms
		{
			FVector ProjectileVelocity;
			FVector ImpactNormal;
			float ProjectilePiercing;
			float ProjectileMass;
			float SurfaceHardness;
			float SurfaceThickness;
			float SurfaceFriction;
			float SurfaceRicochetChance;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectileVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactNormal;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectilePiercing;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileMass;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SurfaceHardness;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SurfaceThickness;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SurfaceFriction;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SurfaceRicochetChance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::NewProp_ProjectileVelocity = { "ProjectileVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventGetResultingImpactVelocity_Parms, ProjectileVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::NewProp_ImpactNormal = { "ImpactNormal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventGetResultingImpactVelocity_Parms, ImpactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::NewProp_ProjectilePiercing = { "ProjectilePiercing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventGetResultingImpactVelocity_Parms, ProjectilePiercing), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::NewProp_ProjectileMass = { "ProjectileMass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventGetResultingImpactVelocity_Parms, ProjectileMass), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::NewProp_SurfaceHardness = { "SurfaceHardness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventGetResultingImpactVelocity_Parms, SurfaceHardness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::NewProp_SurfaceThickness = { "SurfaceThickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventGetResultingImpactVelocity_Parms, SurfaceThickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::NewProp_SurfaceFriction = { "SurfaceFriction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventGetResultingImpactVelocity_Parms, SurfaceFriction), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::NewProp_SurfaceRicochetChance = { "SurfaceRicochetChance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventGetResultingImpactVelocity_Parms, SurfaceRicochetChance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventGetResultingImpactVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::NewProp_ProjectileVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::NewProp_ImpactNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::NewProp_ProjectilePiercing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::NewProp_ProjectileMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::NewProp_SurfaceHardness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::NewProp_SurfaceThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::NewProp_SurfaceFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::NewProp_SurfaceRicochetChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSBallistics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSBallistics, nullptr, "GetResultingImpactVelocity", nullptr, nullptr, sizeof(FPSBallistics_eventGetResultingImpactVelocity_Parms), Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics
	{
		struct FPSBallistics_eventSimulateBallistics_Parms
		{
			AActor* User;
			FProjectileData Projectile;
			TArray<TSoftObjectPtr<UBallisticPhysicsMaterial> > Physmats;
			float TimeStep;
			float Time;
			int32 Index;
			bool bFilterHits;
			float Drag;
			float MaxRange;
			FVector StartingPosition;
			FVector Direction;
			TArray<FBallisticHitData> OutHits;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Projectile;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Physmats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Physmats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Physmats;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStep;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_bFilterHits_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFilterHits;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Drag;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartingPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutHits;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventSimulateBallistics_Parms, User), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventSimulateBallistics_Parms, Projectile), Z_Construct_UScriptStruct_FProjectileData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_Physmats_Inner = { "Physmats", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBallisticPhysicsMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_Physmats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_Physmats = { "Physmats", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventSimulateBallistics_Parms, Physmats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_Physmats_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_Physmats_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_TimeStep = { "TimeStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventSimulateBallistics_Parms, TimeStep), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventSimulateBallistics_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventSimulateBallistics_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_bFilterHits_SetBit(void* Obj)
	{
		((FPSBallistics_eventSimulateBallistics_Parms*)Obj)->bFilterHits = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_bFilterHits = { "bFilterHits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSBallistics_eventSimulateBallistics_Parms), &Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_bFilterHits_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_Drag = { "Drag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventSimulateBallistics_Parms, Drag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventSimulateBallistics_Parms, MaxRange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_StartingPosition = { "StartingPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventSimulateBallistics_Parms, StartingPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventSimulateBallistics_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBallisticHitData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventSimulateBallistics_Parms, OutHits), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSBallistics_eventSimulateBallistics_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSBallistics_eventSimulateBallistics_Parms), &Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_Projectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_Physmats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_Physmats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_TimeStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_bFilterHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_Drag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_MaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_StartingPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_OutHits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_OutHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSBallistics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSBallistics, nullptr, "SimulateBallistics", nullptr, nullptr, sizeof(FPSBallistics_eventSimulateBallistics_Parms), Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSBallistics_SimulateBallistics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSBallistics_SimulateBallistics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics
	{
		struct FPSBallistics_eventSpawnBallisticEffects_Parms
		{
			TArray<FBallisticProjectileData> Projectiles;
			TArray<TSoftObjectPtr<UBallisticPhysicsMaterial> > Physmats;
			bool bTwoSidedDecals;
			UStaticMesh* TransparentDecalMesh;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Projectiles_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Projectiles;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Physmats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Physmats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Physmats;
		static void NewProp_bTwoSidedDecals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTwoSidedDecals;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransparentDecalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::NewProp_Projectiles_Inner = { "Projectiles", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBallisticProjectileData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::NewProp_Projectiles = { "Projectiles", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventSpawnBallisticEffects_Parms, Projectiles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::NewProp_Physmats_Inner = { "Physmats", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBallisticPhysicsMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::NewProp_Physmats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::NewProp_Physmats = { "Physmats", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventSpawnBallisticEffects_Parms, Physmats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::NewProp_Physmats_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::NewProp_Physmats_MetaData)) };
	void Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::NewProp_bTwoSidedDecals_SetBit(void* Obj)
	{
		((FPSBallistics_eventSpawnBallisticEffects_Parms*)Obj)->bTwoSidedDecals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::NewProp_bTwoSidedDecals = { "bTwoSidedDecals", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSBallistics_eventSpawnBallisticEffects_Parms), &Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::NewProp_bTwoSidedDecals_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::NewProp_TransparentDecalMesh = { "TransparentDecalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventSpawnBallisticEffects_Parms, TransparentDecalMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::NewProp_Projectiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::NewProp_Projectiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::NewProp_Physmats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::NewProp_Physmats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::NewProp_bTwoSidedDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::NewProp_TransparentDecalMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSBallistics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSBallistics, nullptr, "SpawnBallisticEffects", nullptr, nullptr, sizeof(FPSBallistics_eventSpawnBallisticEffects_Parms), Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics
	{
		struct FPSBallistics_eventVerifyBallistics_Parms
		{
			AActor* User;
			FProjectileData Projectile;
			TArray<TSoftObjectPtr<UBallisticPhysicsMaterial> > Physmats;
			float TimeStep;
			float Time;
			int32 Index;
			bool bFilterHits;
			float Drag;
			float MaxRange;
			FVector StartingPosition;
			FVector Direction;
			TArray<FBallisticHitData> Hits;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Projectile;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Physmats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Physmats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Physmats;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStep;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_bFilterHits_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFilterHits;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Drag;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartingPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Hits;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventVerifyBallistics_Parms, User), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventVerifyBallistics_Parms, Projectile), Z_Construct_UScriptStruct_FProjectileData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Physmats_Inner = { "Physmats", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBallisticPhysicsMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Physmats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Physmats = { "Physmats", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventVerifyBallistics_Parms, Physmats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Physmats_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Physmats_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_TimeStep = { "TimeStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventVerifyBallistics_Parms, TimeStep), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventVerifyBallistics_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventVerifyBallistics_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_bFilterHits_SetBit(void* Obj)
	{
		((FPSBallistics_eventVerifyBallistics_Parms*)Obj)->bFilterHits = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_bFilterHits = { "bFilterHits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSBallistics_eventVerifyBallistics_Parms), &Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_bFilterHits_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Drag = { "Drag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventVerifyBallistics_Parms, Drag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventVerifyBallistics_Parms, MaxRange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_StartingPosition = { "StartingPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventVerifyBallistics_Parms, StartingPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventVerifyBallistics_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBallisticHitData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Hits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBallistics_eventVerifyBallistics_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Hits_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Hits_MetaData)) };
	void Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSBallistics_eventVerifyBallistics_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSBallistics_eventVerifyBallistics_Parms), &Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Projectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Physmats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Physmats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_TimeStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_bFilterHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Drag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_MaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_StartingPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Hits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_Hits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSBallistics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSBallistics, nullptr, "VerifyBallistics", nullptr, nullptr, sizeof(FPSBallistics_eventVerifyBallistics_Parms), Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSBallistics_VerifyBallistics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSBallistics_VerifyBallistics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFPSBallistics_NoRegister()
	{
		return UFPSBallistics::StaticClass();
	}
	struct Z_Construct_UClass_UFPSBallistics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFPSBallistics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFPSBallistics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFPSBallistics_ApplyBallisticDamage, "ApplyBallisticDamage" }, // 4090191737
		{ &Z_Construct_UFunction_UFPSBallistics_CalculateBallistics, "CalculateBallistics" }, // 1885609913
		{ &Z_Construct_UFunction_UFPSBallistics_CalculateSpread, "CalculateSpread" }, // 4175424416
		{ &Z_Construct_UFunction_UFPSBallistics_ConvertFromByte, "ConvertFromByte" }, // 1799157540
		{ &Z_Construct_UFunction_UFPSBallistics_ConvertToByte, "ConvertToByte" }, // 2715043830
		{ &Z_Construct_UFunction_UFPSBallistics_DidHitSurface, "DidHitSurface" }, // 1160445310
		{ &Z_Construct_UFunction_UFPSBallistics_GetBallisticDamage, "GetBallisticDamage" }, // 2891109422
		{ &Z_Construct_UFunction_UFPSBallistics_GetResultingImpactVelocity, "GetResultingImpactVelocity" }, // 418467722
		{ &Z_Construct_UFunction_UFPSBallistics_SimulateBallistics, "SimulateBallistics" }, // 4250108990
		{ &Z_Construct_UFunction_UFPSBallistics_SpawnBallisticEffects, "SpawnBallisticEffects" }, // 3700982640
		{ &Z_Construct_UFunction_UFPSBallistics_VerifyBallistics, "VerifyBallistics" }, // 2428962477
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSBallistics_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSBallistics.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSBallistics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFPSBallistics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSBallistics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFPSBallistics_Statics::ClassParams = {
		&UFPSBallistics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFPSBallistics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSBallistics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFPSBallistics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFPSBallistics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFPSBallistics, 3570015416);
	template<> FPSCONTROLLER_API UClass* StaticClass<UFPSBallistics>()
	{
		return UFPSBallistics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFPSBallistics(Z_Construct_UClass_UFPSBallistics, &UFPSBallistics::StaticClass, TEXT("/Script/FPSController"), TEXT("UFPSBallistics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSBallistics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
