#include "MeleeAttack.h"

UMeleeAttack::UMeleeAttack() {
    this->bAttackHitsMultiple = true;
    this->TraceRadius = 50.00f;
    this->TraceDistance = 100.00f;
    this->bUseControlRotation = true;
}


