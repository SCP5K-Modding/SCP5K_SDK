#include "FPSAnimInstanceBase.h"

UFPSAnimInstanceBase::UFPSAnimInstanceBase() {
    this->FPSCharacter = NULL;
    this->ItemData = NULL;
    this->WeaponData = NULL;
    this->ThrowableData = NULL;
    this->MeleeData = NULL;
    this->UtilityData = NULL;
    this->RangedWeaponData = NULL;
    this->bHasEquippedItem = true;
    this->CurrentItem = NULL;
    this->CurrentRangedWeapon = NULL;
}

UAnimMontage* UFPSAnimInstanceBase::GetFinalMontage(TSoftObjectPtr<UAnimMontage> Montage) {
    return NULL;
}


