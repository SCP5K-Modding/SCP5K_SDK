#include "AnimInteractionComponent.h"
#include "Net/UnrealNetwork.h"

UAnimInteractionComponent::UAnimInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UAnimInteractionComponent::SetInteractions(const TMap<FGameplayTag, FAnimInteraction>& InInteractions) {
}

void UAnimInteractionComponent::OnRep_ReplicatedInteractions() {
}

bool UAnimInteractionComponent::GetInteraction(FGameplayTag AnimationTag, FAnimInteraction& OutInteraction) const {
    return false;
}

void UAnimInteractionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAnimInteractionComponent, ReplicatedInteractions);
}


