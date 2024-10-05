#include "InterruptibleAnimComponent.h"

UInterruptibleAnimComponent::UInterruptibleAnimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UInterruptibleAnimComponent::UnblockBehaviour() {
}

void UInterruptibleAnimComponent::PlayBlockingAnimation(UAnimMontage* AnimMontage) {
}

void UInterruptibleAnimComponent::PlayAnimationMontageOnAllClients_Implementation(UAnimMontage* AnimMontage) {
}

bool UInterruptibleAnimComponent::IsBlockingBehaviourTree() const {
    return false;
}

void UInterruptibleAnimComponent::BlockBehaviour(float BlockTime) {
}


