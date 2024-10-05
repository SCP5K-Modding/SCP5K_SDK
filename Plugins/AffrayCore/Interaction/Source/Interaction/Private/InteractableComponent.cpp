#include "InteractableComponent.h"
#include "NavAreas/NavArea_Obstacle.h"

UInteractableComponent::UInteractableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShapeBodySetup = NULL;
    this->AreaClass = UNavArea_Obstacle::StaticClass();
    this->PositionWidget = NULL;
    this->InteractableName = TEXT("Interactable");
    this->ActiveState = -1;
    this->InteractionDot = -1.00f;
    this->SecondsToInteract = 0.00f;
    this->InteractionDelay = 0.10f;
}

void UInteractableComponent::Server_Interrupt_Implementation(AActor* EventInstigator) {
}
bool UInteractableComponent::Server_Interrupt_Validate(AActor* EventInstigator) {
    return true;
}

void UInteractableComponent::Server_Interact_Implementation(AActor* EventInstigator) {
}
bool UInteractableComponent::Server_Interact_Validate(AActor* EventInstigator) {
    return true;
}

void UInteractableComponent::Multicast_Interrupt_Implementation(AActor* EventInstigator) {
}

void UInteractableComponent::Multicast_Interact_Implementation(AActor* EventInstigator) {
}

void UInteractableComponent::Interrupt(AActor* EventInstigator) {
}

void UInteractableComponent::Interact(AActor* EventInstigator) {
}

float UInteractableComponent::GetSecondsToInteract() const {
    return 0.0f;
}

float UInteractableComponent::GetInteractionDotProduct() const {
    return 0.0f;
}

TArray<FText> UInteractableComponent::GetInteractableStates() const {
    return TArray<FText>();
}

FText UInteractableComponent::GetInteractableState(int32 Index) const {
    return FText::GetEmpty();
}

FName UInteractableComponent::GetInteractableName() const {
    return NAME_None;
}

int32 UInteractableComponent::GetActiveState() const {
    return 0;
}

void UInteractableComponent::EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

bool UInteractableComponent::CanInteract(AActor* EventInstigator) const {
    return false;
}

bool UInteractableComponent::CanFocus(const AActor* EventInstigator, float Dot) const {
    return false;
}

void UInteractableComponent::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


