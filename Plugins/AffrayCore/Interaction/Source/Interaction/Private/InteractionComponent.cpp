#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"

UInteractionComponent::UInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractionDelayTime = 0.40f;
}

void UInteractionComponent::Server_Interrupt_Implementation(AActor* EventInstigator, UInteractableComponent* Interactable) {
}
bool UInteractionComponent::Server_Interrupt_Validate(AActor* EventInstigator, UInteractableComponent* Interactable) {
    return true;
}

void UInteractionComponent::Server_Interact_Implementation(UInteractableComponent* Interactable) {
}
bool UInteractionComponent::Server_Interact_Validate(UInteractableComponent* Interactable) {
    return true;
}

void UInteractionComponent::RegisterInteractable(UInteractableComponent* Interactable) {
}

void UInteractionComponent::Multicast_BroadcastInteractionStarted_Implementation(UInteractableComponent* Interactable) {
}

void UInteractionComponent::Multicast_BroadcastInteractionInterrupted_Implementation(UInteractableComponent* Interactable, AActor* EventInstigator) {
}

void UInteractionComponent::Multicast_BroadcastInteractionFinished_Implementation(UInteractableComponent* Interactable) {
}

bool UInteractionComponent::IsInteractingWith(UInteractableComponent* Interactable) const {
    return false;
}

void UInteractionComponent::Interrupt(AActor* EventInstigator) {
}

void UInteractionComponent::Interact() {
}

float UInteractionComponent::GetTimeUntilInteract() const {
    return 0.0f;
}

void UInteractionComponent::GetKnownInteractables(TArray<UInteractableComponent*>& OutKnownInteractables) const {
}

UInteractableComponent* UInteractionComponent::GetFocusedInteractable() const {
    return NULL;
}

void UInteractionComponent::DeregisterInteractable(UInteractableComponent* Interactable) {
}

void UInteractionComponent::DeferredInteraction(UInteractableComponent* Interactable) {
}

void UInteractionComponent::Client_BroadcastInteractionFinished_Implementation(UInteractableComponent* Interactable) {
}

void UInteractionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInteractionComponent, InteractionDelay);
    DOREPLIFETIME(UInteractionComponent, InteractionTimer);
}


