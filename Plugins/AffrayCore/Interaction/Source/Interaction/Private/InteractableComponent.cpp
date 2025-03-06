#include "InteractableComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea_Obstacle -FallbackName=NavArea_Obstacle
#include "Net/UnrealNetwork.h"

UInteractableComponent::UInteractableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShapeBodySetup = NULL;
    this->AreaClass = UNavArea_Obstacle::StaticClass();
    this->PositionWidget = NULL;
    this->InteractableName = TEXT("Interactable");
    this->ActiveState = -1;
    this->InteractionDot = -1.00f;
    this->SecondsToInteract = 0.00f;
    this->InteractionDelay = 0.10f;
    this->bCanResumeInteraction = false;
    this->ElapsedInteractionTime = 0.00f;
    this->bCanInteract = true;
    this->bCanBeFocused = true;
    this->bRegisterAsInvestigatable = true;
    this->bRemoveInvestigationOnInteractionOverlap = true;
    this->bUseCustomInvestigationIcon = false;
    this->CustomInvestigationIconDiscoverableDistance = -1.00f;
    this->bIsInvestigatableDiscovered = false;
}

void UInteractableComponent::SetIsInvestigatable(bool IsInvestigatable) {
}

void UInteractableComponent::SetInvestigatableDiscovered(bool IsDiscovered) {
}

void UInteractableComponent::SetCanInteract(bool bNewCanInteract) {
}

void UInteractableComponent::SetCanBeFocused(bool bNewCanBeFocused) {
}

void UInteractableComponent::Server_Interrupt_Implementation(AActor* EventInstigator, float ElapsedTime) {
}
bool UInteractableComponent::Server_Interrupt_Validate(AActor* EventInstigator, float ElapsedTime) {
    return true;
}

void UInteractableComponent::Server_Interact_Implementation(AActor* EventInstigator) {
}
bool UInteractableComponent::Server_Interact_Validate(AActor* EventInstigator) {
    return true;
}

void UInteractableComponent::Multicast_Interrupt_Implementation(AActor* EventInstigator, float ElapsedTime) {
}

void UInteractableComponent::Multicast_InteractionFailed_Implementation(AActor* EventInstigator) {
}

void UInteractableComponent::Multicast_Interact_Implementation(AActor* EventInstigator) {
}

void UInteractableComponent::Interrupt(AActor* EventInstigator, float ElapsedTime) {
}

void UInteractableComponent::Interact(AActor* EventInstigator) {
}

float UInteractableComponent::GetSecondsToInteract() const {
    return 0.0f;
}

float UInteractableComponent::GetInteractionDotProduct() const {
    return 0.0f;
}

TArray<UInteractionComponent*> UInteractableComponent::GetInteractionComponents() const {
    return TArray<UInteractionComponent*>();
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

FVector UInteractableComponent::GetFinalAttachLocation() const {
    return FVector{};
}

float UInteractableComponent::GetElapsedInteractionTime() const {
    return 0.0f;
}

bool UInteractableComponent::GetCanResumeInteraction() const {
    return false;
}

USceneComponent* UInteractableComponent::GetAttachLocation(FVector& Offset) const {
    return NULL;
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

void UInteractableComponent::CancelAllInteractions(AActor* EventInstigator) {
}

void UInteractableComponent::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UInteractableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInteractableComponent, ElapsedInteractionTime);
    DOREPLIFETIME(UInteractableComponent, bCanInteract);
    DOREPLIFETIME(UInteractableComponent, bCanBeFocused);
}


