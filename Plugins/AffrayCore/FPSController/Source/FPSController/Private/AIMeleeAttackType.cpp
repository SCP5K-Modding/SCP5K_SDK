#include "AIMeleeAttackType.h"

FAIMeleeAttackType::FAIMeleeAttackType() {
    this->bCanBeBlocked = false;
    this->bRequireVisibility = false;
    this->AttackDamage = 0.00f;
    this->AttackDirection = AD_None;
    this->MinimumSpeed = 0.00f;
    this->MaximumSpeed = 0.00f;
    this->bShouldAttacksHitMultiple = false;
    this->bCanHitFriendlies = false;
    this->bStopDuringAttack = false;
    this->bUseControlRotationDirection = false;
    this->bRequireClearance = false;
    this->MinimumClearance = 0.00f;
    this->CancelMontage = NULL;
    this->Montage = NULL;
    this->StartAttackDelay = 0.00f;
    this->EndAttackDelay = 0.00f;
    this->NextAttackDelay = 0.00f;
    this->TraceSize = 0.00f;
    this->TraceLength = 0.00f;
    this->DetectionRadius = 0.00f;
    this->MinAttackDistance = 0.00f;
}

