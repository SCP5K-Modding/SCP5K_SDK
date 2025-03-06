#include "ResonatorAnimationInstance.h"

UResonatorAnimationInstance::UResonatorAnimationInstance() {
    this->HitLeftMontage = NULL;
    this->HitRightMontage = NULL;
    this->HitCentreMontage = NULL;
    this->TurnLeftMontage = NULL;
    this->TurnRightMontage = NULL;
    this->TurnLeftSharpMontage = NULL;
    this->TurnRightSharpMontage = NULL;
    this->AccumulatedDamage = 0.00f;
    this->DamageThreshold = 40.00f;
    this->DamagedHealthThreshold = 50.00f;
    this->Character = NULL;
    this->bIsDead = false;
    this->bIsDamaged = false;
    this->bIsEating = false;
    this->bIsMoving = false;
    this->RotationDelta = 0.00f;
}

void UResonatorAnimationInstance::StopTurning() {
}

void UResonatorAnimationInstance::StartTurning(UAnimMontage* Montage, float PlayRate) {
}

void UResonatorAnimationInstance::PlayStopAnimation_Implementation() {
}

FVector UResonatorAnimationInstance::GetGradient() const {
    return FVector{};
}

void UResonatorAnimationInstance::Damage(float Amount, FVector AttackDirection) {
}


