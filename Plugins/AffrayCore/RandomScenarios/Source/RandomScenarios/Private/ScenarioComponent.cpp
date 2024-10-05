#include "ScenarioComponent.h"
#include "Net/UnrealNetwork.h"

UScenarioComponent::UScenarioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->bEnabled = false;
    this->bIsManaged = true;
    this->bForceObjectsStationary = true;
}

void UScenarioComponent::SetScenarioEnabled(bool bNewEnabled) {
}

void UScenarioComponent::OnRep_Enabled() {
}

bool UScenarioComponent::GetEnabled() const {
    return false;
}

void UScenarioComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UScenarioComponent, bEnabled);
}


