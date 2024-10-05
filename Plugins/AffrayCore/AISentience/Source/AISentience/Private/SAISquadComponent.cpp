#include "SAISquadComponent.h"

USAISquadComponent::USAISquadComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSuppressDamageableWarning = false;
}

void USAISquadComponent::ServerLeaveSquad_Implementation() {
}

void USAISquadComponent::ServerJoinSquad_Implementation(FGuid NewSquadID, bool bAsSquadLeader) {
}

void USAISquadComponent::MulticastSquadChanged_Implementation(FGuid NewSquadID, bool bAsSquadLeader) {
}

bool USAISquadComponent::IsSquadLeader() const {
    return false;
}

bool USAISquadComponent::IsDead() const {
    return false;
}

APawn* USAISquadComponent::GetPawn() const {
    return NULL;
}

USAISquadComponent* USAISquadComponent::GetLeader() const {
    return NULL;
}

AController* USAISquadComponent::GetController() const {
    return NULL;
}

void USAISquadComponent::GetAllVisibleSquadMembers(float VisionCone, TArray<USAISquadComponent*>& OutVisibleSquadMembers) const {
}


