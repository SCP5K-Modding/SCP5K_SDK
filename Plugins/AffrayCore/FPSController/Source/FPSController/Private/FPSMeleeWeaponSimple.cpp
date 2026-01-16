#include "FPSMeleeWeaponSimple.h"

AFPSMeleeWeaponSimple::AFPSMeleeWeaponSimple(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanUseNextAttackEarly = false;
    this->CurrentAttackIndex = -1;
    this->NextAttackIndex = 0;
    this->CurrentAttackType = ESimpleMeleeWeaponAttackType::None;
    this->bApplyDamage = false;
}

void AFPSMeleeWeaponSimple::ServerTryStartAttack_Implementation(ESimpleMeleeWeaponAttackType AttackType) {
}

void AFPSMeleeWeaponSimple::MulticastStartAttack_Implementation(ESimpleMeleeWeaponAttackType AttackType, int32 AttackIndex, bool bEarlyStart) {
}


