#include "ZombieAnimationInstance.h"

UZombieAnimationInstance::UZombieAnimationInstance() {
    this->bIsMoving = false;
    this->MovementSpeed = 0.00f;
    this->StrafeSpeed = 0.00f;
    this->DistToGround = 0.00f;
    this->bIsFalling = false;
    this->bIsDead = false;
    this->bIsFakingDeath = false;
    this->CurrentLifeState = EZombieLifeState::Alive;
    this->bIsFakeRagdolling = false;
    this->LookAtRotationAlpha = 0.00f;
    this->bIsTargetSeen = false;
    this->bIsBallisticHit = false;
    this->bIsMeleeHit = false;
    this->bIsFrontHit = false;
    this->HitDirectionAngle = 0.00f;
    this->RandomIdleAnimationIndex = 0;
    this->RandomizedAnimStartPosition = 0.00f;
    this->FallingDistanceCheckDelay = 0.25f;
    this->MaxFallDistanceTraceLength = 3000.00f;
    this->MeleeAttackDamageTypeSample = NULL;
    this->BallisticDamageTypeSample = NULL;
}

void UZombieAnimationInstance::StartFallingDistanceCheck() {
}

void UZombieAnimationInstance::SetZombieCharacter(AAIZombieCharacter* DesiredCharacter) {
}

void UZombieAnimationInstance::SetCharacter(ACharacter* DesiredCharacter) {
}

void UZombieAnimationInstance::PrepareReanimationEnd() {
}

void UZombieAnimationInstance::OnZombieUpdatedLifeState() {
}

void UZombieAnimationInstance::OnZombiePrepareReanimation() {
}

void UZombieAnimationInstance::OnZombieDied(UHealthComponent* UpdatedHealthComponent) {
}

void UZombieAnimationInstance::OnZombieDamaged(UHealthComponent* UpdatedHealthComponent, FSimpleHitData HitData) {
}

void UZombieAnimationInstance::OnZombieBeganFakeDeath(UHealthComponent* UpdatedHealthComponent) {
}

UAnimMontage* UZombieAnimationInstance::GetZombieDeathAnimation() const {
    return NULL;
}

AAIZombieCharacter* UZombieAnimationInstance::GetZombieCharacter() const {
    return NULL;
}

ACharacter* UZombieAnimationInstance::GetCharacter() const {
    return NULL;
}

void UZombieAnimationInstance::EndFallingDistanceCheck() {
}


