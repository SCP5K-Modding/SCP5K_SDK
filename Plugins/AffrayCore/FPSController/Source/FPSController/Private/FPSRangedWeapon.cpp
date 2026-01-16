#include "FPSRangedWeapon.h"
#include "Net/UnrealNetwork.h"

AFPSRangedWeapon::AFPSRangedWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RangedWeaponData = NULL;
    this->MuzzleFlashComponent = NULL;
    this->MuzzleSmokeComponent = NULL;
    this->CasingComponent = NULL;
    this->bIsInspecting = false;
    this->bIsPreFiring = false;
    this->bIsFiring = false;
    this->bIsAiming = false;
    this->bIsLoaded = true;
    this->bIsUsingAction = false;
    this->CurrentMagIndex = 0;
    this->CurrentGrip = NULL;
    this->CurrentBarrel = NULL;
    this->CurrentSight = NULL;
    this->BurstCount = 0;
    this->ServerRejectedShots = 0;
    this->CurrentFireMode = EFireMode::FM_SemiAutomatic;
    this->bUsingAlternateGripPose = false;
    this->bWantsAction = false;
    this->bWantsAim = false;
    this->MinTracerDistance = 500.00f;
    this->ControlFactor = 1.00f;
    this->ADSAlignmentSpeedMultiplier = 1.00f;
    this->ADSSpeedMultiplier = 1.00f;
    this->bUpdateClientMagazinesOnMagCheck = true;
    this->LastFireTime = 0.00f;
}

bool AFPSRangedWeapon::WantsDiscardMagazine() const {
    return false;
}

bool AFPSRangedWeapon::WantsAlternateGripPose() const {
    return false;
}

bool AFPSRangedWeapon::UseFullAutoAudio() const {
    return false;
}

void AFPSRangedWeapon::UpdateRemainingAmmoAudio_Implementation() {
}

void AFPSRangedWeapon::UpdateControl_Implementation() {
}

void AFPSRangedWeapon::UpdateAttachMeshes_Implementation() {
}

void AFPSRangedWeapon::TryLoadRound() {
}

void AFPSRangedWeapon::StopReload() {
}

void AFPSRangedWeapon::StopFireAudio_Implementation() {
}

void AFPSRangedWeapon::StartUseAction() {
}

void AFPSRangedWeapon::StartReload() {
}

void AFPSRangedWeapon::StartMuzzleSmoke_Implementation(UFXSystemAsset* Particle) {
}

void AFPSRangedWeapon::StartMuzzleFlash_Implementation(UFXSystemAsset* Particle) {
}

void AFPSRangedWeapon::StartLoadAndAddAttachment(TSoftObjectPtr<UFPSAttachmentData> AttachmentData, int32 Slot) {
}

UFMODAudioComponent* AFPSRangedWeapon::StartFireAudio_Implementation() {
    return NULL;
}

void AFPSRangedWeapon::StartCasing_Implementation(UFXSystemAsset* Particle) {
}

void AFPSRangedWeapon::SortMagazines_Implementation() {
}

bool AFPSRangedWeapon::ShouldUseManualAction() const {
    return false;
}

void AFPSRangedWeapon::SetUsingAlternateGripPose(bool bNewValue) {
}

void AFPSRangedWeapon::SetReloadData(FReloadData NewValue) {
}

void AFPSRangedWeapon::SetMagazines(TArray<FMagazine> NewValue) {
}

void AFPSRangedWeapon::SetLastFireTime(float NewTime) {
}

void AFPSRangedWeapon::SetLastFireEvent(const FBallisticFireEvent& InLastFireEvent) {
}

void AFPSRangedWeapon::SetIsUsingAction(bool bNewValue) {
}

void AFPSRangedWeapon::SetIsPreFiring(bool bNewValue) {
}

void AFPSRangedWeapon::SetIsLoaded(bool bNewValue) {
}

void AFPSRangedWeapon::SetIsInspecting(bool bNewValue) {
}

void AFPSRangedWeapon::SetIsFiring(bool bNewValue) {
}

void AFPSRangedWeapon::SetIsAiming(bool bNewValue) {
}

void AFPSRangedWeapon::SetCurrentSight(AFPSSight* Sight) {
}

void AFPSRangedWeapon::SetCurrentMagazine(FMagazine NewValue) {
}

void AFPSRangedWeapon::SetCurrentGrip(AFPSGrip* Grip) {
}

void AFPSRangedWeapon::SetCurrentFireMode(EFireMode NewValue) {
}

void AFPSRangedWeapon::SetCurrentBarrel(AFPSBarrel* Barrel) {
}

void AFPSRangedWeapon::SetBurstCount(int32 NewValue) {
}

void AFPSRangedWeapon::SetAttachments(TArray<AFPSAttachment*> NewValue) {
}

void AFPSRangedWeapon::ServerStopReload_Implementation() {
}

void AFPSRangedWeapon::ServerStartUseAction_Implementation() {
}

void AFPSRangedWeapon::ServerStartReload_Implementation() {
}

void AFPSRangedWeapon::ServerSetIsFiring_Implementation(bool bNewValue) {
}

void AFPSRangedWeapon::ServerSetCurrentSight_Implementation(AFPSSight* Sight) {
}

void AFPSRangedWeapon::ServerSetCurrentGrip_Implementation(AFPSGrip* Grip) {
}

void AFPSRangedWeapon::ServerSetCurrentBarrel_Implementation(AFPSBarrel* Barrel) {
}

void AFPSRangedWeapon::ServerRejectShot() {
}

void AFPSRangedWeapon::ServerCancelReload_Implementation() {
}

void AFPSRangedWeapon::SerializeAttachments() {
}

void AFPSRangedWeapon::SendMagazines_Implementation() {
}

bool AFPSRangedWeapon::SelectQuickLoadAnimation(FAlternateLoadAnimation& SelectedAnimation) const {
    return false;
}

bool AFPSRangedWeapon::RemoveAttachmentAtSlot_Implementation(int32 SlotIndex) {
    return false;
}

void AFPSRangedWeapon::OnRep_ServerRejectedShots(int32 OldValue) {
}

void AFPSRangedWeapon::OnRep_ReloadData_Implementation() {
}

void AFPSRangedWeapon::OnRep_Magazines_Implementation() {
}

void AFPSRangedWeapon::OnRep_LastFireEvent_Implementation() {
}

void AFPSRangedWeapon::OnRep_CurrentSight_Implementation() {
}

void AFPSRangedWeapon::OnRep_CurrentMagazine_Implementation() {
}

void AFPSRangedWeapon::OnRep_CurrentGrip_Implementation() {
}

void AFPSRangedWeapon::OnRep_CurrentFireMode_Implementation() {
}

void AFPSRangedWeapon::OnRep_CurrentBarrel_Implementation() {
}

void AFPSRangedWeapon::OnRep_BurstCount_Implementation() {
}

void AFPSRangedWeapon::OnRep_bIsUsingAction_Implementation() {
}

void AFPSRangedWeapon::OnRep_bIsPreFiring_Implementation() {
}

void AFPSRangedWeapon::OnRep_bIsLoaded_Implementation() {
}

void AFPSRangedWeapon::OnRep_bIsInspecting_Implementation() {
}

void AFPSRangedWeapon::OnRep_bIsFiring_Implementation() {
}

void AFPSRangedWeapon::OnRep_bIsAiming_Implementation() {
}

void AFPSRangedWeapon::OnRep_Attachments_Implementation() {
}

void AFPSRangedWeapon::OnRep_AttachmentIDsToLoad() {
}

void AFPSRangedWeapon::OnParticleCollide_Implementation(FVector Location, FVector Velocity, EPhysicalSurface Surface)
{
}

void AFPSRangedWeapon::OnCascadeParticleCollide(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat) {
}

void AFPSRangedWeapon::MulticastStartUseAction_Implementation() {
}

void AFPSRangedWeapon::MulticastCancelReload_Implementation() {
}

void AFPSRangedWeapon::LocalStopReload() {
}

void AFPSRangedWeapon::LoadRound_Implementation() {
}

bool AFPSRangedWeapon::IsUsingAction() const {
    return false;
}

bool AFPSRangedWeapon::IsSuppressed() const {
    return false;
}

bool AFPSRangedWeapon::IsSlotSight(int32 Index, bool& bIsCanted) const {
    return false;
}

bool AFPSRangedWeapon::IsSlotGrip(int32 Index) const {
    return false;
}

bool AFPSRangedWeapon::IsReloading() const {
    return false;
}

bool AFPSRangedWeapon::IsLoaded() const {
    return false;
}

bool AFPSRangedWeapon::IsInspecting() const {
    return false;
}

bool AFPSRangedWeapon::IsCompensated() const {
    return false;
}

bool AFPSRangedWeapon::IsAiming() const {
    return false;
}

bool AFPSRangedWeapon::HasSight(bool bAllowCanted) const {
    return false;
}

bool AFPSRangedWeapon::HasGrip() const {
    return false;
}

bool AFPSRangedWeapon::HasFullAmmo() const {
    return false;
}

bool AFPSRangedWeapon::HasAttachment(int32 Index) const {
    return false;
}

bool AFPSRangedWeapon::HasAmmo() const {
    return false;
}

float AFPSRangedWeapon::GetWeaponLength() const {
    return 0.0f;
}

bool AFPSRangedWeapon::GetWantsAiming() const {
    return false;
}

bool AFPSRangedWeapon::GetUsingAlternateGripPose() const {
    return false;
}

float AFPSRangedWeapon::GetTimeSinceLastFired() const {
    return 0.0f;
}

FVector AFPSRangedWeapon::GetSightPosition() {
    return FVector{};
}

float AFPSRangedWeapon::GetSightDistance(FTransform HeadTransform) {
    return 0.0f;
}

FVector AFPSRangedWeapon::GetSightDirection() {
    return FVector{};
}

USceneComponent* AFPSRangedWeapon::GetSightComponent() {
    return NULL;
}

int32 AFPSRangedWeapon::GetReserveMagazines() const {
    return 0;
}

int32 AFPSRangedWeapon::GetReserveAmmo(bool bIncludeCurrentMag) const {
    return 0;
}

float AFPSRangedWeapon::GetRemainingTimeInReload() const {
    return 0.0f;
}

float AFPSRangedWeapon::GetRemainingTimeInAction() const {
    return 0.0f;
}

EReloadType AFPSRangedWeapon::GetReloadType() const {
    return EReloadType::RT_Magazine;
}

FVector2D AFPSRangedWeapon::GetRecoilMultiplier() const {
    return FVector2D{};
}

float AFPSRangedWeapon::GetRecoilAnimationMultiplier() const {
    return 0.0f;
}

FVector2D AFPSRangedWeapon::GetRecoil() const {
    return FVector2D{};
}

UFPSRangedWeaponData* AFPSRangedWeapon::GetRangedWeaponData() const {
    return NULL;
}

int32 AFPSRangedWeapon::GetNextMagIndex() const {
    return 0;
}

int32 AFPSRangedWeapon::GetMaxReserveMagazines() const {
    return 0;
}

int32 AFPSRangedWeapon::GetMaxReserveAmmo() const {
    return 0;
}

float AFPSRangedWeapon::GetLoudness() const {
    return 0.0f;
}

float AFPSRangedWeapon::GetKickMultiplier() const {
    return 0.0f;
}

USceneComponent* AFPSRangedWeapon::GetIronSight_Implementation() {
    return NULL;
}

float AFPSRangedWeapon::GetIdleMultiplier() const {
    return 0.0f;
}

EReloadMode AFPSRangedWeapon::GetDesiredReloadMode() const {
    return EReloadMode::None;
}

AFPSSight* AFPSRangedWeapon::GetCurrentSight() const {
    return NULL;
}

AFPSGrip* AFPSRangedWeapon::GetCurrentGrip() const {
    return NULL;
}

EFireMode AFPSRangedWeapon::GetCurrentFireMode() const {
    return EFireMode::FM_Automatic;
}

AFPSBarrel* AFPSRangedWeapon::GetCurrentBarrel() const {
    return NULL;
}

int32 AFPSRangedWeapon::GetCurrentAmmo() const {
    return 0;
}

FVector AFPSRangedWeapon::GetCasingEjectionLocation_Implementation(bool bTransformToMesh, FRotator& Rotation) const {
    return FVector{};
}

int32 AFPSRangedWeapon::GetBulletsInNextMag() const {
    return 0;
}

FVector AFPSRangedWeapon::GetBarrelLocation_Implementation(bool bTransformToMesh, FRotator& Rotation, bool bIncludeAttachment) const {
    return FVector{};
}

bool AFPSRangedWeapon::GetAttachmentSlotData(int32 SlotIndex, FAttachmentSlotData& OutSlotData) {
    return false;
}

FTransform AFPSRangedWeapon::GetAttachmentDesiredTransform(const FAttachmentSlotData& InSlotData) const {
    return FTransform{};
}

TArray<int32> AFPSRangedWeapon::GetAttachmentData() const {
    return TArray<int32>();
}

float AFPSRangedWeapon::GetADSSpeedMultiplier_Implementation() const {
    return 0.0f;
}

float AFPSRangedWeapon::GetADSAlignmentSpeedMultiplier_Implementation() const {
    return 0.0f;
}

void AFPSRangedWeapon::FinishUseAction() {
}

void AFPSRangedWeapon::FinishLoadAndAddAttachment(TSoftObjectPtr<UFPSAttachmentData> AttachmentData, int32 Slot) {
}

bool AFPSRangedWeapon::FindAttachmentSlotClassIndex(int32 SlotIndex, int32& ClassIndex, bool& bFoundSlot) {
    return false;
}

AFPSAttachment* AFPSRangedWeapon::FindAttachmentAtSlot(int32 Index, FAttachmentSlotData& AttachmentSlotData, bool& bFound) const {
    return NULL;
}

void AFPSRangedWeapon::DropMagazine_Implementation() {
}

void AFPSRangedWeapon::CycleMagazines_Implementation() {
}

void AFPSRangedWeapon::CosmeticStopReload() {
}

void AFPSRangedWeapon::CosmeticStartUseAction() {
}

void AFPSRangedWeapon::CosmeticStartReload() {
}

void AFPSRangedWeapon::CosmeticCancelReload() {
}

void AFPSRangedWeapon::ClientSetMagazines_Implementation(FMagazine NewCurrentAmmo, const TArray<FMagazine>& NewMagazines, int32 NewMagIndex) {
}

bool AFPSRangedWeapon::CanUseIronSights() const {
    return false;
}

bool AFPSRangedWeapon::CanUseActionWhileAiming() const {
    return false;
}

bool AFPSRangedWeapon::CanUseAction() const {
    return false;
}

bool AFPSRangedWeapon::CanReloadWhileSprinting() const {
    return false;
}

bool AFPSRangedWeapon::CanReloadWhileAiming() const {
    return false;
}

bool AFPSRangedWeapon::CanReload_Implementation() const {
    return false;
}

bool AFPSRangedWeapon::CanMagCheckWhileAiming() const {
    return false;
}

bool AFPSRangedWeapon::CanLoadRound_Implementation() const {
    return false;
}

bool AFPSRangedWeapon::CanInspect() const {
    return false;
}

bool AFPSRangedWeapon::CanChangeFiremode() const {
    return false;
}

void AFPSRangedWeapon::CancelReload() {
}

bool AFPSRangedWeapon::CanCancelReload() const {
    return false;
}

bool AFPSRangedWeapon::CanAim() const {
    return false;
}

void AFPSRangedWeapon::AttachmentFinishedLoading_Implementation(AFPSAttachment* Attachment, UFPSAttachmentData* AttachmentData) {
}

void AFPSRangedWeapon::AddMultipleMagazines(int32 Ammo) {
}

void AFPSRangedWeapon::AddMagazines_Implementation(bool bForceFullAmmo, bool bReplace, bool bDisableDelay) {
}

void AFPSRangedWeapon::AddMagazine(int32 Ammo) {
}

AFPSAttachment* AFPSRangedWeapon::AddAttachment_Implementation(UFPSAttachmentData* AttachmentData, int32 Slot) {
    return NULL;
}

void AFPSRangedWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFPSRangedWeapon, bIsInspecting);
    DOREPLIFETIME(AFPSRangedWeapon, bIsPreFiring);
    DOREPLIFETIME(AFPSRangedWeapon, bIsFiring);
    DOREPLIFETIME(AFPSRangedWeapon, bIsAiming);
    DOREPLIFETIME(AFPSRangedWeapon, bIsLoaded);
    DOREPLIFETIME(AFPSRangedWeapon, bIsUsingAction);
    DOREPLIFETIME(AFPSRangedWeapon, ReloadData);
    DOREPLIFETIME(AFPSRangedWeapon, Magazines);
    DOREPLIFETIME(AFPSRangedWeapon, CurrentMagIndex);
    DOREPLIFETIME(AFPSRangedWeapon, Attachments);
    DOREPLIFETIME(AFPSRangedWeapon, AttachmentsData);
    DOREPLIFETIME(AFPSRangedWeapon, CurrentGrip);
    DOREPLIFETIME(AFPSRangedWeapon, CurrentBarrel);
    DOREPLIFETIME(AFPSRangedWeapon, CurrentSight);
    DOREPLIFETIME(AFPSRangedWeapon, CurrentMagazine);
    DOREPLIFETIME(AFPSRangedWeapon, BurstCount);
    DOREPLIFETIME(AFPSRangedWeapon, ServerRejectedShots);
    DOREPLIFETIME(AFPSRangedWeapon, CurrentFireMode);
    DOREPLIFETIME(AFPSRangedWeapon, LastFireEvent);
    DOREPLIFETIME(AFPSRangedWeapon, Sights);
    DOREPLIFETIME(AFPSRangedWeapon, Physmats);
    DOREPLIFETIME(AFPSRangedWeapon, AttachmentIDsToLoad);
    DOREPLIFETIME(AFPSRangedWeapon, LastFireTime);
}


