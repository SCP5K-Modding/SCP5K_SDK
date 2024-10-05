// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIWS/Public/UIWSWaterBody.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIWSWaterBody() {}
// Cross Module References
	UIWS_API UClass* Z_Construct_UClass_AUIWSWaterBody_NoRegister();
	UIWS_API UClass* Z_Construct_UClass_AUIWSWaterBody();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UIWS();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UIWS_API UClass* Z_Construct_UClass_AUIWSManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	UIWS_API UClass* Z_Construct_UClass_AUIWSCapture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDrawToRenderTargetContext();
// End Cross Module References
	DEFINE_FUNCTION(AUIWSWaterBody::execApplyForceAtLocation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fStrength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_fSizePercent);
		P_GET_STRUCT(FVector,Z_Param_HitLocation);
		P_GET_UBOOL(Z_Param_bWithEffect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyForceAtLocation(Z_Param_fStrength,Z_Param_fSizePercent,Z_Param_HitLocation,Z_Param_bWithEffect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUIWSWaterBody::execOnWaterOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWaterOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUIWSWaterBody::execPointDamageSplashAtlocation)
	{
		P_GET_STRUCT(FVector,Z_Param_SplashLoc);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PointDamageSplashAtlocation(Z_Param_SplashLoc,Z_Param_DamageAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUIWSWaterBody::execRadialDamageSplashAtlocation)
	{
		P_GET_STRUCT(FVector,Z_Param_SplashLoc);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RadialDamageSplashAtlocation(Z_Param_SplashLoc,Z_Param_DamageAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUIWSWaterBody::execRequestPriorityManual)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestPriorityManual();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUIWSWaterBody::execSplashAtlocation)
	{
		P_GET_STRUCT(FVector,Z_Param_SplashLoc);
		P_GET_STRUCT(FVector,Z_Param_SplachVelocity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SplashStrengthPercent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SplashAtlocation(Z_Param_SplashLoc,Z_Param_SplachVelocity,Z_Param_SplashStrengthPercent);
		P_NATIVE_END;
	}
	static FName NAME_AUIWSWaterBody_ForceAppliedAtLocation = FName(TEXT("ForceAppliedAtLocation"));
	void AUIWSWaterBody::ForceAppliedAtLocation(FVector RippleLoc, float Strength)
	{
		UIWSWaterBody_eventForceAppliedAtLocation_Parms Parms;
		Parms.RippleLoc=RippleLoc;
		Parms.Strength=Strength;
		ProcessEvent(FindFunctionChecked(NAME_AUIWSWaterBody_ForceAppliedAtLocation),&Parms);
	}
	static FName NAME_AUIWSWaterBody_OnPointDamageEffect = FName(TEXT("OnPointDamageEffect"));
	void AUIWSWaterBody::OnPointDamageEffect(FVector RippleLocation, float RippleStrengthScaled, float RippleSizeScaled, float DamageAmount)
	{
		UIWSWaterBody_eventOnPointDamageEffect_Parms Parms;
		Parms.RippleLocation=RippleLocation;
		Parms.RippleStrengthScaled=RippleStrengthScaled;
		Parms.RippleSizeScaled=RippleSizeScaled;
		Parms.DamageAmount=DamageAmount;
		ProcessEvent(FindFunctionChecked(NAME_AUIWSWaterBody_OnPointDamageEffect),&Parms);
	}
	static FName NAME_AUIWSWaterBody_OnRadialDamageEffect = FName(TEXT("OnRadialDamageEffect"));
	void AUIWSWaterBody::OnRadialDamageEffect(FVector RippleLocation, float RippleStrengthScaled, float RippleSizeScaled, float DamageAmount)
	{
		UIWSWaterBody_eventOnRadialDamageEffect_Parms Parms;
		Parms.RippleLocation=RippleLocation;
		Parms.RippleStrengthScaled=RippleStrengthScaled;
		Parms.RippleSizeScaled=RippleSizeScaled;
		Parms.DamageAmount=DamageAmount;
		ProcessEvent(FindFunctionChecked(NAME_AUIWSWaterBody_OnRadialDamageEffect),&Parms);
	}
	static FName NAME_AUIWSWaterBody_SplashedAtLocation = FName(TEXT("SplashedAtLocation"));
	void AUIWSWaterBody::SplashedAtLocation(FVector SplashLoc, FVector SplashVelocity, float Strength)
	{
		UIWSWaterBody_eventSplashedAtLocation_Parms Parms;
		Parms.SplashLoc=SplashLoc;
		Parms.SplashVelocity=SplashVelocity;
		Parms.Strength=Strength;
		ProcessEvent(FindFunctionChecked(NAME_AUIWSWaterBody_SplashedAtLocation),&Parms);
	}
	void AUIWSWaterBody::StaticRegisterNativesAUIWSWaterBody()
	{
		UClass* Class = AUIWSWaterBody::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyForceAtLocation", &AUIWSWaterBody::execApplyForceAtLocation },
			{ "OnWaterOverlap", &AUIWSWaterBody::execOnWaterOverlap },
			{ "PointDamageSplashAtlocation", &AUIWSWaterBody::execPointDamageSplashAtlocation },
			{ "RadialDamageSplashAtlocation", &AUIWSWaterBody::execRadialDamageSplashAtlocation },
			{ "RequestPriorityManual", &AUIWSWaterBody::execRequestPriorityManual },
			{ "SplashAtlocation", &AUIWSWaterBody::execSplashAtlocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUIWSWaterBody_ApplyForceAtLocation_Statics
	{
		struct UIWSWaterBody_eventApplyForceAtLocation_Parms
		{
			float fStrength;
			float fSizePercent;
			FVector HitLocation;
			bool bWithEffect;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fStrength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fSizePercent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static void NewProp_bWithEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWithEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUIWSWaterBody_ApplyForceAtLocation_Statics::NewProp_fStrength = { "fStrength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventApplyForceAtLocation_Parms, fStrength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUIWSWaterBody_ApplyForceAtLocation_Statics::NewProp_fSizePercent = { "fSizePercent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventApplyForceAtLocation_Parms, fSizePercent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUIWSWaterBody_ApplyForceAtLocation_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventApplyForceAtLocation_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUIWSWaterBody_ApplyForceAtLocation_Statics::NewProp_bWithEffect_SetBit(void* Obj)
	{
		((UIWSWaterBody_eventApplyForceAtLocation_Parms*)Obj)->bWithEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUIWSWaterBody_ApplyForceAtLocation_Statics::NewProp_bWithEffect = { "bWithEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIWSWaterBody_eventApplyForceAtLocation_Parms), &Z_Construct_UFunction_AUIWSWaterBody_ApplyForceAtLocation_Statics::NewProp_bWithEffect_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIWSWaterBody_ApplyForceAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_ApplyForceAtLocation_Statics::NewProp_fStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_ApplyForceAtLocation_Statics::NewProp_fSizePercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_ApplyForceAtLocation_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_ApplyForceAtLocation_Statics::NewProp_bWithEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIWSWaterBody_ApplyForceAtLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIWSWaterBody_ApplyForceAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIWSWaterBody, nullptr, "ApplyForceAtLocation", nullptr, nullptr, sizeof(UIWSWaterBody_eventApplyForceAtLocation_Parms), Z_Construct_UFunction_AUIWSWaterBody_ApplyForceAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_ApplyForceAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIWSWaterBody_ApplyForceAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_ApplyForceAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIWSWaterBody_ApplyForceAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIWSWaterBody_ApplyForceAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIWSWaterBody_ForceAppliedAtLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RippleLoc;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUIWSWaterBody_ForceAppliedAtLocation_Statics::NewProp_RippleLoc = { "RippleLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventForceAppliedAtLocation_Parms, RippleLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUIWSWaterBody_ForceAppliedAtLocation_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventForceAppliedAtLocation_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIWSWaterBody_ForceAppliedAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_ForceAppliedAtLocation_Statics::NewProp_RippleLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_ForceAppliedAtLocation_Statics::NewProp_Strength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIWSWaterBody_ForceAppliedAtLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIWSWaterBody_ForceAppliedAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIWSWaterBody, nullptr, "ForceAppliedAtLocation", nullptr, nullptr, sizeof(UIWSWaterBody_eventForceAppliedAtLocation_Parms), Z_Construct_UFunction_AUIWSWaterBody_ForceAppliedAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_ForceAppliedAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIWSWaterBody_ForceAppliedAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_ForceAppliedAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIWSWaterBody_ForceAppliedAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIWSWaterBody_ForceAppliedAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIWSWaterBody_OnPointDamageEffect_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RippleLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RippleStrengthScaled;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RippleSizeScaled;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUIWSWaterBody_OnPointDamageEffect_Statics::NewProp_RippleLocation = { "RippleLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventOnPointDamageEffect_Parms, RippleLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUIWSWaterBody_OnPointDamageEffect_Statics::NewProp_RippleStrengthScaled = { "RippleStrengthScaled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventOnPointDamageEffect_Parms, RippleStrengthScaled), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUIWSWaterBody_OnPointDamageEffect_Statics::NewProp_RippleSizeScaled = { "RippleSizeScaled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventOnPointDamageEffect_Parms, RippleSizeScaled), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUIWSWaterBody_OnPointDamageEffect_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventOnPointDamageEffect_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIWSWaterBody_OnPointDamageEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_OnPointDamageEffect_Statics::NewProp_RippleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_OnPointDamageEffect_Statics::NewProp_RippleStrengthScaled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_OnPointDamageEffect_Statics::NewProp_RippleSizeScaled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_OnPointDamageEffect_Statics::NewProp_DamageAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIWSWaterBody_OnPointDamageEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIWSWaterBody_OnPointDamageEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIWSWaterBody, nullptr, "OnPointDamageEffect", nullptr, nullptr, sizeof(UIWSWaterBody_eventOnPointDamageEffect_Parms), Z_Construct_UFunction_AUIWSWaterBody_OnPointDamageEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_OnPointDamageEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIWSWaterBody_OnPointDamageEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_OnPointDamageEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIWSWaterBody_OnPointDamageEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIWSWaterBody_OnPointDamageEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIWSWaterBody_OnRadialDamageEffect_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RippleLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RippleStrengthScaled;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RippleSizeScaled;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUIWSWaterBody_OnRadialDamageEffect_Statics::NewProp_RippleLocation = { "RippleLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventOnRadialDamageEffect_Parms, RippleLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUIWSWaterBody_OnRadialDamageEffect_Statics::NewProp_RippleStrengthScaled = { "RippleStrengthScaled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventOnRadialDamageEffect_Parms, RippleStrengthScaled), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUIWSWaterBody_OnRadialDamageEffect_Statics::NewProp_RippleSizeScaled = { "RippleSizeScaled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventOnRadialDamageEffect_Parms, RippleSizeScaled), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUIWSWaterBody_OnRadialDamageEffect_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventOnRadialDamageEffect_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIWSWaterBody_OnRadialDamageEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_OnRadialDamageEffect_Statics::NewProp_RippleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_OnRadialDamageEffect_Statics::NewProp_RippleStrengthScaled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_OnRadialDamageEffect_Statics::NewProp_RippleSizeScaled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_OnRadialDamageEffect_Statics::NewProp_DamageAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIWSWaterBody_OnRadialDamageEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIWSWaterBody_OnRadialDamageEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIWSWaterBody, nullptr, "OnRadialDamageEffect", nullptr, nullptr, sizeof(UIWSWaterBody_eventOnRadialDamageEffect_Parms), Z_Construct_UFunction_AUIWSWaterBody_OnRadialDamageEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_OnRadialDamageEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIWSWaterBody_OnRadialDamageEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_OnRadialDamageEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIWSWaterBody_OnRadialDamageEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIWSWaterBody_OnRadialDamageEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics
	{
		struct UIWSWaterBody_eventOnWaterOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventOnWaterOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventOnWaterOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventOnWaterOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventOnWaterOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((UIWSWaterBody_eventOnWaterOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIWSWaterBody_eventOnWaterOverlap_Parms), &Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventOnWaterOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIWSWaterBody, nullptr, "OnWaterOverlap", nullptr, nullptr, sizeof(UIWSWaterBody_eventOnWaterOverlap_Parms), Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIWSWaterBody_PointDamageSplashAtlocation_Statics
	{
		struct UIWSWaterBody_eventPointDamageSplashAtlocation_Parms
		{
			FVector SplashLoc;
			float DamageAmount;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplashLoc;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUIWSWaterBody_PointDamageSplashAtlocation_Statics::NewProp_SplashLoc = { "SplashLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventPointDamageSplashAtlocation_Parms, SplashLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUIWSWaterBody_PointDamageSplashAtlocation_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventPointDamageSplashAtlocation_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIWSWaterBody_PointDamageSplashAtlocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_PointDamageSplashAtlocation_Statics::NewProp_SplashLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_PointDamageSplashAtlocation_Statics::NewProp_DamageAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIWSWaterBody_PointDamageSplashAtlocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIWSWaterBody_PointDamageSplashAtlocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIWSWaterBody, nullptr, "PointDamageSplashAtlocation", nullptr, nullptr, sizeof(UIWSWaterBody_eventPointDamageSplashAtlocation_Parms), Z_Construct_UFunction_AUIWSWaterBody_PointDamageSplashAtlocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_PointDamageSplashAtlocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIWSWaterBody_PointDamageSplashAtlocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_PointDamageSplashAtlocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIWSWaterBody_PointDamageSplashAtlocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIWSWaterBody_PointDamageSplashAtlocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIWSWaterBody_RadialDamageSplashAtlocation_Statics
	{
		struct UIWSWaterBody_eventRadialDamageSplashAtlocation_Parms
		{
			FVector SplashLoc;
			float DamageAmount;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplashLoc;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUIWSWaterBody_RadialDamageSplashAtlocation_Statics::NewProp_SplashLoc = { "SplashLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventRadialDamageSplashAtlocation_Parms, SplashLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUIWSWaterBody_RadialDamageSplashAtlocation_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventRadialDamageSplashAtlocation_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIWSWaterBody_RadialDamageSplashAtlocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_RadialDamageSplashAtlocation_Statics::NewProp_SplashLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_RadialDamageSplashAtlocation_Statics::NewProp_DamageAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIWSWaterBody_RadialDamageSplashAtlocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIWSWaterBody_RadialDamageSplashAtlocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIWSWaterBody, nullptr, "RadialDamageSplashAtlocation", nullptr, nullptr, sizeof(UIWSWaterBody_eventRadialDamageSplashAtlocation_Parms), Z_Construct_UFunction_AUIWSWaterBody_RadialDamageSplashAtlocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_RadialDamageSplashAtlocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIWSWaterBody_RadialDamageSplashAtlocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_RadialDamageSplashAtlocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIWSWaterBody_RadialDamageSplashAtlocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIWSWaterBody_RadialDamageSplashAtlocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIWSWaterBody_RequestPriorityManual_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIWSWaterBody_RequestPriorityManual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIWSWaterBody_RequestPriorityManual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIWSWaterBody, nullptr, "RequestPriorityManual", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIWSWaterBody_RequestPriorityManual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_RequestPriorityManual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIWSWaterBody_RequestPriorityManual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIWSWaterBody_RequestPriorityManual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIWSWaterBody_SplashAtlocation_Statics
	{
		struct UIWSWaterBody_eventSplashAtlocation_Parms
		{
			FVector SplashLoc;
			FVector SplachVelocity;
			float SplashStrengthPercent;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplashLoc;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplachVelocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplashStrengthPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUIWSWaterBody_SplashAtlocation_Statics::NewProp_SplashLoc = { "SplashLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventSplashAtlocation_Parms, SplashLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUIWSWaterBody_SplashAtlocation_Statics::NewProp_SplachVelocity = { "SplachVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventSplashAtlocation_Parms, SplachVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUIWSWaterBody_SplashAtlocation_Statics::NewProp_SplashStrengthPercent = { "SplashStrengthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventSplashAtlocation_Parms, SplashStrengthPercent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIWSWaterBody_SplashAtlocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_SplashAtlocation_Statics::NewProp_SplashLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_SplashAtlocation_Statics::NewProp_SplachVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_SplashAtlocation_Statics::NewProp_SplashStrengthPercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIWSWaterBody_SplashAtlocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIWSWaterBody_SplashAtlocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIWSWaterBody, nullptr, "SplashAtlocation", nullptr, nullptr, sizeof(UIWSWaterBody_eventSplashAtlocation_Parms), Z_Construct_UFunction_AUIWSWaterBody_SplashAtlocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_SplashAtlocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIWSWaterBody_SplashAtlocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_SplashAtlocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIWSWaterBody_SplashAtlocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIWSWaterBody_SplashAtlocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIWSWaterBody_SplashedAtLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplashLoc;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplashVelocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUIWSWaterBody_SplashedAtLocation_Statics::NewProp_SplashLoc = { "SplashLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventSplashedAtLocation_Parms, SplashLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUIWSWaterBody_SplashedAtLocation_Statics::NewProp_SplashVelocity = { "SplashVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventSplashedAtLocation_Parms, SplashVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUIWSWaterBody_SplashedAtLocation_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIWSWaterBody_eventSplashedAtLocation_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIWSWaterBody_SplashedAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_SplashedAtLocation_Statics::NewProp_SplashLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_SplashedAtLocation_Statics::NewProp_SplashVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIWSWaterBody_SplashedAtLocation_Statics::NewProp_Strength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIWSWaterBody_SplashedAtLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIWSWaterBody_SplashedAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIWSWaterBody, nullptr, "SplashedAtLocation", nullptr, nullptr, sizeof(UIWSWaterBody_eventSplashedAtLocation_Parms), Z_Construct_UFunction_AUIWSWaterBody_SplashedAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_SplashedAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIWSWaterBody_SplashedAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIWSWaterBody_SplashedAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIWSWaterBody_SplashedAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIWSWaterBody_SplashedAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUIWSWaterBody_NoRegister()
	{
		return AUIWSWaterBody::StaticClass();
	}
	struct Z_Construct_UClass_AUIWSWaterBody_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_MyManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myCaptureActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_myCaptureActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XMeshes_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_XMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_XMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YMeshes_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_YMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_YMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentYArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentYArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentYArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentYArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterSurfaceMeshes_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaterSurfaceMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterSurfaceMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WaterSurfaceMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideWaterMaterials_MetaData[];
#endif
		static void NewProp_OverrideWaterMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverrideWaterMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomWaterMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomWaterMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomWaterMaterialDistant_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomWaterMaterialDistant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInteractive_MetaData[];
#endif
		static void NewProp_bIsInteractive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInteractive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimulateWhileNotVisible_MetaData[];
#endif
		static void NewProp_bSimulateWhileNotVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulateWhileNotVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableAutomaticInteraction_MetaData[];
#endif
		static void NewProp_bDisableAutomaticInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableAutomaticInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableAutomaticInteractionXbox_MetaData[];
#endif
		static void NewProp_bDisableAutomaticInteractionXbox_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableAutomaticInteractionXbox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableAutomaticInteractionPS4_MetaData[];
#endif
		static void NewProp_bDisableAutomaticInteractionPS4_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableAutomaticInteractionPS4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableAutomaticInteractionNintendoSwitch_MetaData[];
#endif
		static void NewProp_bDisableAutomaticInteractionNintendoSwitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableAutomaticInteractionNintendoSwitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableAutomaticInteractionAndroid_MetaData[];
#endif
		static void NewProp_bDisableAutomaticInteractionAndroid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableAutomaticInteractionAndroid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableAutomaticInteractionIOS_MetaData[];
#endif
		static void NewProp_bDisableAutomaticInteractionIOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableAutomaticInteractionIOS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureRes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CaptureRes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTileScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTileScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimResMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SimResMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTieSimToFPS_MetaData[];
#endif
		static void NewProp_bTieSimToFPS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTieSimToFPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractOnDamage_MetaData[];
#endif
		static void NewProp_InteractOnDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InteractOnDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitTickRate_MetaData[];
#endif
		static void NewProp_bLimitTickRate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitTickRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsEdgeReflection_MetaData[];
#endif
		static void NewProp_bSupportsEdgeReflection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsEdgeReflection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EdgeDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CaptureOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaterColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeepOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeepOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShallowOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShallowOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthTransitionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthTransitionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShallowEdgeFadeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShallowEdgeFadeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShallowEdgeFadePower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShallowEdgeFadePower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomCollisionProfile_MetaData[];
#endif
		static void NewProp_bCustomCollisionProfile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomCollisionProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCollisionProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomCollisionProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableParticleOnDamage_MetaData[];
#endif
		static void NewProp_bEnableParticleOnDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableParticleOnDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableParticleOnCollision_MetaData[];
#endif
		static void NewProp_bEnableParticleOnCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableParticleOnCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideParticleSettings_MetaData[];
#endif
		static void NewProp_bOverrideParticleSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideParticleSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionEffectScaleMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractionEffectScaleMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionEffectScaleMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractionEffectScaleMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEffectScaleMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageEffectScaleMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEffectScaleMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageEffectScaleMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaterMeshComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hellmats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hellmats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_hellmats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_activeheight0_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_activeheight0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_activeheight1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_activeheight1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_activeheight2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_activeheight2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_activenormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_activenormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_localheight0_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_localheight0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_localheight1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_localheight1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_localheight2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_localheight2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_localnormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_localnormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_globalheight0_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_globalheight0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_globalheight1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_globalheight1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_globalheight2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_globalheight2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_globalnormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_globalnormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myCaptureRT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_myCaptureRT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceSplatMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForceSplatMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManForceSplatMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManForceSplatMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightSimMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeightSimMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComputeNormalMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComputeNormalMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PPUnderWaterMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PPUnderWaterMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PPUnderWaterMID_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PPUnderWaterMID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSplashEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultSplashEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterMID_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaterMID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterMIDLOD1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaterMIDLOD1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterMeshSM_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaterMeshSM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaterVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightSimInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeightSimInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceSplatInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForceSplatInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualSplatInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManualSplatInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComputeNormalInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComputeNormalInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Canvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Canvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasMan_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CanvasMan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeMan_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SizeMan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextMan_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContextMan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUIWSWaterBody_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UIWS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUIWSWaterBody_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUIWSWaterBody_ApplyForceAtLocation, "ApplyForceAtLocation" }, // 306266887
		{ &Z_Construct_UFunction_AUIWSWaterBody_ForceAppliedAtLocation, "ForceAppliedAtLocation" }, // 3248165880
		{ &Z_Construct_UFunction_AUIWSWaterBody_OnPointDamageEffect, "OnPointDamageEffect" }, // 1021751734
		{ &Z_Construct_UFunction_AUIWSWaterBody_OnRadialDamageEffect, "OnRadialDamageEffect" }, // 114000841
		{ &Z_Construct_UFunction_AUIWSWaterBody_OnWaterOverlap, "OnWaterOverlap" }, // 2663715173
		{ &Z_Construct_UFunction_AUIWSWaterBody_PointDamageSplashAtlocation, "PointDamageSplashAtlocation" }, // 3351327570
		{ &Z_Construct_UFunction_AUIWSWaterBody_RadialDamageSplashAtlocation, "RadialDamageSplashAtlocation" }, // 3341836055
		{ &Z_Construct_UFunction_AUIWSWaterBody_RequestPriorityManual, "RequestPriorityManual" }, // 3655151933
		{ &Z_Construct_UFunction_AUIWSWaterBody_SplashAtlocation, "SplashAtlocation" }, // 179399956
		{ &Z_Construct_UFunction_AUIWSWaterBody_SplashedAtLocation, "SplashedAtLocation" }, // 3225925152
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UIWSWaterBody.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_MyManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_MyManager = { "MyManager", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, MyManager), Z_Construct_UClass_AUIWSManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_MyManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_MyManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_BoxComp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_BoxComp = { "BoxComp", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_BoxComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_BoxComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_myCaptureActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_myCaptureActor = { "myCaptureActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, myCaptureActor), Z_Construct_UClass_AUIWSCapture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_myCaptureActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_myCaptureActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_XMeshes_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_XMeshes_Inner = { "XMeshes", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_XMeshes_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_XMeshes_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_XMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_XMeshes = { "XMeshes", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, XMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_XMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_XMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_YMeshes_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_YMeshes_Inner = { "YMeshes", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_YMeshes_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_YMeshes_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_YMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_YMeshes = { "YMeshes", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, YMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_YMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_YMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CurrentYArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CurrentYArray_Inner = { "CurrentYArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CurrentYArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CurrentYArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CurrentYArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CurrentYArray = { "CurrentYArray", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, CurrentYArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CurrentYArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CurrentYArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterSurfaceMeshes_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterSurfaceMeshes_Inner = { "WaterSurfaceMeshes", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterSurfaceMeshes_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterSurfaceMeshes_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterSurfaceMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterSurfaceMeshes = { "WaterSurfaceMeshes", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, WaterSurfaceMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterSurfaceMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterSurfaceMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_OverrideWaterMaterials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	void Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_OverrideWaterMaterials_SetBit(void* Obj)
	{
		((AUIWSWaterBody*)Obj)->OverrideWaterMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_OverrideWaterMaterials = { "OverrideWaterMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSWaterBody), &Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_OverrideWaterMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_OverrideWaterMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_OverrideWaterMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CustomWaterMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CustomWaterMaterial = { "CustomWaterMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, CustomWaterMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CustomWaterMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CustomWaterMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CustomWaterMaterialDistant_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CustomWaterMaterialDistant = { "CustomWaterMaterialDistant", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, CustomWaterMaterialDistant), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CustomWaterMaterialDistant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CustomWaterMaterialDistant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bIsInteractive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	void Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bIsInteractive_SetBit(void* Obj)
	{
		((AUIWSWaterBody*)Obj)->bIsInteractive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bIsInteractive = { "bIsInteractive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSWaterBody), &Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bIsInteractive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bIsInteractive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bIsInteractive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bSimulateWhileNotVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	void Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bSimulateWhileNotVisible_SetBit(void* Obj)
	{
		((AUIWSWaterBody*)Obj)->bSimulateWhileNotVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bSimulateWhileNotVisible = { "bSimulateWhileNotVisible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSWaterBody), &Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bSimulateWhileNotVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bSimulateWhileNotVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bSimulateWhileNotVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	void Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteraction_SetBit(void* Obj)
	{
		((AUIWSWaterBody*)Obj)->bDisableAutomaticInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteraction = { "bDisableAutomaticInteraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSWaterBody), &Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionXbox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	void Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionXbox_SetBit(void* Obj)
	{
		((AUIWSWaterBody*)Obj)->bDisableAutomaticInteractionXbox = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionXbox = { "bDisableAutomaticInteractionXbox", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSWaterBody), &Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionXbox_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionXbox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionXbox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionPS4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	void Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionPS4_SetBit(void* Obj)
	{
		((AUIWSWaterBody*)Obj)->bDisableAutomaticInteractionPS4 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionPS4 = { "bDisableAutomaticInteractionPS4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSWaterBody), &Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionPS4_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionPS4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionPS4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionNintendoSwitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	void Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionNintendoSwitch_SetBit(void* Obj)
	{
		((AUIWSWaterBody*)Obj)->bDisableAutomaticInteractionNintendoSwitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionNintendoSwitch = { "bDisableAutomaticInteractionNintendoSwitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSWaterBody), &Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionNintendoSwitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionNintendoSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionNintendoSwitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionAndroid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	void Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionAndroid_SetBit(void* Obj)
	{
		((AUIWSWaterBody*)Obj)->bDisableAutomaticInteractionAndroid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionAndroid = { "bDisableAutomaticInteractionAndroid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSWaterBody), &Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionAndroid_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionAndroid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionAndroid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionIOS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	void Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionIOS_SetBit(void* Obj)
	{
		((AUIWSWaterBody*)Obj)->bDisableAutomaticInteractionIOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionIOS = { "bDisableAutomaticInteractionIOS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSWaterBody), &Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionIOS_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionIOS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionIOS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CaptureRes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CaptureRes = { "CaptureRes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, CaptureRes), METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CaptureRes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CaptureRes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_MaxTileScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_MaxTileScale = { "MaxTileScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, MaxTileScale), METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_MaxTileScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_MaxTileScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_SimResMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_SimResMin = { "SimResMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, SimResMin), METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_SimResMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_SimResMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bTieSimToFPS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	void Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bTieSimToFPS_SetBit(void* Obj)
	{
		((AUIWSWaterBody*)Obj)->bTieSimToFPS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bTieSimToFPS = { "bTieSimToFPS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSWaterBody), &Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bTieSimToFPS_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bTieSimToFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bTieSimToFPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractOnDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	void Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractOnDamage_SetBit(void* Obj)
	{
		((AUIWSWaterBody*)Obj)->InteractOnDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractOnDamage = { "InteractOnDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSWaterBody), &Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractOnDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractOnDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractOnDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bLimitTickRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	void Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bLimitTickRate_SetBit(void* Obj)
	{
		((AUIWSWaterBody*)Obj)->bLimitTickRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bLimitTickRate = { "bLimitTickRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSWaterBody), &Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bLimitTickRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bLimitTickRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bLimitTickRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_TickRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_TickRate = { "TickRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, TickRate), METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_TickRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_TickRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DamageScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DamageScale = { "DamageScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, DamageScale), METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DamageScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DamageScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bSupportsEdgeReflection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	void Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bSupportsEdgeReflection_SetBit(void* Obj)
	{
		((AUIWSWaterBody*)Obj)->bSupportsEdgeReflection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bSupportsEdgeReflection = { "bSupportsEdgeReflection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSWaterBody), &Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bSupportsEdgeReflection_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bSupportsEdgeReflection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bSupportsEdgeReflection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_EdgeDepth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_EdgeDepth = { "EdgeDepth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, EdgeDepth), METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_EdgeDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_EdgeDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CaptureOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CaptureOffset = { "CaptureOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, CaptureOffset), METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CaptureOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CaptureOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterColor = { "WaterColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, WaterColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DeepOpacity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DeepOpacity = { "DeepOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, DeepOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DeepOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DeepOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ShallowOpacity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ShallowOpacity = { "ShallowOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, ShallowOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ShallowOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ShallowOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DepthTransitionDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DepthTransitionDistance = { "DepthTransitionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, DepthTransitionDistance), METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DepthTransitionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DepthTransitionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ShallowEdgeFadeDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ShallowEdgeFadeDistance = { "ShallowEdgeFadeDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, ShallowEdgeFadeDistance), METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ShallowEdgeFadeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ShallowEdgeFadeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ShallowEdgeFadePower_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ShallowEdgeFadePower = { "ShallowEdgeFadePower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, ShallowEdgeFadePower), METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ShallowEdgeFadePower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ShallowEdgeFadePower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bCustomCollisionProfile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	void Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bCustomCollisionProfile_SetBit(void* Obj)
	{
		((AUIWSWaterBody*)Obj)->bCustomCollisionProfile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bCustomCollisionProfile = { "bCustomCollisionProfile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSWaterBody), &Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bCustomCollisionProfile_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bCustomCollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bCustomCollisionProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CustomCollisionProfile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CustomCollisionProfile = { "CustomCollisionProfile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, CustomCollisionProfile), Z_Construct_UScriptStruct_FCollisionProfileName, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CustomCollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CustomCollisionProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bEnableParticleOnDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	void Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bEnableParticleOnDamage_SetBit(void* Obj)
	{
		((AUIWSWaterBody*)Obj)->bEnableParticleOnDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bEnableParticleOnDamage = { "bEnableParticleOnDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSWaterBody), &Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bEnableParticleOnDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bEnableParticleOnDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bEnableParticleOnDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bEnableParticleOnCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	void Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bEnableParticleOnCollision_SetBit(void* Obj)
	{
		((AUIWSWaterBody*)Obj)->bEnableParticleOnCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bEnableParticleOnCollision = { "bEnableParticleOnCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSWaterBody), &Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bEnableParticleOnCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bEnableParticleOnCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bEnableParticleOnCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bOverrideParticleSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	void Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bOverrideParticleSettings_SetBit(void* Obj)
	{
		((AUIWSWaterBody*)Obj)->bOverrideParticleSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bOverrideParticleSettings = { "bOverrideParticleSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSWaterBody), &Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bOverrideParticleSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bOverrideParticleSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bOverrideParticleSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractionEffectScaleMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractionEffectScaleMin = { "InteractionEffectScaleMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, InteractionEffectScaleMin), METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractionEffectScaleMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractionEffectScaleMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractionEffectScaleMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractionEffectScaleMax = { "InteractionEffectScaleMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, InteractionEffectScaleMax), METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractionEffectScaleMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractionEffectScaleMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractionEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractionEffect = { "InteractionEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, InteractionEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractionEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractionEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DamageEffectScaleMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DamageEffectScaleMin = { "DamageEffectScaleMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, DamageEffectScaleMin), METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DamageEffectScaleMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DamageEffectScaleMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DamageEffectScaleMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DamageEffectScaleMax = { "DamageEffectScaleMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, DamageEffectScaleMax), METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DamageEffectScaleMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DamageEffectScaleMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DamageEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DamageEffect = { "DamageEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, DamageEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DamageEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DamageEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterMeshComp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterMeshComp = { "WaterMeshComp", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, WaterMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterMeshComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_hellmats_Inner = { "hellmats", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_hellmats_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_hellmats = { "hellmats", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, hellmats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_hellmats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_hellmats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_activeheight0_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_activeheight0 = { "activeheight0", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, activeheight0), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_activeheight0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_activeheight0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_activeheight1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_activeheight1 = { "activeheight1", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, activeheight1), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_activeheight1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_activeheight1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_activeheight2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_activeheight2 = { "activeheight2", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, activeheight2), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_activeheight2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_activeheight2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_activenormal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_activenormal = { "activenormal", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, activenormal), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_activenormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_activenormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_localheight0_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_localheight0 = { "localheight0", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, localheight0), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_localheight0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_localheight0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_localheight1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_localheight1 = { "localheight1", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, localheight1), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_localheight1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_localheight1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_localheight2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_localheight2 = { "localheight2", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, localheight2), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_localheight2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_localheight2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_localnormal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_localnormal = { "localnormal", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, localnormal), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_localnormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_localnormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_globalheight0_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_globalheight0 = { "globalheight0", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, globalheight0), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_globalheight0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_globalheight0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_globalheight1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_globalheight1 = { "globalheight1", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, globalheight1), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_globalheight1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_globalheight1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_globalheight2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_globalheight2 = { "globalheight2", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, globalheight2), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_globalheight2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_globalheight2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_globalnormal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_globalnormal = { "globalnormal", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, globalnormal), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_globalnormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_globalnormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_myCaptureRT_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_myCaptureRT = { "myCaptureRT", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, myCaptureRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_myCaptureRT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_myCaptureRT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ForceSplatMat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ForceSplatMat = { "ForceSplatMat", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, ForceSplatMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ForceSplatMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ForceSplatMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ManForceSplatMat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ManForceSplatMat = { "ManForceSplatMat", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, ManForceSplatMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ManForceSplatMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ManForceSplatMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_HeightSimMat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_HeightSimMat = { "HeightSimMat", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, HeightSimMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_HeightSimMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_HeightSimMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ComputeNormalMat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ComputeNormalMat = { "ComputeNormalMat", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, ComputeNormalMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ComputeNormalMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ComputeNormalMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_PPUnderWaterMat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_PPUnderWaterMat = { "PPUnderWaterMat", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, PPUnderWaterMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_PPUnderWaterMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_PPUnderWaterMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_PPUnderWaterMID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_PPUnderWaterMID = { "PPUnderWaterMID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, PPUnderWaterMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_PPUnderWaterMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_PPUnderWaterMID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DefaultSplashEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DefaultSplashEffect = { "DefaultSplashEffect", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, DefaultSplashEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DefaultSplashEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DefaultSplashEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterMID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterMID = { "WaterMID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, WaterMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterMID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterMIDLOD1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterMIDLOD1 = { "WaterMIDLOD1", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, WaterMIDLOD1), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterMIDLOD1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterMIDLOD1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterMeshSM_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterMeshSM = { "WaterMeshSM", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, WaterMeshSM), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterMeshSM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterMeshSM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterVolume = { "WaterVolume", nullptr, (EPropertyFlags)0x00220c000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, WaterVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_HeightSimInst_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_HeightSimInst = { "HeightSimInst", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, HeightSimInst), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_HeightSimInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_HeightSimInst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ForceSplatInst_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ForceSplatInst = { "ForceSplatInst", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, ForceSplatInst), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ForceSplatInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ForceSplatInst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ManualSplatInst_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ManualSplatInst = { "ManualSplatInst", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, ManualSplatInst), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ManualSplatInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ManualSplatInst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ComputeNormalInst_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ComputeNormalInst = { "ComputeNormalInst", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, ComputeNormalInst), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ComputeNormalInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ComputeNormalInst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_Canvas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_Canvas = { "Canvas", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, Canvas), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_Canvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_Canvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_Size_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_Context_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, Context), Z_Construct_UScriptStruct_FDrawToRenderTargetContext, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_Context_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CanvasMan_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CanvasMan = { "CanvasMan", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, CanvasMan), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CanvasMan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CanvasMan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_SizeMan_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_SizeMan = { "SizeMan", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, SizeMan), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_SizeMan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_SizeMan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ContextMan_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIWSWaterBody" },
		{ "ModuleRelativePath", "Public/UIWSWaterBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ContextMan = { "ContextMan", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSWaterBody, ContextMan), Z_Construct_UScriptStruct_FDrawToRenderTargetContext, METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ContextMan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ContextMan_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUIWSWaterBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_MyManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_BoxComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_myCaptureActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_XMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_XMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_YMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_YMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CurrentYArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CurrentYArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterSurfaceMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterSurfaceMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_OverrideWaterMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CustomWaterMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CustomWaterMaterialDistant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bIsInteractive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bSimulateWhileNotVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionXbox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionPS4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionNintendoSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionAndroid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bDisableAutomaticInteractionIOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CaptureRes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_MaxTileScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_SimResMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bTieSimToFPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractOnDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bLimitTickRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_TickRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DamageScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bSupportsEdgeReflection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_EdgeDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CaptureOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DeepOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ShallowOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DepthTransitionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ShallowEdgeFadeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ShallowEdgeFadePower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bCustomCollisionProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CustomCollisionProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bEnableParticleOnDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bEnableParticleOnCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_bOverrideParticleSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractionEffectScaleMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractionEffectScaleMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_InteractionEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DamageEffectScaleMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DamageEffectScaleMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DamageEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_hellmats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_hellmats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_activeheight0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_activeheight1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_activeheight2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_activenormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_localheight0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_localheight1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_localheight2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_localnormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_globalheight0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_globalheight1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_globalheight2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_globalnormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_myCaptureRT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ForceSplatMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ManForceSplatMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_HeightSimMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ComputeNormalMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_PPUnderWaterMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_PPUnderWaterMID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_DefaultSplashEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterMID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterMIDLOD1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterMeshSM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_WaterVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_HeightSimInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ForceSplatInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ManualSplatInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ComputeNormalInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_Canvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_CanvasMan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_SizeMan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSWaterBody_Statics::NewProp_ContextMan,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUIWSWaterBody_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUIWSWaterBody>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUIWSWaterBody_Statics::ClassParams = {
		&AUIWSWaterBody::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUIWSWaterBody_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUIWSWaterBody_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSWaterBody_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUIWSWaterBody()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUIWSWaterBody_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUIWSWaterBody, 3337121612);
	template<> UIWS_API UClass* StaticClass<AUIWSWaterBody>()
	{
		return AUIWSWaterBody::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUIWSWaterBody(Z_Construct_UClass_AUIWSWaterBody, &AUIWSWaterBody::StaticClass, TEXT("/Script/UIWS"), TEXT("AUIWSWaterBody"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUIWSWaterBody);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
