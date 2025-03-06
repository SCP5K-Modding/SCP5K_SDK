#include "TheatreAnomalyController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIPerceptionComponent -FallbackName=AIPerceptionComponent

ATheatreAnomalyController::ATheatreAnomalyController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception"));
    this->Team = ESAITeam::SCP;
    this->PathIndex = 0;
    this->bIsPathFollowing = false;
    this->bIsInvestigating = false;
    this->CurrentTarget = NULL;
    this->TimeToMove = 2.00f;
    this->Anger = 0.00f;
    this->SoundAnger = 0.02f;
    this->AlertAnger = 0.20f;
    this->TargetVisibleDetectionSpeed = 0.50f;
    this->TargetSightDetectionSpeed = 3.00f;
    this->TargetSightDotThreshold = 0.20f;
    this->TargetUpdateFrequency = 0.25f;
    this->MaxSightTime = 10.00f;
    this->DetectionDecaySpeed = 0.20f;
    this->VisibilityWeight = 4.00f;
    this->DetectionWeight = 2.00f;
    this->CurrentTargetWeight = 4.00f;
    this->CurrentTargetKeyName = TEXT("CurrentTarget");
    this->LastSeenLocationKeyName = TEXT("LastSeenLocation");
    this->LastSensedLocationKeyName = TEXT("LastSensedLocation");
    this->VisibleKeyName = TEXT("IsVisible");
    this->InvestigatingKeyName = TEXT("Investigating");
    this->InvestigatingScreenKeyName = TEXT("InvestigatingScreen");
    this->DetectionKeyName = TEXT("TargetDetection");
    this->PredictedLocationKeyName = TEXT("PredictedLocation");
    this->DistanceKeyName = TEXT("TargetDistance");
}

void ATheatreAnomalyController::TickTargets() {
}

void ATheatreAnomalyController::SetCurrentTarget(AActor* NewTarget) {
}

void ATheatreAnomalyController::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

void ATheatreAnomalyController::OnAISenseSight_Implementation(AActor* Actor, FAIStimulus Stimulus) {
}

void ATheatreAnomalyController::OnAISenseHearing_Implementation(AActor* Actor, FAIStimulus Stimulus) {
}

bool ATheatreAnomalyController::MoveTowardScreen(UTheatreScreenComponent* Target) {
    return false;
}

UTheatreScreenComponent* ATheatreAnomalyController::GetCurrentScreen() const {
    return NULL;
}

float ATheatreAnomalyController::GetAnger() const {
    return 0.0f;
}

bool ATheatreAnomalyController::ForceMoveToScreen(UTheatreScreenComponent* Target) {
    return false;
}

bool ATheatreAnomalyController::FindScreenPath(UTheatreScreenComponent* Target, FScreenPath& Path) {
    return false;
}

UTheatreScreenComponent* ATheatreAnomalyController::FindRandomScreen(int32 SearchDistance) const {
    return NULL;
}

void ATheatreAnomalyController::ExitPatrolPath() {
}

void ATheatreAnomalyController::EnterPatrolPath(UTheatreScreenPatrolPathComponent* NewPatrolPath) {
}

void ATheatreAnomalyController::AlertToScreen(UTheatreScreenComponent* Target, AActor* EventInstigator, FVector Location) {
}

void ATheatreAnomalyController::AddDetection(AActor* Actor, float Amount) {
}


