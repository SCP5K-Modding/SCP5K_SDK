// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSMeleeWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSMeleeWeapon() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSMeleeWeapon_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSMeleeWeapon();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSWeapon();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EMeleeAttackDirection();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FMeleeHitData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSMeleeWeaponData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSMeleeWeapon::execCancelAttack)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CancelAttack(EMeleeAttackDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSMeleeWeapon::execCosmeticCancelAttack)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticCancelAttack(EMeleeAttackDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSMeleeWeapon::execCosmeticHit)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Direction);
		P_GET_STRUCT(FMeleeHitData,Z_Param_HitData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticHit_Implementation(EMeleeAttackDirection(Z_Param_Direction),Z_Param_HitData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSMeleeWeapon::execCosmeticStartAttack)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticStartAttack(EMeleeAttackDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSMeleeWeapon::execFlipAttackDirection)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_CurrentDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlipAttackDirection(EMeleeAttackDirection(Z_Param_CurrentDirection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSMeleeWeapon::execGetAttackVector)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetAttackVector(EMeleeAttackDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSMeleeWeapon::execOnRep_MeleeHitData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MeleeHitData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSMeleeWeapon::execReady)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Ready(EMeleeAttackDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSMeleeWeapon::execRunWeaponTrace)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RunWeaponTrace(Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSMeleeWeapon::execServerCancelAttack)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerCancelAttack_Implementation(EMeleeAttackDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSMeleeWeapon::execServerProcessHit)
	{
		P_GET_STRUCT(FMeleeHitData,Z_Param_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerProcessHit_Implementation(Z_Param_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSMeleeWeapon::execServerStartAttack)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerStartAttack_Implementation(EMeleeAttackDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSMeleeWeapon::execServerUpdateReady)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Direction);
		P_GET_UBOOL(Z_Param_bReady);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerUpdateReady_Implementation(EMeleeAttackDirection(Z_Param_Direction),Z_Param_bReady);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSMeleeWeapon::execSetReadyDirection)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReadyDirection(EMeleeAttackDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSMeleeWeapon::execStartAttack)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAttack(EMeleeAttackDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSMeleeWeapon::execTryStartAttack)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryStartAttack(EMeleeAttackDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSMeleeWeapon::execTryStartReady)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryStartReady(EMeleeAttackDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSMeleeWeapon::execUpdateReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateReady();
		P_NATIVE_END;
	}
	static FName NAME_AFPSMeleeWeapon_CosmeticHit = FName(TEXT("CosmeticHit"));
	void AFPSMeleeWeapon::CosmeticHit(EMeleeAttackDirection Direction, FMeleeHitData HitData)
	{
		FPSMeleeWeapon_eventCosmeticHit_Parms Parms;
		Parms.Direction=Direction;
		Parms.HitData=HitData;
		ProcessEvent(FindFunctionChecked(NAME_AFPSMeleeWeapon_CosmeticHit),&Parms);
	}
	static FName NAME_AFPSMeleeWeapon_ServerCancelAttack = FName(TEXT("ServerCancelAttack"));
	void AFPSMeleeWeapon::ServerCancelAttack(EMeleeAttackDirection Direction)
	{
		FPSMeleeWeapon_eventServerCancelAttack_Parms Parms;
		Parms.Direction=Direction;
		ProcessEvent(FindFunctionChecked(NAME_AFPSMeleeWeapon_ServerCancelAttack),&Parms);
	}
	static FName NAME_AFPSMeleeWeapon_ServerProcessHit = FName(TEXT("ServerProcessHit"));
	void AFPSMeleeWeapon::ServerProcessHit(FMeleeHitData Hit)
	{
		FPSMeleeWeapon_eventServerProcessHit_Parms Parms;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_AFPSMeleeWeapon_ServerProcessHit),&Parms);
	}
	static FName NAME_AFPSMeleeWeapon_ServerStartAttack = FName(TEXT("ServerStartAttack"));
	void AFPSMeleeWeapon::ServerStartAttack(EMeleeAttackDirection Direction)
	{
		FPSMeleeWeapon_eventServerStartAttack_Parms Parms;
		Parms.Direction=Direction;
		ProcessEvent(FindFunctionChecked(NAME_AFPSMeleeWeapon_ServerStartAttack),&Parms);
	}
	static FName NAME_AFPSMeleeWeapon_ServerUpdateReady = FName(TEXT("ServerUpdateReady"));
	void AFPSMeleeWeapon::ServerUpdateReady(EMeleeAttackDirection Direction, bool bReady)
	{
		FPSMeleeWeapon_eventServerUpdateReady_Parms Parms;
		Parms.Direction=Direction;
		Parms.bReady=bReady ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSMeleeWeapon_ServerUpdateReady),&Parms);
	}
	void AFPSMeleeWeapon::StaticRegisterNativesAFPSMeleeWeapon()
	{
		UClass* Class = AFPSMeleeWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelAttack", &AFPSMeleeWeapon::execCancelAttack },
			{ "CosmeticCancelAttack", &AFPSMeleeWeapon::execCosmeticCancelAttack },
			{ "CosmeticHit", &AFPSMeleeWeapon::execCosmeticHit },
			{ "CosmeticStartAttack", &AFPSMeleeWeapon::execCosmeticStartAttack },
			{ "FlipAttackDirection", &AFPSMeleeWeapon::execFlipAttackDirection },
			{ "GetAttackVector", &AFPSMeleeWeapon::execGetAttackVector },
			{ "OnRep_MeleeHitData", &AFPSMeleeWeapon::execOnRep_MeleeHitData },
			{ "Ready", &AFPSMeleeWeapon::execReady },
			{ "RunWeaponTrace", &AFPSMeleeWeapon::execRunWeaponTrace },
			{ "ServerCancelAttack", &AFPSMeleeWeapon::execServerCancelAttack },
			{ "ServerProcessHit", &AFPSMeleeWeapon::execServerProcessHit },
			{ "ServerStartAttack", &AFPSMeleeWeapon::execServerStartAttack },
			{ "ServerUpdateReady", &AFPSMeleeWeapon::execServerUpdateReady },
			{ "SetReadyDirection", &AFPSMeleeWeapon::execSetReadyDirection },
			{ "StartAttack", &AFPSMeleeWeapon::execStartAttack },
			{ "TryStartAttack", &AFPSMeleeWeapon::execTryStartAttack },
			{ "TryStartReady", &AFPSMeleeWeapon::execTryStartReady },
			{ "UpdateReady", &AFPSMeleeWeapon::execUpdateReady },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSMeleeWeapon_CancelAttack_Statics
	{
		struct FPSMeleeWeapon_eventCancelAttack_Parms
		{
			TEnumAsByte<EMeleeAttackDirection> Direction;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSMeleeWeapon_CancelAttack_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMeleeWeapon_eventCancelAttack_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSMeleeWeapon_CancelAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSMeleeWeapon_eventCancelAttack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSMeleeWeapon_CancelAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSMeleeWeapon_eventCancelAttack_Parms), &Z_Construct_UFunction_AFPSMeleeWeapon_CancelAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSMeleeWeapon_CancelAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMeleeWeapon_CancelAttack_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMeleeWeapon_CancelAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMeleeWeapon_CancelAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMeleeWeapon_CancelAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMeleeWeapon, nullptr, "CancelAttack", nullptr, nullptr, sizeof(FPSMeleeWeapon_eventCancelAttack_Parms), Z_Construct_UFunction_AFPSMeleeWeapon_CancelAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_CancelAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMeleeWeapon_CancelAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_CancelAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMeleeWeapon_CancelAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMeleeWeapon_CancelAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticCancelAttack_Statics
	{
		struct FPSMeleeWeapon_eventCosmeticCancelAttack_Parms
		{
			TEnumAsByte<EMeleeAttackDirection> Direction;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticCancelAttack_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMeleeWeapon_eventCosmeticCancelAttack_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticCancelAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticCancelAttack_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticCancelAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticCancelAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMeleeWeapon, nullptr, "CosmeticCancelAttack", nullptr, nullptr, sizeof(FPSMeleeWeapon_eventCosmeticCancelAttack_Parms), Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticCancelAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticCancelAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticCancelAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticCancelAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticCancelAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticCancelAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticHit_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticHit_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMeleeWeapon_eventCosmeticHit_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticHit_Statics::NewProp_HitData = { "HitData", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMeleeWeapon_eventCosmeticHit_Parms, HitData), Z_Construct_UScriptStruct_FMeleeHitData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticHit_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticHit_Statics::NewProp_HitData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMeleeWeapon, nullptr, "CosmeticHit", nullptr, nullptr, sizeof(FPSMeleeWeapon_eventCosmeticHit_Parms), Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticStartAttack_Statics
	{
		struct FPSMeleeWeapon_eventCosmeticStartAttack_Parms
		{
			TEnumAsByte<EMeleeAttackDirection> Direction;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticStartAttack_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMeleeWeapon_eventCosmeticStartAttack_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticStartAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticStartAttack_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticStartAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticStartAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMeleeWeapon, nullptr, "CosmeticStartAttack", nullptr, nullptr, sizeof(FPSMeleeWeapon_eventCosmeticStartAttack_Parms), Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticStartAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticStartAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticStartAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticStartAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticStartAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticStartAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSMeleeWeapon_FlipAttackDirection_Statics
	{
		struct FPSMeleeWeapon_eventFlipAttackDirection_Parms
		{
			TEnumAsByte<EMeleeAttackDirection> CurrentDirection;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSMeleeWeapon_FlipAttackDirection_Statics::NewProp_CurrentDirection = { "CurrentDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMeleeWeapon_eventFlipAttackDirection_Parms, CurrentDirection), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSMeleeWeapon_FlipAttackDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMeleeWeapon_FlipAttackDirection_Statics::NewProp_CurrentDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMeleeWeapon_FlipAttackDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMeleeWeapon_FlipAttackDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMeleeWeapon, nullptr, "FlipAttackDirection", nullptr, nullptr, sizeof(FPSMeleeWeapon_eventFlipAttackDirection_Parms), Z_Construct_UFunction_AFPSMeleeWeapon_FlipAttackDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_FlipAttackDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMeleeWeapon_FlipAttackDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_FlipAttackDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMeleeWeapon_FlipAttackDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMeleeWeapon_FlipAttackDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSMeleeWeapon_GetAttackVector_Statics
	{
		struct FPSMeleeWeapon_eventGetAttackVector_Parms
		{
			TEnumAsByte<EMeleeAttackDirection> Direction;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSMeleeWeapon_GetAttackVector_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMeleeWeapon_eventGetAttackVector_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSMeleeWeapon_GetAttackVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMeleeWeapon_eventGetAttackVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSMeleeWeapon_GetAttackVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMeleeWeapon_GetAttackVector_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMeleeWeapon_GetAttackVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMeleeWeapon_GetAttackVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMeleeWeapon_GetAttackVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMeleeWeapon, nullptr, "GetAttackVector", nullptr, nullptr, sizeof(FPSMeleeWeapon_eventGetAttackVector_Parms), Z_Construct_UFunction_AFPSMeleeWeapon_GetAttackVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_GetAttackVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMeleeWeapon_GetAttackVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_GetAttackVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMeleeWeapon_GetAttackVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMeleeWeapon_GetAttackVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSMeleeWeapon_OnRep_MeleeHitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMeleeWeapon_OnRep_MeleeHitData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMeleeWeapon_OnRep_MeleeHitData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMeleeWeapon, nullptr, "OnRep_MeleeHitData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMeleeWeapon_OnRep_MeleeHitData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_OnRep_MeleeHitData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMeleeWeapon_OnRep_MeleeHitData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMeleeWeapon_OnRep_MeleeHitData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSMeleeWeapon_Ready_Statics
	{
		struct FPSMeleeWeapon_eventReady_Parms
		{
			TEnumAsByte<EMeleeAttackDirection> Direction;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSMeleeWeapon_Ready_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMeleeWeapon_eventReady_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSMeleeWeapon_Ready_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMeleeWeapon_Ready_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMeleeWeapon_Ready_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMeleeWeapon_Ready_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMeleeWeapon, nullptr, "Ready", nullptr, nullptr, sizeof(FPSMeleeWeapon_eventReady_Parms), Z_Construct_UFunction_AFPSMeleeWeapon_Ready_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_Ready_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMeleeWeapon_Ready_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_Ready_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMeleeWeapon_Ready()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMeleeWeapon_Ready_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSMeleeWeapon_RunWeaponTrace_Statics
	{
		struct FPSMeleeWeapon_eventRunWeaponTrace_Parms
		{
			FHitResult Hit;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSMeleeWeapon_RunWeaponTrace_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMeleeWeapon_eventRunWeaponTrace_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSMeleeWeapon_RunWeaponTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSMeleeWeapon_eventRunWeaponTrace_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSMeleeWeapon_RunWeaponTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSMeleeWeapon_eventRunWeaponTrace_Parms), &Z_Construct_UFunction_AFPSMeleeWeapon_RunWeaponTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSMeleeWeapon_RunWeaponTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMeleeWeapon_RunWeaponTrace_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMeleeWeapon_RunWeaponTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMeleeWeapon_RunWeaponTrace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMeleeWeapon_RunWeaponTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMeleeWeapon, nullptr, "RunWeaponTrace", nullptr, nullptr, sizeof(FPSMeleeWeapon_eventRunWeaponTrace_Parms), Z_Construct_UFunction_AFPSMeleeWeapon_RunWeaponTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_RunWeaponTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMeleeWeapon_RunWeaponTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_RunWeaponTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMeleeWeapon_RunWeaponTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMeleeWeapon_RunWeaponTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSMeleeWeapon_ServerCancelAttack_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSMeleeWeapon_ServerCancelAttack_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMeleeWeapon_eventServerCancelAttack_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSMeleeWeapon_ServerCancelAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMeleeWeapon_ServerCancelAttack_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMeleeWeapon_ServerCancelAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMeleeWeapon_ServerCancelAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMeleeWeapon, nullptr, "ServerCancelAttack", nullptr, nullptr, sizeof(FPSMeleeWeapon_eventServerCancelAttack_Parms), Z_Construct_UFunction_AFPSMeleeWeapon_ServerCancelAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_ServerCancelAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMeleeWeapon_ServerCancelAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_ServerCancelAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMeleeWeapon_ServerCancelAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMeleeWeapon_ServerCancelAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSMeleeWeapon_ServerProcessHit_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSMeleeWeapon_ServerProcessHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMeleeWeapon_eventServerProcessHit_Parms, Hit), Z_Construct_UScriptStruct_FMeleeHitData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSMeleeWeapon_ServerProcessHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMeleeWeapon_ServerProcessHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMeleeWeapon_ServerProcessHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMeleeWeapon_ServerProcessHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMeleeWeapon, nullptr, "ServerProcessHit", nullptr, nullptr, sizeof(FPSMeleeWeapon_eventServerProcessHit_Parms), Z_Construct_UFunction_AFPSMeleeWeapon_ServerProcessHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_ServerProcessHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMeleeWeapon_ServerProcessHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_ServerProcessHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMeleeWeapon_ServerProcessHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMeleeWeapon_ServerProcessHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSMeleeWeapon_ServerStartAttack_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSMeleeWeapon_ServerStartAttack_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMeleeWeapon_eventServerStartAttack_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSMeleeWeapon_ServerStartAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMeleeWeapon_ServerStartAttack_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMeleeWeapon_ServerStartAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMeleeWeapon_ServerStartAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMeleeWeapon, nullptr, "ServerStartAttack", nullptr, nullptr, sizeof(FPSMeleeWeapon_eventServerStartAttack_Parms), Z_Construct_UFunction_AFPSMeleeWeapon_ServerStartAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_ServerStartAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMeleeWeapon_ServerStartAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_ServerStartAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMeleeWeapon_ServerStartAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMeleeWeapon_ServerStartAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSMeleeWeapon_ServerUpdateReady_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
		static void NewProp_bReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSMeleeWeapon_ServerUpdateReady_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMeleeWeapon_eventServerUpdateReady_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSMeleeWeapon_ServerUpdateReady_Statics::NewProp_bReady_SetBit(void* Obj)
	{
		((FPSMeleeWeapon_eventServerUpdateReady_Parms*)Obj)->bReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSMeleeWeapon_ServerUpdateReady_Statics::NewProp_bReady = { "bReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSMeleeWeapon_eventServerUpdateReady_Parms), &Z_Construct_UFunction_AFPSMeleeWeapon_ServerUpdateReady_Statics::NewProp_bReady_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSMeleeWeapon_ServerUpdateReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMeleeWeapon_ServerUpdateReady_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMeleeWeapon_ServerUpdateReady_Statics::NewProp_bReady,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMeleeWeapon_ServerUpdateReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMeleeWeapon_ServerUpdateReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMeleeWeapon, nullptr, "ServerUpdateReady", nullptr, nullptr, sizeof(FPSMeleeWeapon_eventServerUpdateReady_Parms), Z_Construct_UFunction_AFPSMeleeWeapon_ServerUpdateReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_ServerUpdateReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMeleeWeapon_ServerUpdateReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_ServerUpdateReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMeleeWeapon_ServerUpdateReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMeleeWeapon_ServerUpdateReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSMeleeWeapon_SetReadyDirection_Statics
	{
		struct FPSMeleeWeapon_eventSetReadyDirection_Parms
		{
			TEnumAsByte<EMeleeAttackDirection> Direction;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSMeleeWeapon_SetReadyDirection_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMeleeWeapon_eventSetReadyDirection_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSMeleeWeapon_SetReadyDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMeleeWeapon_SetReadyDirection_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMeleeWeapon_SetReadyDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMeleeWeapon_SetReadyDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMeleeWeapon, nullptr, "SetReadyDirection", nullptr, nullptr, sizeof(FPSMeleeWeapon_eventSetReadyDirection_Parms), Z_Construct_UFunction_AFPSMeleeWeapon_SetReadyDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_SetReadyDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMeleeWeapon_SetReadyDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_SetReadyDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMeleeWeapon_SetReadyDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMeleeWeapon_SetReadyDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSMeleeWeapon_StartAttack_Statics
	{
		struct FPSMeleeWeapon_eventStartAttack_Parms
		{
			TEnumAsByte<EMeleeAttackDirection> Direction;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSMeleeWeapon_StartAttack_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMeleeWeapon_eventStartAttack_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSMeleeWeapon_StartAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMeleeWeapon_StartAttack_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMeleeWeapon_StartAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMeleeWeapon_StartAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMeleeWeapon, nullptr, "StartAttack", nullptr, nullptr, sizeof(FPSMeleeWeapon_eventStartAttack_Parms), Z_Construct_UFunction_AFPSMeleeWeapon_StartAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_StartAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMeleeWeapon_StartAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_StartAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMeleeWeapon_StartAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMeleeWeapon_StartAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSMeleeWeapon_TryStartAttack_Statics
	{
		struct FPSMeleeWeapon_eventTryStartAttack_Parms
		{
			TEnumAsByte<EMeleeAttackDirection> Direction;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSMeleeWeapon_TryStartAttack_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMeleeWeapon_eventTryStartAttack_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSMeleeWeapon_TryStartAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMeleeWeapon_TryStartAttack_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMeleeWeapon_TryStartAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMeleeWeapon_TryStartAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMeleeWeapon, nullptr, "TryStartAttack", nullptr, nullptr, sizeof(FPSMeleeWeapon_eventTryStartAttack_Parms), Z_Construct_UFunction_AFPSMeleeWeapon_TryStartAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_TryStartAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMeleeWeapon_TryStartAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_TryStartAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMeleeWeapon_TryStartAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMeleeWeapon_TryStartAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSMeleeWeapon_TryStartReady_Statics
	{
		struct FPSMeleeWeapon_eventTryStartReady_Parms
		{
			TEnumAsByte<EMeleeAttackDirection> Direction;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSMeleeWeapon_TryStartReady_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSMeleeWeapon_eventTryStartReady_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSMeleeWeapon_TryStartReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSMeleeWeapon_TryStartReady_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMeleeWeapon_TryStartReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMeleeWeapon_TryStartReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMeleeWeapon, nullptr, "TryStartReady", nullptr, nullptr, sizeof(FPSMeleeWeapon_eventTryStartReady_Parms), Z_Construct_UFunction_AFPSMeleeWeapon_TryStartReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_TryStartReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMeleeWeapon_TryStartReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_TryStartReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMeleeWeapon_TryStartReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMeleeWeapon_TryStartReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSMeleeWeapon_UpdateReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSMeleeWeapon_UpdateReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSMeleeWeapon_UpdateReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSMeleeWeapon, nullptr, "UpdateReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSMeleeWeapon_UpdateReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSMeleeWeapon_UpdateReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSMeleeWeapon_UpdateReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSMeleeWeapon_UpdateReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSMeleeWeapon_NoRegister()
	{
		return AFPSMeleeWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AFPSMeleeWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeWeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeleeWeaponData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeHitData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeleeHitData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttacking_MetaData[];
#endif
		static void NewProp_bAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsAttack_MetaData[];
#endif
		static void NewProp_bWantsAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsReady_MetaData[];
#endif
		static void NewProp_bWantsReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredReadyDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DesiredReadyDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReady_MetaData[];
#endif
		static void NewProp_bIsReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadyDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReadyDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastAttackDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastAttackDirection;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSMeleeWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFPSWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSMeleeWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSMeleeWeapon_CancelAttack, "CancelAttack" }, // 3521967830
		{ &Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticCancelAttack, "CosmeticCancelAttack" }, // 2612823190
		{ &Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticHit, "CosmeticHit" }, // 2024960524
		{ &Z_Construct_UFunction_AFPSMeleeWeapon_CosmeticStartAttack, "CosmeticStartAttack" }, // 1394164469
		{ &Z_Construct_UFunction_AFPSMeleeWeapon_FlipAttackDirection, "FlipAttackDirection" }, // 3845966663
		{ &Z_Construct_UFunction_AFPSMeleeWeapon_GetAttackVector, "GetAttackVector" }, // 2862381284
		{ &Z_Construct_UFunction_AFPSMeleeWeapon_OnRep_MeleeHitData, "OnRep_MeleeHitData" }, // 4144276681
		{ &Z_Construct_UFunction_AFPSMeleeWeapon_Ready, "Ready" }, // 1119165031
		{ &Z_Construct_UFunction_AFPSMeleeWeapon_RunWeaponTrace, "RunWeaponTrace" }, // 384264680
		{ &Z_Construct_UFunction_AFPSMeleeWeapon_ServerCancelAttack, "ServerCancelAttack" }, // 1720793526
		{ &Z_Construct_UFunction_AFPSMeleeWeapon_ServerProcessHit, "ServerProcessHit" }, // 322334710
		{ &Z_Construct_UFunction_AFPSMeleeWeapon_ServerStartAttack, "ServerStartAttack" }, // 632752516
		{ &Z_Construct_UFunction_AFPSMeleeWeapon_ServerUpdateReady, "ServerUpdateReady" }, // 266832399
		{ &Z_Construct_UFunction_AFPSMeleeWeapon_SetReadyDirection, "SetReadyDirection" }, // 753555463
		{ &Z_Construct_UFunction_AFPSMeleeWeapon_StartAttack, "StartAttack" }, // 2621641138
		{ &Z_Construct_UFunction_AFPSMeleeWeapon_TryStartAttack, "TryStartAttack" }, // 2515390959
		{ &Z_Construct_UFunction_AFPSMeleeWeapon_TryStartReady, "TryStartReady" }, // 1108449635
		{ &Z_Construct_UFunction_AFPSMeleeWeapon_UpdateReady, "UpdateReady" }, // 3353839278
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMeleeWeapon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSMeleeWeapon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMeleeWeapon, AudioComponent), Z_Construct_UClass_UFMODAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_MeleeWeaponData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeapon" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_MeleeWeaponData = { "MeleeWeaponData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMeleeWeapon, MeleeWeaponData), Z_Construct_UClass_UFPSMeleeWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_MeleeWeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_MeleeWeaponData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_TraceStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMeleeWeapon, TraceStart), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_TraceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_TraceStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_TraceEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMeleeWeapon, TraceEnd), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_TraceEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_TraceEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_MeleeHitData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeapon" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_MeleeHitData = { "MeleeHitData", "OnRep_MeleeHitData", (EPropertyFlags)0x0010008100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMeleeWeapon, MeleeHitData), Z_Construct_UScriptStruct_FMeleeHitData, METADATA_PARAMS(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_MeleeHitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_MeleeHitData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bAttacking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeapon" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bAttacking_SetBit(void* Obj)
	{
		((AFPSMeleeWeapon*)Obj)->bAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bAttacking = { "bAttacking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSMeleeWeapon), &Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bWantsAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeapon" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bWantsAttack_SetBit(void* Obj)
	{
		((AFPSMeleeWeapon*)Obj)->bWantsAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bWantsAttack = { "bWantsAttack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSMeleeWeapon), &Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bWantsAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bWantsAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bWantsAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bWantsReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeapon" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bWantsReady_SetBit(void* Obj)
	{
		((AFPSMeleeWeapon*)Obj)->bWantsReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bWantsReady = { "bWantsReady", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSMeleeWeapon), &Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bWantsReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bWantsReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bWantsReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_DesiredReadyDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeapon" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_DesiredReadyDirection = { "DesiredReadyDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMeleeWeapon, DesiredReadyDirection), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_DesiredReadyDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_DesiredReadyDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bIsReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeapon" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bIsReady_SetBit(void* Obj)
	{
		((AFPSMeleeWeapon*)Obj)->bIsReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bIsReady = { "bIsReady", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSMeleeWeapon), &Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bIsReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bIsReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bIsReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_ReadyDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeapon" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_ReadyDirection = { "ReadyDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMeleeWeapon, ReadyDirection), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_ReadyDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_ReadyDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_LastAttackDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeapon" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_LastAttackDirection = { "LastAttackDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMeleeWeapon, LastAttackDirection), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_LastAttackDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_LastAttackDirection_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_HitActors_Inner = { "HitActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_HitActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSMeleeWeapon" },
		{ "ModuleRelativePath", "Public/FPSMeleeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_HitActors = { "HitActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSMeleeWeapon, HitActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_HitActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_HitActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSMeleeWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_MeleeWeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_TraceStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_TraceEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_MeleeHitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bWantsAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bWantsReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_DesiredReadyDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_bIsReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_ReadyDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_LastAttackDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_HitActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSMeleeWeapon_Statics::NewProp_HitActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSMeleeWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSMeleeWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSMeleeWeapon_Statics::ClassParams = {
		&AFPSMeleeWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSMeleeWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMeleeWeapon_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSMeleeWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMeleeWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSMeleeWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSMeleeWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSMeleeWeapon, 1757298682);
	template<> FPSCONTROLLER_API UClass* StaticClass<AFPSMeleeWeapon>()
	{
		return AFPSMeleeWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSMeleeWeapon(Z_Construct_UClass_AFPSMeleeWeapon, &AFPSMeleeWeapon::StaticClass, TEXT("/Script/FPSController"), TEXT("AFPSMeleeWeapon"), false, nullptr, nullptr, nullptr);

	void AFPSMeleeWeapon::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MeleeHitData(TEXT("MeleeHitData"));

		const bool bIsValid = true
			&& Name_MeleeHitData == ClassReps[(int32)ENetFields_Private::MeleeHitData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AFPSMeleeWeapon"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSMeleeWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
