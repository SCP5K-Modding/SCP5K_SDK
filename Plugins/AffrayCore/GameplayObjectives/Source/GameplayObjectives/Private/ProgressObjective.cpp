#include "ProgressObjective.h"
#include "Net/UnrealNetwork.h"

UProgressObjective::UProgressObjective() {
    this->CurrentProgress = 0.00f;
}

void UProgressObjective::SetProgress(float NewProgress) {
}

void UProgressObjective::OnRep_CurrentProgress() {
}

float UProgressObjective::GetProgress() const {
    return 0.0f;
}

void UProgressObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UProgressObjective, CurrentProgress);
}


