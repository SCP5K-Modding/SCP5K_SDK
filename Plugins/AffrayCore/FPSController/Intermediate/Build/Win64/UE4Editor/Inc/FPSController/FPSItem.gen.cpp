// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSItem() {}
// Cross Module References
	FPSCONTROLLER_API UFunction* Z_Construct_UDelegateFunction_AFPSItem_ItemDataLoadedDelegate__DelegateSignature();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSItem();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAttachmentSlotData();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSAttachment_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSItemData_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSCharacterBase_NoRegister();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FFPSItemSlotData();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FFPSCosmetic();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FMeleeHitData();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleHitData();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAttachMeshHierachy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSAnimationInstance_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFirstPersonAnimInstance_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AFPSItem_ItemDataLoadedDelegate__DelegateSignature_Statics
	{
		struct FPSItem_eventItemDataLoadedDelegate_Parms
		{
			AFPSItem* Item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AFPSItem_ItemDataLoadedDelegate__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventItemDataLoadedDelegate_Parms, Item), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AFPSItem_ItemDataLoadedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AFPSItem_ItemDataLoadedDelegate__DelegateSignature_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AFPSItem_ItemDataLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AFPSItem_ItemDataLoadedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "ItemDataLoadedDelegate__DelegateSignature", nullptr, nullptr, sizeof(FPSItem_eventItemDataLoadedDelegate_Parms), Z_Construct_UDelegateFunction_AFPSItem_ItemDataLoadedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AFPSItem_ItemDataLoadedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AFPSItem_ItemDataLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AFPSItem_ItemDataLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AFPSItem_ItemDataLoadedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AFPSItem_ItemDataLoadedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AFPSItem::execAddAmmo)
	{
		P_GET_UBOOL(Z_Param_bUseFullAmmo);
		P_GET_PROPERTY(FIntProperty,Z_Param_InAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAmmo_Implementation(Z_Param_bUseFullAmmo,Z_Param_InAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execAddAttachMesh)
	{
		P_GET_STRUCT_REF(FAttachmentSlotData,Z_Param_Out_AttachmentSlotData);
		P_GET_OBJECT_REF(UStaticMeshComponent,Z_Param_Out_ThirdPersonAttachMesh);
		P_GET_OBJECT(AFPSAttachment,Z_Param_Attachment);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->AddAttachMesh(Z_Param_Out_AttachmentSlotData,Z_Param_Out_ThirdPersonAttachMesh,Z_Param_Attachment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execApplyCosmetic)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyCosmetic_Implementation(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execApplyCosmeticNoChecks)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyCosmeticNoChecks(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execCanAddAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAddAmmo_Implementation(Z_Param_InAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execCanBash)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Bias);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBash_Implementation(Z_Param_Bias);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execCanUseCosmetic)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUseCosmetic_Implementation(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execCanUseGesture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUseGesture_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execCanUseItem)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Bias);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUseItem_Implementation(Z_Param_Bias);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execCharacterUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CharacterUpdated_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execCheckAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckAmmo_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execCheckBash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckBash_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execClientTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientTick_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execCosmeticBash)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticBash_Implementation(Z_Param_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execCosmeticCheckAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticCheckAmmo_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execCosmeticEndDequip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticEndDequip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execCosmeticEndEquip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticEndEquip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execCosmeticFinishBash)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticFinishBash_Implementation(Z_Param_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execCosmeticKick)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticKick_Implementation(Z_Param_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execCosmeticStartDequip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticStartDequip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execCosmeticStartEquip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticStartEquip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execCycleMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CycleMode_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execFinishedLoadingItemData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishedLoadingItemData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execGetDelay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDelay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execGetFirstPersonMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetFirstPersonMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execGetFirstPersonRoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetFirstPersonRoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execGetItemData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFPSItemData**)Z_Param__Result=P_THIS->GetItemData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execGetItemDataAssetID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPrimaryAssetId*)Z_Param__Result=P_THIS->GetItemDataAssetID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execGetMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMesh_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execGetMovementSpeedMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeedMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execGetOwningCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AFPSCharacterBase**)Z_Param__Result=P_THIS->GetOwningCharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execGetSlotData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFPSItemSlotData*)Z_Param__Result=P_THIS->GetSlotData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execGetThirdPersonMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetThirdPersonMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execGetThirdPersonRoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetThirdPersonRoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execIsLocallyOwned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocallyOwned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execIsValidItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execJiggle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Jiggle_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execMulticastCheckAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastCheckAmmo_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execOnAdd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAdd_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execOnApplyCosmetic)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FFPSCosmetic,Z_Param_Cosmetic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnApplyCosmetic_Implementation(Z_Param_Index,Z_Param_Cosmetic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execOnCharacterDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_DestoyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterDestroyed(Z_Param_DestoyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execOnDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeath_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execOnRemove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRemove_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execOnRep_CurrentCosmetic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentCosmetic_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execOnRep_FPSCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_FPSCharacter_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execOnRep_IsEquipped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsEquipped_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execOnRep_ItemDataAssetID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ItemDataAssetID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execOnRep_MeleeData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MeleeData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execOnUpdateNightVision)
	{
		P_GET_UBOOL(Z_Param_bIsNightVision);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateNightVision_Implementation(Z_Param_bIsNightVision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execOnUpdateSprinting)
	{
		P_GET_UBOOL(Z_Param_bIsSprinting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateSprinting_Implementation(Z_Param_bIsSprinting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execOwnerTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OwnerTick_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execRemoveAttachMesh)
	{
		P_GET_STRUCT_REF(FAttachmentSlotData,Z_Param_Out_AttachmentSlotData);
		P_GET_OBJECT(AFPSAttachment,Z_Param_Attachment);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAttachMesh(Z_Param_Out_AttachmentSlotData,Z_Param_Attachment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execServerApplyCosmetic)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerApplyCosmetic_Implementation(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execServerBash)
	{
		P_GET_STRUCT(FMeleeHitData,Z_Param_Data);
		P_GET_TARRAY(FSimpleHitData,Z_Param_Hits);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerBash_Implementation(Z_Param_Data,Z_Param_Hits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execServerCheckAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerCheckAmmo_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execServerFinishBash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerFinishBash();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execServerInitItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerInitItem_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execServerStartDequip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerStartDequip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execServerStartEquip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerStartEquip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execSetBoneVisibility)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_bVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoneVisibility(Z_Param_Name,Z_Param_bVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execSetCharacter)
	{
		P_GET_OBJECT(AFPSCharacterBase,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCharacter(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execSetCurrentCosmetic)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCosmetic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentCosmetic(Z_Param_NewCosmetic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execSetDelay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewDelay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDelay(Z_Param_NewDelay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execSetFPSCharacter)
	{
		P_GET_OBJECT(AFPSCharacterBase,Z_Param_NewCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFPSCharacter(Z_Param_NewCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execSetIsEquipped)
	{
		P_GET_UBOOL(Z_Param_bNewIsEquipped);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsEquipped(Z_Param_bNewIsEquipped);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execSetItemPerspective)
	{
		P_GET_UBOOL(Z_Param_bIsFirstPerson);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemPerspective_Implementation(Z_Param_bIsFirstPerson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execSetItemVisibility)
	{
		P_GET_UBOOL(Z_Param_bVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemVisibility_Implementation(Z_Param_bVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execSetupAnimationData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupAnimationData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execSetupItemData)
	{
		P_GET_OBJECT(UFPSItemData,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupItemData_Implementation(Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execStartBash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartBash_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execStartDequip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartDequip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execStartEquip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartEquip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execStartPrimaryAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartPrimaryAction_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execStartSecondaryAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSecondaryAction_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execStopPrimaryAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopPrimaryAction_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execStopSecondaryAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSecondaryAction_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSItem::execToggleSpecial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleSpecial_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AFPSItem_AddAmmo = FName(TEXT("AddAmmo"));
	void AFPSItem::AddAmmo(bool bUseFullAmmo, int32 InAmount)
	{
		FPSItem_eventAddAmmo_Parms Parms;
		Parms.bUseFullAmmo=bUseFullAmmo ? true : false;
		Parms.InAmount=InAmount;
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_AddAmmo),&Parms);
	}
	static FName NAME_AFPSItem_ApplyCosmetic = FName(TEXT("ApplyCosmetic"));
	void AFPSItem::ApplyCosmetic(int32 Index)
	{
		FPSItem_eventApplyCosmetic_Parms Parms;
		Parms.Index=Index;
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_ApplyCosmetic),&Parms);
	}
	static FName NAME_AFPSItem_CanAddAmmo = FName(TEXT("CanAddAmmo"));
	bool AFPSItem::CanAddAmmo(int32 InAmount) const
	{
		FPSItem_eventCanAddAmmo_Parms Parms;
		Parms.InAmount=InAmount;
		const_cast<AFPSItem*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFPSItem_CanAddAmmo),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AFPSItem_CanBash = FName(TEXT("CanBash"));
	bool AFPSItem::CanBash(float Bias) const
	{
		FPSItem_eventCanBash_Parms Parms;
		Parms.Bias=Bias;
		const_cast<AFPSItem*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFPSItem_CanBash),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AFPSItem_CanUseCosmetic = FName(TEXT("CanUseCosmetic"));
	bool AFPSItem::CanUseCosmetic(int32 Index)
	{
		FPSItem_eventCanUseCosmetic_Parms Parms;
		Parms.Index=Index;
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_CanUseCosmetic),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AFPSItem_CanUseGesture = FName(TEXT("CanUseGesture"));
	bool AFPSItem::CanUseGesture() const
	{
		FPSItem_eventCanUseGesture_Parms Parms;
		const_cast<AFPSItem*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFPSItem_CanUseGesture),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AFPSItem_CanUseItem = FName(TEXT("CanUseItem"));
	bool AFPSItem::CanUseItem(float Bias) const
	{
		FPSItem_eventCanUseItem_Parms Parms;
		Parms.Bias=Bias;
		const_cast<AFPSItem*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFPSItem_CanUseItem),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AFPSItem_CharacterUpdated = FName(TEXT("CharacterUpdated"));
	void AFPSItem::CharacterUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_CharacterUpdated),NULL);
	}
	static FName NAME_AFPSItem_CheckAmmo = FName(TEXT("CheckAmmo"));
	void AFPSItem::CheckAmmo()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_CheckAmmo),NULL);
	}
	static FName NAME_AFPSItem_CheckBash = FName(TEXT("CheckBash"));
	void AFPSItem::CheckBash()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_CheckBash),NULL);
	}
	static FName NAME_AFPSItem_ClientTick = FName(TEXT("ClientTick"));
	void AFPSItem::ClientTick()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_ClientTick),NULL);
	}
	static FName NAME_AFPSItem_CosmeticBash = FName(TEXT("CosmeticBash"));
	void AFPSItem::CosmeticBash(bool bSuccess)
	{
		FPSItem_eventCosmeticBash_Parms Parms;
		Parms.bSuccess=bSuccess ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_CosmeticBash),&Parms);
	}
	static FName NAME_AFPSItem_CosmeticCheckAmmo = FName(TEXT("CosmeticCheckAmmo"));
	void AFPSItem::CosmeticCheckAmmo()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_CosmeticCheckAmmo),NULL);
	}
	static FName NAME_AFPSItem_CosmeticEndDequip = FName(TEXT("CosmeticEndDequip"));
	void AFPSItem::CosmeticEndDequip()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_CosmeticEndDequip),NULL);
	}
	static FName NAME_AFPSItem_CosmeticEndEquip = FName(TEXT("CosmeticEndEquip"));
	void AFPSItem::CosmeticEndEquip()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_CosmeticEndEquip),NULL);
	}
	static FName NAME_AFPSItem_CosmeticFinishBash = FName(TEXT("CosmeticFinishBash"));
	void AFPSItem::CosmeticFinishBash(bool bSuccess)
	{
		FPSItem_eventCosmeticFinishBash_Parms Parms;
		Parms.bSuccess=bSuccess ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_CosmeticFinishBash),&Parms);
	}
	static FName NAME_AFPSItem_CosmeticKick = FName(TEXT("CosmeticKick"));
	void AFPSItem::CosmeticKick(bool bSuccess)
	{
		FPSItem_eventCosmeticKick_Parms Parms;
		Parms.bSuccess=bSuccess ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_CosmeticKick),&Parms);
	}
	static FName NAME_AFPSItem_CosmeticStartDequip = FName(TEXT("CosmeticStartDequip"));
	void AFPSItem::CosmeticStartDequip()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_CosmeticStartDequip),NULL);
	}
	static FName NAME_AFPSItem_CosmeticStartEquip = FName(TEXT("CosmeticStartEquip"));
	void AFPSItem::CosmeticStartEquip()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_CosmeticStartEquip),NULL);
	}
	static FName NAME_AFPSItem_CycleMode = FName(TEXT("CycleMode"));
	void AFPSItem::CycleMode()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_CycleMode),NULL);
	}
	static FName NAME_AFPSItem_GetMesh = FName(TEXT("GetMesh"));
	USkeletalMeshComponent* AFPSItem::GetMesh() const
	{
		FPSItem_eventGetMesh_Parms Parms;
		const_cast<AFPSItem*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFPSItem_GetMesh),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFPSItem_Jiggle = FName(TEXT("Jiggle"));
	void AFPSItem::Jiggle()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_Jiggle),NULL);
	}
	static FName NAME_AFPSItem_MulticastCheckAmmo = FName(TEXT("MulticastCheckAmmo"));
	void AFPSItem::MulticastCheckAmmo()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_MulticastCheckAmmo),NULL);
	}
	static FName NAME_AFPSItem_OnAdd = FName(TEXT("OnAdd"));
	void AFPSItem::OnAdd()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_OnAdd),NULL);
	}
	static FName NAME_AFPSItem_OnApplyCosmetic = FName(TEXT("OnApplyCosmetic"));
	void AFPSItem::OnApplyCosmetic(int32 Index, FFPSCosmetic Cosmetic)
	{
		FPSItem_eventOnApplyCosmetic_Parms Parms;
		Parms.Index=Index;
		Parms.Cosmetic=Cosmetic;
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_OnApplyCosmetic),&Parms);
	}
	static FName NAME_AFPSItem_OnDeath = FName(TEXT("OnDeath"));
	void AFPSItem::OnDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_OnDeath),NULL);
	}
	static FName NAME_AFPSItem_OnRemove = FName(TEXT("OnRemove"));
	void AFPSItem::OnRemove()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_OnRemove),NULL);
	}
	static FName NAME_AFPSItem_OnRep_CurrentCosmetic = FName(TEXT("OnRep_CurrentCosmetic"));
	void AFPSItem::OnRep_CurrentCosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_OnRep_CurrentCosmetic),NULL);
	}
	static FName NAME_AFPSItem_OnRep_FPSCharacter = FName(TEXT("OnRep_FPSCharacter"));
	void AFPSItem::OnRep_FPSCharacter()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_OnRep_FPSCharacter),NULL);
	}
	static FName NAME_AFPSItem_OnRep_IsEquipped = FName(TEXT("OnRep_IsEquipped"));
	void AFPSItem::OnRep_IsEquipped()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_OnRep_IsEquipped),NULL);
	}
	static FName NAME_AFPSItem_OnUpdateNightVision = FName(TEXT("OnUpdateNightVision"));
	void AFPSItem::OnUpdateNightVision(bool bIsNightVision)
	{
		FPSItem_eventOnUpdateNightVision_Parms Parms;
		Parms.bIsNightVision=bIsNightVision ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_OnUpdateNightVision),&Parms);
	}
	static FName NAME_AFPSItem_OnUpdateSprinting = FName(TEXT("OnUpdateSprinting"));
	void AFPSItem::OnUpdateSprinting(bool bIsSprinting)
	{
		FPSItem_eventOnUpdateSprinting_Parms Parms;
		Parms.bIsSprinting=bIsSprinting ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_OnUpdateSprinting),&Parms);
	}
	static FName NAME_AFPSItem_OwnerTick = FName(TEXT("OwnerTick"));
	void AFPSItem::OwnerTick()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_OwnerTick),NULL);
	}
	static FName NAME_AFPSItem_ServerApplyCosmetic = FName(TEXT("ServerApplyCosmetic"));
	void AFPSItem::ServerApplyCosmetic(int32 Index)
	{
		FPSItem_eventServerApplyCosmetic_Parms Parms;
		Parms.Index=Index;
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_ServerApplyCosmetic),&Parms);
	}
	static FName NAME_AFPSItem_ServerBash = FName(TEXT("ServerBash"));
	void AFPSItem::ServerBash(FMeleeHitData Data, TArray<FSimpleHitData> const& Hits)
	{
		FPSItem_eventServerBash_Parms Parms;
		Parms.Data=Data;
		Parms.Hits=Hits;
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_ServerBash),&Parms);
	}
	static FName NAME_AFPSItem_ServerCheckAmmo = FName(TEXT("ServerCheckAmmo"));
	void AFPSItem::ServerCheckAmmo()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_ServerCheckAmmo),NULL);
	}
	static FName NAME_AFPSItem_ServerInitItem = FName(TEXT("ServerInitItem"));
	void AFPSItem::ServerInitItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_ServerInitItem),NULL);
	}
	static FName NAME_AFPSItem_ServerStartDequip = FName(TEXT("ServerStartDequip"));
	void AFPSItem::ServerStartDequip()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_ServerStartDequip),NULL);
	}
	static FName NAME_AFPSItem_ServerStartEquip = FName(TEXT("ServerStartEquip"));
	void AFPSItem::ServerStartEquip()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_ServerStartEquip),NULL);
	}
	static FName NAME_AFPSItem_SetItemPerspective = FName(TEXT("SetItemPerspective"));
	void AFPSItem::SetItemPerspective(bool bIsFirstPerson)
	{
		FPSItem_eventSetItemPerspective_Parms Parms;
		Parms.bIsFirstPerson=bIsFirstPerson ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_SetItemPerspective),&Parms);
	}
	static FName NAME_AFPSItem_SetItemVisibility = FName(TEXT("SetItemVisibility"));
	void AFPSItem::SetItemVisibility(bool bVisible)
	{
		FPSItem_eventSetItemVisibility_Parms Parms;
		Parms.bVisible=bVisible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_SetItemVisibility),&Parms);
	}
	static FName NAME_AFPSItem_SetupAnimationData = FName(TEXT("SetupAnimationData"));
	void AFPSItem::SetupAnimationData()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_SetupAnimationData),NULL);
	}
	static FName NAME_AFPSItem_SetupItemData = FName(TEXT("SetupItemData"));
	void AFPSItem::SetupItemData(UFPSItemData* Data)
	{
		FPSItem_eventSetupItemData_Parms Parms;
		Parms.Data=Data;
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_SetupItemData),&Parms);
	}
	static FName NAME_AFPSItem_StartBash = FName(TEXT("StartBash"));
	void AFPSItem::StartBash()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_StartBash),NULL);
	}
	static FName NAME_AFPSItem_StartDequip = FName(TEXT("StartDequip"));
	void AFPSItem::StartDequip()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_StartDequip),NULL);
	}
	static FName NAME_AFPSItem_StartEquip = FName(TEXT("StartEquip"));
	void AFPSItem::StartEquip()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_StartEquip),NULL);
	}
	static FName NAME_AFPSItem_StartPrimaryAction = FName(TEXT("StartPrimaryAction"));
	void AFPSItem::StartPrimaryAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_StartPrimaryAction),NULL);
	}
	static FName NAME_AFPSItem_StartSecondaryAction = FName(TEXT("StartSecondaryAction"));
	void AFPSItem::StartSecondaryAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_StartSecondaryAction),NULL);
	}
	static FName NAME_AFPSItem_StopPrimaryAction = FName(TEXT("StopPrimaryAction"));
	void AFPSItem::StopPrimaryAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_StopPrimaryAction),NULL);
	}
	static FName NAME_AFPSItem_StopSecondaryAction = FName(TEXT("StopSecondaryAction"));
	void AFPSItem::StopSecondaryAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_StopSecondaryAction),NULL);
	}
	static FName NAME_AFPSItem_ToggleSpecial = FName(TEXT("ToggleSpecial"));
	void AFPSItem::ToggleSpecial()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSItem_ToggleSpecial),NULL);
	}
	void AFPSItem::StaticRegisterNativesAFPSItem()
	{
		UClass* Class = AFPSItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAmmo", &AFPSItem::execAddAmmo },
			{ "AddAttachMesh", &AFPSItem::execAddAttachMesh },
			{ "ApplyCosmetic", &AFPSItem::execApplyCosmetic },
			{ "ApplyCosmeticNoChecks", &AFPSItem::execApplyCosmeticNoChecks },
			{ "CanAddAmmo", &AFPSItem::execCanAddAmmo },
			{ "CanBash", &AFPSItem::execCanBash },
			{ "CanUseCosmetic", &AFPSItem::execCanUseCosmetic },
			{ "CanUseGesture", &AFPSItem::execCanUseGesture },
			{ "CanUseItem", &AFPSItem::execCanUseItem },
			{ "CharacterUpdated", &AFPSItem::execCharacterUpdated },
			{ "CheckAmmo", &AFPSItem::execCheckAmmo },
			{ "CheckBash", &AFPSItem::execCheckBash },
			{ "ClientTick", &AFPSItem::execClientTick },
			{ "CosmeticBash", &AFPSItem::execCosmeticBash },
			{ "CosmeticCheckAmmo", &AFPSItem::execCosmeticCheckAmmo },
			{ "CosmeticEndDequip", &AFPSItem::execCosmeticEndDequip },
			{ "CosmeticEndEquip", &AFPSItem::execCosmeticEndEquip },
			{ "CosmeticFinishBash", &AFPSItem::execCosmeticFinishBash },
			{ "CosmeticKick", &AFPSItem::execCosmeticKick },
			{ "CosmeticStartDequip", &AFPSItem::execCosmeticStartDequip },
			{ "CosmeticStartEquip", &AFPSItem::execCosmeticStartEquip },
			{ "CycleMode", &AFPSItem::execCycleMode },
			{ "FinishedLoadingItemData", &AFPSItem::execFinishedLoadingItemData },
			{ "GetDelay", &AFPSItem::execGetDelay },
			{ "GetFirstPersonMesh", &AFPSItem::execGetFirstPersonMesh },
			{ "GetFirstPersonRoot", &AFPSItem::execGetFirstPersonRoot },
			{ "GetItemData", &AFPSItem::execGetItemData },
			{ "GetItemDataAssetID", &AFPSItem::execGetItemDataAssetID },
			{ "GetMesh", &AFPSItem::execGetMesh },
			{ "GetMovementSpeedMultiplier", &AFPSItem::execGetMovementSpeedMultiplier },
			{ "GetOwningCharacter", &AFPSItem::execGetOwningCharacter },
			{ "GetSlotData", &AFPSItem::execGetSlotData },
			{ "GetThirdPersonMesh", &AFPSItem::execGetThirdPersonMesh },
			{ "GetThirdPersonRoot", &AFPSItem::execGetThirdPersonRoot },
			{ "IsLocallyOwned", &AFPSItem::execIsLocallyOwned },
			{ "IsValidItem", &AFPSItem::execIsValidItem },
			{ "Jiggle", &AFPSItem::execJiggle },
			{ "MulticastCheckAmmo", &AFPSItem::execMulticastCheckAmmo },
			{ "OnAdd", &AFPSItem::execOnAdd },
			{ "OnApplyCosmetic", &AFPSItem::execOnApplyCosmetic },
			{ "OnCharacterDestroyed", &AFPSItem::execOnCharacterDestroyed },
			{ "OnDeath", &AFPSItem::execOnDeath },
			{ "OnRemove", &AFPSItem::execOnRemove },
			{ "OnRep_CurrentCosmetic", &AFPSItem::execOnRep_CurrentCosmetic },
			{ "OnRep_FPSCharacter", &AFPSItem::execOnRep_FPSCharacter },
			{ "OnRep_IsEquipped", &AFPSItem::execOnRep_IsEquipped },
			{ "OnRep_ItemDataAssetID", &AFPSItem::execOnRep_ItemDataAssetID },
			{ "OnRep_MeleeData", &AFPSItem::execOnRep_MeleeData },
			{ "OnUpdateNightVision", &AFPSItem::execOnUpdateNightVision },
			{ "OnUpdateSprinting", &AFPSItem::execOnUpdateSprinting },
			{ "OwnerTick", &AFPSItem::execOwnerTick },
			{ "RemoveAttachMesh", &AFPSItem::execRemoveAttachMesh },
			{ "ServerApplyCosmetic", &AFPSItem::execServerApplyCosmetic },
			{ "ServerBash", &AFPSItem::execServerBash },
			{ "ServerCheckAmmo", &AFPSItem::execServerCheckAmmo },
			{ "ServerFinishBash", &AFPSItem::execServerFinishBash },
			{ "ServerInitItem", &AFPSItem::execServerInitItem },
			{ "ServerStartDequip", &AFPSItem::execServerStartDequip },
			{ "ServerStartEquip", &AFPSItem::execServerStartEquip },
			{ "SetBoneVisibility", &AFPSItem::execSetBoneVisibility },
			{ "SetCharacter", &AFPSItem::execSetCharacter },
			{ "SetCurrentCosmetic", &AFPSItem::execSetCurrentCosmetic },
			{ "SetDelay", &AFPSItem::execSetDelay },
			{ "SetFPSCharacter", &AFPSItem::execSetFPSCharacter },
			{ "SetIsEquipped", &AFPSItem::execSetIsEquipped },
			{ "SetItemPerspective", &AFPSItem::execSetItemPerspective },
			{ "SetItemVisibility", &AFPSItem::execSetItemVisibility },
			{ "SetupAnimationData", &AFPSItem::execSetupAnimationData },
			{ "SetupItemData", &AFPSItem::execSetupItemData },
			{ "StartBash", &AFPSItem::execStartBash },
			{ "StartDequip", &AFPSItem::execStartDequip },
			{ "StartEquip", &AFPSItem::execStartEquip },
			{ "StartPrimaryAction", &AFPSItem::execStartPrimaryAction },
			{ "StartSecondaryAction", &AFPSItem::execStartSecondaryAction },
			{ "StopPrimaryAction", &AFPSItem::execStopPrimaryAction },
			{ "StopSecondaryAction", &AFPSItem::execStopSecondaryAction },
			{ "ToggleSpecial", &AFPSItem::execToggleSpecial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSItem_AddAmmo_Statics
	{
		static void NewProp_bUseFullAmmo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFullAmmo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSItem_AddAmmo_Statics::NewProp_bUseFullAmmo_SetBit(void* Obj)
	{
		((FPSItem_eventAddAmmo_Parms*)Obj)->bUseFullAmmo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItem_AddAmmo_Statics::NewProp_bUseFullAmmo = { "bUseFullAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItem_eventAddAmmo_Parms), &Z_Construct_UFunction_AFPSItem_AddAmmo_Statics::NewProp_bUseFullAmmo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSItem_AddAmmo_Statics::NewProp_InAmount = { "InAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventAddAmmo_Parms, InAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_AddAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_AddAmmo_Statics::NewProp_bUseFullAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_AddAmmo_Statics::NewProp_InAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_AddAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_AddAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "AddAmmo", nullptr, nullptr, sizeof(FPSItem_eventAddAmmo_Parms), Z_Construct_UFunction_AFPSItem_AddAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_AddAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_AddAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_AddAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_AddAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_AddAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics
	{
		struct FPSItem_eventAddAttachMesh_Parms
		{
			FAttachmentSlotData AttachmentSlotData;
			UStaticMeshComponent* ThirdPersonAttachMesh;
			AFPSAttachment* Attachment;
			UStaticMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentSlotData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachmentSlotData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonAttachMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonAttachMesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::NewProp_AttachmentSlotData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::NewProp_AttachmentSlotData = { "AttachmentSlotData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventAddAttachMesh_Parms, AttachmentSlotData), Z_Construct_UScriptStruct_FAttachmentSlotData, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::NewProp_AttachmentSlotData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::NewProp_AttachmentSlotData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::NewProp_ThirdPersonAttachMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::NewProp_ThirdPersonAttachMesh = { "ThirdPersonAttachMesh", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventAddAttachMesh_Parms, ThirdPersonAttachMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::NewProp_ThirdPersonAttachMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::NewProp_ThirdPersonAttachMesh_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventAddAttachMesh_Parms, Attachment), Z_Construct_UClass_AFPSAttachment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventAddAttachMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::NewProp_AttachmentSlotData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::NewProp_ThirdPersonAttachMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::NewProp_Attachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "AddAttachMesh", nullptr, nullptr, sizeof(FPSItem_eventAddAttachMesh_Parms), Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_AddAttachMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_AddAttachMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_ApplyCosmetic_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSItem_ApplyCosmetic_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventApplyCosmetic_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_ApplyCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_ApplyCosmetic_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_ApplyCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_ApplyCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "ApplyCosmetic", nullptr, nullptr, sizeof(FPSItem_eventApplyCosmetic_Parms), Z_Construct_UFunction_AFPSItem_ApplyCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_ApplyCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_ApplyCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_ApplyCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_ApplyCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_ApplyCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_ApplyCosmeticNoChecks_Statics
	{
		struct FPSItem_eventApplyCosmeticNoChecks_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSItem_ApplyCosmeticNoChecks_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventApplyCosmeticNoChecks_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_ApplyCosmeticNoChecks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_ApplyCosmeticNoChecks_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_ApplyCosmeticNoChecks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_ApplyCosmeticNoChecks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "ApplyCosmeticNoChecks", nullptr, nullptr, sizeof(FPSItem_eventApplyCosmeticNoChecks_Parms), Z_Construct_UFunction_AFPSItem_ApplyCosmeticNoChecks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_ApplyCosmeticNoChecks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_ApplyCosmeticNoChecks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_ApplyCosmeticNoChecks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_ApplyCosmeticNoChecks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_ApplyCosmeticNoChecks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_CanAddAmmo_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InAmount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSItem_CanAddAmmo_Statics::NewProp_InAmount = { "InAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventCanAddAmmo_Parms, InAmount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSItem_CanAddAmmo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSItem_eventCanAddAmmo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItem_CanAddAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItem_eventCanAddAmmo_Parms), &Z_Construct_UFunction_AFPSItem_CanAddAmmo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_CanAddAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_CanAddAmmo_Statics::NewProp_InAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_CanAddAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_CanAddAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_CanAddAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "CanAddAmmo", nullptr, nullptr, sizeof(FPSItem_eventCanAddAmmo_Parms), Z_Construct_UFunction_AFPSItem_CanAddAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CanAddAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_CanAddAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CanAddAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_CanAddAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_CanAddAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_CanBash_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bias;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSItem_CanBash_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventCanBash_Parms, Bias), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSItem_CanBash_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSItem_eventCanBash_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItem_CanBash_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItem_eventCanBash_Parms), &Z_Construct_UFunction_AFPSItem_CanBash_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_CanBash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_CanBash_Statics::NewProp_Bias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_CanBash_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_CanBash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_CanBash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "CanBash", nullptr, nullptr, sizeof(FPSItem_eventCanBash_Parms), Z_Construct_UFunction_AFPSItem_CanBash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CanBash_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_CanBash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CanBash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_CanBash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_CanBash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_CanUseCosmetic_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSItem_CanUseCosmetic_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventCanUseCosmetic_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSItem_CanUseCosmetic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSItem_eventCanUseCosmetic_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItem_CanUseCosmetic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItem_eventCanUseCosmetic_Parms), &Z_Construct_UFunction_AFPSItem_CanUseCosmetic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_CanUseCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_CanUseCosmetic_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_CanUseCosmetic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_CanUseCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_CanUseCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "CanUseCosmetic", nullptr, nullptr, sizeof(FPSItem_eventCanUseCosmetic_Parms), Z_Construct_UFunction_AFPSItem_CanUseCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CanUseCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_CanUseCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CanUseCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_CanUseCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_CanUseCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_CanUseGesture_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSItem_CanUseGesture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSItem_eventCanUseGesture_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItem_CanUseGesture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItem_eventCanUseGesture_Parms), &Z_Construct_UFunction_AFPSItem_CanUseGesture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_CanUseGesture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_CanUseGesture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_CanUseGesture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_CanUseGesture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "CanUseGesture", nullptr, nullptr, sizeof(FPSItem_eventCanUseGesture_Parms), Z_Construct_UFunction_AFPSItem_CanUseGesture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CanUseGesture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_CanUseGesture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CanUseGesture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_CanUseGesture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_CanUseGesture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_CanUseItem_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bias;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSItem_CanUseItem_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventCanUseItem_Parms, Bias), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSItem_CanUseItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSItem_eventCanUseItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItem_CanUseItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItem_eventCanUseItem_Parms), &Z_Construct_UFunction_AFPSItem_CanUseItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_CanUseItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_CanUseItem_Statics::NewProp_Bias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_CanUseItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_CanUseItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_CanUseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "CanUseItem", nullptr, nullptr, sizeof(FPSItem_eventCanUseItem_Parms), Z_Construct_UFunction_AFPSItem_CanUseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CanUseItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_CanUseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CanUseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_CanUseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_CanUseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_CharacterUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_CharacterUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_CharacterUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "CharacterUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_CharacterUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CharacterUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_CharacterUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_CharacterUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_CheckAmmo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_CheckAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_CheckAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "CheckAmmo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_CheckAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CheckAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_CheckAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_CheckAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_CheckBash_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_CheckBash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_CheckBash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "CheckBash", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_CheckBash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CheckBash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_CheckBash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_CheckBash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_ClientTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_ClientTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_ClientTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "ClientTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_ClientTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_ClientTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_ClientTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_ClientTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_CosmeticBash_Statics
	{
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSItem_CosmeticBash_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FPSItem_eventCosmeticBash_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItem_CosmeticBash_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItem_eventCosmeticBash_Parms), &Z_Construct_UFunction_AFPSItem_CosmeticBash_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_CosmeticBash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_CosmeticBash_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_CosmeticBash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_CosmeticBash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "CosmeticBash", nullptr, nullptr, sizeof(FPSItem_eventCosmeticBash_Parms), Z_Construct_UFunction_AFPSItem_CosmeticBash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CosmeticBash_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_CosmeticBash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CosmeticBash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_CosmeticBash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_CosmeticBash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_CosmeticCheckAmmo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_CosmeticCheckAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_CosmeticCheckAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "CosmeticCheckAmmo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_CosmeticCheckAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CosmeticCheckAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_CosmeticCheckAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_CosmeticCheckAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_CosmeticEndDequip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_CosmeticEndDequip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_CosmeticEndDequip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "CosmeticEndDequip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_CosmeticEndDequip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CosmeticEndDequip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_CosmeticEndDequip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_CosmeticEndDequip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_CosmeticEndEquip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_CosmeticEndEquip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_CosmeticEndEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "CosmeticEndEquip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_CosmeticEndEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CosmeticEndEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_CosmeticEndEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_CosmeticEndEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_CosmeticFinishBash_Statics
	{
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSItem_CosmeticFinishBash_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FPSItem_eventCosmeticFinishBash_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItem_CosmeticFinishBash_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItem_eventCosmeticFinishBash_Parms), &Z_Construct_UFunction_AFPSItem_CosmeticFinishBash_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_CosmeticFinishBash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_CosmeticFinishBash_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_CosmeticFinishBash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_CosmeticFinishBash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "CosmeticFinishBash", nullptr, nullptr, sizeof(FPSItem_eventCosmeticFinishBash_Parms), Z_Construct_UFunction_AFPSItem_CosmeticFinishBash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CosmeticFinishBash_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_CosmeticFinishBash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CosmeticFinishBash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_CosmeticFinishBash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_CosmeticFinishBash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_CosmeticKick_Statics
	{
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSItem_CosmeticKick_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FPSItem_eventCosmeticKick_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItem_CosmeticKick_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItem_eventCosmeticKick_Parms), &Z_Construct_UFunction_AFPSItem_CosmeticKick_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_CosmeticKick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_CosmeticKick_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_CosmeticKick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_CosmeticKick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "CosmeticKick", nullptr, nullptr, sizeof(FPSItem_eventCosmeticKick_Parms), Z_Construct_UFunction_AFPSItem_CosmeticKick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CosmeticKick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_CosmeticKick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CosmeticKick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_CosmeticKick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_CosmeticKick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_CosmeticStartDequip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_CosmeticStartDequip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_CosmeticStartDequip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "CosmeticStartDequip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_CosmeticStartDequip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CosmeticStartDequip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_CosmeticStartDequip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_CosmeticStartDequip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_CosmeticStartEquip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_CosmeticStartEquip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_CosmeticStartEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "CosmeticStartEquip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_CosmeticStartEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CosmeticStartEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_CosmeticStartEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_CosmeticStartEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_CycleMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_CycleMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_CycleMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "CycleMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_CycleMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_CycleMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_CycleMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_CycleMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_FinishedLoadingItemData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_FinishedLoadingItemData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_FinishedLoadingItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "FinishedLoadingItemData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_FinishedLoadingItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_FinishedLoadingItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_FinishedLoadingItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_FinishedLoadingItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_GetDelay_Statics
	{
		struct FPSItem_eventGetDelay_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSItem_GetDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventGetDelay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_GetDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_GetDelay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_GetDelay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_GetDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "GetDelay", nullptr, nullptr, sizeof(FPSItem_eventGetDelay_Parms), Z_Construct_UFunction_AFPSItem_GetDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_GetDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_GetDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_GetDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_GetFirstPersonMesh_Statics
	{
		struct FPSItem_eventGetFirstPersonMesh_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_GetFirstPersonMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSItem_GetFirstPersonMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventGetFirstPersonMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_GetFirstPersonMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetFirstPersonMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_GetFirstPersonMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_GetFirstPersonMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_GetFirstPersonMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_GetFirstPersonMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "GetFirstPersonMesh", nullptr, nullptr, sizeof(FPSItem_eventGetFirstPersonMesh_Parms), Z_Construct_UFunction_AFPSItem_GetFirstPersonMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetFirstPersonMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_GetFirstPersonMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetFirstPersonMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_GetFirstPersonMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_GetFirstPersonMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_GetFirstPersonRoot_Statics
	{
		struct FPSItem_eventGetFirstPersonRoot_Parms
		{
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_GetFirstPersonRoot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSItem_GetFirstPersonRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventGetFirstPersonRoot_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_GetFirstPersonRoot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetFirstPersonRoot_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_GetFirstPersonRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_GetFirstPersonRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_GetFirstPersonRoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_GetFirstPersonRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "GetFirstPersonRoot", nullptr, nullptr, sizeof(FPSItem_eventGetFirstPersonRoot_Parms), Z_Construct_UFunction_AFPSItem_GetFirstPersonRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetFirstPersonRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_GetFirstPersonRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetFirstPersonRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_GetFirstPersonRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_GetFirstPersonRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_GetItemData_Statics
	{
		struct FPSItem_eventGetItemData_Parms
		{
			UFPSItemData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSItem_GetItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventGetItemData_Parms, ReturnValue), Z_Construct_UClass_UFPSItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_GetItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_GetItemData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_GetItemData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_GetItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "GetItemData", nullptr, nullptr, sizeof(FPSItem_eventGetItemData_Parms), Z_Construct_UFunction_AFPSItem_GetItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetItemData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_GetItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_GetItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_GetItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_GetItemDataAssetID_Statics
	{
		struct FPSItem_eventGetItemDataAssetID_Parms
		{
			FPrimaryAssetId ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSItem_GetItemDataAssetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventGetItemDataAssetID_Parms, ReturnValue), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_GetItemDataAssetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_GetItemDataAssetID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_GetItemDataAssetID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_GetItemDataAssetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "GetItemDataAssetID", nullptr, nullptr, sizeof(FPSItem_eventGetItemDataAssetID_Parms), Z_Construct_UFunction_AFPSItem_GetItemDataAssetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetItemDataAssetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_GetItemDataAssetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetItemDataAssetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_GetItemDataAssetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_GetItemDataAssetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_GetMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_GetMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSItem_GetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventGetMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_GetMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_GetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_GetMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_GetMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_GetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "GetMesh", nullptr, nullptr, sizeof(FPSItem_eventGetMesh_Parms), Z_Construct_UFunction_AFPSItem_GetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_GetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_GetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_GetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_GetMovementSpeedMultiplier_Statics
	{
		struct FPSItem_eventGetMovementSpeedMultiplier_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSItem_GetMovementSpeedMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventGetMovementSpeedMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_GetMovementSpeedMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_GetMovementSpeedMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_GetMovementSpeedMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_GetMovementSpeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "GetMovementSpeedMultiplier", nullptr, nullptr, sizeof(FPSItem_eventGetMovementSpeedMultiplier_Parms), Z_Construct_UFunction_AFPSItem_GetMovementSpeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetMovementSpeedMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_GetMovementSpeedMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetMovementSpeedMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_GetMovementSpeedMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_GetMovementSpeedMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_GetOwningCharacter_Statics
	{
		struct FPSItem_eventGetOwningCharacter_Parms
		{
			AFPSCharacterBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSItem_GetOwningCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventGetOwningCharacter_Parms, ReturnValue), Z_Construct_UClass_AFPSCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_GetOwningCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_GetOwningCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_GetOwningCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_GetOwningCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "GetOwningCharacter", nullptr, nullptr, sizeof(FPSItem_eventGetOwningCharacter_Parms), Z_Construct_UFunction_AFPSItem_GetOwningCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetOwningCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_GetOwningCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetOwningCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_GetOwningCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_GetOwningCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_GetSlotData_Statics
	{
		struct FPSItem_eventGetSlotData_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSItem_GetSlotData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventGetSlotData_Parms, ReturnValue), Z_Construct_UScriptStruct_FFPSItemSlotData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_GetSlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_GetSlotData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_GetSlotData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_GetSlotData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "GetSlotData", nullptr, nullptr, sizeof(FPSItem_eventGetSlotData_Parms), Z_Construct_UFunction_AFPSItem_GetSlotData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetSlotData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_GetSlotData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetSlotData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_GetSlotData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_GetSlotData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_GetThirdPersonMesh_Statics
	{
		struct FPSItem_eventGetThirdPersonMesh_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_GetThirdPersonMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSItem_GetThirdPersonMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventGetThirdPersonMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_GetThirdPersonMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetThirdPersonMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_GetThirdPersonMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_GetThirdPersonMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_GetThirdPersonMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_GetThirdPersonMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "GetThirdPersonMesh", nullptr, nullptr, sizeof(FPSItem_eventGetThirdPersonMesh_Parms), Z_Construct_UFunction_AFPSItem_GetThirdPersonMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetThirdPersonMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_GetThirdPersonMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetThirdPersonMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_GetThirdPersonMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_GetThirdPersonMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_GetThirdPersonRoot_Statics
	{
		struct FPSItem_eventGetThirdPersonRoot_Parms
		{
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_GetThirdPersonRoot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSItem_GetThirdPersonRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventGetThirdPersonRoot_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_GetThirdPersonRoot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetThirdPersonRoot_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_GetThirdPersonRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_GetThirdPersonRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_GetThirdPersonRoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_GetThirdPersonRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "GetThirdPersonRoot", nullptr, nullptr, sizeof(FPSItem_eventGetThirdPersonRoot_Parms), Z_Construct_UFunction_AFPSItem_GetThirdPersonRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetThirdPersonRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_GetThirdPersonRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_GetThirdPersonRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_GetThirdPersonRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_GetThirdPersonRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_IsLocallyOwned_Statics
	{
		struct FPSItem_eventIsLocallyOwned_Parms
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
	void Z_Construct_UFunction_AFPSItem_IsLocallyOwned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSItem_eventIsLocallyOwned_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItem_IsLocallyOwned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItem_eventIsLocallyOwned_Parms), &Z_Construct_UFunction_AFPSItem_IsLocallyOwned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_IsLocallyOwned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_IsLocallyOwned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_IsLocallyOwned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_IsLocallyOwned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "IsLocallyOwned", nullptr, nullptr, sizeof(FPSItem_eventIsLocallyOwned_Parms), Z_Construct_UFunction_AFPSItem_IsLocallyOwned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_IsLocallyOwned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_IsLocallyOwned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_IsLocallyOwned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_IsLocallyOwned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_IsLocallyOwned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_IsValidItem_Statics
	{
		struct FPSItem_eventIsValidItem_Parms
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
	void Z_Construct_UFunction_AFPSItem_IsValidItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSItem_eventIsValidItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItem_IsValidItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItem_eventIsValidItem_Parms), &Z_Construct_UFunction_AFPSItem_IsValidItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_IsValidItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_IsValidItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_IsValidItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_IsValidItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "IsValidItem", nullptr, nullptr, sizeof(FPSItem_eventIsValidItem_Parms), Z_Construct_UFunction_AFPSItem_IsValidItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_IsValidItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_IsValidItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_IsValidItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_IsValidItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_IsValidItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_Jiggle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_Jiggle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_Jiggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "Jiggle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_Jiggle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_Jiggle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_Jiggle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_Jiggle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_MulticastCheckAmmo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_MulticastCheckAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_MulticastCheckAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "MulticastCheckAmmo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_MulticastCheckAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_MulticastCheckAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_MulticastCheckAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_MulticastCheckAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_OnAdd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_OnAdd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_OnAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "OnAdd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_OnAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_OnAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_OnAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_OnAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_OnApplyCosmetic_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cosmetic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSItem_OnApplyCosmetic_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventOnApplyCosmetic_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSItem_OnApplyCosmetic_Statics::NewProp_Cosmetic = { "Cosmetic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventOnApplyCosmetic_Parms, Cosmetic), Z_Construct_UScriptStruct_FFPSCosmetic, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_OnApplyCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_OnApplyCosmetic_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_OnApplyCosmetic_Statics::NewProp_Cosmetic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_OnApplyCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_OnApplyCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "OnApplyCosmetic", nullptr, nullptr, sizeof(FPSItem_eventOnApplyCosmetic_Parms), Z_Construct_UFunction_AFPSItem_OnApplyCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_OnApplyCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_OnApplyCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_OnApplyCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_OnApplyCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_OnApplyCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_OnCharacterDestroyed_Statics
	{
		struct FPSItem_eventOnCharacterDestroyed_Parms
		{
			AActor* DestoyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestoyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSItem_OnCharacterDestroyed_Statics::NewProp_DestoyedActor = { "DestoyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventOnCharacterDestroyed_Parms, DestoyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_OnCharacterDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_OnCharacterDestroyed_Statics::NewProp_DestoyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_OnCharacterDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_OnCharacterDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "OnCharacterDestroyed", nullptr, nullptr, sizeof(FPSItem_eventOnCharacterDestroyed_Parms), Z_Construct_UFunction_AFPSItem_OnCharacterDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_OnCharacterDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_OnCharacterDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_OnCharacterDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_OnCharacterDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_OnCharacterDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_OnDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "OnDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_OnDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_OnDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_OnRemove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_OnRemove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_OnRemove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "OnRemove", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_OnRemove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_OnRemove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_OnRemove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_OnRemove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_OnRep_CurrentCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_OnRep_CurrentCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_OnRep_CurrentCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "OnRep_CurrentCosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_OnRep_CurrentCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_OnRep_CurrentCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_OnRep_CurrentCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_OnRep_CurrentCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_OnRep_FPSCharacter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_OnRep_FPSCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_OnRep_FPSCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "OnRep_FPSCharacter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_OnRep_FPSCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_OnRep_FPSCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_OnRep_FPSCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_OnRep_FPSCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_OnRep_IsEquipped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_OnRep_IsEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_OnRep_IsEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "OnRep_IsEquipped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_OnRep_IsEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_OnRep_IsEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_OnRep_IsEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_OnRep_IsEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_OnRep_ItemDataAssetID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_OnRep_ItemDataAssetID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_OnRep_ItemDataAssetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "OnRep_ItemDataAssetID", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_OnRep_ItemDataAssetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_OnRep_ItemDataAssetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_OnRep_ItemDataAssetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_OnRep_ItemDataAssetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_OnRep_MeleeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_OnRep_MeleeData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_OnRep_MeleeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "OnRep_MeleeData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_OnRep_MeleeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_OnRep_MeleeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_OnRep_MeleeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_OnRep_MeleeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_OnUpdateNightVision_Statics
	{
		static void NewProp_bIsNightVision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsNightVision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSItem_OnUpdateNightVision_Statics::NewProp_bIsNightVision_SetBit(void* Obj)
	{
		((FPSItem_eventOnUpdateNightVision_Parms*)Obj)->bIsNightVision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItem_OnUpdateNightVision_Statics::NewProp_bIsNightVision = { "bIsNightVision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItem_eventOnUpdateNightVision_Parms), &Z_Construct_UFunction_AFPSItem_OnUpdateNightVision_Statics::NewProp_bIsNightVision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_OnUpdateNightVision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_OnUpdateNightVision_Statics::NewProp_bIsNightVision,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_OnUpdateNightVision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_OnUpdateNightVision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "OnUpdateNightVision", nullptr, nullptr, sizeof(FPSItem_eventOnUpdateNightVision_Parms), Z_Construct_UFunction_AFPSItem_OnUpdateNightVision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_OnUpdateNightVision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_OnUpdateNightVision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_OnUpdateNightVision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_OnUpdateNightVision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_OnUpdateNightVision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_OnUpdateSprinting_Statics
	{
		static void NewProp_bIsSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSItem_OnUpdateSprinting_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
	{
		((FPSItem_eventOnUpdateSprinting_Parms*)Obj)->bIsSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItem_OnUpdateSprinting_Statics::NewProp_bIsSprinting = { "bIsSprinting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItem_eventOnUpdateSprinting_Parms), &Z_Construct_UFunction_AFPSItem_OnUpdateSprinting_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_OnUpdateSprinting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_OnUpdateSprinting_Statics::NewProp_bIsSprinting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_OnUpdateSprinting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_OnUpdateSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "OnUpdateSprinting", nullptr, nullptr, sizeof(FPSItem_eventOnUpdateSprinting_Parms), Z_Construct_UFunction_AFPSItem_OnUpdateSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_OnUpdateSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_OnUpdateSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_OnUpdateSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_OnUpdateSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_OnUpdateSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_OwnerTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_OwnerTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_OwnerTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "OwnerTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_OwnerTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_OwnerTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_OwnerTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_OwnerTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_RemoveAttachMesh_Statics
	{
		struct FPSItem_eventRemoveAttachMesh_Parms
		{
			FAttachmentSlotData AttachmentSlotData;
			AFPSAttachment* Attachment;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentSlotData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachmentSlotData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attachment;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_RemoveAttachMesh_Statics::NewProp_AttachmentSlotData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSItem_RemoveAttachMesh_Statics::NewProp_AttachmentSlotData = { "AttachmentSlotData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventRemoveAttachMesh_Parms, AttachmentSlotData), Z_Construct_UScriptStruct_FAttachmentSlotData, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_RemoveAttachMesh_Statics::NewProp_AttachmentSlotData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_RemoveAttachMesh_Statics::NewProp_AttachmentSlotData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSItem_RemoveAttachMesh_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventRemoveAttachMesh_Parms, Attachment), Z_Construct_UClass_AFPSAttachment_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSItem_RemoveAttachMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSItem_eventRemoveAttachMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItem_RemoveAttachMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItem_eventRemoveAttachMesh_Parms), &Z_Construct_UFunction_AFPSItem_RemoveAttachMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_RemoveAttachMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_RemoveAttachMesh_Statics::NewProp_AttachmentSlotData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_RemoveAttachMesh_Statics::NewProp_Attachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_RemoveAttachMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_RemoveAttachMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_RemoveAttachMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "RemoveAttachMesh", nullptr, nullptr, sizeof(FPSItem_eventRemoveAttachMesh_Parms), Z_Construct_UFunction_AFPSItem_RemoveAttachMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_RemoveAttachMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_RemoveAttachMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_RemoveAttachMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_RemoveAttachMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_RemoveAttachMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_ServerApplyCosmetic_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSItem_ServerApplyCosmetic_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventServerApplyCosmetic_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_ServerApplyCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_ServerApplyCosmetic_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_ServerApplyCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_ServerApplyCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "ServerApplyCosmetic", nullptr, nullptr, sizeof(FPSItem_eventServerApplyCosmetic_Parms), Z_Construct_UFunction_AFPSItem_ServerApplyCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_ServerApplyCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_ServerApplyCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_ServerApplyCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_ServerApplyCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_ServerApplyCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_ServerBash_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Hits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSItem_ServerBash_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventServerBash_Parms, Data), Z_Construct_UScriptStruct_FMeleeHitData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSItem_ServerBash_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSimpleHitData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_ServerBash_Statics::NewProp_Hits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFPSItem_ServerBash_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventServerBash_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_ServerBash_Statics::NewProp_Hits_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_ServerBash_Statics::NewProp_Hits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_ServerBash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_ServerBash_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_ServerBash_Statics::NewProp_Hits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_ServerBash_Statics::NewProp_Hits,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_ServerBash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_ServerBash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "ServerBash", nullptr, nullptr, sizeof(FPSItem_eventServerBash_Parms), Z_Construct_UFunction_AFPSItem_ServerBash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_ServerBash_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_ServerBash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_ServerBash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_ServerBash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_ServerBash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_ServerCheckAmmo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_ServerCheckAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_ServerCheckAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "ServerCheckAmmo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_ServerCheckAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_ServerCheckAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_ServerCheckAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_ServerCheckAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_ServerFinishBash_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_ServerFinishBash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_ServerFinishBash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "ServerFinishBash", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_ServerFinishBash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_ServerFinishBash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_ServerFinishBash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_ServerFinishBash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_ServerInitItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_ServerInitItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_ServerInitItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "ServerInitItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C04, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_ServerInitItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_ServerInitItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_ServerInitItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_ServerInitItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_ServerStartDequip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_ServerStartDequip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_ServerStartDequip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "ServerStartDequip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_ServerStartDequip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_ServerStartDequip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_ServerStartDequip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_ServerStartDequip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_ServerStartEquip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_ServerStartEquip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_ServerStartEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "ServerStartEquip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_ServerStartEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_ServerStartEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_ServerStartEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_ServerStartEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_SetBoneVisibility_Statics
	{
		struct FPSItem_eventSetBoneVisibility_Parms
		{
			FName Name;
			bool bVisible;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFPSItem_SetBoneVisibility_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventSetBoneVisibility_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSItem_SetBoneVisibility_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((FPSItem_eventSetBoneVisibility_Parms*)Obj)->bVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItem_SetBoneVisibility_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItem_eventSetBoneVisibility_Parms), &Z_Construct_UFunction_AFPSItem_SetBoneVisibility_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_SetBoneVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_SetBoneVisibility_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_SetBoneVisibility_Statics::NewProp_bVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_SetBoneVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_SetBoneVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "SetBoneVisibility", nullptr, nullptr, sizeof(FPSItem_eventSetBoneVisibility_Parms), Z_Construct_UFunction_AFPSItem_SetBoneVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_SetBoneVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_SetBoneVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_SetBoneVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_SetBoneVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_SetBoneVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_SetCharacter_Statics
	{
		struct FPSItem_eventSetCharacter_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSItem_SetCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventSetCharacter_Parms, Character), Z_Construct_UClass_AFPSCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_SetCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_SetCharacter_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_SetCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_SetCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "SetCharacter", nullptr, nullptr, sizeof(FPSItem_eventSetCharacter_Parms), Z_Construct_UFunction_AFPSItem_SetCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_SetCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_SetCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_SetCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_SetCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_SetCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_SetCurrentCosmetic_Statics
	{
		struct FPSItem_eventSetCurrentCosmetic_Parms
		{
			int32 NewCosmetic;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewCosmetic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSItem_SetCurrentCosmetic_Statics::NewProp_NewCosmetic = { "NewCosmetic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventSetCurrentCosmetic_Parms, NewCosmetic), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_SetCurrentCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_SetCurrentCosmetic_Statics::NewProp_NewCosmetic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_SetCurrentCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_SetCurrentCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "SetCurrentCosmetic", nullptr, nullptr, sizeof(FPSItem_eventSetCurrentCosmetic_Parms), Z_Construct_UFunction_AFPSItem_SetCurrentCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_SetCurrentCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_SetCurrentCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_SetCurrentCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_SetCurrentCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_SetCurrentCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_SetDelay_Statics
	{
		struct FPSItem_eventSetDelay_Parms
		{
			float NewDelay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSItem_SetDelay_Statics::NewProp_NewDelay = { "NewDelay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventSetDelay_Parms, NewDelay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_SetDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_SetDelay_Statics::NewProp_NewDelay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_SetDelay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_SetDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "SetDelay", nullptr, nullptr, sizeof(FPSItem_eventSetDelay_Parms), Z_Construct_UFunction_AFPSItem_SetDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_SetDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_SetDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_SetDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_SetDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_SetDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_SetFPSCharacter_Statics
	{
		struct FPSItem_eventSetFPSCharacter_Parms
		{
			AFPSCharacterBase* NewCharacter;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSItem_SetFPSCharacter_Statics::NewProp_NewCharacter = { "NewCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventSetFPSCharacter_Parms, NewCharacter), Z_Construct_UClass_AFPSCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_SetFPSCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_SetFPSCharacter_Statics::NewProp_NewCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_SetFPSCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_SetFPSCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "SetFPSCharacter", nullptr, nullptr, sizeof(FPSItem_eventSetFPSCharacter_Parms), Z_Construct_UFunction_AFPSItem_SetFPSCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_SetFPSCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_SetFPSCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_SetFPSCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_SetFPSCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_SetFPSCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_SetIsEquipped_Statics
	{
		struct FPSItem_eventSetIsEquipped_Parms
		{
			bool bNewIsEquipped;
		};
		static void NewProp_bNewIsEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewIsEquipped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSItem_SetIsEquipped_Statics::NewProp_bNewIsEquipped_SetBit(void* Obj)
	{
		((FPSItem_eventSetIsEquipped_Parms*)Obj)->bNewIsEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItem_SetIsEquipped_Statics::NewProp_bNewIsEquipped = { "bNewIsEquipped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItem_eventSetIsEquipped_Parms), &Z_Construct_UFunction_AFPSItem_SetIsEquipped_Statics::NewProp_bNewIsEquipped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_SetIsEquipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_SetIsEquipped_Statics::NewProp_bNewIsEquipped,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_SetIsEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_SetIsEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "SetIsEquipped", nullptr, nullptr, sizeof(FPSItem_eventSetIsEquipped_Parms), Z_Construct_UFunction_AFPSItem_SetIsEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_SetIsEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_SetIsEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_SetIsEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_SetIsEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_SetIsEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_SetItemPerspective_Statics
	{
		static void NewProp_bIsFirstPerson_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFirstPerson;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSItem_SetItemPerspective_Statics::NewProp_bIsFirstPerson_SetBit(void* Obj)
	{
		((FPSItem_eventSetItemPerspective_Parms*)Obj)->bIsFirstPerson = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItem_SetItemPerspective_Statics::NewProp_bIsFirstPerson = { "bIsFirstPerson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItem_eventSetItemPerspective_Parms), &Z_Construct_UFunction_AFPSItem_SetItemPerspective_Statics::NewProp_bIsFirstPerson_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_SetItemPerspective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_SetItemPerspective_Statics::NewProp_bIsFirstPerson,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_SetItemPerspective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_SetItemPerspective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "SetItemPerspective", nullptr, nullptr, sizeof(FPSItem_eventSetItemPerspective_Parms), Z_Construct_UFunction_AFPSItem_SetItemPerspective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_SetItemPerspective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_SetItemPerspective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_SetItemPerspective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_SetItemPerspective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_SetItemPerspective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_SetItemVisibility_Statics
	{
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSItem_SetItemVisibility_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((FPSItem_eventSetItemVisibility_Parms*)Obj)->bVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSItem_SetItemVisibility_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSItem_eventSetItemVisibility_Parms), &Z_Construct_UFunction_AFPSItem_SetItemVisibility_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_SetItemVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_SetItemVisibility_Statics::NewProp_bVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_SetItemVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_SetItemVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "SetItemVisibility", nullptr, nullptr, sizeof(FPSItem_eventSetItemVisibility_Parms), Z_Construct_UFunction_AFPSItem_SetItemVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_SetItemVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_SetItemVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_SetItemVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_SetItemVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_SetItemVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_SetupAnimationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_SetupAnimationData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_SetupAnimationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "SetupAnimationData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_SetupAnimationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_SetupAnimationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_SetupAnimationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_SetupAnimationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_SetupItemData_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSItem_SetupItemData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSItem_eventSetupItemData_Parms, Data), Z_Construct_UClass_UFPSItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSItem_SetupItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSItem_SetupItemData_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_SetupItemData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_SetupItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "SetupItemData", nullptr, nullptr, sizeof(FPSItem_eventSetupItemData_Parms), Z_Construct_UFunction_AFPSItem_SetupItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_SetupItemData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_SetupItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_SetupItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_SetupItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_SetupItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_StartBash_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_StartBash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_StartBash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "StartBash", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_StartBash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_StartBash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_StartBash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_StartBash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_StartDequip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_StartDequip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_StartDequip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "StartDequip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_StartDequip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_StartDequip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_StartDequip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_StartDequip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_StartEquip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_StartEquip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_StartEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "StartEquip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_StartEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_StartEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_StartEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_StartEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_StartPrimaryAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_StartPrimaryAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_StartPrimaryAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "StartPrimaryAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_StartPrimaryAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_StartPrimaryAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_StartPrimaryAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_StartPrimaryAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_StartSecondaryAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_StartSecondaryAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_StartSecondaryAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "StartSecondaryAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_StartSecondaryAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_StartSecondaryAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_StartSecondaryAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_StartSecondaryAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_StopPrimaryAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_StopPrimaryAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_StopPrimaryAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "StopPrimaryAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_StopPrimaryAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_StopPrimaryAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_StopPrimaryAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_StopPrimaryAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_StopSecondaryAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_StopSecondaryAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_StopSecondaryAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "StopSecondaryAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_StopSecondaryAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_StopSecondaryAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_StopSecondaryAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_StopSecondaryAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSItem_ToggleSpecial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSItem_ToggleSpecial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSItem_ToggleSpecial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSItem, nullptr, "ToggleSpecial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSItem_ToggleSpecial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSItem_ToggleSpecial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSItem_ToggleSpecial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSItem_ToggleSpecial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSItem_NoRegister()
	{
		return AFPSItem::StaticClass();
	}
	struct Z_Construct_UClass_AFPSItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttachMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDataClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemDataClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEquipped_MetaData[];
#endif
		static void NewProp_bIsEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEquipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDisplay_MetaData[];
#endif
		static void NewProp_bIsDisplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEquipping_MetaData[];
#endif
		static void NewProp_bIsEquipping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEquipping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAnimationInitialized_MetaData[];
#endif
		static void NewProp_bIsAnimationInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAnimationInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCosmetic_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentCosmetic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousCosmetic_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviousCosmetic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeDistanceTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeleeDistanceTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeAngleTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeleeAngleTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubtractPingFromMeleeDelay_MetaData[];
#endif
		static void NewProp_bSubtractPingFromMeleeDelay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubtractPingFromMeleeDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDataAssetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemDataAssetID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeleeData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OriginalMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemAnimationInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ItemAnimationInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonAnimationInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ThirdPersonAnimationInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmsAnimationInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArmsAnimationInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPerson_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPerson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPerson_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThirdPerson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonComponents_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FirstPersonComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonComponents_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ThirdPersonComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnItemDataLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemDataLoaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSItem_AddAmmo, "AddAmmo" }, // 2672451008
		{ &Z_Construct_UFunction_AFPSItem_AddAttachMesh, "AddAttachMesh" }, // 1345897729
		{ &Z_Construct_UFunction_AFPSItem_ApplyCosmetic, "ApplyCosmetic" }, // 3179569442
		{ &Z_Construct_UFunction_AFPSItem_ApplyCosmeticNoChecks, "ApplyCosmeticNoChecks" }, // 3658153444
		{ &Z_Construct_UFunction_AFPSItem_CanAddAmmo, "CanAddAmmo" }, // 1252079005
		{ &Z_Construct_UFunction_AFPSItem_CanBash, "CanBash" }, // 1202015367
		{ &Z_Construct_UFunction_AFPSItem_CanUseCosmetic, "CanUseCosmetic" }, // 2467102011
		{ &Z_Construct_UFunction_AFPSItem_CanUseGesture, "CanUseGesture" }, // 44960132
		{ &Z_Construct_UFunction_AFPSItem_CanUseItem, "CanUseItem" }, // 1034076377
		{ &Z_Construct_UFunction_AFPSItem_CharacterUpdated, "CharacterUpdated" }, // 1406802827
		{ &Z_Construct_UFunction_AFPSItem_CheckAmmo, "CheckAmmo" }, // 1831428553
		{ &Z_Construct_UFunction_AFPSItem_CheckBash, "CheckBash" }, // 3807099072
		{ &Z_Construct_UFunction_AFPSItem_ClientTick, "ClientTick" }, // 1113145994
		{ &Z_Construct_UFunction_AFPSItem_CosmeticBash, "CosmeticBash" }, // 3382175925
		{ &Z_Construct_UFunction_AFPSItem_CosmeticCheckAmmo, "CosmeticCheckAmmo" }, // 60959758
		{ &Z_Construct_UFunction_AFPSItem_CosmeticEndDequip, "CosmeticEndDequip" }, // 2615772065
		{ &Z_Construct_UFunction_AFPSItem_CosmeticEndEquip, "CosmeticEndEquip" }, // 3509790147
		{ &Z_Construct_UFunction_AFPSItem_CosmeticFinishBash, "CosmeticFinishBash" }, // 3755361498
		{ &Z_Construct_UFunction_AFPSItem_CosmeticKick, "CosmeticKick" }, // 656069006
		{ &Z_Construct_UFunction_AFPSItem_CosmeticStartDequip, "CosmeticStartDequip" }, // 1240272615
		{ &Z_Construct_UFunction_AFPSItem_CosmeticStartEquip, "CosmeticStartEquip" }, // 4154273751
		{ &Z_Construct_UFunction_AFPSItem_CycleMode, "CycleMode" }, // 102273238
		{ &Z_Construct_UFunction_AFPSItem_FinishedLoadingItemData, "FinishedLoadingItemData" }, // 1239090184
		{ &Z_Construct_UFunction_AFPSItem_GetDelay, "GetDelay" }, // 3019798574
		{ &Z_Construct_UFunction_AFPSItem_GetFirstPersonMesh, "GetFirstPersonMesh" }, // 861848805
		{ &Z_Construct_UFunction_AFPSItem_GetFirstPersonRoot, "GetFirstPersonRoot" }, // 3127016932
		{ &Z_Construct_UFunction_AFPSItem_GetItemData, "GetItemData" }, // 2435835018
		{ &Z_Construct_UFunction_AFPSItem_GetItemDataAssetID, "GetItemDataAssetID" }, // 4221737839
		{ &Z_Construct_UFunction_AFPSItem_GetMesh, "GetMesh" }, // 3492350201
		{ &Z_Construct_UFunction_AFPSItem_GetMovementSpeedMultiplier, "GetMovementSpeedMultiplier" }, // 2394614400
		{ &Z_Construct_UFunction_AFPSItem_GetOwningCharacter, "GetOwningCharacter" }, // 1565480116
		{ &Z_Construct_UFunction_AFPSItem_GetSlotData, "GetSlotData" }, // 3975523287
		{ &Z_Construct_UFunction_AFPSItem_GetThirdPersonMesh, "GetThirdPersonMesh" }, // 538981702
		{ &Z_Construct_UFunction_AFPSItem_GetThirdPersonRoot, "GetThirdPersonRoot" }, // 3680517070
		{ &Z_Construct_UFunction_AFPSItem_IsLocallyOwned, "IsLocallyOwned" }, // 3825647774
		{ &Z_Construct_UFunction_AFPSItem_IsValidItem, "IsValidItem" }, // 2054739938
		{ &Z_Construct_UDelegateFunction_AFPSItem_ItemDataLoadedDelegate__DelegateSignature, "ItemDataLoadedDelegate__DelegateSignature" }, // 10988426
		{ &Z_Construct_UFunction_AFPSItem_Jiggle, "Jiggle" }, // 1217737649
		{ &Z_Construct_UFunction_AFPSItem_MulticastCheckAmmo, "MulticastCheckAmmo" }, // 3103276483
		{ &Z_Construct_UFunction_AFPSItem_OnAdd, "OnAdd" }, // 4076263768
		{ &Z_Construct_UFunction_AFPSItem_OnApplyCosmetic, "OnApplyCosmetic" }, // 1919974431
		{ &Z_Construct_UFunction_AFPSItem_OnCharacterDestroyed, "OnCharacterDestroyed" }, // 2902319522
		{ &Z_Construct_UFunction_AFPSItem_OnDeath, "OnDeath" }, // 1652589719
		{ &Z_Construct_UFunction_AFPSItem_OnRemove, "OnRemove" }, // 2185910299
		{ &Z_Construct_UFunction_AFPSItem_OnRep_CurrentCosmetic, "OnRep_CurrentCosmetic" }, // 2394575895
		{ &Z_Construct_UFunction_AFPSItem_OnRep_FPSCharacter, "OnRep_FPSCharacter" }, // 3206398465
		{ &Z_Construct_UFunction_AFPSItem_OnRep_IsEquipped, "OnRep_IsEquipped" }, // 4016721860
		{ &Z_Construct_UFunction_AFPSItem_OnRep_ItemDataAssetID, "OnRep_ItemDataAssetID" }, // 244552276
		{ &Z_Construct_UFunction_AFPSItem_OnRep_MeleeData, "OnRep_MeleeData" }, // 2006018516
		{ &Z_Construct_UFunction_AFPSItem_OnUpdateNightVision, "OnUpdateNightVision" }, // 3145064849
		{ &Z_Construct_UFunction_AFPSItem_OnUpdateSprinting, "OnUpdateSprinting" }, // 3840425714
		{ &Z_Construct_UFunction_AFPSItem_OwnerTick, "OwnerTick" }, // 2422074250
		{ &Z_Construct_UFunction_AFPSItem_RemoveAttachMesh, "RemoveAttachMesh" }, // 1844253691
		{ &Z_Construct_UFunction_AFPSItem_ServerApplyCosmetic, "ServerApplyCosmetic" }, // 2329446147
		{ &Z_Construct_UFunction_AFPSItem_ServerBash, "ServerBash" }, // 1683208677
		{ &Z_Construct_UFunction_AFPSItem_ServerCheckAmmo, "ServerCheckAmmo" }, // 1173474735
		{ &Z_Construct_UFunction_AFPSItem_ServerFinishBash, "ServerFinishBash" }, // 9563617
		{ &Z_Construct_UFunction_AFPSItem_ServerInitItem, "ServerInitItem" }, // 3164245011
		{ &Z_Construct_UFunction_AFPSItem_ServerStartDequip, "ServerStartDequip" }, // 3014065624
		{ &Z_Construct_UFunction_AFPSItem_ServerStartEquip, "ServerStartEquip" }, // 746118231
		{ &Z_Construct_UFunction_AFPSItem_SetBoneVisibility, "SetBoneVisibility" }, // 459067959
		{ &Z_Construct_UFunction_AFPSItem_SetCharacter, "SetCharacter" }, // 318951552
		{ &Z_Construct_UFunction_AFPSItem_SetCurrentCosmetic, "SetCurrentCosmetic" }, // 2824381535
		{ &Z_Construct_UFunction_AFPSItem_SetDelay, "SetDelay" }, // 2939067849
		{ &Z_Construct_UFunction_AFPSItem_SetFPSCharacter, "SetFPSCharacter" }, // 3875448351
		{ &Z_Construct_UFunction_AFPSItem_SetIsEquipped, "SetIsEquipped" }, // 648338780
		{ &Z_Construct_UFunction_AFPSItem_SetItemPerspective, "SetItemPerspective" }, // 751641790
		{ &Z_Construct_UFunction_AFPSItem_SetItemVisibility, "SetItemVisibility" }, // 3005892997
		{ &Z_Construct_UFunction_AFPSItem_SetupAnimationData, "SetupAnimationData" }, // 3145017192
		{ &Z_Construct_UFunction_AFPSItem_SetupItemData, "SetupItemData" }, // 1005812208
		{ &Z_Construct_UFunction_AFPSItem_StartBash, "StartBash" }, // 1469415840
		{ &Z_Construct_UFunction_AFPSItem_StartDequip, "StartDequip" }, // 2650238233
		{ &Z_Construct_UFunction_AFPSItem_StartEquip, "StartEquip" }, // 819114883
		{ &Z_Construct_UFunction_AFPSItem_StartPrimaryAction, "StartPrimaryAction" }, // 2641224145
		{ &Z_Construct_UFunction_AFPSItem_StartSecondaryAction, "StartSecondaryAction" }, // 408869152
		{ &Z_Construct_UFunction_AFPSItem_StopPrimaryAction, "StopPrimaryAction" }, // 530460333
		{ &Z_Construct_UFunction_AFPSItem_StopSecondaryAction, "StopSecondaryAction" }, // 3641913387
		{ &Z_Construct_UFunction_AFPSItem_ToggleSpecial, "ToggleSpecial" }, // 3045226433
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_AttachMeshes_Inner = { "AttachMeshes", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttachMeshHierachy, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_AttachMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_AttachMeshes = { "AttachMeshes", nullptr, (EPropertyFlags)0x0010008000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, AttachMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_AttachMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_AttachMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_ItemDataClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_ItemDataClass = { "ItemDataClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, ItemDataClass), Z_Construct_UClass_UFPSItemData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_ItemDataClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_ItemDataClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsEquipped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	void Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsEquipped_SetBit(void* Obj)
	{
		((AFPSItem*)Obj)->bIsEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsEquipped = { "bIsEquipped", "OnRep_IsEquipped", (EPropertyFlags)0x0010000100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSItem), &Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsEquipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsEquipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsDisplay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	void Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsDisplay_SetBit(void* Obj)
	{
		((AFPSItem*)Obj)->bIsDisplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsDisplay = { "bIsDisplay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSItem), &Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsDisplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsEquipping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	void Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsEquipping_SetBit(void* Obj)
	{
		((AFPSItem*)Obj)->bIsEquipping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsEquipping = { "bIsEquipping", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSItem), &Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsEquipping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsEquipping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsEquipping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsAnimationInitialized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	void Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsAnimationInitialized_SetBit(void* Obj)
	{
		((AFPSItem*)Obj)->bIsAnimationInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsAnimationInitialized = { "bIsAnimationInitialized", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSItem), &Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsAnimationInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsAnimationInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsAnimationInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	void Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((AFPSItem*)Obj)->bIsInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSItem), &Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_CurrentCosmetic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_CurrentCosmetic = { "CurrentCosmetic", "OnRep_CurrentCosmetic", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, CurrentCosmetic), METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_CurrentCosmetic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_CurrentCosmetic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_PreviousCosmetic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_PreviousCosmetic = { "PreviousCosmetic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, PreviousCosmetic), METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_PreviousCosmetic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_PreviousCosmetic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_MeleeDistanceTolerance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_MeleeDistanceTolerance = { "MeleeDistanceTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, MeleeDistanceTolerance), METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_MeleeDistanceTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_MeleeDistanceTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_MeleeAngleTolerance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_MeleeAngleTolerance = { "MeleeAngleTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, MeleeAngleTolerance), METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_MeleeAngleTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_MeleeAngleTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_bSubtractPingFromMeleeDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	void Z_Construct_UClass_AFPSItem_Statics::NewProp_bSubtractPingFromMeleeDelay_SetBit(void* Obj)
	{
		((AFPSItem*)Obj)->bSubtractPingFromMeleeDelay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_bSubtractPingFromMeleeDelay = { "bSubtractPingFromMeleeDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSItem), &Z_Construct_UClass_AFPSItem_Statics::NewProp_bSubtractPingFromMeleeDelay_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_bSubtractPingFromMeleeDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_bSubtractPingFromMeleeDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_FPSCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_FPSCharacter = { "FPSCharacter", "OnRep_FPSCharacter", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, FPSCharacter), Z_Construct_UClass_AFPSCharacterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_FPSCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_FPSCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_ItemData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, ItemData), Z_Construct_UClass_UFPSItemData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_ItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_ItemData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_ItemDataAssetID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_ItemDataAssetID = { "ItemDataAssetID", "OnRep_ItemDataAssetID", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, ItemDataAssetID), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_ItemDataAssetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_ItemDataAssetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_MeleeData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_MeleeData = { "MeleeData", "OnRep_MeleeData", (EPropertyFlags)0x0020088100002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, MeleeData), Z_Construct_UScriptStruct_FMeleeHitData, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_MeleeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_MeleeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_Delay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, Delay), METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_Delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_Delay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, DeltaTime), METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_DeltaTime_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_OriginalMaterials_Inner = { "OriginalMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_OriginalMaterials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_OriginalMaterials = { "OriginalMaterials", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, OriginalMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_OriginalMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_OriginalMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_ItemAnimationInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_ItemAnimationInstance = { "ItemAnimationInstance", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, ItemAnimationInstance), Z_Construct_UClass_UFPSAnimationInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_ItemAnimationInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_ItemAnimationInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_ThirdPersonAnimationInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_ThirdPersonAnimationInstance = { "ThirdPersonAnimationInstance", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, ThirdPersonAnimationInstance), Z_Construct_UClass_UFPSAnimationInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_ThirdPersonAnimationInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_ThirdPersonAnimationInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_ArmsAnimationInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_ArmsAnimationInstance = { "ArmsAnimationInstance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, ArmsAnimationInstance), Z_Construct_UClass_UFirstPersonAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_ArmsAnimationInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_ArmsAnimationInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_Root_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_FirstPerson_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_FirstPerson = { "FirstPerson", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, FirstPerson), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_FirstPerson_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_FirstPerson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_ThirdPerson_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_ThirdPerson = { "ThirdPerson", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, ThirdPerson), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_ThirdPerson_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_ThirdPerson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_Mesh3P_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_Mesh3P = { "Mesh3P", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, Mesh3P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_Mesh3P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_Mesh3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_FirstPersonComponents_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_FirstPersonComponents_Inner = { "FirstPersonComponents", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_FirstPersonComponents_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_FirstPersonComponents_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_FirstPersonComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_FirstPersonComponents = { "FirstPersonComponents", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, FirstPersonComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_FirstPersonComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_FirstPersonComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_ThirdPersonComponents_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_ThirdPersonComponents_Inner = { "ThirdPersonComponents", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_ThirdPersonComponents_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_ThirdPersonComponents_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_ThirdPersonComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_ThirdPersonComponents = { "ThirdPersonComponents", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, ThirdPersonComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_ThirdPersonComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_ThirdPersonComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_SlotData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_SlotData = { "SlotData", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, SlotData), Z_Construct_UScriptStruct_FFPSItemSlotData, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_SlotData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_SlotData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSItem_Statics::NewProp_OnItemDataLoaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItem" },
		{ "ModuleRelativePath", "Public/FPSItem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFPSItem_Statics::NewProp_OnItemDataLoaded = { "OnItemDataLoaded", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSItem, OnItemDataLoaded), Z_Construct_UDelegateFunction_AFPSItem_ItemDataLoadedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::NewProp_OnItemDataLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::NewProp_OnItemDataLoaded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_AttachMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_AttachMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_ItemDataClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsEquipping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsAnimationInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_bIsInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_CurrentCosmetic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_PreviousCosmetic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_MeleeDistanceTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_MeleeAngleTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_bSubtractPingFromMeleeDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_FPSCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_ItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_ItemDataAssetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_MeleeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_OriginalMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_OriginalMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_ItemAnimationInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_ThirdPersonAnimationInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_ArmsAnimationInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_FirstPerson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_ThirdPerson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_Mesh3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_FirstPersonComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_FirstPersonComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_ThirdPersonComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_ThirdPersonComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_SlotData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSItem_Statics::NewProp_OnItemDataLoaded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSItem_Statics::ClassParams = {
		&AFPSItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSItem, 3927482386);
	template<> FPSCONTROLLER_API UClass* StaticClass<AFPSItem>()
	{
		return AFPSItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSItem(Z_Construct_UClass_AFPSItem, &AFPSItem::StaticClass, TEXT("/Script/FPSController"), TEXT("AFPSItem"), false, nullptr, nullptr, nullptr);

	void AFPSItem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsEquipped(TEXT("bIsEquipped"));
		static const FName Name_CurrentCosmetic(TEXT("CurrentCosmetic"));
		static const FName Name_FPSCharacter(TEXT("FPSCharacter"));
		static const FName Name_ItemDataAssetID(TEXT("ItemDataAssetID"));
		static const FName Name_MeleeData(TEXT("MeleeData"));
		static const FName Name_SlotData(TEXT("SlotData"));

		const bool bIsValid = true
			&& Name_bIsEquipped == ClassReps[(int32)ENetFields_Private::bIsEquipped].Property->GetFName()
			&& Name_CurrentCosmetic == ClassReps[(int32)ENetFields_Private::CurrentCosmetic].Property->GetFName()
			&& Name_FPSCharacter == ClassReps[(int32)ENetFields_Private::FPSCharacter].Property->GetFName()
			&& Name_ItemDataAssetID == ClassReps[(int32)ENetFields_Private::ItemDataAssetID].Property->GetFName()
			&& Name_MeleeData == ClassReps[(int32)ENetFields_Private::MeleeData].Property->GetFName()
			&& Name_SlotData == ClassReps[(int32)ENetFields_Private::SlotData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AFPSItem"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
