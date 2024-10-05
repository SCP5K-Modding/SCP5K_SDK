#include "PartyController.h"

APartyController::APartyController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAttachToPawn = true;
    this->CurrentTarget = NULL;
    this->AlertThreshold = 3.00f;
    this->InvestigateThreshold = 1.00f;
    this->MaxDetectionLevel = 10.00f;
    this->DetectionCooldownSpeed = 0.20f;
    this->InvestigateLoudnessThreshold = 0.50f;
    this->bInvestigating = false;
    this->DetectionLevel = 0.00f;
}

void APartyController::StopMoving() {
}

void APartyController::StopInvestigating_Implementation() {
}

void APartyController::StartInvestigating(FVector position) {
}

void APartyController::SetDetectionLevel(float Level) {
}

void APartyController::OnSeePawn_Implementation(APawn* SeenPawn) {
}

void APartyController::OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

void APartyController::OnEndSeePawn_Implementation(APawn* SeenPawn) {
}

FVector APartyController::Investigate_Implementation(FVector position) {
    return FVector{};
}

TArray<APawn*> APartyController::GetSeenTargets() {
    return TArray<APawn*>();
}

AParty* APartyController::GetParty() const {
    return NULL;
}

float APartyController::GetMaxDetectionLevel() const {
    return 0.0f;
}

FVector APartyController::GetInvestigatingPosition() const {
    return FVector{};
}

float APartyController::GetInvestigateThreshold() const {
    return 0.0f;
}

float APartyController::GetDetectionLevel() const {
    return 0.0f;
}

APawn* APartyController::GetCurrentTarget() const {
    return NULL;
}

float APartyController::GetCooldownSpeed() const {
    return 0.0f;
}

APawn* APartyController::GetClosest(TArray<APawn*> Targets) {
    return NULL;
}

float APartyController::GetAlertThreshold() const {
    return 0.0f;
}

bool APartyController::GeneratePath(FVector Destination, EHordeAgentMovementMode MovementMode) {
    return false;
}

void APartyController::Alert_Implementation() {
}


