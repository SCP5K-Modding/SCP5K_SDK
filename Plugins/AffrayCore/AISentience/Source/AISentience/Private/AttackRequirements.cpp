#include "AttackRequirements.h"

FAttackRequirements::FAttackRequirements() {
    this->bPickAutomatically = false;
    this->bLimitAllowedSpeed = false;
    this->bLimitAllowedAngle = false;
    this->bLimitHeightOffset = false;
    this->bUseCooldown = false;
    this->Cooldown = 0.00f;
    this->bMirroredAngle = false;
    this->ScoreBias = 0.00f;
    this->Target = EAttackTarget::Location;
}

