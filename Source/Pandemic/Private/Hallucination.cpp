#include "Hallucination.h"
#include "Net/UnrealNetwork.h"

UHallucination::UHallucination() {
    this->StartTime = 0.00f;
    this->Duration = -1.00f;
    this->TickInterval = 10.00f;
    this->HallucinationDelay = 0.00f;
}

void UHallucination::OnHallucinationDestroyed_Implementation() {
}

void UHallucination::OnHallucinationAdded_Implementation() {
}

bool UHallucination::IsValidHallucination_Implementation(float DeltaTime) const {
    return false;
}

bool UHallucination::HasHallucinatingController() const {
    return false;
}

float UHallucination::GetTickInterval() const {
    return 0.0f;
}

float UHallucination::GetStartTime() const {
    return 0.0f;
}

UHallucinogenComponent* UHallucination::GetHallucinogenComponent() const {
    return NULL;
}

float UHallucination::GetHallucinationDuration() const {
    return 0.0f;
}

float UHallucination::GetHallucinationDelay() const {
    return 0.0f;
}

APawn* UHallucination::GetHallucinatingPawn() const {
    return NULL;
}

AController* UHallucination::GetHallucinatingController() const {
    return NULL;
}

void UHallucination::Destroy() {
}

void UHallucination::ApplyHallucinationEffects_Implementation(float DeltaTime) {
}

void UHallucination::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHallucination, HallucinatingPawn);
    DOREPLIFETIME(UHallucination, StartTime);
}


