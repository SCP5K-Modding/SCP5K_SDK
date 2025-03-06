#include "RageComponent.h"
#include "Net/UnrealNetwork.h"

URageComponent::URageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->DecayInterval = 0.10f;
    this->DecayAmount = 1.00f;
    this->DecayDelayDuration = 3.00f;
    this->FinalRageLimit = 200.00f;
    this->bCanOverrideDefaultRage = false;
    this->CurrentRage = 0.00f;
    this->CurrentLevelNumber = 0;
    this->bShouldDisplayDebug = false;
}

bool URageComponent::TryGetLevelNumberByRageValue(float RageValue, int32& OutRageLevelNumber) const {
    return false;
}

bool URageComponent::TryGetLevelByLevelNumber(int32 LevelNumber, FRageLevel& OutRageLevel) const {
    return false;
}

void URageComponent::SetRageLevels(TArray<FRageLevel> DesiredRageLevels) {
}

void URageComponent::SetCurrentRage(float DesiredRageValue) {
}

void URageComponent::SetCurrentLevelNumber(int32 DesiredNumber) {
}

void URageComponent::ServerStopTimer(FTimerHandle& InputtedTimerHandle) {
}

void URageComponent::ServerStartDecayRageTimer(bool bShouldUseDelay) {
}

void URageComponent::ServerAddRage(float RageToAdd) {
}

void URageComponent::OnRep_CurrentLevelNumber_Implementation() {
}

float URageComponent::GetCurrentRageValue() const {
    return 0.0f;
}

int32 URageComponent::GetCurrentLevelNumber() const {
    return 0;
}

void URageComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URageComponent, CurrentLevelNumber);
}


