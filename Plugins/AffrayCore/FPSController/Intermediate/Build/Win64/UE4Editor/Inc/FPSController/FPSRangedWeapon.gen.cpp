// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSRangedWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSRangedWeapon() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSRangedWeapon_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSRangedWeapon();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSWeapon();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAttachmentSlotData();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSAttachment_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSBarrel_NoRegister();
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EFireMode();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSGrip_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSSight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSRangedWeaponData_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EReloadType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FBallisticProjectileData();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FReloadData();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemComponent_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UBallisticPhysicsMaterial_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParticleCallbackHandler_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSRangedWeapon::execAddMagazine)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Ammo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMagazine(Z_Param_Ammo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execAddMagazines)
	{
		P_GET_UBOOL(Z_Param_bForceFullAmmo);
		P_GET_UBOOL(Z_Param_bReplace);
		P_GET_UBOOL(Z_Param_bDisableDelay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMagazines_Implementation(Z_Param_bForceFullAmmo,Z_Param_bReplace,Z_Param_bDisableDelay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execAddMultipleMagazines)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Ammo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMultipleMagazines(Z_Param_Ammo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execCanAim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAim();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execCanCancelReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanCancelReload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execCanChangeFiremode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanChangeFiremode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execCanInspect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanInspect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execCanReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanReload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execCanReloadWhileAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanReloadWhileAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execCanReloadWhileSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanReloadWhileSprinting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execCycleMagazines)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CycleMagazines_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execDropMagazine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropMagazine_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execFindAttachmentAtSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FAttachmentSlotData,Z_Param_Out_AttachmentSlotData);
		P_GET_UBOOL_REF(Z_Param_Out_bFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AFPSAttachment**)Z_Param__Result=P_THIS->FindAttachmentAtSlot(Z_Param_Index,Z_Param_Out_AttachmentSlotData,Z_Param_Out_bFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetADSAlignmentSpeedMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetADSAlignmentSpeedMultiplier_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetADSSpeedMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetADSSpeedMultiplier_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetAttachmentData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetAttachmentData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetBarrelLocation)
	{
		P_GET_UBOOL(Z_Param_bTransformToMesh);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
		P_GET_UBOOL(Z_Param_bIncludeAttachment);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetBarrelLocation_Implementation(Z_Param_bTransformToMesh,Z_Param_Out_Rotation,Z_Param_bIncludeAttachment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetBulletsInNextMag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBulletsInNextMag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetCasingEjectionLocation)
	{
		P_GET_UBOOL(Z_Param_bTransformToMesh);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCasingEjectionLocation_Implementation(Z_Param_bTransformToMesh,Z_Param_Out_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetCurrentAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetCurrentBarrel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AFPSBarrel**)Z_Param__Result=P_THIS->GetCurrentBarrel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetCurrentFireMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFireMode*)Z_Param__Result=P_THIS->GetCurrentFireMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetCurrentGrip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AFPSGrip**)Z_Param__Result=P_THIS->GetCurrentGrip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetCurrentSight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AFPSSight**)Z_Param__Result=P_THIS->GetCurrentSight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetIdleMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetIdleMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetIronSight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetIronSight_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetKickMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetKickMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetLoudness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLoudness();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetMaxReserveAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxReserveAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetMaxReserveMagazines)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxReserveMagazines();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetNextMagIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNextMagIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetRangedWeaponData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFPSRangedWeaponData**)Z_Param__Result=P_THIS->GetRangedWeaponData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetRecoil)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetRecoil();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetRecoilAnimationMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRecoilAnimationMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetRecoilMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetRecoilMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetReloadType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EReloadType*)Z_Param__Result=P_THIS->GetReloadType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetReserveAmmo)
	{
		P_GET_UBOOL(Z_Param_bIncludeCurrentMag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetReserveAmmo(Z_Param_bIncludeCurrentMag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetReserveMagazines)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetReserveMagazines();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetSightComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetSightComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetSightDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSightDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetSightDistance)
	{
		P_GET_STRUCT(FTransform,Z_Param_HeadTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSightDistance(Z_Param_HeadTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetSightPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSightPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execGetUsingAlternateGripPose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUsingAlternateGripPose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execHasAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execHasAttachment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAttachment(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execHasFullAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasFullAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execHasGrip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasGrip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execHasSight)
	{
		P_GET_UBOOL(Z_Param_bAllowCanted);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasSight(Z_Param_bAllowCanted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execIsAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execIsCompensated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCompensated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execIsLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execIsReloading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReloading();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execIsSlotGrip)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSlotGrip(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execIsSlotSight)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL_REF(Z_Param_Out_bIsCanted);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSlotSight(Z_Param_Index,Z_Param_Out_bIsCanted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execIsSuppressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSuppressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execLoadRound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadRound_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execOnCascadeParticleCollide)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EmitterTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_ParticleTime);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FVector,Z_Param_Velocity);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_STRUCT(FVector,Z_Param_Normal);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_OBJECT(UPhysicalMaterial,Z_Param_PhysMat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCascadeParticleCollide(Z_Param_EventName,Z_Param_EmitterTime,Z_Param_ParticleTime,Z_Param_Location,Z_Param_Velocity,Z_Param_Direction,Z_Param_Normal,Z_Param_BoneName,Z_Param_PhysMat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execOnParticleCollide)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FVector,Z_Param_Velocity);
		P_GET_PROPERTY(FByteProperty,Z_Param_Surface);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnParticleCollide_Implementation(Z_Param_Location,Z_Param_Velocity,EPhysicalSurface(Z_Param_Surface));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execOnRep_Attachments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Attachments_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execOnRep_bIsAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bIsAiming_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execOnRep_bIsFiring)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bIsFiring_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execOnRep_bIsInspecting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bIsInspecting_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execOnRep_bIsLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bIsLoaded_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execOnRep_bIsPreFiring)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bIsPreFiring_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execOnRep_bIsUsingAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bIsUsingAction_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execOnRep_BurstCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BurstCount_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execOnRep_CurrentAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentAmmo_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execOnRep_CurrentBarrel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentBarrel_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execOnRep_CurrentFireMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentFireMode_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execOnRep_CurrentGrip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentGrip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execOnRep_CurrentSight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentSight_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execOnRep_LastProjectiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LastProjectiles_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execOnRep_Magazines)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Magazines_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execOnRep_ReloadData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReloadData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execSendMagazines)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendMagazines_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execSerializeAttachments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SerializeAttachments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execServerSetCurrentBarrel)
	{
		P_GET_OBJECT(AFPSBarrel,Z_Param_Barrel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetCurrentBarrel_Implementation(Z_Param_Barrel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execServerSetCurrentGrip)
	{
		P_GET_OBJECT(AFPSGrip,Z_Param_Grip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetCurrentGrip_Implementation(Z_Param_Grip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execServerSetCurrentSight)
	{
		P_GET_OBJECT(AFPSSight,Z_Param_Sight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetCurrentSight_Implementation(Z_Param_Sight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execServerSetIsFiring)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetIsFiring_Implementation(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execSetAttachments)
	{
		P_GET_TARRAY(AFPSAttachment*,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttachments(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execSetBurstCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBurstCount(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execSetCurrentAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentAmmo(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execSetCurrentBarrel)
	{
		P_GET_OBJECT(AFPSBarrel,Z_Param_Barrel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentBarrel(Z_Param_Barrel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execSetCurrentFireMode)
	{
		P_GET_ENUM(EFireMode,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentFireMode(EFireMode(Z_Param_NewValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execSetCurrentGrip)
	{
		P_GET_OBJECT(AFPSGrip,Z_Param_Grip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentGrip(Z_Param_Grip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execSetCurrentSight)
	{
		P_GET_OBJECT(AFPSSight,Z_Param_Sight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentSight(Z_Param_Sight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execSetIsAiming)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsAiming(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execSetIsFiring)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsFiring(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execSetIsInspecting)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsInspecting(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execSetIsLoaded)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsLoaded(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execSetIsPreFiring)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsPreFiring(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execSetIsUsingAction)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsUsingAction(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execSetLastProjectiles)
	{
		P_GET_TARRAY_REF(FBallisticProjectileData,Z_Param_Out_InLastProjectiles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLastProjectiles(Z_Param_Out_InLastProjectiles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execSetMagazines)
	{
		P_GET_TARRAY(int32,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMagazines(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execSetReloadData)
	{
		P_GET_STRUCT(FReloadData,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReloadData(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execSetUsingAlternateGripPose)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUsingAlternateGripPose(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execSortMagazines)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortMagazines_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execStartCasing)
	{
		P_GET_OBJECT(UFXSystemAsset,Z_Param_Particle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCasing_Implementation(Z_Param_Particle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execStartFireAudio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFMODAudioComponent**)Z_Param__Result=P_THIS->StartFireAudio_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execStartMuzzleFlash)
	{
		P_GET_OBJECT(UFXSystemAsset,Z_Param_Particle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartMuzzleFlash_Implementation(Z_Param_Particle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execStartMuzzleSmoke)
	{
		P_GET_OBJECT(UFXSystemAsset,Z_Param_Particle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartMuzzleSmoke_Implementation(Z_Param_Particle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execStopFireAudio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFireAudio_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execUseFullAutoAudio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UseFullAutoAudio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execUsingManualAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UsingManualAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSRangedWeapon::execWantsDiscardMagazine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WantsDiscardMagazine();
		P_NATIVE_END;
	}
	static FName NAME_AFPSRangedWeapon_AddMagazines = FName(TEXT("AddMagazines"));
	void AFPSRangedWeapon::AddMagazines(bool bForceFullAmmo, bool bReplace, bool bDisableDelay)
	{
		FPSRangedWeapon_eventAddMagazines_Parms Parms;
		Parms.bForceFullAmmo=bForceFullAmmo ? true : false;
		Parms.bReplace=bReplace ? true : false;
		Parms.bDisableDelay=bDisableDelay ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_AddMagazines),&Parms);
	}
	static FName NAME_AFPSRangedWeapon_CycleMagazines = FName(TEXT("CycleMagazines"));
	void AFPSRangedWeapon::CycleMagazines()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_CycleMagazines),NULL);
	}
	static FName NAME_AFPSRangedWeapon_DropMagazine = FName(TEXT("DropMagazine"));
	void AFPSRangedWeapon::DropMagazine()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_DropMagazine),NULL);
	}
	static FName NAME_AFPSRangedWeapon_GetADSAlignmentSpeedMultiplier = FName(TEXT("GetADSAlignmentSpeedMultiplier"));
	float AFPSRangedWeapon::GetADSAlignmentSpeedMultiplier() const
	{
		FPSRangedWeapon_eventGetADSAlignmentSpeedMultiplier_Parms Parms;
		const_cast<AFPSRangedWeapon*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_GetADSAlignmentSpeedMultiplier),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFPSRangedWeapon_GetADSSpeedMultiplier = FName(TEXT("GetADSSpeedMultiplier"));
	float AFPSRangedWeapon::GetADSSpeedMultiplier() const
	{
		FPSRangedWeapon_eventGetADSSpeedMultiplier_Parms Parms;
		const_cast<AFPSRangedWeapon*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_GetADSSpeedMultiplier),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFPSRangedWeapon_GetBarrelLocation = FName(TEXT("GetBarrelLocation"));
	FVector AFPSRangedWeapon::GetBarrelLocation(bool bTransformToMesh, FRotator& Rotation, bool bIncludeAttachment) const
	{
		FPSRangedWeapon_eventGetBarrelLocation_Parms Parms;
		Parms.bTransformToMesh=bTransformToMesh ? true : false;
		Parms.Rotation=Rotation;
		Parms.bIncludeAttachment=bIncludeAttachment ? true : false;
		const_cast<AFPSRangedWeapon*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_GetBarrelLocation),&Parms);
		Rotation=Parms.Rotation;
		return Parms.ReturnValue;
	}
	static FName NAME_AFPSRangedWeapon_GetCasingEjectionLocation = FName(TEXT("GetCasingEjectionLocation"));
	FVector AFPSRangedWeapon::GetCasingEjectionLocation(bool bTransformToMesh, FRotator& Rotation) const
	{
		FPSRangedWeapon_eventGetCasingEjectionLocation_Parms Parms;
		Parms.bTransformToMesh=bTransformToMesh ? true : false;
		Parms.Rotation=Rotation;
		const_cast<AFPSRangedWeapon*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_GetCasingEjectionLocation),&Parms);
		Rotation=Parms.Rotation;
		return Parms.ReturnValue;
	}
	static FName NAME_AFPSRangedWeapon_GetIronSight = FName(TEXT("GetIronSight"));
	USceneComponent* AFPSRangedWeapon::GetIronSight()
	{
		FPSRangedWeapon_eventGetIronSight_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_GetIronSight),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFPSRangedWeapon_LoadRound = FName(TEXT("LoadRound"));
	void AFPSRangedWeapon::LoadRound()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_LoadRound),NULL);
	}
	static FName NAME_AFPSRangedWeapon_OnParticleCollide = FName(TEXT("OnParticleCollide"));
	void AFPSRangedWeapon::OnParticleCollide(FVector Location, FVector Velocity, EPhysicalSurface Surface)
	{
		FPSRangedWeapon_eventOnParticleCollide_Parms Parms;
		Parms.Location=Location;
		Parms.Velocity=Velocity;
		Parms.Surface=Surface;
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_OnParticleCollide),&Parms);
	}
	static FName NAME_AFPSRangedWeapon_OnRep_Attachments = FName(TEXT("OnRep_Attachments"));
	void AFPSRangedWeapon::OnRep_Attachments()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_OnRep_Attachments),NULL);
	}
	static FName NAME_AFPSRangedWeapon_OnRep_bIsAiming = FName(TEXT("OnRep_bIsAiming"));
	void AFPSRangedWeapon::OnRep_bIsAiming()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_OnRep_bIsAiming),NULL);
	}
	static FName NAME_AFPSRangedWeapon_OnRep_bIsFiring = FName(TEXT("OnRep_bIsFiring"));
	void AFPSRangedWeapon::OnRep_bIsFiring()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_OnRep_bIsFiring),NULL);
	}
	static FName NAME_AFPSRangedWeapon_OnRep_bIsInspecting = FName(TEXT("OnRep_bIsInspecting"));
	void AFPSRangedWeapon::OnRep_bIsInspecting()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_OnRep_bIsInspecting),NULL);
	}
	static FName NAME_AFPSRangedWeapon_OnRep_bIsLoaded = FName(TEXT("OnRep_bIsLoaded"));
	void AFPSRangedWeapon::OnRep_bIsLoaded()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_OnRep_bIsLoaded),NULL);
	}
	static FName NAME_AFPSRangedWeapon_OnRep_bIsPreFiring = FName(TEXT("OnRep_bIsPreFiring"));
	void AFPSRangedWeapon::OnRep_bIsPreFiring()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_OnRep_bIsPreFiring),NULL);
	}
	static FName NAME_AFPSRangedWeapon_OnRep_bIsUsingAction = FName(TEXT("OnRep_bIsUsingAction"));
	void AFPSRangedWeapon::OnRep_bIsUsingAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_OnRep_bIsUsingAction),NULL);
	}
	static FName NAME_AFPSRangedWeapon_OnRep_BurstCount = FName(TEXT("OnRep_BurstCount"));
	void AFPSRangedWeapon::OnRep_BurstCount()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_OnRep_BurstCount),NULL);
	}
	static FName NAME_AFPSRangedWeapon_OnRep_CurrentAmmo = FName(TEXT("OnRep_CurrentAmmo"));
	void AFPSRangedWeapon::OnRep_CurrentAmmo()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_OnRep_CurrentAmmo),NULL);
	}
	static FName NAME_AFPSRangedWeapon_OnRep_CurrentBarrel = FName(TEXT("OnRep_CurrentBarrel"));
	void AFPSRangedWeapon::OnRep_CurrentBarrel()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_OnRep_CurrentBarrel),NULL);
	}
	static FName NAME_AFPSRangedWeapon_OnRep_CurrentFireMode = FName(TEXT("OnRep_CurrentFireMode"));
	void AFPSRangedWeapon::OnRep_CurrentFireMode()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_OnRep_CurrentFireMode),NULL);
	}
	static FName NAME_AFPSRangedWeapon_OnRep_CurrentGrip = FName(TEXT("OnRep_CurrentGrip"));
	void AFPSRangedWeapon::OnRep_CurrentGrip()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_OnRep_CurrentGrip),NULL);
	}
	static FName NAME_AFPSRangedWeapon_OnRep_CurrentSight = FName(TEXT("OnRep_CurrentSight"));
	void AFPSRangedWeapon::OnRep_CurrentSight()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_OnRep_CurrentSight),NULL);
	}
	static FName NAME_AFPSRangedWeapon_OnRep_LastProjectiles = FName(TEXT("OnRep_LastProjectiles"));
	void AFPSRangedWeapon::OnRep_LastProjectiles()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_OnRep_LastProjectiles),NULL);
	}
	static FName NAME_AFPSRangedWeapon_OnRep_Magazines = FName(TEXT("OnRep_Magazines"));
	void AFPSRangedWeapon::OnRep_Magazines()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_OnRep_Magazines),NULL);
	}
	static FName NAME_AFPSRangedWeapon_OnRep_ReloadData = FName(TEXT("OnRep_ReloadData"));
	void AFPSRangedWeapon::OnRep_ReloadData()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_OnRep_ReloadData),NULL);
	}
	static FName NAME_AFPSRangedWeapon_SendMagazines = FName(TEXT("SendMagazines"));
	void AFPSRangedWeapon::SendMagazines()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_SendMagazines),NULL);
	}
	static FName NAME_AFPSRangedWeapon_ServerSetCurrentBarrel = FName(TEXT("ServerSetCurrentBarrel"));
	void AFPSRangedWeapon::ServerSetCurrentBarrel(AFPSBarrel* Barrel)
	{
		FPSRangedWeapon_eventServerSetCurrentBarrel_Parms Parms;
		Parms.Barrel=Barrel;
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_ServerSetCurrentBarrel),&Parms);
	}
	static FName NAME_AFPSRangedWeapon_ServerSetCurrentGrip = FName(TEXT("ServerSetCurrentGrip"));
	void AFPSRangedWeapon::ServerSetCurrentGrip(AFPSGrip* Grip)
	{
		FPSRangedWeapon_eventServerSetCurrentGrip_Parms Parms;
		Parms.Grip=Grip;
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_ServerSetCurrentGrip),&Parms);
	}
	static FName NAME_AFPSRangedWeapon_ServerSetCurrentSight = FName(TEXT("ServerSetCurrentSight"));
	void AFPSRangedWeapon::ServerSetCurrentSight(AFPSSight* Sight)
	{
		FPSRangedWeapon_eventServerSetCurrentSight_Parms Parms;
		Parms.Sight=Sight;
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_ServerSetCurrentSight),&Parms);
	}
	static FName NAME_AFPSRangedWeapon_ServerSetIsFiring = FName(TEXT("ServerSetIsFiring"));
	void AFPSRangedWeapon::ServerSetIsFiring(bool bNewValue)
	{
		FPSRangedWeapon_eventServerSetIsFiring_Parms Parms;
		Parms.bNewValue=bNewValue ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_ServerSetIsFiring),&Parms);
	}
	static FName NAME_AFPSRangedWeapon_SortMagazines = FName(TEXT("SortMagazines"));
	void AFPSRangedWeapon::SortMagazines()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_SortMagazines),NULL);
	}
	static FName NAME_AFPSRangedWeapon_StartCasing = FName(TEXT("StartCasing"));
	void AFPSRangedWeapon::StartCasing(UFXSystemAsset* Particle)
	{
		FPSRangedWeapon_eventStartCasing_Parms Parms;
		Parms.Particle=Particle;
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_StartCasing),&Parms);
	}
	static FName NAME_AFPSRangedWeapon_StartFireAudio = FName(TEXT("StartFireAudio"));
	UFMODAudioComponent* AFPSRangedWeapon::StartFireAudio()
	{
		FPSRangedWeapon_eventStartFireAudio_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_StartFireAudio),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFPSRangedWeapon_StartMuzzleFlash = FName(TEXT("StartMuzzleFlash"));
	void AFPSRangedWeapon::StartMuzzleFlash(UFXSystemAsset* Particle)
	{
		FPSRangedWeapon_eventStartMuzzleFlash_Parms Parms;
		Parms.Particle=Particle;
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_StartMuzzleFlash),&Parms);
	}
	static FName NAME_AFPSRangedWeapon_StartMuzzleSmoke = FName(TEXT("StartMuzzleSmoke"));
	void AFPSRangedWeapon::StartMuzzleSmoke(UFXSystemAsset* Particle)
	{
		FPSRangedWeapon_eventStartMuzzleSmoke_Parms Parms;
		Parms.Particle=Particle;
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_StartMuzzleSmoke),&Parms);
	}
	static FName NAME_AFPSRangedWeapon_StopFireAudio = FName(TEXT("StopFireAudio"));
	void AFPSRangedWeapon::StopFireAudio()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSRangedWeapon_StopFireAudio),NULL);
	}
	void AFPSRangedWeapon::StaticRegisterNativesAFPSRangedWeapon()
	{
		UClass* Class = AFPSRangedWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMagazine", &AFPSRangedWeapon::execAddMagazine },
			{ "AddMagazines", &AFPSRangedWeapon::execAddMagazines },
			{ "AddMultipleMagazines", &AFPSRangedWeapon::execAddMultipleMagazines },
			{ "CanAim", &AFPSRangedWeapon::execCanAim },
			{ "CanCancelReload", &AFPSRangedWeapon::execCanCancelReload },
			{ "CanChangeFiremode", &AFPSRangedWeapon::execCanChangeFiremode },
			{ "CanInspect", &AFPSRangedWeapon::execCanInspect },
			{ "CanReload", &AFPSRangedWeapon::execCanReload },
			{ "CanReloadWhileAiming", &AFPSRangedWeapon::execCanReloadWhileAiming },
			{ "CanReloadWhileSprinting", &AFPSRangedWeapon::execCanReloadWhileSprinting },
			{ "CycleMagazines", &AFPSRangedWeapon::execCycleMagazines },
			{ "DropMagazine", &AFPSRangedWeapon::execDropMagazine },
			{ "FindAttachmentAtSlot", &AFPSRangedWeapon::execFindAttachmentAtSlot },
			{ "GetADSAlignmentSpeedMultiplier", &AFPSRangedWeapon::execGetADSAlignmentSpeedMultiplier },
			{ "GetADSSpeedMultiplier", &AFPSRangedWeapon::execGetADSSpeedMultiplier },
			{ "GetAttachmentData", &AFPSRangedWeapon::execGetAttachmentData },
			{ "GetBarrelLocation", &AFPSRangedWeapon::execGetBarrelLocation },
			{ "GetBulletsInNextMag", &AFPSRangedWeapon::execGetBulletsInNextMag },
			{ "GetCasingEjectionLocation", &AFPSRangedWeapon::execGetCasingEjectionLocation },
			{ "GetCurrentAmmo", &AFPSRangedWeapon::execGetCurrentAmmo },
			{ "GetCurrentBarrel", &AFPSRangedWeapon::execGetCurrentBarrel },
			{ "GetCurrentFireMode", &AFPSRangedWeapon::execGetCurrentFireMode },
			{ "GetCurrentGrip", &AFPSRangedWeapon::execGetCurrentGrip },
			{ "GetCurrentSight", &AFPSRangedWeapon::execGetCurrentSight },
			{ "GetIdleMultiplier", &AFPSRangedWeapon::execGetIdleMultiplier },
			{ "GetIronSight", &AFPSRangedWeapon::execGetIronSight },
			{ "GetKickMultiplier", &AFPSRangedWeapon::execGetKickMultiplier },
			{ "GetLoudness", &AFPSRangedWeapon::execGetLoudness },
			{ "GetMaxReserveAmmo", &AFPSRangedWeapon::execGetMaxReserveAmmo },
			{ "GetMaxReserveMagazines", &AFPSRangedWeapon::execGetMaxReserveMagazines },
			{ "GetNextMagIndex", &AFPSRangedWeapon::execGetNextMagIndex },
			{ "GetRangedWeaponData", &AFPSRangedWeapon::execGetRangedWeaponData },
			{ "GetRecoil", &AFPSRangedWeapon::execGetRecoil },
			{ "GetRecoilAnimationMultiplier", &AFPSRangedWeapon::execGetRecoilAnimationMultiplier },
			{ "GetRecoilMultiplier", &AFPSRangedWeapon::execGetRecoilMultiplier },
			{ "GetReloadType", &AFPSRangedWeapon::execGetReloadType },
			{ "GetReserveAmmo", &AFPSRangedWeapon::execGetReserveAmmo },
			{ "GetReserveMagazines", &AFPSRangedWeapon::execGetReserveMagazines },
			{ "GetSightComponent", &AFPSRangedWeapon::execGetSightComponent },
			{ "GetSightDirection", &AFPSRangedWeapon::execGetSightDirection },
			{ "GetSightDistance", &AFPSRangedWeapon::execGetSightDistance },
			{ "GetSightPosition", &AFPSRangedWeapon::execGetSightPosition },
			{ "GetUsingAlternateGripPose", &AFPSRangedWeapon::execGetUsingAlternateGripPose },
			{ "HasAmmo", &AFPSRangedWeapon::execHasAmmo },
			{ "HasAttachment", &AFPSRangedWeapon::execHasAttachment },
			{ "HasFullAmmo", &AFPSRangedWeapon::execHasFullAmmo },
			{ "HasGrip", &AFPSRangedWeapon::execHasGrip },
			{ "HasSight", &AFPSRangedWeapon::execHasSight },
			{ "IsAiming", &AFPSRangedWeapon::execIsAiming },
			{ "IsCompensated", &AFPSRangedWeapon::execIsCompensated },
			{ "IsLoaded", &AFPSRangedWeapon::execIsLoaded },
			{ "IsReloading", &AFPSRangedWeapon::execIsReloading },
			{ "IsSlotGrip", &AFPSRangedWeapon::execIsSlotGrip },
			{ "IsSlotSight", &AFPSRangedWeapon::execIsSlotSight },
			{ "IsSuppressed", &AFPSRangedWeapon::execIsSuppressed },
			{ "LoadRound", &AFPSRangedWeapon::execLoadRound },
			{ "OnCascadeParticleCollide", &AFPSRangedWeapon::execOnCascadeParticleCollide },
			{ "OnParticleCollide", &AFPSRangedWeapon::execOnParticleCollide },
			{ "OnRep_Attachments", &AFPSRangedWeapon::execOnRep_Attachments },
			{ "OnRep_bIsAiming", &AFPSRangedWeapon::execOnRep_bIsAiming },
			{ "OnRep_bIsFiring", &AFPSRangedWeapon::execOnRep_bIsFiring },
			{ "OnRep_bIsInspecting", &AFPSRangedWeapon::execOnRep_bIsInspecting },
			{ "OnRep_bIsLoaded", &AFPSRangedWeapon::execOnRep_bIsLoaded },
			{ "OnRep_bIsPreFiring", &AFPSRangedWeapon::execOnRep_bIsPreFiring },
			{ "OnRep_bIsUsingAction", &AFPSRangedWeapon::execOnRep_bIsUsingAction },
			{ "OnRep_BurstCount", &AFPSRangedWeapon::execOnRep_BurstCount },
			{ "OnRep_CurrentAmmo", &AFPSRangedWeapon::execOnRep_CurrentAmmo },
			{ "OnRep_CurrentBarrel", &AFPSRangedWeapon::execOnRep_CurrentBarrel },
			{ "OnRep_CurrentFireMode", &AFPSRangedWeapon::execOnRep_CurrentFireMode },
			{ "OnRep_CurrentGrip", &AFPSRangedWeapon::execOnRep_CurrentGrip },
			{ "OnRep_CurrentSight", &AFPSRangedWeapon::execOnRep_CurrentSight },
			{ "OnRep_LastProjectiles", &AFPSRangedWeapon::execOnRep_LastProjectiles },
			{ "OnRep_Magazines", &AFPSRangedWeapon::execOnRep_Magazines },
			{ "OnRep_ReloadData", &AFPSRangedWeapon::execOnRep_ReloadData },
			{ "SendMagazines", &AFPSRangedWeapon::execSendMagazines },
			{ "SerializeAttachments", &AFPSRangedWeapon::execSerializeAttachments },
			{ "ServerSetCurrentBarrel", &AFPSRangedWeapon::execServerSetCurrentBarrel },
			{ "ServerSetCurrentGrip", &AFPSRangedWeapon::execServerSetCurrentGrip },
			{ "ServerSetCurrentSight", &AFPSRangedWeapon::execServerSetCurrentSight },
			{ "ServerSetIsFiring", &AFPSRangedWeapon::execServerSetIsFiring },
			{ "SetAttachments", &AFPSRangedWeapon::execSetAttachments },
			{ "SetBurstCount", &AFPSRangedWeapon::execSetBurstCount },
			{ "SetCurrentAmmo", &AFPSRangedWeapon::execSetCurrentAmmo },
			{ "SetCurrentBarrel", &AFPSRangedWeapon::execSetCurrentBarrel },
			{ "SetCurrentFireMode", &AFPSRangedWeapon::execSetCurrentFireMode },
			{ "SetCurrentGrip", &AFPSRangedWeapon::execSetCurrentGrip },
			{ "SetCurrentSight", &AFPSRangedWeapon::execSetCurrentSight },
			{ "SetIsAiming", &AFPSRangedWeapon::execSetIsAiming },
			{ "SetIsFiring", &AFPSRangedWeapon::execSetIsFiring },
			{ "SetIsInspecting", &AFPSRangedWeapon::execSetIsInspecting },
			{ "SetIsLoaded", &AFPSRangedWeapon::execSetIsLoaded },
			{ "SetIsPreFiring", &AFPSRangedWeapon::execSetIsPreFiring },
			{ "SetIsUsingAction", &AFPSRangedWeapon::execSetIsUsingAction },
			{ "SetLastProjectiles", &AFPSRangedWeapon::execSetLastProjectiles },
			{ "SetMagazines", &AFPSRangedWeapon::execSetMagazines },
			{ "SetReloadData", &AFPSRangedWeapon::execSetReloadData },
			{ "SetUsingAlternateGripPose", &AFPSRangedWeapon::execSetUsingAlternateGripPose },
			{ "SortMagazines", &AFPSRangedWeapon::execSortMagazines },
			{ "StartCasing", &AFPSRangedWeapon::execStartCasing },
			{ "StartFireAudio", &AFPSRangedWeapon::execStartFireAudio },
			{ "StartMuzzleFlash", &AFPSRangedWeapon::execStartMuzzleFlash },
			{ "StartMuzzleSmoke", &AFPSRangedWeapon::execStartMuzzleSmoke },
			{ "StopFireAudio", &AFPSRangedWeapon::execStopFireAudio },
			{ "UseFullAutoAudio", &AFPSRangedWeapon::execUseFullAutoAudio },
			{ "UsingManualAction", &AFPSRangedWeapon::execUsingManualAction },
			{ "WantsDiscardMagazine", &AFPSRangedWeapon::execWantsDiscardMagazine },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_AddMagazine_Statics
	{
		struct FPSRangedWeapon_eventAddMagazine_Parms
		{
			int32 Ammo;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ammo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_AddMagazine_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventAddMagazine_Parms, Ammo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_AddMagazine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_AddMagazine_Statics::NewProp_Ammo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_AddMagazine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_AddMagazine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "AddMagazine", nullptr, nullptr, sizeof(FPSRangedWeapon_eventAddMagazine_Parms), Z_Construct_UFunction_AFPSRangedWeapon_AddMagazine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_AddMagazine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_AddMagazine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_AddMagazine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_AddMagazine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_AddMagazine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines_Statics
	{
		static void NewProp_bForceFullAmmo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceFullAmmo;
		static void NewProp_bReplace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplace;
		static void NewProp_bDisableDelay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines_Statics::NewProp_bForceFullAmmo_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventAddMagazines_Parms*)Obj)->bForceFullAmmo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines_Statics::NewProp_bForceFullAmmo = { "bForceFullAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventAddMagazines_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines_Statics::NewProp_bForceFullAmmo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines_Statics::NewProp_bReplace_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventAddMagazines_Parms*)Obj)->bReplace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines_Statics::NewProp_bReplace = { "bReplace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventAddMagazines_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines_Statics::NewProp_bReplace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines_Statics::NewProp_bDisableDelay_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventAddMagazines_Parms*)Obj)->bDisableDelay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines_Statics::NewProp_bDisableDelay = { "bDisableDelay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventAddMagazines_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines_Statics::NewProp_bDisableDelay_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines_Statics::NewProp_bForceFullAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines_Statics::NewProp_bReplace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines_Statics::NewProp_bDisableDelay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "AddMagazines", nullptr, nullptr, sizeof(FPSRangedWeapon_eventAddMagazines_Parms), Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_AddMultipleMagazines_Statics
	{
		struct FPSRangedWeapon_eventAddMultipleMagazines_Parms
		{
			int32 Ammo;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ammo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_AddMultipleMagazines_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventAddMultipleMagazines_Parms, Ammo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_AddMultipleMagazines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_AddMultipleMagazines_Statics::NewProp_Ammo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_AddMultipleMagazines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_AddMultipleMagazines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "AddMultipleMagazines", nullptr, nullptr, sizeof(FPSRangedWeapon_eventAddMultipleMagazines_Parms), Z_Construct_UFunction_AFPSRangedWeapon_AddMultipleMagazines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_AddMultipleMagazines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_AddMultipleMagazines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_AddMultipleMagazines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_AddMultipleMagazines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_AddMultipleMagazines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_CanAim_Statics
	{
		struct FPSRangedWeapon_eventCanAim_Parms
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
	void Z_Construct_UFunction_AFPSRangedWeapon_CanAim_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventCanAim_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_CanAim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventCanAim_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_CanAim_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_CanAim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_CanAim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_CanAim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_CanAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "CanAim", nullptr, nullptr, sizeof(FPSRangedWeapon_eventCanAim_Parms), Z_Construct_UFunction_AFPSRangedWeapon_CanAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_CanAim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_CanAim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_CanAim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_CanAim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_CanAim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_CanCancelReload_Statics
	{
		struct FPSRangedWeapon_eventCanCancelReload_Parms
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
	void Z_Construct_UFunction_AFPSRangedWeapon_CanCancelReload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventCanCancelReload_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_CanCancelReload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventCanCancelReload_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_CanCancelReload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_CanCancelReload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_CanCancelReload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_CanCancelReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_CanCancelReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "CanCancelReload", nullptr, nullptr, sizeof(FPSRangedWeapon_eventCanCancelReload_Parms), Z_Construct_UFunction_AFPSRangedWeapon_CanCancelReload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_CanCancelReload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_CanCancelReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_CanCancelReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_CanCancelReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_CanCancelReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_CanChangeFiremode_Statics
	{
		struct FPSRangedWeapon_eventCanChangeFiremode_Parms
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
	void Z_Construct_UFunction_AFPSRangedWeapon_CanChangeFiremode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventCanChangeFiremode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_CanChangeFiremode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventCanChangeFiremode_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_CanChangeFiremode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_CanChangeFiremode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_CanChangeFiremode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_CanChangeFiremode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_CanChangeFiremode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "CanChangeFiremode", nullptr, nullptr, sizeof(FPSRangedWeapon_eventCanChangeFiremode_Parms), Z_Construct_UFunction_AFPSRangedWeapon_CanChangeFiremode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_CanChangeFiremode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_CanChangeFiremode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_CanChangeFiremode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_CanChangeFiremode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_CanChangeFiremode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_CanInspect_Statics
	{
		struct FPSRangedWeapon_eventCanInspect_Parms
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
	void Z_Construct_UFunction_AFPSRangedWeapon_CanInspect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventCanInspect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_CanInspect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventCanInspect_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_CanInspect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_CanInspect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_CanInspect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_CanInspect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_CanInspect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "CanInspect", nullptr, nullptr, sizeof(FPSRangedWeapon_eventCanInspect_Parms), Z_Construct_UFunction_AFPSRangedWeapon_CanInspect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_CanInspect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_CanInspect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_CanInspect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_CanInspect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_CanInspect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_CanReload_Statics
	{
		struct FPSRangedWeapon_eventCanReload_Parms
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
	void Z_Construct_UFunction_AFPSRangedWeapon_CanReload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventCanReload_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_CanReload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventCanReload_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_CanReload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_CanReload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_CanReload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_CanReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_CanReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "CanReload", nullptr, nullptr, sizeof(FPSRangedWeapon_eventCanReload_Parms), Z_Construct_UFunction_AFPSRangedWeapon_CanReload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_CanReload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_CanReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_CanReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_CanReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_CanReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileAiming_Statics
	{
		struct FPSRangedWeapon_eventCanReloadWhileAiming_Parms
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
	void Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventCanReloadWhileAiming_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventCanReloadWhileAiming_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileAiming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileAiming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "CanReloadWhileAiming", nullptr, nullptr, sizeof(FPSRangedWeapon_eventCanReloadWhileAiming_Parms), Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileSprinting_Statics
	{
		struct FPSRangedWeapon_eventCanReloadWhileSprinting_Parms
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
	void Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventCanReloadWhileSprinting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventCanReloadWhileSprinting_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileSprinting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileSprinting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileSprinting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "CanReloadWhileSprinting", nullptr, nullptr, sizeof(FPSRangedWeapon_eventCanReloadWhileSprinting_Parms), Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_CycleMagazines_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_CycleMagazines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_CycleMagazines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "CycleMagazines", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_CycleMagazines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_CycleMagazines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_CycleMagazines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_CycleMagazines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_DropMagazine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_DropMagazine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_DropMagazine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "DropMagazine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_DropMagazine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_DropMagazine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_DropMagazine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_DropMagazine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_FindAttachmentAtSlot_Statics
	{
		struct FPSRangedWeapon_eventFindAttachmentAtSlot_Parms
		{
			int32 Index;
			FAttachmentSlotData AttachmentSlotData;
			bool bFound;
			AFPSAttachment* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachmentSlotData;
		static void NewProp_bFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFound;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_FindAttachmentAtSlot_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventFindAttachmentAtSlot_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_FindAttachmentAtSlot_Statics::NewProp_AttachmentSlotData = { "AttachmentSlotData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventFindAttachmentAtSlot_Parms, AttachmentSlotData), Z_Construct_UScriptStruct_FAttachmentSlotData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSRangedWeapon_FindAttachmentAtSlot_Statics::NewProp_bFound_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventFindAttachmentAtSlot_Parms*)Obj)->bFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_FindAttachmentAtSlot_Statics::NewProp_bFound = { "bFound", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventFindAttachmentAtSlot_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_FindAttachmentAtSlot_Statics::NewProp_bFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_FindAttachmentAtSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventFindAttachmentAtSlot_Parms, ReturnValue), Z_Construct_UClass_AFPSAttachment_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_FindAttachmentAtSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_FindAttachmentAtSlot_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_FindAttachmentAtSlot_Statics::NewProp_AttachmentSlotData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_FindAttachmentAtSlot_Statics::NewProp_bFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_FindAttachmentAtSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_FindAttachmentAtSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_FindAttachmentAtSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "FindAttachmentAtSlot", nullptr, nullptr, sizeof(FPSRangedWeapon_eventFindAttachmentAtSlot_Parms), Z_Construct_UFunction_AFPSRangedWeapon_FindAttachmentAtSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_FindAttachmentAtSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_FindAttachmentAtSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_FindAttachmentAtSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_FindAttachmentAtSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_FindAttachmentAtSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetADSAlignmentSpeedMultiplier_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetADSAlignmentSpeedMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetADSAlignmentSpeedMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetADSAlignmentSpeedMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetADSAlignmentSpeedMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetADSAlignmentSpeedMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetADSAlignmentSpeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetADSAlignmentSpeedMultiplier", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetADSAlignmentSpeedMultiplier_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetADSAlignmentSpeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetADSAlignmentSpeedMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetADSAlignmentSpeedMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetADSAlignmentSpeedMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetADSAlignmentSpeedMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetADSAlignmentSpeedMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetADSSpeedMultiplier_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetADSSpeedMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetADSSpeedMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetADSSpeedMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetADSSpeedMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetADSSpeedMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetADSSpeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetADSSpeedMultiplier", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetADSSpeedMultiplier_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetADSSpeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetADSSpeedMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetADSSpeedMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetADSSpeedMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetADSSpeedMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetADSSpeedMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetAttachmentData_Statics
	{
		struct FPSRangedWeapon_eventGetAttachmentData_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetAttachmentData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetAttachmentData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetAttachmentData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetAttachmentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetAttachmentData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetAttachmentData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetAttachmentData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetAttachmentData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetAttachmentData", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetAttachmentData_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetAttachmentData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetAttachmentData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetAttachmentData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetAttachmentData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetAttachmentData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetAttachmentData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation_Statics
	{
		static void NewProp_bTransformToMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransformToMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static void NewProp_bIncludeAttachment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeAttachment;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation_Statics::NewProp_bTransformToMesh_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventGetBarrelLocation_Parms*)Obj)->bTransformToMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation_Statics::NewProp_bTransformToMesh = { "bTransformToMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventGetBarrelLocation_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation_Statics::NewProp_bTransformToMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetBarrelLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation_Statics::NewProp_bIncludeAttachment_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventGetBarrelLocation_Parms*)Obj)->bIncludeAttachment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation_Statics::NewProp_bIncludeAttachment = { "bIncludeAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventGetBarrelLocation_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation_Statics::NewProp_bIncludeAttachment_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetBarrelLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation_Statics::NewProp_bTransformToMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation_Statics::NewProp_bIncludeAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetBarrelLocation", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetBarrelLocation_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetBulletsInNextMag_Statics
	{
		struct FPSRangedWeapon_eventGetBulletsInNextMag_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetBulletsInNextMag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetBulletsInNextMag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetBulletsInNextMag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetBulletsInNextMag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetBulletsInNextMag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetBulletsInNextMag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetBulletsInNextMag", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetBulletsInNextMag_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetBulletsInNextMag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetBulletsInNextMag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetBulletsInNextMag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetBulletsInNextMag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetBulletsInNextMag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetBulletsInNextMag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetCasingEjectionLocation_Statics
	{
		static void NewProp_bTransformToMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransformToMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSRangedWeapon_GetCasingEjectionLocation_Statics::NewProp_bTransformToMesh_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventGetCasingEjectionLocation_Parms*)Obj)->bTransformToMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetCasingEjectionLocation_Statics::NewProp_bTransformToMesh = { "bTransformToMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventGetCasingEjectionLocation_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_GetCasingEjectionLocation_Statics::NewProp_bTransformToMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetCasingEjectionLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetCasingEjectionLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetCasingEjectionLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetCasingEjectionLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetCasingEjectionLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetCasingEjectionLocation_Statics::NewProp_bTransformToMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetCasingEjectionLocation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetCasingEjectionLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetCasingEjectionLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetCasingEjectionLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetCasingEjectionLocation", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetCasingEjectionLocation_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetCasingEjectionLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetCasingEjectionLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetCasingEjectionLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetCasingEjectionLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetCasingEjectionLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetCasingEjectionLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentAmmo_Statics
	{
		struct FPSRangedWeapon_eventGetCurrentAmmo_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetCurrentAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetCurrentAmmo", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetCurrentAmmo_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentBarrel_Statics
	{
		struct FPSRangedWeapon_eventGetCurrentBarrel_Parms
		{
			AFPSBarrel* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentBarrel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetCurrentBarrel_Parms, ReturnValue), Z_Construct_UClass_AFPSBarrel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentBarrel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentBarrel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentBarrel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentBarrel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetCurrentBarrel", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetCurrentBarrel_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentBarrel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentBarrel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentBarrel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentBarrel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentBarrel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentBarrel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentFireMode_Statics
	{
		struct FPSRangedWeapon_eventGetCurrentFireMode_Parms
		{
			EFireMode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentFireMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentFireMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetCurrentFireMode_Parms, ReturnValue), Z_Construct_UEnum_FPSController_EFireMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentFireMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentFireMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentFireMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentFireMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentFireMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetCurrentFireMode", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetCurrentFireMode_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentFireMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentFireMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentFireMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentFireMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentFireMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentFireMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentGrip_Statics
	{
		struct FPSRangedWeapon_eventGetCurrentGrip_Parms
		{
			AFPSGrip* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentGrip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetCurrentGrip_Parms, ReturnValue), Z_Construct_UClass_AFPSGrip_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentGrip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentGrip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetCurrentGrip", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetCurrentGrip_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentSight_Statics
	{
		struct FPSRangedWeapon_eventGetCurrentSight_Parms
		{
			AFPSSight* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentSight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetCurrentSight_Parms, ReturnValue), Z_Construct_UClass_AFPSSight_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentSight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentSight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentSight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetCurrentSight", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetCurrentSight_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentSight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentSight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentSight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetIdleMultiplier_Statics
	{
		struct FPSRangedWeapon_eventGetIdleMultiplier_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetIdleMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetIdleMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetIdleMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetIdleMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetIdleMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetIdleMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetIdleMultiplier", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetIdleMultiplier_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetIdleMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetIdleMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetIdleMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetIdleMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetIdleMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetIdleMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetIronSight_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetIronSight_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetIronSight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetIronSight_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetIronSight_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetIronSight_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetIronSight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetIronSight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetIronSight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetIronSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetIronSight", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetIronSight_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetIronSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetIronSight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetIronSight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetIronSight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetIronSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetIronSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetKickMultiplier_Statics
	{
		struct FPSRangedWeapon_eventGetKickMultiplier_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetKickMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetKickMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetKickMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetKickMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetKickMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetKickMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetKickMultiplier", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetKickMultiplier_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetKickMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetKickMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetKickMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetKickMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetKickMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetKickMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetLoudness_Statics
	{
		struct FPSRangedWeapon_eventGetLoudness_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetLoudness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetLoudness_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetLoudness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetLoudness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetLoudness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetLoudness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetLoudness", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetLoudness_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetLoudness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetLoudness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetLoudness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetLoudness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetLoudness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetLoudness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveAmmo_Statics
	{
		struct FPSRangedWeapon_eventGetMaxReserveAmmo_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetMaxReserveAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetMaxReserveAmmo", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetMaxReserveAmmo_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveMagazines_Statics
	{
		struct FPSRangedWeapon_eventGetMaxReserveMagazines_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveMagazines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetMaxReserveMagazines_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveMagazines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveMagazines_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveMagazines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveMagazines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetMaxReserveMagazines", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetMaxReserveMagazines_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveMagazines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveMagazines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveMagazines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveMagazines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveMagazines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveMagazines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetNextMagIndex_Statics
	{
		struct FPSRangedWeapon_eventGetNextMagIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetNextMagIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetNextMagIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetNextMagIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetNextMagIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetNextMagIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetNextMagIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetNextMagIndex", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetNextMagIndex_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetNextMagIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetNextMagIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetNextMagIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetNextMagIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetNextMagIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetNextMagIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetRangedWeaponData_Statics
	{
		struct FPSRangedWeapon_eventGetRangedWeaponData_Parms
		{
			UFPSRangedWeaponData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetRangedWeaponData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetRangedWeaponData_Parms, ReturnValue), Z_Construct_UClass_UFPSRangedWeaponData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetRangedWeaponData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetRangedWeaponData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetRangedWeaponData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetRangedWeaponData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetRangedWeaponData", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetRangedWeaponData_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetRangedWeaponData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetRangedWeaponData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetRangedWeaponData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetRangedWeaponData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetRangedWeaponData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetRangedWeaponData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetRecoil_Statics
	{
		struct FPSRangedWeapon_eventGetRecoil_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetRecoil_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetRecoil_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetRecoil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetRecoil_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetRecoil_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetRecoil", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetRecoil_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetRecoil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetRecoil_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetRecoil_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetRecoil_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetRecoil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetRecoil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilAnimationMultiplier_Statics
	{
		struct FPSRangedWeapon_eventGetRecoilAnimationMultiplier_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilAnimationMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetRecoilAnimationMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilAnimationMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilAnimationMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilAnimationMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilAnimationMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetRecoilAnimationMultiplier", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetRecoilAnimationMultiplier_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilAnimationMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilAnimationMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilAnimationMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilAnimationMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilAnimationMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilAnimationMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilMultiplier_Statics
	{
		struct FPSRangedWeapon_eventGetRecoilMultiplier_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetRecoilMultiplier_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetRecoilMultiplier", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetRecoilMultiplier_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetReloadType_Statics
	{
		struct FPSRangedWeapon_eventGetReloadType_Parms
		{
			EReloadType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetReloadType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetReloadType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetReloadType_Parms, ReturnValue), Z_Construct_UEnum_FPSController_EReloadType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetReloadType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetReloadType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetReloadType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetReloadType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetReloadType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetReloadType", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetReloadType_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetReloadType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetReloadType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetReloadType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetReloadType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetReloadType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetReloadType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetReserveAmmo_Statics
	{
		struct FPSRangedWeapon_eventGetReserveAmmo_Parms
		{
			bool bIncludeCurrentMag;
			int32 ReturnValue;
		};
		static void NewProp_bIncludeCurrentMag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeCurrentMag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSRangedWeapon_GetReserveAmmo_Statics::NewProp_bIncludeCurrentMag_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventGetReserveAmmo_Parms*)Obj)->bIncludeCurrentMag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetReserveAmmo_Statics::NewProp_bIncludeCurrentMag = { "bIncludeCurrentMag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventGetReserveAmmo_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_GetReserveAmmo_Statics::NewProp_bIncludeCurrentMag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetReserveAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetReserveAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetReserveAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetReserveAmmo_Statics::NewProp_bIncludeCurrentMag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetReserveAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetReserveAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetReserveAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetReserveAmmo", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetReserveAmmo_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetReserveAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetReserveAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetReserveAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetReserveAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetReserveAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetReserveAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetReserveMagazines_Statics
	{
		struct FPSRangedWeapon_eventGetReserveMagazines_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetReserveMagazines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetReserveMagazines_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetReserveMagazines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetReserveMagazines_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetReserveMagazines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetReserveMagazines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetReserveMagazines", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetReserveMagazines_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetReserveMagazines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetReserveMagazines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetReserveMagazines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetReserveMagazines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetReserveMagazines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetReserveMagazines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetSightComponent_Statics
	{
		struct FPSRangedWeapon_eventGetSightComponent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetSightComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetSightComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetSightComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetSightComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetSightComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetSightComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetSightComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetSightComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetSightComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetSightComponent", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetSightComponent_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetSightComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetSightComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetSightComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetSightComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetSightComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetSightComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetSightDirection_Statics
	{
		struct FPSRangedWeapon_eventGetSightDirection_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetSightDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetSightDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetSightDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetSightDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetSightDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetSightDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetSightDirection", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetSightDirection_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetSightDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetSightDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetSightDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetSightDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetSightDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetSightDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetSightDistance_Statics
	{
		struct FPSRangedWeapon_eventGetSightDistance_Parms
		{
			FTransform HeadTransform;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadTransform;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetSightDistance_Statics::NewProp_HeadTransform = { "HeadTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetSightDistance_Parms, HeadTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetSightDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetSightDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetSightDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetSightDistance_Statics::NewProp_HeadTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetSightDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetSightDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetSightDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetSightDistance", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetSightDistance_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetSightDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetSightDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetSightDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetSightDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetSightDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetSightDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetSightPosition_Statics
	{
		struct FPSRangedWeapon_eventGetSightPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetSightPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventGetSightPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetSightPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetSightPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetSightPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetSightPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetSightPosition", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetSightPosition_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetSightPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetSightPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetSightPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetSightPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetSightPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetSightPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_GetUsingAlternateGripPose_Statics
	{
		struct FPSRangedWeapon_eventGetUsingAlternateGripPose_Parms
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
	void Z_Construct_UFunction_AFPSRangedWeapon_GetUsingAlternateGripPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventGetUsingAlternateGripPose_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_GetUsingAlternateGripPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventGetUsingAlternateGripPose_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_GetUsingAlternateGripPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_GetUsingAlternateGripPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_GetUsingAlternateGripPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_GetUsingAlternateGripPose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_GetUsingAlternateGripPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "GetUsingAlternateGripPose", nullptr, nullptr, sizeof(FPSRangedWeapon_eventGetUsingAlternateGripPose_Parms), Z_Construct_UFunction_AFPSRangedWeapon_GetUsingAlternateGripPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetUsingAlternateGripPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_GetUsingAlternateGripPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_GetUsingAlternateGripPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_GetUsingAlternateGripPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_GetUsingAlternateGripPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_HasAmmo_Statics
	{
		struct FPSRangedWeapon_eventHasAmmo_Parms
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
	void Z_Construct_UFunction_AFPSRangedWeapon_HasAmmo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventHasAmmo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_HasAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventHasAmmo_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_HasAmmo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_HasAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_HasAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_HasAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_HasAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "HasAmmo", nullptr, nullptr, sizeof(FPSRangedWeapon_eventHasAmmo_Parms), Z_Construct_UFunction_AFPSRangedWeapon_HasAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_HasAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_HasAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_HasAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_HasAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_HasAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_HasAttachment_Statics
	{
		struct FPSRangedWeapon_eventHasAttachment_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_HasAttachment_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventHasAttachment_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSRangedWeapon_HasAttachment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventHasAttachment_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_HasAttachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventHasAttachment_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_HasAttachment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_HasAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_HasAttachment_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_HasAttachment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_HasAttachment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_HasAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "HasAttachment", nullptr, nullptr, sizeof(FPSRangedWeapon_eventHasAttachment_Parms), Z_Construct_UFunction_AFPSRangedWeapon_HasAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_HasAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_HasAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_HasAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_HasAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_HasAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_HasFullAmmo_Statics
	{
		struct FPSRangedWeapon_eventHasFullAmmo_Parms
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
	void Z_Construct_UFunction_AFPSRangedWeapon_HasFullAmmo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventHasFullAmmo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_HasFullAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventHasFullAmmo_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_HasFullAmmo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_HasFullAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_HasFullAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_HasFullAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_HasFullAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "HasFullAmmo", nullptr, nullptr, sizeof(FPSRangedWeapon_eventHasFullAmmo_Parms), Z_Construct_UFunction_AFPSRangedWeapon_HasFullAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_HasFullAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_HasFullAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_HasFullAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_HasFullAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_HasFullAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_HasGrip_Statics
	{
		struct FPSRangedWeapon_eventHasGrip_Parms
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
	void Z_Construct_UFunction_AFPSRangedWeapon_HasGrip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventHasGrip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_HasGrip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventHasGrip_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_HasGrip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_HasGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_HasGrip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_HasGrip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_HasGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "HasGrip", nullptr, nullptr, sizeof(FPSRangedWeapon_eventHasGrip_Parms), Z_Construct_UFunction_AFPSRangedWeapon_HasGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_HasGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_HasGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_HasGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_HasGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_HasGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_HasSight_Statics
	{
		struct FPSRangedWeapon_eventHasSight_Parms
		{
			bool bAllowCanted;
			bool ReturnValue;
		};
		static void NewProp_bAllowCanted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowCanted;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSRangedWeapon_HasSight_Statics::NewProp_bAllowCanted_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventHasSight_Parms*)Obj)->bAllowCanted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_HasSight_Statics::NewProp_bAllowCanted = { "bAllowCanted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventHasSight_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_HasSight_Statics::NewProp_bAllowCanted_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSRangedWeapon_HasSight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventHasSight_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_HasSight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventHasSight_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_HasSight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_HasSight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_HasSight_Statics::NewProp_bAllowCanted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_HasSight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_HasSight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_HasSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "HasSight", nullptr, nullptr, sizeof(FPSRangedWeapon_eventHasSight_Parms), Z_Construct_UFunction_AFPSRangedWeapon_HasSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_HasSight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_HasSight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_HasSight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_HasSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_HasSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_IsAiming_Statics
	{
		struct FPSRangedWeapon_eventIsAiming_Parms
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
	void Z_Construct_UFunction_AFPSRangedWeapon_IsAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventIsAiming_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_IsAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventIsAiming_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_IsAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_IsAiming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_IsAiming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_IsAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_IsAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "IsAiming", nullptr, nullptr, sizeof(FPSRangedWeapon_eventIsAiming_Parms), Z_Construct_UFunction_AFPSRangedWeapon_IsAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_IsAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_IsAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_IsAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_IsAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_IsAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_IsCompensated_Statics
	{
		struct FPSRangedWeapon_eventIsCompensated_Parms
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
	void Z_Construct_UFunction_AFPSRangedWeapon_IsCompensated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventIsCompensated_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_IsCompensated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventIsCompensated_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_IsCompensated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_IsCompensated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_IsCompensated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_IsCompensated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_IsCompensated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "IsCompensated", nullptr, nullptr, sizeof(FPSRangedWeapon_eventIsCompensated_Parms), Z_Construct_UFunction_AFPSRangedWeapon_IsCompensated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_IsCompensated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_IsCompensated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_IsCompensated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_IsCompensated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_IsCompensated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_IsLoaded_Statics
	{
		struct FPSRangedWeapon_eventIsLoaded_Parms
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
	void Z_Construct_UFunction_AFPSRangedWeapon_IsLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventIsLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_IsLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventIsLoaded_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_IsLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_IsLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_IsLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_IsLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_IsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "IsLoaded", nullptr, nullptr, sizeof(FPSRangedWeapon_eventIsLoaded_Parms), Z_Construct_UFunction_AFPSRangedWeapon_IsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_IsLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_IsLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_IsLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_IsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_IsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_IsReloading_Statics
	{
		struct FPSRangedWeapon_eventIsReloading_Parms
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
	void Z_Construct_UFunction_AFPSRangedWeapon_IsReloading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventIsReloading_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_IsReloading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventIsReloading_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_IsReloading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_IsReloading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_IsReloading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_IsReloading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_IsReloading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "IsReloading", nullptr, nullptr, sizeof(FPSRangedWeapon_eventIsReloading_Parms), Z_Construct_UFunction_AFPSRangedWeapon_IsReloading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_IsReloading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_IsReloading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_IsReloading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_IsReloading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_IsReloading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_IsSlotGrip_Statics
	{
		struct FPSRangedWeapon_eventIsSlotGrip_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_IsSlotGrip_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventIsSlotGrip_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSRangedWeapon_IsSlotGrip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventIsSlotGrip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_IsSlotGrip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventIsSlotGrip_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_IsSlotGrip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_IsSlotGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_IsSlotGrip_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_IsSlotGrip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_IsSlotGrip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_IsSlotGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "IsSlotGrip", nullptr, nullptr, sizeof(FPSRangedWeapon_eventIsSlotGrip_Parms), Z_Construct_UFunction_AFPSRangedWeapon_IsSlotGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_IsSlotGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_IsSlotGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_IsSlotGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_IsSlotGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_IsSlotGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_IsSlotSight_Statics
	{
		struct FPSRangedWeapon_eventIsSlotSight_Parms
		{
			int32 Index;
			bool bIsCanted;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_bIsCanted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCanted;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_IsSlotSight_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventIsSlotSight_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSRangedWeapon_IsSlotSight_Statics::NewProp_bIsCanted_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventIsSlotSight_Parms*)Obj)->bIsCanted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_IsSlotSight_Statics::NewProp_bIsCanted = { "bIsCanted", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventIsSlotSight_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_IsSlotSight_Statics::NewProp_bIsCanted_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSRangedWeapon_IsSlotSight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventIsSlotSight_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_IsSlotSight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventIsSlotSight_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_IsSlotSight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_IsSlotSight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_IsSlotSight_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_IsSlotSight_Statics::NewProp_bIsCanted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_IsSlotSight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_IsSlotSight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_IsSlotSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "IsSlotSight", nullptr, nullptr, sizeof(FPSRangedWeapon_eventIsSlotSight_Parms), Z_Construct_UFunction_AFPSRangedWeapon_IsSlotSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_IsSlotSight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_IsSlotSight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_IsSlotSight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_IsSlotSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_IsSlotSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_IsSuppressed_Statics
	{
		struct FPSRangedWeapon_eventIsSuppressed_Parms
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
	void Z_Construct_UFunction_AFPSRangedWeapon_IsSuppressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventIsSuppressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_IsSuppressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventIsSuppressed_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_IsSuppressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_IsSuppressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_IsSuppressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_IsSuppressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_IsSuppressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "IsSuppressed", nullptr, nullptr, sizeof(FPSRangedWeapon_eventIsSuppressed_Parms), Z_Construct_UFunction_AFPSRangedWeapon_IsSuppressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_IsSuppressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_IsSuppressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_IsSuppressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_IsSuppressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_IsSuppressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_LoadRound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_LoadRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_LoadRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "LoadRound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_LoadRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_LoadRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_LoadRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_LoadRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics
	{
		struct FPSRangedWeapon_eventOnCascadeParticleCollide_Parms
		{
			FName EventName;
			float EmitterTime;
			int32 ParticleTime;
			FVector Location;
			FVector Velocity;
			FVector Direction;
			FVector Normal;
			FName BoneName;
			UPhysicalMaterial* PhysMat;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmitterTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParticleTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventOnCascadeParticleCollide_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::NewProp_EmitterTime = { "EmitterTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventOnCascadeParticleCollide_Parms, EmitterTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::NewProp_ParticleTime = { "ParticleTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventOnCascadeParticleCollide_Parms, ParticleTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventOnCascadeParticleCollide_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventOnCascadeParticleCollide_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventOnCascadeParticleCollide_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventOnCascadeParticleCollide_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventOnCascadeParticleCollide_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::NewProp_PhysMat = { "PhysMat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventOnCascadeParticleCollide_Parms, PhysMat), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::NewProp_EmitterTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::NewProp_ParticleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::NewProp_PhysMat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "OnCascadeParticleCollide", nullptr, nullptr, sizeof(FPSRangedWeapon_eventOnCascadeParticleCollide_Parms), Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_OnParticleCollide_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Surface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_OnParticleCollide_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventOnParticleCollide_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_OnParticleCollide_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventOnParticleCollide_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSRangedWeapon_OnParticleCollide_Statics::NewProp_Surface = { "Surface", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventOnParticleCollide_Parms, Surface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_OnParticleCollide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_OnParticleCollide_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_OnParticleCollide_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_OnParticleCollide_Statics::NewProp_Surface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_OnParticleCollide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_OnParticleCollide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "OnParticleCollide", nullptr, nullptr, sizeof(FPSRangedWeapon_eventOnParticleCollide_Parms), Z_Construct_UFunction_AFPSRangedWeapon_OnParticleCollide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_OnParticleCollide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_OnParticleCollide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_OnParticleCollide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_OnParticleCollide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_OnParticleCollide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_OnRep_Attachments_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_OnRep_Attachments_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_OnRep_Attachments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "OnRep_Attachments", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_Attachments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_Attachments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_OnRep_Attachments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_OnRep_Attachments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsAiming_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "OnRep_bIsAiming", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsFiring_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsFiring_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "OnRep_bIsFiring", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsFiring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsFiring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsInspecting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsInspecting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsInspecting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "OnRep_bIsInspecting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsInspecting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsInspecting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsInspecting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsInspecting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "OnRep_bIsLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsPreFiring_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsPreFiring_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsPreFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "OnRep_bIsPreFiring", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsPreFiring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsPreFiring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsPreFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsPreFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsUsingAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsUsingAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsUsingAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "OnRep_bIsUsingAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsUsingAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsUsingAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsUsingAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsUsingAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_OnRep_BurstCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_OnRep_BurstCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_OnRep_BurstCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "OnRep_BurstCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_BurstCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_BurstCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_OnRep_BurstCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_OnRep_BurstCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentAmmo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "OnRep_CurrentAmmo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentBarrel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentBarrel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentBarrel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "OnRep_CurrentBarrel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentBarrel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentBarrel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentBarrel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentBarrel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentFireMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentFireMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentFireMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "OnRep_CurrentFireMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentFireMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentFireMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentFireMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentFireMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentGrip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "OnRep_CurrentGrip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentSight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentSight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "OnRep_CurrentSight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentSight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentSight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_OnRep_LastProjectiles_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_OnRep_LastProjectiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_OnRep_LastProjectiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "OnRep_LastProjectiles", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_LastProjectiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_LastProjectiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_OnRep_LastProjectiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_OnRep_LastProjectiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_OnRep_Magazines_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_OnRep_Magazines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_OnRep_Magazines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "OnRep_Magazines", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_Magazines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_Magazines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_OnRep_Magazines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_OnRep_Magazines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_OnRep_ReloadData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_OnRep_ReloadData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_OnRep_ReloadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "OnRep_ReloadData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_ReloadData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_OnRep_ReloadData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_OnRep_ReloadData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_OnRep_ReloadData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_SendMagazines_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_SendMagazines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_SendMagazines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "SendMagazines", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_SendMagazines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SendMagazines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_SendMagazines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_SendMagazines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_SerializeAttachments_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_SerializeAttachments_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_SerializeAttachments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "SerializeAttachments", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_SerializeAttachments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SerializeAttachments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_SerializeAttachments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_SerializeAttachments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentBarrel_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Barrel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentBarrel_Statics::NewProp_Barrel = { "Barrel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventServerSetCurrentBarrel_Parms, Barrel), Z_Construct_UClass_AFPSBarrel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentBarrel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentBarrel_Statics::NewProp_Barrel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentBarrel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentBarrel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "ServerSetCurrentBarrel", nullptr, nullptr, sizeof(FPSRangedWeapon_eventServerSetCurrentBarrel_Parms), Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentBarrel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentBarrel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentBarrel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentBarrel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentBarrel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentBarrel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentGrip_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentGrip_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventServerSetCurrentGrip_Parms, Grip), Z_Construct_UClass_AFPSGrip_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentGrip_Statics::NewProp_Grip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentGrip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "ServerSetCurrentGrip", nullptr, nullptr, sizeof(FPSRangedWeapon_eventServerSetCurrentGrip_Parms), Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentSight_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentSight_Statics::NewProp_Sight = { "Sight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventServerSetCurrentSight_Parms, Sight), Z_Construct_UClass_AFPSSight_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentSight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentSight_Statics::NewProp_Sight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentSight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "ServerSetCurrentSight", nullptr, nullptr, sizeof(FPSRangedWeapon_eventServerSetCurrentSight_Parms), Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentSight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentSight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentSight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_ServerSetIsFiring_Statics
	{
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSRangedWeapon_ServerSetIsFiring_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventServerSetIsFiring_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_ServerSetIsFiring_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventServerSetIsFiring_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_ServerSetIsFiring_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_ServerSetIsFiring_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_ServerSetIsFiring_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_ServerSetIsFiring_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_ServerSetIsFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "ServerSetIsFiring", nullptr, nullptr, sizeof(FPSRangedWeapon_eventServerSetIsFiring_Parms), Z_Construct_UFunction_AFPSRangedWeapon_ServerSetIsFiring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_ServerSetIsFiring_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_ServerSetIsFiring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_ServerSetIsFiring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_ServerSetIsFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_ServerSetIsFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_SetAttachments_Statics
	{
		struct FPSRangedWeapon_eventSetAttachments_Parms
		{
			TArray<AFPSAttachment*> NewValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_SetAttachments_Statics::NewProp_NewValue_Inner = { "NewValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFPSAttachment_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_SetAttachments_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventSetAttachments_Parms, NewValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_SetAttachments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_SetAttachments_Statics::NewProp_NewValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_SetAttachments_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_SetAttachments_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_SetAttachments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "SetAttachments", nullptr, nullptr, sizeof(FPSRangedWeapon_eventSetAttachments_Parms), Z_Construct_UFunction_AFPSRangedWeapon_SetAttachments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetAttachments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_SetAttachments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetAttachments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_SetAttachments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_SetAttachments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_SetBurstCount_Statics
	{
		struct FPSRangedWeapon_eventSetBurstCount_Parms
		{
			int32 NewValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_SetBurstCount_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventSetBurstCount_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_SetBurstCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_SetBurstCount_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_SetBurstCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_SetBurstCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "SetBurstCount", nullptr, nullptr, sizeof(FPSRangedWeapon_eventSetBurstCount_Parms), Z_Construct_UFunction_AFPSRangedWeapon_SetBurstCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetBurstCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_SetBurstCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetBurstCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_SetBurstCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_SetBurstCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentAmmo_Statics
	{
		struct FPSRangedWeapon_eventSetCurrentAmmo_Parms
		{
			int32 NewValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentAmmo_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventSetCurrentAmmo_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentAmmo_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "SetCurrentAmmo", nullptr, nullptr, sizeof(FPSRangedWeapon_eventSetCurrentAmmo_Parms), Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentBarrel_Statics
	{
		struct FPSRangedWeapon_eventSetCurrentBarrel_Parms
		{
			AFPSBarrel* Barrel;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Barrel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentBarrel_Statics::NewProp_Barrel = { "Barrel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventSetCurrentBarrel_Parms, Barrel), Z_Construct_UClass_AFPSBarrel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentBarrel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentBarrel_Statics::NewProp_Barrel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentBarrel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentBarrel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "SetCurrentBarrel", nullptr, nullptr, sizeof(FPSRangedWeapon_eventSetCurrentBarrel_Parms), Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentBarrel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentBarrel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentBarrel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentBarrel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentBarrel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentBarrel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentFireMode_Statics
	{
		struct FPSRangedWeapon_eventSetCurrentFireMode_Parms
		{
			EFireMode NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentFireMode_Statics::NewProp_NewValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentFireMode_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventSetCurrentFireMode_Parms, NewValue), Z_Construct_UEnum_FPSController_EFireMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentFireMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentFireMode_Statics::NewProp_NewValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentFireMode_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentFireMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentFireMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "SetCurrentFireMode", nullptr, nullptr, sizeof(FPSRangedWeapon_eventSetCurrentFireMode_Parms), Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentFireMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentFireMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentFireMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentFireMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentFireMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentFireMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentGrip_Statics
	{
		struct FPSRangedWeapon_eventSetCurrentGrip_Parms
		{
			AFPSGrip* Grip;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentGrip_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventSetCurrentGrip_Parms, Grip), Z_Construct_UClass_AFPSGrip_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentGrip_Statics::NewProp_Grip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentGrip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "SetCurrentGrip", nullptr, nullptr, sizeof(FPSRangedWeapon_eventSetCurrentGrip_Parms), Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentSight_Statics
	{
		struct FPSRangedWeapon_eventSetCurrentSight_Parms
		{
			AFPSSight* Sight;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentSight_Statics::NewProp_Sight = { "Sight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventSetCurrentSight_Parms, Sight), Z_Construct_UClass_AFPSSight_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentSight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentSight_Statics::NewProp_Sight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentSight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "SetCurrentSight", nullptr, nullptr, sizeof(FPSRangedWeapon_eventSetCurrentSight_Parms), Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentSight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentSight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentSight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_SetIsAiming_Statics
	{
		struct FPSRangedWeapon_eventSetIsAiming_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSRangedWeapon_SetIsAiming_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventSetIsAiming_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_SetIsAiming_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventSetIsAiming_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_SetIsAiming_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_SetIsAiming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_SetIsAiming_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_SetIsAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_SetIsAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "SetIsAiming", nullptr, nullptr, sizeof(FPSRangedWeapon_eventSetIsAiming_Parms), Z_Construct_UFunction_AFPSRangedWeapon_SetIsAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetIsAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_SetIsAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetIsAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_SetIsAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_SetIsAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_SetIsFiring_Statics
	{
		struct FPSRangedWeapon_eventSetIsFiring_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSRangedWeapon_SetIsFiring_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventSetIsFiring_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_SetIsFiring_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventSetIsFiring_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_SetIsFiring_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_SetIsFiring_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_SetIsFiring_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_SetIsFiring_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_SetIsFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "SetIsFiring", nullptr, nullptr, sizeof(FPSRangedWeapon_eventSetIsFiring_Parms), Z_Construct_UFunction_AFPSRangedWeapon_SetIsFiring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetIsFiring_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_SetIsFiring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetIsFiring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_SetIsFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_SetIsFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_SetIsInspecting_Statics
	{
		struct FPSRangedWeapon_eventSetIsInspecting_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSRangedWeapon_SetIsInspecting_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventSetIsInspecting_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_SetIsInspecting_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventSetIsInspecting_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_SetIsInspecting_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_SetIsInspecting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_SetIsInspecting_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_SetIsInspecting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_SetIsInspecting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "SetIsInspecting", nullptr, nullptr, sizeof(FPSRangedWeapon_eventSetIsInspecting_Parms), Z_Construct_UFunction_AFPSRangedWeapon_SetIsInspecting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetIsInspecting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_SetIsInspecting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetIsInspecting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_SetIsInspecting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_SetIsInspecting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_SetIsLoaded_Statics
	{
		struct FPSRangedWeapon_eventSetIsLoaded_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSRangedWeapon_SetIsLoaded_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventSetIsLoaded_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_SetIsLoaded_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventSetIsLoaded_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_SetIsLoaded_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_SetIsLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_SetIsLoaded_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_SetIsLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_SetIsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "SetIsLoaded", nullptr, nullptr, sizeof(FPSRangedWeapon_eventSetIsLoaded_Parms), Z_Construct_UFunction_AFPSRangedWeapon_SetIsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetIsLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_SetIsLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetIsLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_SetIsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_SetIsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_SetIsPreFiring_Statics
	{
		struct FPSRangedWeapon_eventSetIsPreFiring_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSRangedWeapon_SetIsPreFiring_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventSetIsPreFiring_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_SetIsPreFiring_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventSetIsPreFiring_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_SetIsPreFiring_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_SetIsPreFiring_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_SetIsPreFiring_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_SetIsPreFiring_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_SetIsPreFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "SetIsPreFiring", nullptr, nullptr, sizeof(FPSRangedWeapon_eventSetIsPreFiring_Parms), Z_Construct_UFunction_AFPSRangedWeapon_SetIsPreFiring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetIsPreFiring_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_SetIsPreFiring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetIsPreFiring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_SetIsPreFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_SetIsPreFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_SetIsUsingAction_Statics
	{
		struct FPSRangedWeapon_eventSetIsUsingAction_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSRangedWeapon_SetIsUsingAction_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventSetIsUsingAction_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_SetIsUsingAction_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventSetIsUsingAction_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_SetIsUsingAction_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_SetIsUsingAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_SetIsUsingAction_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_SetIsUsingAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_SetIsUsingAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "SetIsUsingAction", nullptr, nullptr, sizeof(FPSRangedWeapon_eventSetIsUsingAction_Parms), Z_Construct_UFunction_AFPSRangedWeapon_SetIsUsingAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetIsUsingAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_SetIsUsingAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetIsUsingAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_SetIsUsingAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_SetIsUsingAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_SetLastProjectiles_Statics
	{
		struct FPSRangedWeapon_eventSetLastProjectiles_Parms
		{
			TArray<FBallisticProjectileData> InLastProjectiles;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLastProjectiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLastProjectiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InLastProjectiles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_SetLastProjectiles_Statics::NewProp_InLastProjectiles_Inner = { "InLastProjectiles", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBallisticProjectileData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_SetLastProjectiles_Statics::NewProp_InLastProjectiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_SetLastProjectiles_Statics::NewProp_InLastProjectiles = { "InLastProjectiles", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventSetLastProjectiles_Parms, InLastProjectiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_SetLastProjectiles_Statics::NewProp_InLastProjectiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetLastProjectiles_Statics::NewProp_InLastProjectiles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_SetLastProjectiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_SetLastProjectiles_Statics::NewProp_InLastProjectiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_SetLastProjectiles_Statics::NewProp_InLastProjectiles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_SetLastProjectiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_SetLastProjectiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "SetLastProjectiles", nullptr, nullptr, sizeof(FPSRangedWeapon_eventSetLastProjectiles_Parms), Z_Construct_UFunction_AFPSRangedWeapon_SetLastProjectiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetLastProjectiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_SetLastProjectiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetLastProjectiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_SetLastProjectiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_SetLastProjectiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_SetMagazines_Statics
	{
		struct FPSRangedWeapon_eventSetMagazines_Parms
		{
			TArray<int32> NewValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_SetMagazines_Statics::NewProp_NewValue_Inner = { "NewValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_SetMagazines_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventSetMagazines_Parms, NewValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_SetMagazines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_SetMagazines_Statics::NewProp_NewValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_SetMagazines_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_SetMagazines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_SetMagazines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "SetMagazines", nullptr, nullptr, sizeof(FPSRangedWeapon_eventSetMagazines_Parms), Z_Construct_UFunction_AFPSRangedWeapon_SetMagazines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetMagazines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_SetMagazines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetMagazines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_SetMagazines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_SetMagazines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_SetReloadData_Statics
	{
		struct FPSRangedWeapon_eventSetReloadData_Parms
		{
			FReloadData NewValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_SetReloadData_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventSetReloadData_Parms, NewValue), Z_Construct_UScriptStruct_FReloadData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_SetReloadData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_SetReloadData_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_SetReloadData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_SetReloadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "SetReloadData", nullptr, nullptr, sizeof(FPSRangedWeapon_eventSetReloadData_Parms), Z_Construct_UFunction_AFPSRangedWeapon_SetReloadData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetReloadData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_SetReloadData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetReloadData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_SetReloadData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_SetReloadData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_SetUsingAlternateGripPose_Statics
	{
		struct FPSRangedWeapon_eventSetUsingAlternateGripPose_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSRangedWeapon_SetUsingAlternateGripPose_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventSetUsingAlternateGripPose_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_SetUsingAlternateGripPose_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventSetUsingAlternateGripPose_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_SetUsingAlternateGripPose_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_SetUsingAlternateGripPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_SetUsingAlternateGripPose_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_SetUsingAlternateGripPose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_SetUsingAlternateGripPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "SetUsingAlternateGripPose", nullptr, nullptr, sizeof(FPSRangedWeapon_eventSetUsingAlternateGripPose_Parms), Z_Construct_UFunction_AFPSRangedWeapon_SetUsingAlternateGripPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetUsingAlternateGripPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_SetUsingAlternateGripPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SetUsingAlternateGripPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_SetUsingAlternateGripPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_SetUsingAlternateGripPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_SortMagazines_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_SortMagazines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_SortMagazines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "SortMagazines", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_SortMagazines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_SortMagazines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_SortMagazines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_SortMagazines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_StartCasing_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Particle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_StartCasing_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventStartCasing_Parms, Particle), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_StartCasing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_StartCasing_Statics::NewProp_Particle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_StartCasing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_StartCasing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "StartCasing", nullptr, nullptr, sizeof(FPSRangedWeapon_eventStartCasing_Parms), Z_Construct_UFunction_AFPSRangedWeapon_StartCasing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_StartCasing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_StartCasing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_StartCasing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_StartCasing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_StartCasing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_StartFireAudio_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_StartFireAudio_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_StartFireAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventStartFireAudio_Parms, ReturnValue), Z_Construct_UClass_UFMODAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_StartFireAudio_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_StartFireAudio_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_StartFireAudio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_StartFireAudio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_StartFireAudio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_StartFireAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "StartFireAudio", nullptr, nullptr, sizeof(FPSRangedWeapon_eventStartFireAudio_Parms), Z_Construct_UFunction_AFPSRangedWeapon_StartFireAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_StartFireAudio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_StartFireAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_StartFireAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_StartFireAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_StartFireAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleFlash_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Particle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleFlash_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventStartMuzzleFlash_Parms, Particle), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleFlash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleFlash_Statics::NewProp_Particle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleFlash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleFlash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "StartMuzzleFlash", nullptr, nullptr, sizeof(FPSRangedWeapon_eventStartMuzzleFlash_Parms), Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleFlash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleFlash_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleFlash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleFlash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleFlash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleFlash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleSmoke_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Particle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleSmoke_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSRangedWeapon_eventStartMuzzleSmoke_Parms, Particle), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleSmoke_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleSmoke_Statics::NewProp_Particle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleSmoke_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleSmoke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "StartMuzzleSmoke", nullptr, nullptr, sizeof(FPSRangedWeapon_eventStartMuzzleSmoke_Parms), Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleSmoke_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleSmoke_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleSmoke_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleSmoke_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleSmoke()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleSmoke_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_StopFireAudio_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_StopFireAudio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_StopFireAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "StopFireAudio", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_StopFireAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_StopFireAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_StopFireAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_StopFireAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_UseFullAutoAudio_Statics
	{
		struct FPSRangedWeapon_eventUseFullAutoAudio_Parms
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
	void Z_Construct_UFunction_AFPSRangedWeapon_UseFullAutoAudio_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventUseFullAutoAudio_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_UseFullAutoAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventUseFullAutoAudio_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_UseFullAutoAudio_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_UseFullAutoAudio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_UseFullAutoAudio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_UseFullAutoAudio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_UseFullAutoAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "UseFullAutoAudio", nullptr, nullptr, sizeof(FPSRangedWeapon_eventUseFullAutoAudio_Parms), Z_Construct_UFunction_AFPSRangedWeapon_UseFullAutoAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_UseFullAutoAudio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_UseFullAutoAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_UseFullAutoAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_UseFullAutoAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_UseFullAutoAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_UsingManualAction_Statics
	{
		struct FPSRangedWeapon_eventUsingManualAction_Parms
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
	void Z_Construct_UFunction_AFPSRangedWeapon_UsingManualAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventUsingManualAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_UsingManualAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventUsingManualAction_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_UsingManualAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_UsingManualAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_UsingManualAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_UsingManualAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_UsingManualAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "UsingManualAction", nullptr, nullptr, sizeof(FPSRangedWeapon_eventUsingManualAction_Parms), Z_Construct_UFunction_AFPSRangedWeapon_UsingManualAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_UsingManualAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_UsingManualAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_UsingManualAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_UsingManualAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_UsingManualAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSRangedWeapon_WantsDiscardMagazine_Statics
	{
		struct FPSRangedWeapon_eventWantsDiscardMagazine_Parms
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
	void Z_Construct_UFunction_AFPSRangedWeapon_WantsDiscardMagazine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSRangedWeapon_eventWantsDiscardMagazine_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSRangedWeapon_WantsDiscardMagazine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSRangedWeapon_eventWantsDiscardMagazine_Parms), &Z_Construct_UFunction_AFPSRangedWeapon_WantsDiscardMagazine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSRangedWeapon_WantsDiscardMagazine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSRangedWeapon_WantsDiscardMagazine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSRangedWeapon_WantsDiscardMagazine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSRangedWeapon_WantsDiscardMagazine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSRangedWeapon, nullptr, "WantsDiscardMagazine", nullptr, nullptr, sizeof(FPSRangedWeapon_eventWantsDiscardMagazine_Parms), Z_Construct_UFunction_AFPSRangedWeapon_WantsDiscardMagazine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_WantsDiscardMagazine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSRangedWeapon_WantsDiscardMagazine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSRangedWeapon_WantsDiscardMagazine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSRangedWeapon_WantsDiscardMagazine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSRangedWeapon_WantsDiscardMagazine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSRangedWeapon_NoRegister()
	{
		return AFPSRangedWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AFPSRangedWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangedWeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RangedWeaponData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlashComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlashComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleSmokeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleSmokeComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CasingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CasingComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInspecting_MetaData[];
#endif
		static void NewProp_bIsInspecting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInspecting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPreFiring_MetaData[];
#endif
		static void NewProp_bIsPreFiring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPreFiring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFiring_MetaData[];
#endif
		static void NewProp_bIsFiring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFiring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[];
#endif
		static void NewProp_bIsAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLoaded_MetaData[];
#endif
		static void NewProp_bIsLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsingAction_MetaData[];
#endif
		static void NewProp_bIsUsingAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsingAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReloadData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Magazines_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Magazines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Magazines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMagIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentMagIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attachments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attachments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Attachments;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttachmentsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttachmentsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGrip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentGrip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBarrel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentBarrel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentSight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BurstCount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentFireMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFireMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentFireMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsingAlternateGripPose_MetaData[];
#endif
		static void NewProp_bUsingAlternateGripPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingAlternateGripPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsAction_MetaData[];
#endif
		static void NewProp_bWantsAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsAim_MetaData[];
#endif
		static void NewProp_bWantsAim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsAim;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastProjectiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastProjectiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LastProjectiles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sights_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTracerDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTracerDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ControlFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ADSAlignmentSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ADSAlignmentSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ADSSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ADSSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousSight_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_PreviousSight;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Physmats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Physmats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Physmats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSRangedWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFPSWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSRangedWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSRangedWeapon_AddMagazine, "AddMagazine" }, // 2732166179
		{ &Z_Construct_UFunction_AFPSRangedWeapon_AddMagazines, "AddMagazines" }, // 1640538729
		{ &Z_Construct_UFunction_AFPSRangedWeapon_AddMultipleMagazines, "AddMultipleMagazines" }, // 3027958802
		{ &Z_Construct_UFunction_AFPSRangedWeapon_CanAim, "CanAim" }, // 2665130142
		{ &Z_Construct_UFunction_AFPSRangedWeapon_CanCancelReload, "CanCancelReload" }, // 4004695909
		{ &Z_Construct_UFunction_AFPSRangedWeapon_CanChangeFiremode, "CanChangeFiremode" }, // 2686195070
		{ &Z_Construct_UFunction_AFPSRangedWeapon_CanInspect, "CanInspect" }, // 2663192027
		{ &Z_Construct_UFunction_AFPSRangedWeapon_CanReload, "CanReload" }, // 1640648443
		{ &Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileAiming, "CanReloadWhileAiming" }, // 3954897675
		{ &Z_Construct_UFunction_AFPSRangedWeapon_CanReloadWhileSprinting, "CanReloadWhileSprinting" }, // 862470550
		{ &Z_Construct_UFunction_AFPSRangedWeapon_CycleMagazines, "CycleMagazines" }, // 3200468812
		{ &Z_Construct_UFunction_AFPSRangedWeapon_DropMagazine, "DropMagazine" }, // 3274492903
		{ &Z_Construct_UFunction_AFPSRangedWeapon_FindAttachmentAtSlot, "FindAttachmentAtSlot" }, // 2690190334
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetADSAlignmentSpeedMultiplier, "GetADSAlignmentSpeedMultiplier" }, // 3864104400
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetADSSpeedMultiplier, "GetADSSpeedMultiplier" }, // 1585092002
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetAttachmentData, "GetAttachmentData" }, // 3306822577
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetBarrelLocation, "GetBarrelLocation" }, // 3502654889
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetBulletsInNextMag, "GetBulletsInNextMag" }, // 1997637909
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetCasingEjectionLocation, "GetCasingEjectionLocation" }, // 1619719157
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentAmmo, "GetCurrentAmmo" }, // 1828043176
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentBarrel, "GetCurrentBarrel" }, // 2152690195
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentFireMode, "GetCurrentFireMode" }, // 4291924675
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentGrip, "GetCurrentGrip" }, // 3014749673
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetCurrentSight, "GetCurrentSight" }, // 1269716232
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetIdleMultiplier, "GetIdleMultiplier" }, // 141630051
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetIronSight, "GetIronSight" }, // 2735196340
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetKickMultiplier, "GetKickMultiplier" }, // 2774847906
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetLoudness, "GetLoudness" }, // 2409918412
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveAmmo, "GetMaxReserveAmmo" }, // 3170091102
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetMaxReserveMagazines, "GetMaxReserveMagazines" }, // 3169090732
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetNextMagIndex, "GetNextMagIndex" }, // 242645180
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetRangedWeaponData, "GetRangedWeaponData" }, // 2955841514
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetRecoil, "GetRecoil" }, // 3327199099
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilAnimationMultiplier, "GetRecoilAnimationMultiplier" }, // 3680322961
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetRecoilMultiplier, "GetRecoilMultiplier" }, // 1324117880
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetReloadType, "GetReloadType" }, // 3692093597
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetReserveAmmo, "GetReserveAmmo" }, // 1513930387
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetReserveMagazines, "GetReserveMagazines" }, // 3199819291
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetSightComponent, "GetSightComponent" }, // 3634095148
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetSightDirection, "GetSightDirection" }, // 9928935
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetSightDistance, "GetSightDistance" }, // 4221555786
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetSightPosition, "GetSightPosition" }, // 2622792254
		{ &Z_Construct_UFunction_AFPSRangedWeapon_GetUsingAlternateGripPose, "GetUsingAlternateGripPose" }, // 2768033995
		{ &Z_Construct_UFunction_AFPSRangedWeapon_HasAmmo, "HasAmmo" }, // 129321216
		{ &Z_Construct_UFunction_AFPSRangedWeapon_HasAttachment, "HasAttachment" }, // 3151712907
		{ &Z_Construct_UFunction_AFPSRangedWeapon_HasFullAmmo, "HasFullAmmo" }, // 3892410660
		{ &Z_Construct_UFunction_AFPSRangedWeapon_HasGrip, "HasGrip" }, // 3457823288
		{ &Z_Construct_UFunction_AFPSRangedWeapon_HasSight, "HasSight" }, // 2697920618
		{ &Z_Construct_UFunction_AFPSRangedWeapon_IsAiming, "IsAiming" }, // 4117061929
		{ &Z_Construct_UFunction_AFPSRangedWeapon_IsCompensated, "IsCompensated" }, // 2775922221
		{ &Z_Construct_UFunction_AFPSRangedWeapon_IsLoaded, "IsLoaded" }, // 3652736047
		{ &Z_Construct_UFunction_AFPSRangedWeapon_IsReloading, "IsReloading" }, // 3964203240
		{ &Z_Construct_UFunction_AFPSRangedWeapon_IsSlotGrip, "IsSlotGrip" }, // 3938074162
		{ &Z_Construct_UFunction_AFPSRangedWeapon_IsSlotSight, "IsSlotSight" }, // 574336446
		{ &Z_Construct_UFunction_AFPSRangedWeapon_IsSuppressed, "IsSuppressed" }, // 3940344761
		{ &Z_Construct_UFunction_AFPSRangedWeapon_LoadRound, "LoadRound" }, // 3340396245
		{ &Z_Construct_UFunction_AFPSRangedWeapon_OnCascadeParticleCollide, "OnCascadeParticleCollide" }, // 1240259139
		{ &Z_Construct_UFunction_AFPSRangedWeapon_OnParticleCollide, "OnParticleCollide" }, // 945387633
		{ &Z_Construct_UFunction_AFPSRangedWeapon_OnRep_Attachments, "OnRep_Attachments" }, // 3865339588
		{ &Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsAiming, "OnRep_bIsAiming" }, // 3252227006
		{ &Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsFiring, "OnRep_bIsFiring" }, // 751656864
		{ &Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsInspecting, "OnRep_bIsInspecting" }, // 3393213609
		{ &Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsLoaded, "OnRep_bIsLoaded" }, // 3688989331
		{ &Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsPreFiring, "OnRep_bIsPreFiring" }, // 1452073458
		{ &Z_Construct_UFunction_AFPSRangedWeapon_OnRep_bIsUsingAction, "OnRep_bIsUsingAction" }, // 2865978777
		{ &Z_Construct_UFunction_AFPSRangedWeapon_OnRep_BurstCount, "OnRep_BurstCount" }, // 739322463
		{ &Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentAmmo, "OnRep_CurrentAmmo" }, // 2509181655
		{ &Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentBarrel, "OnRep_CurrentBarrel" }, // 2542261061
		{ &Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentFireMode, "OnRep_CurrentFireMode" }, // 388485196
		{ &Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentGrip, "OnRep_CurrentGrip" }, // 603270333
		{ &Z_Construct_UFunction_AFPSRangedWeapon_OnRep_CurrentSight, "OnRep_CurrentSight" }, // 130215629
		{ &Z_Construct_UFunction_AFPSRangedWeapon_OnRep_LastProjectiles, "OnRep_LastProjectiles" }, // 1961286529
		{ &Z_Construct_UFunction_AFPSRangedWeapon_OnRep_Magazines, "OnRep_Magazines" }, // 2771027143
		{ &Z_Construct_UFunction_AFPSRangedWeapon_OnRep_ReloadData, "OnRep_ReloadData" }, // 2014977746
		{ &Z_Construct_UFunction_AFPSRangedWeapon_SendMagazines, "SendMagazines" }, // 1996437794
		{ &Z_Construct_UFunction_AFPSRangedWeapon_SerializeAttachments, "SerializeAttachments" }, // 1207502702
		{ &Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentBarrel, "ServerSetCurrentBarrel" }, // 2918579393
		{ &Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentGrip, "ServerSetCurrentGrip" }, // 1457890839
		{ &Z_Construct_UFunction_AFPSRangedWeapon_ServerSetCurrentSight, "ServerSetCurrentSight" }, // 2450548395
		{ &Z_Construct_UFunction_AFPSRangedWeapon_ServerSetIsFiring, "ServerSetIsFiring" }, // 3306777318
		{ &Z_Construct_UFunction_AFPSRangedWeapon_SetAttachments, "SetAttachments" }, // 3035271729
		{ &Z_Construct_UFunction_AFPSRangedWeapon_SetBurstCount, "SetBurstCount" }, // 2765613
		{ &Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentAmmo, "SetCurrentAmmo" }, // 1946926025
		{ &Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentBarrel, "SetCurrentBarrel" }, // 2384406794
		{ &Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentFireMode, "SetCurrentFireMode" }, // 2950472005
		{ &Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentGrip, "SetCurrentGrip" }, // 3127782314
		{ &Z_Construct_UFunction_AFPSRangedWeapon_SetCurrentSight, "SetCurrentSight" }, // 2889909443
		{ &Z_Construct_UFunction_AFPSRangedWeapon_SetIsAiming, "SetIsAiming" }, // 3416108038
		{ &Z_Construct_UFunction_AFPSRangedWeapon_SetIsFiring, "SetIsFiring" }, // 308533047
		{ &Z_Construct_UFunction_AFPSRangedWeapon_SetIsInspecting, "SetIsInspecting" }, // 2770643850
		{ &Z_Construct_UFunction_AFPSRangedWeapon_SetIsLoaded, "SetIsLoaded" }, // 2428784211
		{ &Z_Construct_UFunction_AFPSRangedWeapon_SetIsPreFiring, "SetIsPreFiring" }, // 579915858
		{ &Z_Construct_UFunction_AFPSRangedWeapon_SetIsUsingAction, "SetIsUsingAction" }, // 1087143774
		{ &Z_Construct_UFunction_AFPSRangedWeapon_SetLastProjectiles, "SetLastProjectiles" }, // 2475387802
		{ &Z_Construct_UFunction_AFPSRangedWeapon_SetMagazines, "SetMagazines" }, // 85784042
		{ &Z_Construct_UFunction_AFPSRangedWeapon_SetReloadData, "SetReloadData" }, // 276356019
		{ &Z_Construct_UFunction_AFPSRangedWeapon_SetUsingAlternateGripPose, "SetUsingAlternateGripPose" }, // 462123602
		{ &Z_Construct_UFunction_AFPSRangedWeapon_SortMagazines, "SortMagazines" }, // 973970500
		{ &Z_Construct_UFunction_AFPSRangedWeapon_StartCasing, "StartCasing" }, // 3302676074
		{ &Z_Construct_UFunction_AFPSRangedWeapon_StartFireAudio, "StartFireAudio" }, // 4219145167
		{ &Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleFlash, "StartMuzzleFlash" }, // 591038488
		{ &Z_Construct_UFunction_AFPSRangedWeapon_StartMuzzleSmoke, "StartMuzzleSmoke" }, // 3801473068
		{ &Z_Construct_UFunction_AFPSRangedWeapon_StopFireAudio, "StopFireAudio" }, // 258681744
		{ &Z_Construct_UFunction_AFPSRangedWeapon_UseFullAutoAudio, "UseFullAutoAudio" }, // 2517074166
		{ &Z_Construct_UFunction_AFPSRangedWeapon_UsingManualAction, "UsingManualAction" }, // 1466345188
		{ &Z_Construct_UFunction_AFPSRangedWeapon_WantsDiscardMagazine, "WantsDiscardMagazine" }, // 2882051002
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSRangedWeapon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_RangedWeaponData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_RangedWeaponData = { "RangedWeaponData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, RangedWeaponData), Z_Construct_UClass_UFPSRangedWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_RangedWeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_RangedWeaponData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_MuzzleFlashComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_MuzzleFlashComponent = { "MuzzleFlashComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, MuzzleFlashComponent), Z_Construct_UClass_UFXSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_MuzzleFlashComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_MuzzleFlashComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_MuzzleSmokeComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_MuzzleSmokeComponent = { "MuzzleSmokeComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, MuzzleSmokeComponent), Z_Construct_UClass_UFXSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_MuzzleSmokeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_MuzzleSmokeComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CasingComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CasingComponent = { "CasingComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, CasingComponent), Z_Construct_UClass_UFXSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CasingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CasingComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsInspecting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsInspecting_SetBit(void* Obj)
	{
		((AFPSRangedWeapon*)Obj)->bIsInspecting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsInspecting = { "bIsInspecting", "OnRep_bIsInspecting", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSRangedWeapon), &Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsInspecting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsInspecting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsInspecting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsPreFiring_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsPreFiring_SetBit(void* Obj)
	{
		((AFPSRangedWeapon*)Obj)->bIsPreFiring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsPreFiring = { "bIsPreFiring", "OnRep_bIsPreFiring", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSRangedWeapon), &Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsPreFiring_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsPreFiring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsPreFiring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsFiring_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsFiring_SetBit(void* Obj)
	{
		((AFPSRangedWeapon*)Obj)->bIsFiring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsFiring = { "bIsFiring", "OnRep_bIsFiring", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSRangedWeapon), &Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsFiring_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsFiring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsFiring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsAiming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsAiming_SetBit(void* Obj)
	{
		((AFPSRangedWeapon*)Obj)->bIsAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsAiming = { "bIsAiming", "OnRep_bIsAiming", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSRangedWeapon), &Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsLoaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsLoaded_SetBit(void* Obj)
	{
		((AFPSRangedWeapon*)Obj)->bIsLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsLoaded = { "bIsLoaded", "OnRep_bIsLoaded", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSRangedWeapon), &Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsUsingAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsUsingAction_SetBit(void* Obj)
	{
		((AFPSRangedWeapon*)Obj)->bIsUsingAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsUsingAction = { "bIsUsingAction", "OnRep_bIsUsingAction", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSRangedWeapon), &Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsUsingAction_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsUsingAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsUsingAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_ReloadData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_ReloadData = { "ReloadData", "OnRep_ReloadData", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, ReloadData), Z_Construct_UScriptStruct_FReloadData, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_ReloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_ReloadData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Magazines_Inner = { "Magazines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Magazines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Magazines = { "Magazines", "OnRep_Magazines", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, Magazines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Magazines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Magazines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentMagIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentMagIndex = { "CurrentMagIndex", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, CurrentMagIndex), METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentMagIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentMagIndex_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Attachments_Inner = { "Attachments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFPSAttachment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Attachments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Attachments = { "Attachments", "OnRep_Attachments", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, Attachments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Attachments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Attachments_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_AttachmentsData_Inner = { "AttachmentsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_AttachmentsData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_AttachmentsData = { "AttachmentsData", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, AttachmentsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_AttachmentsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_AttachmentsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentGrip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentGrip = { "CurrentGrip", "OnRep_CurrentGrip", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, CurrentGrip), Z_Construct_UClass_AFPSGrip_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentGrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentGrip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentBarrel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentBarrel = { "CurrentBarrel", "OnRep_CurrentBarrel", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, CurrentBarrel), Z_Construct_UClass_AFPSBarrel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentBarrel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentBarrel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentSight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentSight = { "CurrentSight", "OnRep_CurrentSight", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, CurrentSight), Z_Construct_UClass_AFPSSight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentSight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentSight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", "OnRep_CurrentAmmo", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, CurrentAmmo), METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_BurstCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_BurstCount = { "BurstCount", "OnRep_BurstCount", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, BurstCount), METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_BurstCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_BurstCount_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentFireMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentFireMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentFireMode = { "CurrentFireMode", "OnRep_CurrentFireMode", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, CurrentFireMode), Z_Construct_UEnum_FPSController_EFireMode, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentFireMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentFireMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bUsingAlternateGripPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bUsingAlternateGripPose_SetBit(void* Obj)
	{
		((AFPSRangedWeapon*)Obj)->bUsingAlternateGripPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bUsingAlternateGripPose = { "bUsingAlternateGripPose", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSRangedWeapon), &Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bUsingAlternateGripPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bUsingAlternateGripPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bUsingAlternateGripPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bWantsAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bWantsAction_SetBit(void* Obj)
	{
		((AFPSRangedWeapon*)Obj)->bWantsAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bWantsAction = { "bWantsAction", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSRangedWeapon), &Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bWantsAction_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bWantsAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bWantsAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bWantsAim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bWantsAim_SetBit(void* Obj)
	{
		((AFPSRangedWeapon*)Obj)->bWantsAim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bWantsAim = { "bWantsAim", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSRangedWeapon), &Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bWantsAim_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bWantsAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bWantsAim_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_LastProjectiles_Inner = { "LastProjectiles", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBallisticProjectileData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_LastProjectiles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_LastProjectiles = { "LastProjectiles", "OnRep_LastProjectiles", (EPropertyFlags)0x0020088100000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, LastProjectiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_LastProjectiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_LastProjectiles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Sights_Inner = { "Sights", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFPSSight_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Sights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Sights = { "Sights", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, Sights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Sights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Sights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_MinTracerDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_MinTracerDistance = { "MinTracerDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, MinTracerDistance), METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_MinTracerDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_MinTracerDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_ControlFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_ControlFactor = { "ControlFactor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, ControlFactor), METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_ControlFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_ControlFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_ADSAlignmentSpeedMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_ADSAlignmentSpeedMultiplier = { "ADSAlignmentSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, ADSAlignmentSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_ADSAlignmentSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_ADSAlignmentSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_ADSSpeedMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_ADSSpeedMultiplier = { "ADSSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, ADSSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_ADSSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_ADSSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_PreviousSight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_PreviousSight = { "PreviousSight", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, PreviousSight), Z_Construct_UClass_AFPSSight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_PreviousSight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_PreviousSight_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Physmats_Inner = { "Physmats", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBallisticPhysicsMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Physmats_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSRangedWeapon" },
		{ "ModuleRelativePath", "Public/FPSRangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Physmats = { "Physmats", nullptr, (EPropertyFlags)0x0024080000000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangedWeapon, Physmats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Physmats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Physmats_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSRangedWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_RangedWeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_MuzzleFlashComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_MuzzleSmokeComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CasingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsInspecting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsPreFiring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsFiring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bIsUsingAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_ReloadData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Magazines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Magazines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentMagIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Attachments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Attachments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_AttachmentsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_AttachmentsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentBarrel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentSight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_BurstCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentFireMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_CurrentFireMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bUsingAlternateGripPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bWantsAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_bWantsAim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_LastProjectiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_LastProjectiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Sights_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Sights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_MinTracerDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_ControlFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_ADSAlignmentSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_ADSSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_PreviousSight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Physmats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangedWeapon_Statics::NewProp_Physmats,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFPSRangedWeapon_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNiagaraParticleCallbackHandler_NoRegister, (int32)VTABLE_OFFSET(AFPSRangedWeapon, INiagaraParticleCallbackHandler), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSRangedWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSRangedWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSRangedWeapon_Statics::ClassParams = {
		&AFPSRangedWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSRangedWeapon_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSRangedWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangedWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSRangedWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSRangedWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSRangedWeapon, 2410762905);
	template<> FPSCONTROLLER_API UClass* StaticClass<AFPSRangedWeapon>()
	{
		return AFPSRangedWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSRangedWeapon(Z_Construct_UClass_AFPSRangedWeapon, &AFPSRangedWeapon::StaticClass, TEXT("/Script/FPSController"), TEXT("AFPSRangedWeapon"), false, nullptr, nullptr, nullptr);

	void AFPSRangedWeapon::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsInspecting(TEXT("bIsInspecting"));
		static const FName Name_bIsPreFiring(TEXT("bIsPreFiring"));
		static const FName Name_bIsFiring(TEXT("bIsFiring"));
		static const FName Name_bIsAiming(TEXT("bIsAiming"));
		static const FName Name_bIsLoaded(TEXT("bIsLoaded"));
		static const FName Name_bIsUsingAction(TEXT("bIsUsingAction"));
		static const FName Name_ReloadData(TEXT("ReloadData"));
		static const FName Name_Magazines(TEXT("Magazines"));
		static const FName Name_CurrentMagIndex(TEXT("CurrentMagIndex"));
		static const FName Name_Attachments(TEXT("Attachments"));
		static const FName Name_AttachmentsData(TEXT("AttachmentsData"));
		static const FName Name_CurrentGrip(TEXT("CurrentGrip"));
		static const FName Name_CurrentBarrel(TEXT("CurrentBarrel"));
		static const FName Name_CurrentSight(TEXT("CurrentSight"));
		static const FName Name_CurrentAmmo(TEXT("CurrentAmmo"));
		static const FName Name_BurstCount(TEXT("BurstCount"));
		static const FName Name_CurrentFireMode(TEXT("CurrentFireMode"));
		static const FName Name_LastProjectiles(TEXT("LastProjectiles"));
		static const FName Name_Sights(TEXT("Sights"));
		static const FName Name_Physmats(TEXT("Physmats"));

		const bool bIsValid = true
			&& Name_bIsInspecting == ClassReps[(int32)ENetFields_Private::bIsInspecting].Property->GetFName()
			&& Name_bIsPreFiring == ClassReps[(int32)ENetFields_Private::bIsPreFiring].Property->GetFName()
			&& Name_bIsFiring == ClassReps[(int32)ENetFields_Private::bIsFiring].Property->GetFName()
			&& Name_bIsAiming == ClassReps[(int32)ENetFields_Private::bIsAiming].Property->GetFName()
			&& Name_bIsLoaded == ClassReps[(int32)ENetFields_Private::bIsLoaded].Property->GetFName()
			&& Name_bIsUsingAction == ClassReps[(int32)ENetFields_Private::bIsUsingAction].Property->GetFName()
			&& Name_ReloadData == ClassReps[(int32)ENetFields_Private::ReloadData].Property->GetFName()
			&& Name_Magazines == ClassReps[(int32)ENetFields_Private::Magazines].Property->GetFName()
			&& Name_CurrentMagIndex == ClassReps[(int32)ENetFields_Private::CurrentMagIndex].Property->GetFName()
			&& Name_Attachments == ClassReps[(int32)ENetFields_Private::Attachments].Property->GetFName()
			&& Name_AttachmentsData == ClassReps[(int32)ENetFields_Private::AttachmentsData].Property->GetFName()
			&& Name_CurrentGrip == ClassReps[(int32)ENetFields_Private::CurrentGrip].Property->GetFName()
			&& Name_CurrentBarrel == ClassReps[(int32)ENetFields_Private::CurrentBarrel].Property->GetFName()
			&& Name_CurrentSight == ClassReps[(int32)ENetFields_Private::CurrentSight].Property->GetFName()
			&& Name_CurrentAmmo == ClassReps[(int32)ENetFields_Private::CurrentAmmo].Property->GetFName()
			&& Name_BurstCount == ClassReps[(int32)ENetFields_Private::BurstCount].Property->GetFName()
			&& Name_CurrentFireMode == ClassReps[(int32)ENetFields_Private::CurrentFireMode].Property->GetFName()
			&& Name_LastProjectiles == ClassReps[(int32)ENetFields_Private::LastProjectiles].Property->GetFName()
			&& Name_Sights == ClassReps[(int32)ENetFields_Private::Sights].Property->GetFName()
			&& Name_Physmats == ClassReps[(int32)ENetFields_Private::Physmats].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AFPSRangedWeapon"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSRangedWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
