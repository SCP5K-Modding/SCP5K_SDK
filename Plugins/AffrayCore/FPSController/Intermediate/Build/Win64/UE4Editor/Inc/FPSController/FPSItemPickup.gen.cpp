// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSItemPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSItemPickup() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSItemPickup_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSItemPickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSItemData_NoRegister();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FFPSItemSlotData();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FFPSCosmetic();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSCharacterBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSItemPickup::execGetEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execGetItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UFPSItemData>*)Z_Param__Result=P_THIS->GetItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execGetSlotData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFPSItemSlotData*)Z_Param__Result=P_THIS->GetSlotData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execGetSwap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSwap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execGetWasSpawned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWasSpawned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execItemLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ItemLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execOnApplyCosmetic)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FFPSCosmetic,Z_Param_Cosmetic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnApplyCosmetic_Implementation(Z_Param_Index,Z_Param_Cosmetic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execOnRep_Enabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Enabled_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execOnRep_HideWhenDisabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HideWhenDisabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execOnRep_Item)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Item_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execOnRep_SlotData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SlotData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execPickup)
	{
		P_GET_OBJECT(AFPSCharacterBase,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pickup(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execResetPickup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetPickup_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bNewEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bNewEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execSetHideWhenDisabled)
	{
		P_GET_UBOOL(Z_Param_bNewHideWhenDisabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHideWhenDisabled(Z_Param_bNewHideWhenDisabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execSetItem)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UFPSItemData>,Z_Param_ItemData);
		P_GET_STRUCT(FFPSItemSlotData,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItem(Z_Param_ItemData,Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execSetOneUse)
	{
		P_GET_UBOOL(Z_Param_bNewOneUse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOneUse(Z_Param_bNewOneUse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execSetStartEnabled)
	{
		P_GET_UBOOL(Z_Param_bNewStartEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartEnabled(Z_Param_bNewStartEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execSetSwap)
	{
		P_GET_UBOOL(Z_Param_bNewSwap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSwap(Z_Param_bNewSwap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execSetUsePhysics)
	{
		P_GET_UBOOL(Z_Param_bNewUsePhysics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUsePhysics(Z_Param_bNewUsePhysics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execSetWasSpawned)
	{
		P_GET_UBOOL(Z_Param_bNewWasSpawned);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWasSpawned(Z_Param_bNewWasSpawned);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execUpdateAttachments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAttachments_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItemPickup::execUpdateCosmetic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCosmetic_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AFPSItemPickup_OnApplyCosmetic = FName(TEXT("OnApplyCosmetic"));
	void AFPSItemPickup::OnApplyCosmetic(int32 Index, FFPSCosmetic Cosmetic)
	{
		FPSItemPickup_eventOnApplyCosmetic_Parms Parms;
		Parms.Index=Index;
		Parms.Cosmetic=Cosmetic;
		ProcessEvent(FindFunctionChecked(NAME_AFPSItemPickup_OnApplyCosmetic),&Parms);
	}
	static FName NAME_AFPSItemPickup_OnRep_Enabled = FName(TEXT("OnRep_Enabled"));
	void AFPSItemPickup::OnRep_Enabled()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItemPickup_OnRep_Enabled),NULL);
	}
	static FName NAME_AFPSItemPickup_OnRep_Item = FName(TEXT("OnRep_Item"));
	void AFPSItemPickup::OnRep_Item()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItemPickup_OnRep_Item),NULL);
	}
	static FName NAME_AFPSItemPickup_OnRep_SlotData = FName(TEXT("OnRep_SlotData"));
	void AFPSItemPickup::OnRep_SlotData()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItemPickup_OnRep_SlotData),NULL);
	}
	static FName NAME_AFPSItemPickup_ResetPickup = FName(TEXT("ResetPickup"));
	void AFPSItemPickup::ResetPickup()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItemPickup_ResetPickup),NULL);
	}
	static FName NAME_AFPSItemPickup_UpdateAttachments = FName(TEXT("UpdateAttachments"));
	void AFPSItemPickup::UpdateAttachments()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItemPickup_UpdateAttachments),NULL);
	}
	static FName NAME_AFPSItemPickup_UpdateCosmetic = FName(TEXT("UpdateCosmetic"));
	void AFPSItemPickup::UpdateCosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItemPickup_UpdateCosmetic),NULL);
	}
	void AFPSItemPickup::StaticRegisterNativesAFPSItemPickup()
	{
		UClass* Class = AFPSItemPickup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEnabled", &AFPSItemPickup::execGetEnabled },
			{ "GetItem", &AFPSItemPickup::execGetItem },
			{ "GetSlotData", &AFPSItemPickup::execGetSlotData },
			{ "GetSwap", &AFPSItemPickup::execGetSwap },
			{ "GetWasSpawned", &AFPSItemPickup::execGetWasSpawned },
			{ "ItemLoaded", &AFPSItemPickup::execItemLoaded },
			{ "OnApplyCosmetic", &AFPSItemPickup::execOnApplyCosmetic },
			{ "OnRep_Enabled", &AFPSItemPickup::execOnRep_Enabled },
			{ "OnRep_HideWhenDisabled", &AFPSItemPickup::execOnRep_HideWhenDisabled },
			{ "OnRep_Item", &AFPSItemPickup::execOnRep_Item },
			{ "OnRep_SlotData", &AFPSItemPickup::execOnRep_SlotData },
			{ "Pickup", &AFPSItemPickup::execPickup },
			{ "ResetPickup", &AFPSItemPickup::execResetPickup },
			{ "SetEnabled", &AFPSItemPickup::execSetEnabled },
			{ "SetHideWhenDisabled", &AFPSItemPickup::execSetHideWhenDisabled },
			{ "SetItem", &AFPSItemPickup::execSetItem },
			{ "SetOneUse", &AFPSItemPickup::execSetOneUse },
			{ "SetStartEnabled", &AFPSItemPickup::execSetStartEnabled },
			{ "SetSwap", &AFPSItemPickup::execSetSwap },
			{ "SetUsePhysics", &AFPSItemPickup::execSetUsePhysics },
			{ "SetWasSpawned", &AFPSItemPickup::execSetWasSpawned },
			{ "UpdateAttachments", &AFPSItemPickup::execUpdateAttachments },
			{ "UpdateCosmetic", &AFPSItemPickup::execUpdateCosmetic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSItemPickup_GetEnabled_Statics
	{
		struct FPSItemPickup_eventGetEnabled_Parms
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
	void Z_Construct_UFunction_AFPSItemPickup_GetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSItemPickup_eventGetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItemPickup_GetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItemPickup_eventGetEnabled_Parms), &Z_Construct_UFunction_AFPSItemPickup_GetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItemPickup_GetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItemPickup_GetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_GetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_GetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "GetEnabled", nullptr, nullptr, sizeof(FPSItemPickup_eventGetEnabled_Parms), Z_Construct_UFunction_AFPSItemPickup_GetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_GetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_GetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_GetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_GetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_GetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_GetItem_Statics
	{
		struct FPSItemPickup_eventGetItem_Parms
		{
			TSoftObjectPtr<UFPSItemData> ReturnValue;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_AFPSItemPickup_GetItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItemPickup_eventGetItem_Parms, ReturnValue), Z_Construct_UClass_UFPSItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItemPickup_GetItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItemPickup_GetItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_GetItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_GetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "GetItem", nullptr, nullptr, sizeof(FPSItemPickup_eventGetItem_Parms), Z_Construct_UFunction_AFPSItemPickup_GetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_GetItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_GetItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_GetItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_GetItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_GetItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_GetSlotData_Statics
	{
		struct FPSItemPickup_eventGetSlotData_Parms
		{
			FFPSItemSlotData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSItemPickup_GetSlotData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItemPickup_eventGetSlotData_Parms, ReturnValue), Z_Construct_UScriptStruct_FFPSItemSlotData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItemPickup_GetSlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItemPickup_GetSlotData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_GetSlotData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_GetSlotData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "GetSlotData", nullptr, nullptr, sizeof(FPSItemPickup_eventGetSlotData_Parms), Z_Construct_UFunction_AFPSItemPickup_GetSlotData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_GetSlotData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_GetSlotData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_GetSlotData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_GetSlotData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_GetSlotData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_GetSwap_Statics
	{
		struct FPSItemPickup_eventGetSwap_Parms
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
	void Z_Construct_UFunction_AFPSItemPickup_GetSwap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSItemPickup_eventGetSwap_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItemPickup_GetSwap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItemPickup_eventGetSwap_Parms), &Z_Construct_UFunction_AFPSItemPickup_GetSwap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItemPickup_GetSwap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItemPickup_GetSwap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_GetSwap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_GetSwap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "GetSwap", nullptr, nullptr, sizeof(FPSItemPickup_eventGetSwap_Parms), Z_Construct_UFunction_AFPSItemPickup_GetSwap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_GetSwap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_GetSwap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_GetSwap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_GetSwap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_GetSwap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_GetWasSpawned_Statics
	{
		struct FPSItemPickup_eventGetWasSpawned_Parms
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
	void Z_Construct_UFunction_AFPSItemPickup_GetWasSpawned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSItemPickup_eventGetWasSpawned_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItemPickup_GetWasSpawned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItemPickup_eventGetWasSpawned_Parms), &Z_Construct_UFunction_AFPSItemPickup_GetWasSpawned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItemPickup_GetWasSpawned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItemPickup_GetWasSpawned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_GetWasSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_GetWasSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "GetWasSpawned", nullptr, nullptr, sizeof(FPSItemPickup_eventGetWasSpawned_Parms), Z_Construct_UFunction_AFPSItemPickup_GetWasSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_GetWasSpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_GetWasSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_GetWasSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_GetWasSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_GetWasSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_ItemLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_ItemLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_ItemLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "ItemLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_ItemLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_ItemLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_ItemLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_ItemLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_OnApplyCosmetic_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cosmetic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSItemPickup_OnApplyCosmetic_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItemPickup_eventOnApplyCosmetic_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSItemPickup_OnApplyCosmetic_Statics::NewProp_Cosmetic = { "Cosmetic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItemPickup_eventOnApplyCosmetic_Parms, Cosmetic), Z_Construct_UScriptStruct_FFPSCosmetic, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItemPickup_OnApplyCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItemPickup_OnApplyCosmetic_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItemPickup_OnApplyCosmetic_Statics::NewProp_Cosmetic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_OnApplyCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_OnApplyCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "OnApplyCosmetic", nullptr, nullptr, sizeof(FPSItemPickup_eventOnApplyCosmetic_Parms), Z_Construct_UFunction_AFPSItemPickup_OnApplyCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_OnApplyCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_OnApplyCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_OnApplyCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_OnApplyCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_OnApplyCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_OnRep_Enabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_OnRep_Enabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_OnRep_Enabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "OnRep_Enabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_OnRep_Enabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_OnRep_Enabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_OnRep_Enabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_OnRep_Enabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_OnRep_HideWhenDisabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_OnRep_HideWhenDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_OnRep_HideWhenDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "OnRep_HideWhenDisabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_OnRep_HideWhenDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_OnRep_HideWhenDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_OnRep_HideWhenDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_OnRep_HideWhenDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_OnRep_Item_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_OnRep_Item_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_OnRep_Item_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "OnRep_Item", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_OnRep_Item_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_OnRep_Item_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_OnRep_Item()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_OnRep_Item_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_OnRep_SlotData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_OnRep_SlotData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_OnRep_SlotData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "OnRep_SlotData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_OnRep_SlotData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_OnRep_SlotData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_OnRep_SlotData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_OnRep_SlotData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_Pickup_Statics
	{
		struct FPSItemPickup_eventPickup_Parms
		{
			AFPSCharacterBase* Character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSItemPickup_Pickup_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItemPickup_eventPickup_Parms, Character), Z_Construct_UClass_AFPSCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItemPickup_Pickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItemPickup_Pickup_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_Pickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_Pickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "Pickup", nullptr, nullptr, sizeof(FPSItemPickup_eventPickup_Parms), Z_Construct_UFunction_AFPSItemPickup_Pickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_Pickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_Pickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_Pickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_Pickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_Pickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_ResetPickup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_ResetPickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_ResetPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "ResetPickup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C04, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_ResetPickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_ResetPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_ResetPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_ResetPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_SetEnabled_Statics
	{
		struct FPSItemPickup_eventSetEnabled_Parms
		{
			bool bNewEnabled;
		};
		static void NewProp_bNewEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSItemPickup_SetEnabled_Statics::NewProp_bNewEnabled_SetBit(void* Obj)
	{
		((FPSItemPickup_eventSetEnabled_Parms*)Obj)->bNewEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItemPickup_SetEnabled_Statics::NewProp_bNewEnabled = { "bNewEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItemPickup_eventSetEnabled_Parms), &Z_Construct_UFunction_AFPSItemPickup_SetEnabled_Statics::NewProp_bNewEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItemPickup_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItemPickup_SetEnabled_Statics::NewProp_bNewEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "SetEnabled", nullptr, nullptr, sizeof(FPSItemPickup_eventSetEnabled_Parms), Z_Construct_UFunction_AFPSItemPickup_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_SetHideWhenDisabled_Statics
	{
		struct FPSItemPickup_eventSetHideWhenDisabled_Parms
		{
			bool bNewHideWhenDisabled;
		};
		static void NewProp_bNewHideWhenDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewHideWhenDisabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSItemPickup_SetHideWhenDisabled_Statics::NewProp_bNewHideWhenDisabled_SetBit(void* Obj)
	{
		((FPSItemPickup_eventSetHideWhenDisabled_Parms*)Obj)->bNewHideWhenDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItemPickup_SetHideWhenDisabled_Statics::NewProp_bNewHideWhenDisabled = { "bNewHideWhenDisabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItemPickup_eventSetHideWhenDisabled_Parms), &Z_Construct_UFunction_AFPSItemPickup_SetHideWhenDisabled_Statics::NewProp_bNewHideWhenDisabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItemPickup_SetHideWhenDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItemPickup_SetHideWhenDisabled_Statics::NewProp_bNewHideWhenDisabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_SetHideWhenDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_SetHideWhenDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "SetHideWhenDisabled", nullptr, nullptr, sizeof(FPSItemPickup_eventSetHideWhenDisabled_Parms), Z_Construct_UFunction_AFPSItemPickup_SetHideWhenDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_SetHideWhenDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_SetHideWhenDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_SetHideWhenDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_SetHideWhenDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_SetHideWhenDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_SetItem_Statics
	{
		struct FPSItemPickup_eventSetItem_Parms
		{
			TSoftObjectPtr<UFPSItemData> ItemData;
			FFPSItemSlotData Slot;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_AFPSItemPickup_SetItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItemPickup_eventSetItem_Parms, ItemData), Z_Construct_UClass_UFPSItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSItemPickup_SetItem_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItemPickup_eventSetItem_Parms, Slot), Z_Construct_UScriptStruct_FFPSItemSlotData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItemPickup_SetItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItemPickup_SetItem_Statics::NewProp_ItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItemPickup_SetItem_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_SetItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_SetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "SetItem", nullptr, nullptr, sizeof(FPSItemPickup_eventSetItem_Parms), Z_Construct_UFunction_AFPSItemPickup_SetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_SetItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_SetItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_SetItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_SetItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_SetItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_SetOneUse_Statics
	{
		struct FPSItemPickup_eventSetOneUse_Parms
		{
			bool bNewOneUse;
		};
		static void NewProp_bNewOneUse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewOneUse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSItemPickup_SetOneUse_Statics::NewProp_bNewOneUse_SetBit(void* Obj)
	{
		((FPSItemPickup_eventSetOneUse_Parms*)Obj)->bNewOneUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItemPickup_SetOneUse_Statics::NewProp_bNewOneUse = { "bNewOneUse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItemPickup_eventSetOneUse_Parms), &Z_Construct_UFunction_AFPSItemPickup_SetOneUse_Statics::NewProp_bNewOneUse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItemPickup_SetOneUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItemPickup_SetOneUse_Statics::NewProp_bNewOneUse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_SetOneUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_SetOneUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "SetOneUse", nullptr, nullptr, sizeof(FPSItemPickup_eventSetOneUse_Parms), Z_Construct_UFunction_AFPSItemPickup_SetOneUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_SetOneUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_SetOneUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_SetOneUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_SetOneUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_SetOneUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_SetStartEnabled_Statics
	{
		struct FPSItemPickup_eventSetStartEnabled_Parms
		{
			bool bNewStartEnabled;
		};
		static void NewProp_bNewStartEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewStartEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSItemPickup_SetStartEnabled_Statics::NewProp_bNewStartEnabled_SetBit(void* Obj)
	{
		((FPSItemPickup_eventSetStartEnabled_Parms*)Obj)->bNewStartEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItemPickup_SetStartEnabled_Statics::NewProp_bNewStartEnabled = { "bNewStartEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItemPickup_eventSetStartEnabled_Parms), &Z_Construct_UFunction_AFPSItemPickup_SetStartEnabled_Statics::NewProp_bNewStartEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItemPickup_SetStartEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItemPickup_SetStartEnabled_Statics::NewProp_bNewStartEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_SetStartEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_SetStartEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "SetStartEnabled", nullptr, nullptr, sizeof(FPSItemPickup_eventSetStartEnabled_Parms), Z_Construct_UFunction_AFPSItemPickup_SetStartEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_SetStartEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_SetStartEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_SetStartEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_SetStartEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_SetStartEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_SetSwap_Statics
	{
		struct FPSItemPickup_eventSetSwap_Parms
		{
			bool bNewSwap;
		};
		static void NewProp_bNewSwap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewSwap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSItemPickup_SetSwap_Statics::NewProp_bNewSwap_SetBit(void* Obj)
	{
		((FPSItemPickup_eventSetSwap_Parms*)Obj)->bNewSwap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItemPickup_SetSwap_Statics::NewProp_bNewSwap = { "bNewSwap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItemPickup_eventSetSwap_Parms), &Z_Construct_UFunction_AFPSItemPickup_SetSwap_Statics::NewProp_bNewSwap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItemPickup_SetSwap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItemPickup_SetSwap_Statics::NewProp_bNewSwap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_SetSwap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_SetSwap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "SetSwap", nullptr, nullptr, sizeof(FPSItemPickup_eventSetSwap_Parms), Z_Construct_UFunction_AFPSItemPickup_SetSwap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_SetSwap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_SetSwap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_SetSwap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_SetSwap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_SetSwap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_SetUsePhysics_Statics
	{
		struct FPSItemPickup_eventSetUsePhysics_Parms
		{
			bool bNewUsePhysics;
		};
		static void NewProp_bNewUsePhysics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewUsePhysics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSItemPickup_SetUsePhysics_Statics::NewProp_bNewUsePhysics_SetBit(void* Obj)
	{
		((FPSItemPickup_eventSetUsePhysics_Parms*)Obj)->bNewUsePhysics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItemPickup_SetUsePhysics_Statics::NewProp_bNewUsePhysics = { "bNewUsePhysics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItemPickup_eventSetUsePhysics_Parms), &Z_Construct_UFunction_AFPSItemPickup_SetUsePhysics_Statics::NewProp_bNewUsePhysics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItemPickup_SetUsePhysics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItemPickup_SetUsePhysics_Statics::NewProp_bNewUsePhysics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_SetUsePhysics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_SetUsePhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "SetUsePhysics", nullptr, nullptr, sizeof(FPSItemPickup_eventSetUsePhysics_Parms), Z_Construct_UFunction_AFPSItemPickup_SetUsePhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_SetUsePhysics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_SetUsePhysics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_SetUsePhysics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_SetUsePhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_SetUsePhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_SetWasSpawned_Statics
	{
		struct FPSItemPickup_eventSetWasSpawned_Parms
		{
			bool bNewWasSpawned;
		};
		static void NewProp_bNewWasSpawned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewWasSpawned;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSItemPickup_SetWasSpawned_Statics::NewProp_bNewWasSpawned_SetBit(void* Obj)
	{
		((FPSItemPickup_eventSetWasSpawned_Parms*)Obj)->bNewWasSpawned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItemPickup_SetWasSpawned_Statics::NewProp_bNewWasSpawned = { "bNewWasSpawned", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItemPickup_eventSetWasSpawned_Parms), &Z_Construct_UFunction_AFPSItemPickup_SetWasSpawned_Statics::NewProp_bNewWasSpawned_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItemPickup_SetWasSpawned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItemPickup_SetWasSpawned_Statics::NewProp_bNewWasSpawned,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_SetWasSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_SetWasSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "SetWasSpawned", nullptr, nullptr, sizeof(FPSItemPickup_eventSetWasSpawned_Parms), Z_Construct_UFunction_AFPSItemPickup_SetWasSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_SetWasSpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_SetWasSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_SetWasSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_SetWasSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_SetWasSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_UpdateAttachments_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_UpdateAttachments_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_UpdateAttachments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "UpdateAttachments", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_UpdateAttachments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_UpdateAttachments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_UpdateAttachments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_UpdateAttachments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItemPickup_UpdateCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItemPickup_UpdateCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItemPickup_UpdateCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItemPickup, nullptr, "UpdateCosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItemPickup_UpdateCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItemPickup_UpdateCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItemPickup_UpdateCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItemPickup_UpdateCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSItemPickup_NoRegister()
	{
		return AFPSItemPickup::StaticClass();
	}
	struct Z_Construct_UClass_AFPSItemPickup_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartEnabled_MetaData[];
#endif
		static void NewProp_bStartEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOneUse_MetaData[];
#endif
		static void NewProp_bOneUse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOneUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSwap_MetaData[];
#endif
		static void NewProp_bSwap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSwap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideWhenDisabled_MetaData[];
#endif
		static void NewProp_bHideWhenDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideWhenDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePhysics_MetaData[];
#endif
		static void NewProp_bUsePhysics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePhysics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasSpawned_MetaData[];
#endif
		static void NewProp_bWasSpawned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSpawned;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSItemPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSItemPickup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSItemPickup_GetEnabled, "GetEnabled" }, // 1718651409
		{ &Z_Construct_UFunction_AFPSItemPickup_GetItem, "GetItem" }, // 1548685208
		{ &Z_Construct_UFunction_AFPSItemPickup_GetSlotData, "GetSlotData" }, // 3610028623
		{ &Z_Construct_UFunction_AFPSItemPickup_GetSwap, "GetSwap" }, // 4101903735
		{ &Z_Construct_UFunction_AFPSItemPickup_GetWasSpawned, "GetWasSpawned" }, // 4232557282
		{ &Z_Construct_UFunction_AFPSItemPickup_ItemLoaded, "ItemLoaded" }, // 2213972592
		{ &Z_Construct_UFunction_AFPSItemPickup_OnApplyCosmetic, "OnApplyCosmetic" }, // 1603452565
		{ &Z_Construct_UFunction_AFPSItemPickup_OnRep_Enabled, "OnRep_Enabled" }, // 3058322434
		{ &Z_Construct_UFunction_AFPSItemPickup_OnRep_HideWhenDisabled, "OnRep_HideWhenDisabled" }, // 60748534
		{ &Z_Construct_UFunction_AFPSItemPickup_OnRep_Item, "OnRep_Item" }, // 894693860
		{ &Z_Construct_UFunction_AFPSItemPickup_OnRep_SlotData, "OnRep_SlotData" }, // 182391061
		{ &Z_Construct_UFunction_AFPSItemPickup_Pickup, "Pickup" }, // 2564699917
		{ &Z_Construct_UFunction_AFPSItemPickup_ResetPickup, "ResetPickup" }, // 2400951371
		{ &Z_Construct_UFunction_AFPSItemPickup_SetEnabled, "SetEnabled" }, // 2158379431
		{ &Z_Construct_UFunction_AFPSItemPickup_SetHideWhenDisabled, "SetHideWhenDisabled" }, // 3228832244
		{ &Z_Construct_UFunction_AFPSItemPickup_SetItem, "SetItem" }, // 2717891749
		{ &Z_Construct_UFunction_AFPSItemPickup_SetOneUse, "SetOneUse" }, // 3410185449
		{ &Z_Construct_UFunction_AFPSItemPickup_SetStartEnabled, "SetStartEnabled" }, // 2000476425
		{ &Z_Construct_UFunction_AFPSItemPickup_SetSwap, "SetSwap" }, // 3318588383
		{ &Z_Construct_UFunction_AFPSItemPickup_SetUsePhysics, "SetUsePhysics" }, // 2044155651
		{ &Z_Construct_UFunction_AFPSItemPickup_SetWasSpawned, "SetWasSpawned" }, // 772033750
		{ &Z_Construct_UFunction_AFPSItemPickup_UpdateAttachments, "UpdateAttachments" }, // 381130070
		{ &Z_Construct_UFunction_AFPSItemPickup_UpdateCosmetic, "UpdateCosmetic" }, // 150008626
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItemPickup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSItemPickup.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemPickup" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItemPickup, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_PickupEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemPickup" },
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_PickupEvent = { "PickupEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItemPickup, PickupEvent), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_PickupEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_PickupEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bStartEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemPickup" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	void Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bStartEnabled_SetBit(void* Obj)
	{
		((AFPSItemPickup*)Obj)->bStartEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bStartEnabled = { "bStartEnabled", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSItemPickup), &Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bStartEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bStartEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bStartEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_Item_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemPickup" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_Item = { "Item", "OnRep_Item", (EPropertyFlags)0x0025080100000025, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItemPickup, Item), Z_Construct_UClass_UFPSItemData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_Item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_SlotData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemPickup" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_SlotData = { "SlotData", "OnRep_SlotData", (EPropertyFlags)0x0021080100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItemPickup, SlotData), Z_Construct_UScriptStruct_FFPSItemSlotData, METADATA_PARAMS(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_SlotData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_SlotData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemPickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItemPickup, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bOneUse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemPickup" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	void Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bOneUse_SetBit(void* Obj)
	{
		((AFPSItemPickup*)Obj)->bOneUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bOneUse = { "bOneUse", nullptr, (EPropertyFlags)0x0021080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSItemPickup), &Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bOneUse_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bOneUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bOneUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bSwap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemPickup" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	void Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bSwap_SetBit(void* Obj)
	{
		((AFPSItemPickup*)Obj)->bSwap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bSwap = { "bSwap", nullptr, (EPropertyFlags)0x0021080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSItemPickup), &Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bSwap_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bSwap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bSwap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemPickup" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	void Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((AFPSItemPickup*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bEnabled = { "bEnabled", "OnRep_Enabled", (EPropertyFlags)0x0021080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSItemPickup), &Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bHideWhenDisabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemPickup" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	void Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bHideWhenDisabled_SetBit(void* Obj)
	{
		((AFPSItemPickup*)Obj)->bHideWhenDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bHideWhenDisabled = { "bHideWhenDisabled", "OnRep_HideWhenDisabled", (EPropertyFlags)0x0021080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSItemPickup), &Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bHideWhenDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bHideWhenDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bHideWhenDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bUsePhysics_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemPickup" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	void Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bUsePhysics_SetBit(void* Obj)
	{
		((AFPSItemPickup*)Obj)->bUsePhysics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bUsePhysics = { "bUsePhysics", nullptr, (EPropertyFlags)0x0021080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSItemPickup), &Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bUsePhysics_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bUsePhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bUsePhysics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bWasSpawned_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemPickup" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/FPSItemPickup.h" },
	};
#endif
	void Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bWasSpawned_SetBit(void* Obj)
	{
		((AFPSItemPickup*)Obj)->bWasSpawned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bWasSpawned = { "bWasSpawned", nullptr, (EPropertyFlags)0x0021080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSItemPickup), &Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bWasSpawned_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bWasSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bWasSpawned_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSItemPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_PickupEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bStartEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_SlotData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bOneUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bSwap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bHideWhenDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bUsePhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItemPickup_Statics::NewProp_bWasSpawned,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSItemPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSItemPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSItemPickup_Statics::ClassParams = {
		&AFPSItemPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSItemPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItemPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSItemPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItemPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSItemPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSItemPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSItemPickup, 2804650982);
	template<> FPSCONTROLLER_API UClass* StaticClass<AFPSItemPickup>()
	{
		return AFPSItemPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSItemPickup(Z_Construct_UClass_AFPSItemPickup, &AFPSItemPickup::StaticClass, TEXT("/Script/FPSController"), TEXT("AFPSItemPickup"), false, nullptr, nullptr, nullptr);

	void AFPSItemPickup::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Item(TEXT("Item"));
		static const FName Name_SlotData(TEXT("SlotData"));
		static const FName Name_bOneUse(TEXT("bOneUse"));
		static const FName Name_bSwap(TEXT("bSwap"));
		static const FName Name_bEnabled(TEXT("bEnabled"));
		static const FName Name_bHideWhenDisabled(TEXT("bHideWhenDisabled"));
		static const FName Name_bUsePhysics(TEXT("bUsePhysics"));
		static const FName Name_bWasSpawned(TEXT("bWasSpawned"));

		const bool bIsValid = true
			&& Name_Item == ClassReps[(int32)ENetFields_Private::Item].Property->GetFName()
			&& Name_SlotData == ClassReps[(int32)ENetFields_Private::SlotData].Property->GetFName()
			&& Name_bOneUse == ClassReps[(int32)ENetFields_Private::bOneUse].Property->GetFName()
			&& Name_bSwap == ClassReps[(int32)ENetFields_Private::bSwap].Property->GetFName()
			&& Name_bEnabled == ClassReps[(int32)ENetFields_Private::bEnabled].Property->GetFName()
			&& Name_bHideWhenDisabled == ClassReps[(int32)ENetFields_Private::bHideWhenDisabled].Property->GetFName()
			&& Name_bUsePhysics == ClassReps[(int32)ENetFields_Private::bUsePhysics].Property->GetFName()
			&& Name_bWasSpawned == ClassReps[(int32)ENetFields_Private::bWasSpawned].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AFPSItemPickup"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSItemPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
