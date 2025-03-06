#include "RangedWeaponAnimInstance.h"

URangedWeaponAnimInstance::URangedWeaponAnimInstance() {
    this->WeaponData = NULL;
    this->RangedWeaponData = NULL;
    this->RangedWeapon = NULL;
    this->CurrentAmmo = 0;
    this->CurrentBulletsInChamber = 0;
    this->bReverseBulletOrder = false;
    this->bUseCasings = false;
    this->bAnimateSafety = true;
    this->ReloadSpeed = 1.00f;
    this->MovementAlpha = 0.00f;
    this->SafetyTime = 0.20f;
    this->EmptyBasePoseAnim = NULL;
    this->SightFoldedBasePoseAnim = NULL;
    this->ActionMontage = NULL;
    this->FiringMontage = NULL;
    this->ReloadingMontage = NULL;
    this->EmptyReloadingMontage = NULL;
    this->bIsEmpty = false;
    this->bHasSight = false;
    this->bReloading = false;
    this->SafetyRotation = 0.00f;
    this->SmoothSafetyRotation = 0.00f;
}

void URangedWeaponAnimInstance::UpdateRoundsInMag(int32 Offset) {
}

void URangedWeaponAnimInstance::UpdateCasings(int32 BulletsInChamber, int32 AvailableAmmo) {
}

void URangedWeaponAnimInstance::UpdateBullets(int32 Count) {
}

void URangedWeaponAnimInstance::SpawnMagazine() {
}

void URangedWeaponAnimInstance::ShowSpeedLoader() {
}

void URangedWeaponAnimInstance::ShowSecondMag() {
}

void URangedWeaponAnimInstance::SetHasSight(bool bNewHasSight) {
}

void URangedWeaponAnimInstance::RemoveCasings() {
}

void URangedWeaponAnimInstance::HideSpeedLoader() {
}

void URangedWeaponAnimInstance::HideSecondMag() {
}

void URangedWeaponAnimInstance::GetBonesWithPrefix(FName BonePrefix, TArray<FName>& OutBoneNames, bool bReverseOrder) {
}

void URangedWeaponAnimInstance::EjectCasing() {
}


