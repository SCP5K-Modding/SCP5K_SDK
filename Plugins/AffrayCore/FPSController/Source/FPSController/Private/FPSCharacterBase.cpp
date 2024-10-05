#include "FPSCharacterBase.h"
#include "AimingCameraModifier.h"
#include "CameraAnimationCameraModifier.h"
#include "DamageCameraModifier.h"
#include "FPSCharacterMovementComponent.h"
#include "LowHealthCameraModifier.h"
#include "Net/UnrealNetwork.h"
#include "NightVisionCameraModifier.h"
#include "SprintingCameraModifier.h"
#include "SuppressionCameraModifier.h"

AFPSCharacterBase::AFPSCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UFPSCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->MaxDistance = 5000.00f;
    this->EquippedItem = NULL;
    this->ClientEquippedItem = NULL;
    this->ClientDequippedItem = NULL;
    this->State = 0;
    this->LastState = 0;
    this->Abilities = -1;
    this->LastAbilities = 0;
    this->MaxHealth = 100.00f;
    this->bIsEquipping = false;
    this->bIsDequipping = false;
    this->bAllowedToSprint = true;
    this->bAllowedToBracedAim = true;
    this->bForceBracedAimInNightVision = true;
    this->bCanUseItems = true;
    this->JumpItemDelay = 0.30f;
    this->LowReadySpeedMultiplier = 0.65f;
    this->WalkingSpeed = 300.00f;
    this->SprintingSpeed = 500.00f;
    this->CrouchingSpeed = 200.00f;
    this->LeanAngle = 5.00f;
    this->LeaningHeight = -10.00f;
    this->LeaningDistance = 40.00f;
    this->PositionOffsetSpeed = 10.00f;
    this->MaxSafeFallingDistance = 500.00f;
    this->FallDamagePerMetre = 20.00f;
    this->bAlwaysDropHeldItemOnDeath = false;
    this->MountDistance = 50.00f;
    this->CurrentMountEyeHeight = 0.00f;
    this->CurrentMountHeight = 0.00f;
    this->DamageMultiplier = 1.00f;
    this->HealthMultiplier = 1.00f;
    this->CharacterMovementSpeedMultiplier = 1.00f;
    this->MinSprintForwardFraction = 0.50f;
    this->LandSprintDelay = 0.50f;
    this->LandJumpDelay = 0.50f;
    this->JumpDelay = 0.00f;
    this->SprintDelay = 0.00f;
    this->RecoilSmoothingSpeed = 4.00f;
    this->HipfireRecoilAmount = 1.20f;
    this->AimingRecoilAmount = 0.80f;
    this->CrouchingRecoilMultiplier = 0.80f;
    this->RecoilMultiplier = 1.00f;
    this->MountedRecoilMultiplier = 0.55f;
    this->SpreadMultiplier = 1.00f;
    this->bUseOneHanded = false;
    this->bForceLowReady = false;
    this->bUseHeightOverBore = false;
    this->ProneEyeHeight = 20.00f;
    this->CameraInterpolationSpeed = 10.00f;
    this->CameraTargetFOV = 100.00f;
    this->CameraCurrentFOV = 100.00f;
    this->CameraDefaultFOV = 100.00f;
    this->SmoothSightDirectionSpeed = 8.00f;
    this->SmoothSightPositionSpeed = 30.00f;
    this->bUseSmoothADSPosition = true;
    this->bIsFirstPerson = false;
    this->CrouchHeightSpeed = 300.00f;
    this->bCenterViewOnADS = true;
    this->RotationOffsetSpeed = 10.00f;
    this->FreeAimAmount = 0.20f;
    this->FreeAimSmoothingSpeed = 15.00f;
    this->bFreeAimInBracedAim = false;
    this->AimingSensitivityMultiplier = 0.70f;
    this->AnimationCameraRotationMultiplier = 1.00f;
    this->LookX = 0.00f;
    this->LookY = 0.00f;
    this->CurrentFreeAimMultiplier = 1.00f;
    this->ADSPercent = 0.00f;
    this->TargetEyeHeight = 0.00f;
    this->CurrentEyeHeight = 90.00f;
    this->SmoothEyeHeight = 0.00f;
    this->LastGroundedHeight = 0.00f;
    this->CurrentWalkSpeed = 0.00f;
    this->CurrentCrouchSpeed = 0.00f;
    this->DeltaTime = 0.00f;
    this->bIsDisplay = false;
    this->SuppressionCameraModifierClass = USuppressionCameraModifier::StaticClass();
    this->LowHealthCameraModifierClass = ULowHealthCameraModifier::StaticClass();
    this->SprintingCameraModifierClass = USprintingCameraModifier::StaticClass();
    this->NighVisionCameraModifierClass = UNightVisionCameraModifier::StaticClass();
    this->AimingCameraModifierClass = UAimingCameraModifier::StaticClass();
    this->CameraAnimationCameraModifierClass = UCameraAnimationCameraModifier::StaticClass();
    this->DamageCameraModifierClass = UDamageCameraModifier::StaticClass();
    this->KickTime = 0.45f;
    this->Suppression = 0.00f;
    this->CurrentHealth = 100.00f;
    this->MaxSuppression = 10.00f;
    this->SuperSonicShotSuppression = 1.00f;
    this->ShotSuppression = 0.50f;
    this->SuppressionDecay = 1.00f;
    this->SuppressionCameraModifier = NULL;
    this->SprintingCameraModifier = NULL;
    this->LowHealthCameraModifier = NULL;
    this->NightVisionCameraModifier = NULL;
    this->AimingCameraModifier = NULL;
    this->CameraAnimationCameraModifier = NULL;
    this->DamageCameraModifier = NULL;
    FProperty* p_CharacterMovement_Prior = GetClass()->FindPropertyByName("CharacterMovement");
    this->FPSCharacterMovement = (UFPSCharacterMovementComponent*)*p_CharacterMovement_Prior->ContainerPtrToValuePtr<UFPSCharacterMovementComponent*>(this);
}

void AFPSCharacterBase::UpdateMount_Implementation() {
}

void AFPSCharacterBase::UpdateBracedAim() {
}

void AFPSCharacterBase::UpdateBaseMovementSpeed_Implementation() {
}

bool AFPSCharacterBase::TryKick(UObject* Kickable) {
    return false;
}

bool AFPSCharacterBase::TryAddAmmo_Implementation(bool bUseFullAmmo, bool bAllItems, int32 Amount) {
    return false;
}

void AFPSCharacterBase::ToggleBracedAim() {
}

void AFPSCharacterBase::SwitchToSlot_Implementation(int32 Slot) {
}

void AFPSCharacterBase::SwitchItem_Implementation(AFPSItem* Item) {
}

void AFPSCharacterBase::StartPickupItem_Implementation(AFPSItemPickup* Pickup) {
}

void AFPSCharacterBase::StartLoadAndSwitchItem(FPrimaryAssetId ItemId, AFPSItem* Item) {
}

void AFPSCharacterBase::StartLoadAndAddItem(TSoftObjectPtr<UFPSItemData> Item, FFPSItemSlotData SlotData, bool bEquip) {
}

void AFPSCharacterBase::StartKick(UObject* Kickable) {
}

void AFPSCharacterBase::SetWantsBracedAim(bool bWantsBracedAim) {
}

void AFPSCharacterBase::SetState(bool bValue, int32 Mask) {
}

void AFPSCharacterBase::SetRotation(FRotator NewRotation) {
}

void AFPSCharacterBase::SetPostProcessLayerBlendWeight(UCameraComponent* Component, int32 Index, float Weight) {
}

void AFPSCharacterBase::SetPerspective_Implementation(bool bNewIsFirstPerson, bool bApplyArmsAnimation) {
}

void AFPSCharacterBase::SetLastHit(FSimpleHitData HitData) {
}

void AFPSCharacterBase::SetHotbar(TArray<AFPSItem*> Items) {
}

void AFPSCharacterBase::SetEquippedItem(AFPSItem* Item) {
}

void AFPSCharacterBase::SetCurrentHealth(float NewHealth) {
}

void AFPSCharacterBase::SetCharacterVisibility(bool bShouldBeVisible) {
}

void AFPSCharacterBase::SetCharacterMovementSpeedMultiplier(float NewMultiplier) {
}

void AFPSCharacterBase::SetBracedAim_Implementation(bool bBracedAim) {
}

void AFPSCharacterBase::SetAimingVisualsEnabled(bool bEnabled) {
}

void AFPSCharacterBase::SetAbilities(bool bValue, int32 Mask) {
}

void AFPSCharacterBase::ServerSwitchItem_Implementation(AFPSItem* Item) {
}

void AFPSCharacterBase::ServerSetBracedAim_Implementation(bool bBracedAim) {
}

void AFPSCharacterBase::RemoveItemAndEquip_Implementation(AFPSItem* Item, int32 Slot) {
}

void AFPSCharacterBase::RemoveItem_Implementation(AFPSItem* Item) {
}

void AFPSCharacterBase::OnRep_Suppression_Implementation() {
}

void AFPSCharacterBase::OnRep_State() {
}

void AFPSCharacterBase::OnRep_Rotation_Implementation() {
}

void AFPSCharacterBase::OnRep_LastHit_Implementation() {
}

void AFPSCharacterBase::OnRep_Hotbar_Implementation() {
}

void AFPSCharacterBase::OnRep_EquippedItem_Implementation() {
}

void AFPSCharacterBase::OnRep_CurrentHealth_Implementation() {
}

void AFPSCharacterBase::OnRep_AssetIDsToLoad() {
}

void AFPSCharacterBase::OnRep_Abilities() {
}

void AFPSCharacterBase::OnItemDataLoaded(AFPSItem* Item) {
}

bool AFPSCharacterBase::IsReserveAmmoFull() {
    return false;
}

bool AFPSCharacterBase::IsFirstPerson(bool bCheckLocal) const {
    return false;
}

bool AFPSCharacterBase::HasEquippedItem() const {
    return false;
}

bool AFPSCharacterBase::GetWantsBracedAiming() const {
    return false;
}

bool AFPSCharacterBase::GetWantsAiming() const {
    return false;
}

bool AFPSCharacterBase::GetUsingNightVision() const {
    return false;
}

bool AFPSCharacterBase::GetUsingMelee() const {
    return false;
}

int32 AFPSCharacterBase::GetTotalReserveMagazines() {
    return 0;
}

float AFPSCharacterBase::GetTotalAmmoPercentage() {
    return 0.0f;
}

USkeletalMeshComponent* AFPSCharacterBase::GetThirdPersonMesh_Implementation() {
    return NULL;
}

float AFPSCharacterBase::GetSuppression() const {
    return 0.0f;
}

bool AFPSCharacterBase::GetState(TEnumAsByte<EFPSCharacterState> Mask) const {
    return false;
}

bool AFPSCharacterBase::GetSprinting() const {
    return false;
}

USceneComponent* AFPSCharacterBase::GetSpringArm_Implementation() {
    return NULL;
}

bool AFPSCharacterBase::GetReloading() const {
    return false;
}

bool AFPSCharacterBase::GetProne() const {
    return false;
}

float AFPSCharacterBase::GetMovementSpeedMultiplierForItem(int32 Slot) const {
    return 0.0f;
}

bool AFPSCharacterBase::GetMounted() const {
    return false;
}

bool AFPSCharacterBase::GetMeleeReadyRight() const {
    return false;
}

bool AFPSCharacterBase::GetMeleeReadyLeft() const {
    return false;
}

bool AFPSCharacterBase::GetMeleeBasePoseLeft() const {
    return false;
}

int32 AFPSCharacterBase::GetMaxReserveMagazines() {
    return 0;
}

FMagazineData AFPSCharacterBase::GetMagazineData(FPrimaryAssetId AssetID, int32& Index) {
    return FMagazineData{};
}

bool AFPSCharacterBase::GetLowReady() const {
    return false;
}

FFPSLoadout AFPSCharacterBase::GetLoadout() const {
    return FFPSLoadout{};
}

bool AFPSCharacterBase::GetLeaningRight() const {
    return false;
}

bool AFPSCharacterBase::GetLeaningLeft() const {
    return false;
}

bool AFPSCharacterBase::GetLeaning() const {
    return false;
}

bool AFPSCharacterBase::GetKicking() const {
    return false;
}

bool AFPSCharacterBase::GetInspecting() const {
    return false;
}

UFPSCharacterMovementComponent* AFPSCharacterBase::GetFPSCharacterMovement() {
    return NULL;
}

bool AFPSCharacterBase::GetForcedBracedAim_Implementation() {
    return false;
}

USkeletalMeshComponent* AFPSCharacterBase::GetFirstPersonMesh_Implementation() {
    return NULL;
}

AFPSItem* AFPSCharacterBase::GetFirstItem() {
    return NULL;
}

bool AFPSCharacterBase::GetFiring() const {
    return false;
}

FVector AFPSCharacterBase::GetEyesLocationNoOffset() const {
    return FVector{};
}

FVector AFPSCharacterBase::GetEyesLocation_Implementation() const {
    return FVector{};
}

int32 AFPSCharacterBase::GetEquippedItemIndex() const {
    return 0;
}

bool AFPSCharacterBase::GetEmptyReload() const {
    return false;
}

bool AFPSCharacterBase::GetDead() const {
    return false;
}

float AFPSCharacterBase::GetCurrentHealth() const {
    return 0.0f;
}

bool AFPSCharacterBase::GetClimbing() const {
    return false;
}

bool AFPSCharacterBase::GetCheckingAmmo() const {
    return false;
}

bool AFPSCharacterBase::GetCancelledReload() const {
    return false;
}

UCameraComponent* AFPSCharacterBase::GetCamera_Implementation() {
    return NULL;
}

bool AFPSCharacterBase::GetBracedAiming() const {
    return false;
}

float AFPSCharacterBase::GetAimingMovementSpeedMultiplierForItem(int32 Slot) const {
    return 0.0f;
}

bool AFPSCharacterBase::GetAiming() const {
    return false;
}

bool AFPSCharacterBase::GetAbilities(TEnumAsByte<EFPSCharacterAbilities::Type> Mask) const {
    return false;
}

void AFPSCharacterBase::FinishPickupItem(AFPSItemPickup* Pickup, TSoftObjectPtr<UFPSItemData> Item, FFPSItemSlotData SlotData, bool bEquip) {
}

void AFPSCharacterBase::FinishLoadAndSwitchItem(FPrimaryAssetId ItemId, AFPSItem* Item) {
}

void AFPSCharacterBase::FinishLoadAndAddItem(TSoftObjectPtr<UFPSItemData> Item, FFPSItemSlotData SlotData, bool bEquip) {
}

void AFPSCharacterBase::FinishKick_Implementation() {
}

bool AFPSCharacterBase::FindCorner(FVector Normal, float WallDistance, float CapsuleRadius, float CornerDistance, bool bUseComplex, FVector& CornerPosition, UPrimitiveComponent*& CornerObject) {
    return false;
}

void AFPSCharacterBase::CosmeticUpdatedSprinting_Implementation(bool bSprinting) {
}

void AFPSCharacterBase::CosmeticUpdatedReloading_Implementation(bool bReloading) {
}

void AFPSCharacterBase::CosmeticUpdatedProne_Implementation(bool bProne) {
}

void AFPSCharacterBase::CosmeticUpdatedNightVision_Implementation(bool bUsingNightVision) {
}

void AFPSCharacterBase::CosmeticUpdatedMounted_Implementation(bool bMounted) {
}

void AFPSCharacterBase::CosmeticUpdatedLowReady_Implementation(bool bLowReady) {
}

void AFPSCharacterBase::CosmeticUpdatedLeaningRight_Implementation(bool bLeaningRight) {
}

void AFPSCharacterBase::CosmeticUpdatedLeaningLeft_Implementation(bool bLeaningLeft) {
}

void AFPSCharacterBase::CosmeticUpdatedLeaning_Implementation(bool bLeaning) {
}

void AFPSCharacterBase::CosmeticUpdatedKicking_Implementation(bool bKicking) {
}

void AFPSCharacterBase::CosmeticUpdatedInspecting_Implementation(bool bInspecting) {
}

void AFPSCharacterBase::CosmeticUpdatedFiring_Implementation(bool bFiring) {
}

void AFPSCharacterBase::CosmeticUpdatedDead_Implementation(bool bDead) {
}

void AFPSCharacterBase::CosmeticUpdatedCrouching_Implementation(bool bCrouching) {
}

void AFPSCharacterBase::CosmeticUpdatedCheckingAmmo_Implementation(bool bCheckingAmmo) {
}

void AFPSCharacterBase::CosmeticUpdatedAiming_Implementation(bool bAiming) {
}

void AFPSCharacterBase::CosmeticSwitchItem_Implementation(AFPSItem* Item) {
}

void AFPSCharacterBase::CosmeticFinishEquipItem_Implementation() {
}

void AFPSCharacterBase::CosmeticFinishDequipItem_Implementation() {
}

void AFPSCharacterBase::CosmeticEquipItem_Implementation(AFPSItem* Item) {
}

void AFPSCharacterBase::CosmeticDequipItem_Implementation(AFPSItem* Item) {
}

bool AFPSCharacterBase::CanVault(FTransform CornerLocation, float EyeHeight, UAnimMontage* Montage) const {
    return false;
}

bool AFPSCharacterBase::CanSprint_Implementation() {
    return false;
}

bool AFPSCharacterBase::CanPickupItem(AFPSItemPickup* Pickup) const {
    return false;
}

bool AFPSCharacterBase::CanAddAmmo(bool bUseFullAmmo, bool bAllItems, int32 Amount) const {
    return false;
}

void AFPSCharacterBase::BlendNightVision_Implementation() {
}

void AFPSCharacterBase::BlendHeight_Implementation(bool bCovered) {
}

void AFPSCharacterBase::ApplyRotationOffset() {
}

void AFPSCharacterBase::ApplyPositionOffset(FVector& Delta) {
}

void AFPSCharacterBase::AddSuppression(float Amount) {
}

void AFPSCharacterBase::AddRotationOffset(FVector Offset) {
}

void AFPSCharacterBase::AddRecoil(FVector2D Recoil) {
}

void AFPSCharacterBase::AddItem_Implementation(UFPSItemData* ItemData, FFPSItemSlotData SlotData, bool bEquip) {
}

void AFPSCharacterBase::AddFreeAim(FVector FreeAim) {
}

void AFPSCharacterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFPSCharacterBase, EquippedItem);
    DOREPLIFETIME(AFPSCharacterBase, Hotbar);
    DOREPLIFETIME(AFPSCharacterBase, AssetIDsToLoad);
    DOREPLIFETIME(AFPSCharacterBase, State);
    DOREPLIFETIME(AFPSCharacterBase, Abilities);
    DOREPLIFETIME(AFPSCharacterBase, MaxHealth);
    DOREPLIFETIME(AFPSCharacterBase, bAllowedToSprint);
    DOREPLIFETIME(AFPSCharacterBase, CurrentRecoil);
    DOREPLIFETIME(AFPSCharacterBase, TargetEyeHeight);
    DOREPLIFETIME(AFPSCharacterBase, Rotation);
    DOREPLIFETIME(AFPSCharacterBase, Ammunition);
    DOREPLIFETIME(AFPSCharacterBase, Suppression);
    DOREPLIFETIME(AFPSCharacterBase, CurrentHealth);
    DOREPLIFETIME(AFPSCharacterBase, LastHit);
}


