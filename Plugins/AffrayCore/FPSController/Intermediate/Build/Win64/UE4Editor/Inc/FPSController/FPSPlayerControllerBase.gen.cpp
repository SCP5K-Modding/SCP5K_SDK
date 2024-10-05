// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSPlayerControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSPlayerControllerBase() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSPlayerControllerBase_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSPlayerControllerBase();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FFPSCosmetic();
	ENGINE_API UClass* Z_Construct_UClass_ASpectatorPawn_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSCharacterBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSPlayerControllerBase::execCanUseCosmetic)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FFPSCosmetic,Z_Param_Cosmetic);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUseCosmetic_Implementation(Z_Param_Index,Z_Param_Cosmetic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSPlayerControllerBase::execGetHorizontalSensitivity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHorizontalSensitivity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSPlayerControllerBase::execGetLookX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLookX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSPlayerControllerBase::execGetLookY)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLookY();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSPlayerControllerBase::execGetVerticalSensitivity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVerticalSensitivity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSPlayerControllerBase::execPlayerStateUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerStateUpdated_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSPlayerControllerBase::execServerSetLookX)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InLookX);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetLookX_Implementation(Z_Param_InLookX);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSPlayerControllerBase::execServerSetLookY)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InLookY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetLookY_Implementation(Z_Param_InLookY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSPlayerControllerBase::execSetLookX)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLookX);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLookX(Z_Param_InLookX);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSPlayerControllerBase::execSetLookY)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLookY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLookY(Z_Param_InLookY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSPlayerControllerBase::execSetTeam)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTeam(Z_Param_NewTeam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSPlayerControllerBase::execSpectate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASpectatorPawn**)Z_Param__Result=P_THIS->Spectate();
		P_NATIVE_END;
	}
	static FName NAME_AFPSPlayerControllerBase_CanUseCosmetic = FName(TEXT("CanUseCosmetic"));
	bool AFPSPlayerControllerBase::CanUseCosmetic(int32 Index, FFPSCosmetic Cosmetic)
	{
		FPSPlayerControllerBase_eventCanUseCosmetic_Parms Parms;
		Parms.Index=Index;
		Parms.Cosmetic=Cosmetic;
		ProcessEvent(FindFunctionChecked(NAME_AFPSPlayerControllerBase_CanUseCosmetic),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AFPSPlayerControllerBase_PlayerStateUpdated = FName(TEXT("PlayerStateUpdated"));
	void AFPSPlayerControllerBase::PlayerStateUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSPlayerControllerBase_PlayerStateUpdated),NULL);
	}
	static FName NAME_AFPSPlayerControllerBase_ReceiveClientWasKicked = FName(TEXT("ReceiveClientWasKicked"));
	void AFPSPlayerControllerBase::ReceiveClientWasKicked(FText const& KickReason)
	{
		FPSPlayerControllerBase_eventReceiveClientWasKicked_Parms Parms;
		Parms.KickReason=KickReason;
		ProcessEvent(FindFunctionChecked(NAME_AFPSPlayerControllerBase_ReceiveClientWasKicked),&Parms);
	}
	static FName NAME_AFPSPlayerControllerBase_ReceivePostSeamlessTravel = FName(TEXT("ReceivePostSeamlessTravel"));
	void AFPSPlayerControllerBase::ReceivePostSeamlessTravel()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSPlayerControllerBase_ReceivePostSeamlessTravel),NULL);
	}
	static FName NAME_AFPSPlayerControllerBase_ReceiveReturnToMainMenu = FName(TEXT("ReceiveReturnToMainMenu"));
	void AFPSPlayerControllerBase::ReceiveReturnToMainMenu(FText const& ReturnReason)
	{
		FPSPlayerControllerBase_eventReceiveReturnToMainMenu_Parms Parms;
		Parms.ReturnReason=ReturnReason;
		ProcessEvent(FindFunctionChecked(NAME_AFPSPlayerControllerBase_ReceiveReturnToMainMenu),&Parms);
	}
	static FName NAME_AFPSPlayerControllerBase_ServerSetLookX = FName(TEXT("ServerSetLookX"));
	void AFPSPlayerControllerBase::ServerSetLookX(uint8 InLookX)
	{
		FPSPlayerControllerBase_eventServerSetLookX_Parms Parms;
		Parms.InLookX=InLookX;
		ProcessEvent(FindFunctionChecked(NAME_AFPSPlayerControllerBase_ServerSetLookX),&Parms);
	}
	static FName NAME_AFPSPlayerControllerBase_ServerSetLookY = FName(TEXT("ServerSetLookY"));
	void AFPSPlayerControllerBase::ServerSetLookY(uint8 InLookY)
	{
		FPSPlayerControllerBase_eventServerSetLookY_Parms Parms;
		Parms.InLookY=InLookY;
		ProcessEvent(FindFunctionChecked(NAME_AFPSPlayerControllerBase_ServerSetLookY),&Parms);
	}
	void AFPSPlayerControllerBase::StaticRegisterNativesAFPSPlayerControllerBase()
	{
		UClass* Class = AFPSPlayerControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanUseCosmetic", &AFPSPlayerControllerBase::execCanUseCosmetic },
			{ "GetHorizontalSensitivity", &AFPSPlayerControllerBase::execGetHorizontalSensitivity },
			{ "GetLookX", &AFPSPlayerControllerBase::execGetLookX },
			{ "GetLookY", &AFPSPlayerControllerBase::execGetLookY },
			{ "GetVerticalSensitivity", &AFPSPlayerControllerBase::execGetVerticalSensitivity },
			{ "PlayerStateUpdated", &AFPSPlayerControllerBase::execPlayerStateUpdated },
			{ "ServerSetLookX", &AFPSPlayerControllerBase::execServerSetLookX },
			{ "ServerSetLookY", &AFPSPlayerControllerBase::execServerSetLookY },
			{ "SetLookX", &AFPSPlayerControllerBase::execSetLookX },
			{ "SetLookY", &AFPSPlayerControllerBase::execSetLookY },
			{ "SetTeam", &AFPSPlayerControllerBase::execSetTeam },
			{ "Spectate", &AFPSPlayerControllerBase::execSpectate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSPlayerControllerBase_CanUseCosmetic_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cosmetic;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSPlayerControllerBase_CanUseCosmetic_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerControllerBase_eventCanUseCosmetic_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSPlayerControllerBase_CanUseCosmetic_Statics::NewProp_Cosmetic = { "Cosmetic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerControllerBase_eventCanUseCosmetic_Parms, Cosmetic), Z_Construct_UScriptStruct_FFPSCosmetic, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSPlayerControllerBase_CanUseCosmetic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSPlayerControllerBase_eventCanUseCosmetic_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSPlayerControllerBase_CanUseCosmetic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSPlayerControllerBase_eventCanUseCosmetic_Parms), &Z_Construct_UFunction_AFPSPlayerControllerBase_CanUseCosmetic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerControllerBase_CanUseCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerControllerBase_CanUseCosmetic_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerControllerBase_CanUseCosmetic_Statics::NewProp_Cosmetic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerControllerBase_CanUseCosmetic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerControllerBase_CanUseCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerControllerBase_CanUseCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerControllerBase, nullptr, "CanUseCosmetic", nullptr, nullptr, sizeof(FPSPlayerControllerBase_eventCanUseCosmetic_Parms), Z_Construct_UFunction_AFPSPlayerControllerBase_CanUseCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_CanUseCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerControllerBase_CanUseCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_CanUseCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerControllerBase_CanUseCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerControllerBase_CanUseCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerControllerBase_GetHorizontalSensitivity_Statics
	{
		struct FPSPlayerControllerBase_eventGetHorizontalSensitivity_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSPlayerControllerBase_GetHorizontalSensitivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerControllerBase_eventGetHorizontalSensitivity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerControllerBase_GetHorizontalSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerControllerBase_GetHorizontalSensitivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerControllerBase_GetHorizontalSensitivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerControllerBase_GetHorizontalSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerControllerBase, nullptr, "GetHorizontalSensitivity", nullptr, nullptr, sizeof(FPSPlayerControllerBase_eventGetHorizontalSensitivity_Parms), Z_Construct_UFunction_AFPSPlayerControllerBase_GetHorizontalSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_GetHorizontalSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerControllerBase_GetHorizontalSensitivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_GetHorizontalSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerControllerBase_GetHorizontalSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerControllerBase_GetHorizontalSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookX_Statics
	{
		struct FPSPlayerControllerBase_eventGetLookX_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerControllerBase_eventGetLookX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerControllerBase, nullptr, "GetLookX", nullptr, nullptr, sizeof(FPSPlayerControllerBase_eventGetLookX_Parms), Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookY_Statics
	{
		struct FPSPlayerControllerBase_eventGetLookY_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerControllerBase_eventGetLookY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerControllerBase, nullptr, "GetLookY", nullptr, nullptr, sizeof(FPSPlayerControllerBase_eventGetLookY_Parms), Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerControllerBase_GetVerticalSensitivity_Statics
	{
		struct FPSPlayerControllerBase_eventGetVerticalSensitivity_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSPlayerControllerBase_GetVerticalSensitivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerControllerBase_eventGetVerticalSensitivity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerControllerBase_GetVerticalSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerControllerBase_GetVerticalSensitivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerControllerBase_GetVerticalSensitivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerControllerBase_GetVerticalSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerControllerBase, nullptr, "GetVerticalSensitivity", nullptr, nullptr, sizeof(FPSPlayerControllerBase_eventGetVerticalSensitivity_Parms), Z_Construct_UFunction_AFPSPlayerControllerBase_GetVerticalSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_GetVerticalSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerControllerBase_GetVerticalSensitivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_GetVerticalSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerControllerBase_GetVerticalSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerControllerBase_GetVerticalSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerControllerBase_PlayerStateUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerControllerBase_PlayerStateUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerControllerBase_PlayerStateUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerControllerBase, nullptr, "PlayerStateUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerControllerBase_PlayerStateUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_PlayerStateUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerControllerBase_PlayerStateUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerControllerBase_PlayerStateUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveClientWasKicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_KickReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveClientWasKicked_Statics::NewProp_KickReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveClientWasKicked_Statics::NewProp_KickReason = { "KickReason", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerControllerBase_eventReceiveClientWasKicked_Parms, KickReason), METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveClientWasKicked_Statics::NewProp_KickReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveClientWasKicked_Statics::NewProp_KickReason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveClientWasKicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveClientWasKicked_Statics::NewProp_KickReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveClientWasKicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveClientWasKicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerControllerBase, nullptr, "ReceiveClientWasKicked", nullptr, nullptr, sizeof(FPSPlayerControllerBase_eventReceiveClientWasKicked_Parms), Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveClientWasKicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveClientWasKicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveClientWasKicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveClientWasKicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveClientWasKicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveClientWasKicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerControllerBase_ReceivePostSeamlessTravel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerControllerBase_ReceivePostSeamlessTravel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerControllerBase_ReceivePostSeamlessTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerControllerBase, nullptr, "ReceivePostSeamlessTravel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerControllerBase_ReceivePostSeamlessTravel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_ReceivePostSeamlessTravel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerControllerBase_ReceivePostSeamlessTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerControllerBase_ReceivePostSeamlessTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveReturnToMainMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveReturnToMainMenu_Statics::NewProp_ReturnReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveReturnToMainMenu_Statics::NewProp_ReturnReason = { "ReturnReason", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerControllerBase_eventReceiveReturnToMainMenu_Parms, ReturnReason), METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveReturnToMainMenu_Statics::NewProp_ReturnReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveReturnToMainMenu_Statics::NewProp_ReturnReason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveReturnToMainMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveReturnToMainMenu_Statics::NewProp_ReturnReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveReturnToMainMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveReturnToMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerControllerBase, nullptr, "ReceiveReturnToMainMenu", nullptr, nullptr, sizeof(FPSPlayerControllerBase_eventReceiveReturnToMainMenu_Parms), Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveReturnToMainMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveReturnToMainMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveReturnToMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveReturnToMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveReturnToMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveReturnToMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookX_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InLookX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookX_Statics::NewProp_InLookX = { "InLookX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerControllerBase_eventServerSetLookX_Parms, InLookX), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookX_Statics::NewProp_InLookX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerControllerBase, nullptr, "ServerSetLookX", nullptr, nullptr, sizeof(FPSPlayerControllerBase_eventServerSetLookX_Parms), Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookY_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InLookY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookY_Statics::NewProp_InLookY = { "InLookY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerControllerBase_eventServerSetLookY_Parms, InLookY), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookY_Statics::NewProp_InLookY,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerControllerBase, nullptr, "ServerSetLookY", nullptr, nullptr, sizeof(FPSPlayerControllerBase_eventServerSetLookY_Parms), Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookX_Statics
	{
		struct FPSPlayerControllerBase_eventSetLookX_Parms
		{
			float InLookX;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InLookX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookX_Statics::NewProp_InLookX = { "InLookX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerControllerBase_eventSetLookX_Parms, InLookX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookX_Statics::NewProp_InLookX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerControllerBase, nullptr, "SetLookX", nullptr, nullptr, sizeof(FPSPlayerControllerBase_eventSetLookX_Parms), Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookY_Statics
	{
		struct FPSPlayerControllerBase_eventSetLookY_Parms
		{
			float InLookY;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InLookY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookY_Statics::NewProp_InLookY = { "InLookY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerControllerBase_eventSetLookY_Parms, InLookY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookY_Statics::NewProp_InLookY,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerControllerBase, nullptr, "SetLookY", nullptr, nullptr, sizeof(FPSPlayerControllerBase_eventSetLookY_Parms), Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerControllerBase_SetTeam_Statics
	{
		struct FPSPlayerControllerBase_eventSetTeam_Parms
		{
			uint8 NewTeam;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewTeam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSPlayerControllerBase_SetTeam_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerControllerBase_eventSetTeam_Parms, NewTeam), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerControllerBase_SetTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerControllerBase_SetTeam_Statics::NewProp_NewTeam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerControllerBase_SetTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerControllerBase_SetTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerControllerBase, nullptr, "SetTeam", nullptr, nullptr, sizeof(FPSPlayerControllerBase_eventSetTeam_Parms), Z_Construct_UFunction_AFPSPlayerControllerBase_SetTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_SetTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerControllerBase_SetTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_SetTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerControllerBase_SetTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerControllerBase_SetTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerControllerBase_Spectate_Statics
	{
		struct FPSPlayerControllerBase_eventSpectate_Parms
		{
			ASpectatorPawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSPlayerControllerBase_Spectate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerControllerBase_eventSpectate_Parms, ReturnValue), Z_Construct_UClass_ASpectatorPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerControllerBase_Spectate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerControllerBase_Spectate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerControllerBase_Spectate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerControllerBase_Spectate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerControllerBase, nullptr, "Spectate", nullptr, nullptr, sizeof(FPSPlayerControllerBase_eventSpectate_Parms), Z_Construct_UFunction_AFPSPlayerControllerBase_Spectate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_Spectate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerControllerBase_Spectate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerControllerBase_Spectate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerControllerBase_Spectate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerControllerBase_Spectate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSPlayerControllerBase_NoRegister()
	{
		return AFPSPlayerControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_AFPSPlayerControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookSensitivityMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookSensitivityMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bToggleSprint_MetaData[];
#endif
		static void NewProp_bToggleSprint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToggleSprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bToggleCrouch_MetaData[];
#endif
		static void NewProp_bToggleCrouch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToggleCrouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bToggleAim_MetaData[];
#endif
		static void NewProp_bToggleAim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToggleAim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bToggleLean_MetaData[];
#endif
		static void NewProp_bToggleLean_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToggleLean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bToggleLowReady_MetaData[];
#endif
		static void NewProp_bToggleLowReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToggleLowReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bToggleBracedAim_MetaData[];
#endif
		static void NewProp_bToggleBracedAim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToggleBracedAim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInputEnabled_MetaData[];
#endif
		static void NewProp_bIsInputEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInputEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertHorizontalLook_MetaData[];
#endif
		static void NewProp_bInvertHorizontalLook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertHorizontalLook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertVerticalLook_MetaData[];
#endif
		static void NewProp_bInvertVerticalLook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertVerticalLook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSCharacterBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSCharacterBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AITeam_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AITeam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastActionTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LastActionTimestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSPlayerControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSPlayerControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSPlayerControllerBase_CanUseCosmetic, "CanUseCosmetic" }, // 2839562554
		{ &Z_Construct_UFunction_AFPSPlayerControllerBase_GetHorizontalSensitivity, "GetHorizontalSensitivity" }, // 1108774454
		{ &Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookX, "GetLookX" }, // 3338053360
		{ &Z_Construct_UFunction_AFPSPlayerControllerBase_GetLookY, "GetLookY" }, // 1086188653
		{ &Z_Construct_UFunction_AFPSPlayerControllerBase_GetVerticalSensitivity, "GetVerticalSensitivity" }, // 537833750
		{ &Z_Construct_UFunction_AFPSPlayerControllerBase_PlayerStateUpdated, "PlayerStateUpdated" }, // 1642963703
		{ &Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveClientWasKicked, "ReceiveClientWasKicked" }, // 1355659841
		{ &Z_Construct_UFunction_AFPSPlayerControllerBase_ReceivePostSeamlessTravel, "ReceivePostSeamlessTravel" }, // 3022014988
		{ &Z_Construct_UFunction_AFPSPlayerControllerBase_ReceiveReturnToMainMenu, "ReceiveReturnToMainMenu" }, // 1806557443
		{ &Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookX, "ServerSetLookX" }, // 1792406716
		{ &Z_Construct_UFunction_AFPSPlayerControllerBase_ServerSetLookY, "ServerSetLookY" }, // 3758157978
		{ &Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookX, "SetLookX" }, // 1886817777
		{ &Z_Construct_UFunction_AFPSPlayerControllerBase_SetLookY, "SetLookY" }, // 3602079004
		{ &Z_Construct_UFunction_AFPSPlayerControllerBase_SetTeam, "SetTeam" }, // 909089031
		{ &Z_Construct_UFunction_AFPSPlayerControllerBase_Spectate, "Spectate" }, // 1677526949
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerControllerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FPSPlayerControllerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_LookSensitivity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_LookSensitivity = { "LookSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerControllerBase, LookSensitivity), METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_LookSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_LookSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_LookSensitivityMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_LookSensitivityMultiplier = { "LookSensitivityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerControllerBase, LookSensitivityMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_LookSensitivityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_LookSensitivityMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleSprint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleSprint_SetBit(void* Obj)
	{
		((AFPSPlayerControllerBase*)Obj)->bToggleSprint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleSprint = { "bToggleSprint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSPlayerControllerBase), &Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleSprint_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleSprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleSprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleCrouch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleCrouch_SetBit(void* Obj)
	{
		((AFPSPlayerControllerBase*)Obj)->bToggleCrouch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleCrouch = { "bToggleCrouch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSPlayerControllerBase), &Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleCrouch_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleCrouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleCrouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleAim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleAim_SetBit(void* Obj)
	{
		((AFPSPlayerControllerBase*)Obj)->bToggleAim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleAim = { "bToggleAim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSPlayerControllerBase), &Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleAim_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleAim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleLean_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleLean_SetBit(void* Obj)
	{
		((AFPSPlayerControllerBase*)Obj)->bToggleLean = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleLean = { "bToggleLean", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSPlayerControllerBase), &Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleLean_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleLean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleLean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleLowReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleLowReady_SetBit(void* Obj)
	{
		((AFPSPlayerControllerBase*)Obj)->bToggleLowReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleLowReady = { "bToggleLowReady", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSPlayerControllerBase), &Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleLowReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleLowReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleLowReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleBracedAim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleBracedAim_SetBit(void* Obj)
	{
		((AFPSPlayerControllerBase*)Obj)->bToggleBracedAim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleBracedAim = { "bToggleBracedAim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSPlayerControllerBase), &Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleBracedAim_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleBracedAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleBracedAim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bIsInputEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bIsInputEnabled_SetBit(void* Obj)
	{
		((AFPSPlayerControllerBase*)Obj)->bIsInputEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bIsInputEnabled = { "bIsInputEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSPlayerControllerBase), &Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bIsInputEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bIsInputEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bIsInputEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bInvertHorizontalLook_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bInvertHorizontalLook_SetBit(void* Obj)
	{
		((AFPSPlayerControllerBase*)Obj)->bInvertHorizontalLook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bInvertHorizontalLook = { "bInvertHorizontalLook", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSPlayerControllerBase), &Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bInvertHorizontalLook_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bInvertHorizontalLook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bInvertHorizontalLook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bInvertVerticalLook_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bInvertVerticalLook_SetBit(void* Obj)
	{
		((AFPSPlayerControllerBase*)Obj)->bInvertVerticalLook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bInvertVerticalLook = { "bInvertVerticalLook", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSPlayerControllerBase), &Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bInvertVerticalLook_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bInvertVerticalLook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bInvertVerticalLook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_FPSCharacterBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_FPSCharacterBase = { "FPSCharacterBase", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerControllerBase, FPSCharacterBase), Z_Construct_UClass_AFPSCharacterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_FPSCharacterBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_FPSCharacterBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_AITeam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_AITeam = { "AITeam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerControllerBase, AITeam), nullptr, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_AITeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_AITeam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_LastActionTimestamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/FPSPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_LastActionTimestamp = { "LastActionTimestamp", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerControllerBase, LastActionTimestamp), METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_LastActionTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_LastActionTimestamp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSPlayerControllerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_LookSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_LookSensitivityMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleSprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleCrouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleAim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleLean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleLowReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bToggleBracedAim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bIsInputEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bInvertHorizontalLook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_bInvertVerticalLook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_FPSCharacterBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_AITeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerControllerBase_Statics::NewProp_LastActionTimestamp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFPSPlayerControllerBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AFPSPlayerControllerBase, IGenericTeamAgentInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSPlayerControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSPlayerControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSPlayerControllerBase_Statics::ClassParams = {
		&AFPSPlayerControllerBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSPlayerControllerBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSPlayerControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSPlayerControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSPlayerControllerBase, 1676625576);
	template<> FPSCONTROLLER_API UClass* StaticClass<AFPSPlayerControllerBase>()
	{
		return AFPSPlayerControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSPlayerControllerBase(Z_Construct_UClass_AFPSPlayerControllerBase, &AFPSPlayerControllerBase::StaticClass, TEXT("/Script/FPSController"), TEXT("AFPSPlayerControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSPlayerControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
