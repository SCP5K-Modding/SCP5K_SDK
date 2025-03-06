#include "DoorAttackComponent.h"

UDoorAttackComponent::UDoorAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerAttackComponent = NULL;
    this->PathFollowingComponent = NULL;
}

void UDoorAttackComponent::OnAttackEnd(USAIAttackComponent* AttackComponent, const AActor* Target, const USAIAttack* Attack, const uint8 AttackIndex) {
}


