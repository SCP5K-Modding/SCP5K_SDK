#include "RevealAnimationComponent.h"
#include "Net/UnrealNetwork.h"

URevealAnimationComponent::URevealAnimationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bStartIdle = false;
    this->TriggerableDistance = 1400.00f;
    this->bTriggerWithDirectLineOfSight = false;
    this->CurrentIdleAnimation = -1;
    this->bDisableCollisionDuringAnimation = true;
    this->State = ERevealState::Error;
    this->TriggerState = ERevealTriggerState::Error;
}

void URevealAnimationComponent::WakeAI() const {
}

void URevealAnimationComponent::SetupRevealAnimationComponent() {
}

void URevealAnimationComponent::Server_PlayIdleAnimation(int32 Index) {
}

void URevealAnimationComponent::PlayRevealAnimation(const AActor* Instigator) {
}

void URevealAnimationComponent::PlayIdleAnimationWithTag(const FGameplayTag& Tag) {
}

void URevealAnimationComponent::PlayIdleAnimation() {
}

void URevealAnimationComponent::OnRep_CurrentIdleAnimation(int32 PreviousValue) {
}

void URevealAnimationComponent::OnMontageFinished(UAnimMontage* Montage, bool bInterrupted) {
}

void URevealAnimationComponent::OnActorPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

void URevealAnimationComponent::Multicast_PlayRevealAnimation_Implementation() {
}

bool URevealAnimationComponent::MontageHasSlot(UAnimMontage* Montage, FName SlotName) {
    return false;
}

URevealAnimationComponent* URevealAnimationComponent::GetRevealAnimationComponent(const AActor* Actor) {
    return NULL;
}

FGameplayTag URevealAnimationComponent::GetCurrentIdleAnimationTag() const {
    return FGameplayTag{};
}

int32 URevealAnimationComponent::GetCurrentIdleAnimation() const {
    return 0;
}

void URevealAnimationComponent::EnableCollision() {
}

void URevealAnimationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URevealAnimationComponent, CurrentIdleAnimation);
}


