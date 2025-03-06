#include "SAIAttack.h"

USAIAttack::USAIAttack() {
    this->OwningComponent = NULL;
    this->MeshComponent = NULL;
    this->TimeSinceAttackStarted = 0.00f;
    this->TimeSinceLastTick = 0.00f;
    this->LastFinishedAttackTime = 0.00f;
    this->AttackRegionStartTime = 0.00f;
    this->AttackRegionDuration = 0.00f;
    this->bIsInAttackRegion = true;
    this->Damage = 100.00f;
    this->DamageType = NULL;
    this->bCanDamageFriendlies = false;
    this->bPlayMontage = false;
    this->bCancelOnMontageInterrupt = true;
    this->MontageToPlay = NULL;
    this->bCancelOnReceiveDamage = false;
    this->TickInterval = 0.00f;
    this->bDisablePathfindingDuringAttack = true;
    this->bCalculateAttackLocationPerRegion = true;
    this->bStartInAttackRegion = false;
    this->bUseFinishAttackTime = true;
    this->FinishAttackTime = 1.00f;
    this->bLeadAttack = false;
    this->LeadTime = 0.10f;
}

bool USAIAttack::ShouldTick_Implementation(float DeltaTime) {
    return false;
}

void USAIAttack::ServerTickAttack_Implementation(USAIAttackComponent* Component, float DeltaTime) {
}

void USAIAttack::ServerStartAttack_Implementation(USAIAttackComponent* Component, const AActor* Target, const FVector& TargetLocation) {
}

void USAIAttack::ServerInitAttack_Implementation(USAIAttackComponent* Component) {
}

void USAIAttack::ServerFinishAttack_Implementation(USAIAttackComponent* Component) {
}

void USAIAttack::ServerEndAttackRegion_Implementation() {
}

void USAIAttack::ServerCancelAttack_Implementation(USAIAttackComponent* Component) {
}

void USAIAttack::ServerBeginAttackRegion_Implementation(float TotalDuration) {
}

void USAIAttack::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

bool USAIAttack::HasAuthority() const {
    return false;
}

FVector USAIAttack::GetTargetLocation() const {
    return FVector{};
}

AActor* USAIAttack::GetTarget() const {
    return NULL;
}

FVector USAIAttack::GetSourceLocation_Implementation(const USAIAttackComponent* Component, const AActor* TargetActor, int32 Index) const {
    return FVector{};
}

USAIAttackComponent* USAIAttack::GetOwningComponent() const {
    return NULL;
}

USkeletalMeshComponent* USAIAttack::GetMeshComponent() const {
    return NULL;
}

float USAIAttack::GetAttackScore_Implementation(USAIAttackComponent* Component, AActor* TargetActor) const {
    return 0.0f;
}

FAttackRequirements USAIAttack::GetAttackRequirements() const {
    return FAttackRequirements{};
}

float USAIAttack::GetAttackRegionTimeElapsed() const {
    return 0.0f;
}

float USAIAttack::GetAttackRegionFraction() const {
    return 0.0f;
}

void USAIAttack::DrawAttackDebug_Implementation(USAIAttackComponent* Component, AActor* TargetActor, float DrawTime, bool bPersistent) {
}

void USAIAttack::ClientTickAttack_Implementation(USAIAttackComponent* Component, float DeltaTime) {
}

void USAIAttack::ClientStartAttack_Implementation(const USAIAttackComponent* Component, const AActor* Target, const FVector& TargetLocation) {
}

void USAIAttack::ClientInitAttack_Implementation(USAIAttackComponent* Component) {
}

void USAIAttack::ClientFinishAttack_Implementation(USAIAttackComponent* Component) {
}

void USAIAttack::ClientEndAttackRegion_Implementation() {
}

void USAIAttack::ClientCancelAttack_Implementation(USAIAttackComponent* Component) {
}

void USAIAttack::ClientBeginAttackRegion_Implementation(float TotalDuration) {
}

bool USAIAttack::CanUseAttackTargetingLocation_Implementation(USAIAttackComponent* Component, const FVector& TargetLocation) const {
    return false;
}

bool USAIAttack::CanUseAttackIfStopped_Implementation(const USAIAttackComponent* Component, const AActor* TargetActor) const {
    return false;
}

bool USAIAttack::CanUseAttack_Implementation(const USAIAttackComponent* Component, const AActor* TargetActor) const {
    return false;
}

bool USAIAttack::CanDamage_Implementation(AActor* Target) const {
    return false;
}


