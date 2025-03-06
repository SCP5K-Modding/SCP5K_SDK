#include "RevealAnimationComponent.h"
#include "Net/UnrealNetwork.h"

URevealAnimationComponent::URevealAnimationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->TriggerableDistance = 1400.00f;
    this->bTriggerWithDirectLineOfSight = false;
    this->bStartIdle = false;
    this->CurrentIdleAnimation = -1;
    this->bOverrideIdleAnimation = false;
    this->bAutoInitialize = false;
}

void URevealAnimationComponent::SetTriggerableDistance(float InTriggerableDistance) {
}

void URevealAnimationComponent::SetStartIdle(bool bInStartIdle) {
}

void URevealAnimationComponent::SetOverrideIdleAnimation(FGameplayTag InOverrideAnimationTag) {
}

void URevealAnimationComponent::Server_PlayIdleAnimation(int32 Index) {
}

void URevealAnimationComponent::RunBehaviorTree() {
}

void URevealAnimationComponent::PlayRevealAnimation() {
}

void URevealAnimationComponent::PlayIdleAnimationWithTag(FGameplayTag Tag) {
}

void URevealAnimationComponent::OnRep_CurrentIdleAnimation(int32 PreviousValue) {
}

void URevealAnimationComponent::OnMontageFinished(UAnimMontage* Montage, bool bInterrupted) {
}

void URevealAnimationComponent::OnActorPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

void URevealAnimationComponent::Multicast_PlayRevealAnimation_Implementation() {
}

void URevealAnimationComponent::Multicast_PlayIdleAnimation_Implementation(int32 Index) {
}

bool URevealAnimationComponent::MontageHasSlot(UAnimMontage* Montage, FName SlotName) {
    return false;
}

void URevealAnimationComponent::InitializeRevealAnimation() {
}

URevealAnimationComponent* URevealAnimationComponent::GetRevealAnimationComponent(AActor* Actor) {
    return NULL;
}

int32 URevealAnimationComponent::GetCurrentIdleAnimation() const {
    return 0;
}

void URevealAnimationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URevealAnimationComponent, CurrentIdleAnimation);
}


