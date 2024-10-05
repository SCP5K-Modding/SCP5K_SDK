#include "SCP173HallucinogenComponent.h"
#include "Net/UnrealNetwork.h"

USCP173HallucinogenComponent::USCP173HallucinogenComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HallucinationAdditionInterval = 8.00f;
    this->SeverityCurve = NULL;
}

void USCP173HallucinogenComponent::PlaySound(ESCP173HallucinationSeverity SoundType, const FVector& TargetLocation) {
}

void USCP173HallucinogenComponent::OnRep_SoundsToPlay() {
}

void USCP173HallucinogenComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USCP173HallucinogenComponent, SoundsToPlay);
}


