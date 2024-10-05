#include "SAIMeleeComponent.h"
#include "Net/UnrealNetwork.h"

USAIMeleeComponent::USAIMeleeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttackDamageType = NULL;
    this->DetectableObjectTypes.AddDefaulted(1);
    this->bWasAttacking = false;
    this->bWantsAttack = false;
    this->bIsAttacking = false;
    this->CurrentAttackTimer = 0.00f;
    this->AttackDamageWeight = 0.02f;
    this->AttackDirectionWeight = 1.00f;
    this->AttackRandomWeight = 0.50f;
}

bool USAIMeleeComponent::StartAttack(const TEnumAsByte<EMeleeAttackDirection>& Direction, uint8 AttackIndex, bool bForceAttack) {
    return false;
}

uint8 USAIMeleeComponent::PickAttack(const AActor* TargetActor) const {
    return 0;
}

void USAIMeleeComponent::OnRep_MeleeHitData() {
}

bool USAIMeleeComponent::IsActorDead(AActor* InputtedActor) const {
    return false;
}

TEnumAsByte<EMeleeAttackDirection> USAIMeleeComponent::GetIdealAttackDirection(const AActor* Actor) const {
    return AD_None;
}

FVector USAIMeleeComponent::GetAttackVector(const TEnumAsByte<EMeleeAttackDirection>& Direction, bool bUseControlRotation) {
    return FVector{};
}

void USAIMeleeComponent::CosmeticAttackHitActor(TEnumAsByte<EMeleeAttackDirection> Direction, USceneComponent* HitComponent, uint8 AttackIndex) {
}

void USAIMeleeComponent::CosmeticAttackFinished(TEnumAsByte<EMeleeAttackDirection> Direction, USceneComponent* HitComponent, uint8 AttackIndex) {
}

void USAIMeleeComponent::CosmeticAttackCanceled(TEnumAsByte<EMeleeAttackDirection> Direction, USceneComponent* HitComponent, uint8 AttackIndex) {
}

void USAIMeleeComponent::CosmeticAttack(TEnumAsByte<EMeleeAttackDirection> Direction, uint8 AttackIndex) {
}

bool USAIMeleeComponent::CanStartAttack(const FAIMeleeAttackType& NewAttack, const TEnumAsByte<EMeleeAttackDirection>& AttackDirection, float TargetDistance, float CurrentSpeedSquared) const {
    return false;
}

void USAIMeleeComponent::CancelAttack() {
}

bool USAIMeleeComponent::Attack(const TEnumAsByte<EMeleeAttackDirection>& Direction, FMeleeHitData& HitData) {
    return false;
}

void USAIMeleeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USAIMeleeComponent, MeleeHitData);
}


