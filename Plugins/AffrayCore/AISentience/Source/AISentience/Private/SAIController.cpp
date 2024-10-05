#include "SAIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "SAIPathFollowingComponent.h"

ASAIController::ASAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USAIPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception"));
    this->bWantsInvestigating = false;
    this->Alertness = 0.00f;
    this->bLockCurrentTarget = false;
    this->bUseFocus = true;
    this->bDestroyOnUnPossess = true;
    this->LightManager = NULL;
    this->DistanceThreatAmount = 0.50f;
    this->DamageThreatAmount = 0.10f;
    this->SuppressionThreatAmount = 1.00f;
    this->ThreatDecaySpeed = 0.20f;
    this->TargetVisibleWeight = 3.00f;
    this->TargetDistanceWeight = 1.00f;
    this->TargetDamageWeight = 0.01f;
    this->TargetThreatWeight = 1.00f;
    this->TargetPrejudiceWeight = 0.20f;
    this->TargetTimeWeight = 0.50f;
    this->TargetPlayerWeight = 0.20f;
    this->MinDetectionSightTime = 1.00f;
    this->MaxSightTime = 10.00f;
    this->DetectionDecaySpeed = 0.50f;
    this->AlertnessDecaySpeed = 0.50f;
    this->PrejudiceDecaySpeed = 0.10f;
    this->DamagePrejudiceAmount = 0.02f;
    this->VisibilityPrejudiceAmount = 0.20f;
    this->TargetedPrejudiceAmount = 0.20f;
    this->MinAlertness = 4.00f;
    this->MaxAlertness = 15.00f;
    this->TargetUpdateFrequency = 0.50f;
    this->MaxSightDistance = 10000.00f;
    this->DetectionAlertnessWeight = 0.03f;
    this->SuppressionDetectionAmount = 3.00f;
    this->MinFriendlySoundRadius = 1500.00f;
    this->CurrentTargetKeyName = TEXT("CurrentTarget");
    this->LastSeenLocationKeyName = TEXT("LastSeenLocation");
    this->LastSensedLocationKeyName = TEXT("LastSensedLocation");
    this->LocationKeyName = TEXT("Location");
    this->VisibleKeyName = TEXT("IsVisible");
    this->InvestigatingKeyName = TEXT("Investigating");
    this->InvestigatingLocationKeyName = TEXT("InvestigatingLocation");
    this->LatestSoundAgeKeyName = TEXT("LatestSoundAge");
    this->ThreatKeyName = TEXT("TargetThreat");
    this->SightDotKeyName = TEXT("TargetSightDot");
    this->CanSeeAgentKeyName = TEXT("TargetCanSeeAgent");
    this->MaxThreatKeyName = TEXT("TargetMaxThreat");
    this->AlertnessKeyName = TEXT("Alertness");
    this->DetectionKeyName = TEXT("TargetDetection");
    this->TargetHealthKeyName = TEXT("TargetHealth");
    this->HealthKeyName = TEXT("Health");
    this->PredictedLocationKeyName = TEXT("PredictedLocation");
    this->TimeSinceSawTargetKeyName = TEXT("TimeSinceSawTarget");
    this->DistanceKeyName = TEXT("TargetDistance");
    this->Team = ESAITeam::NoTeam;
    this->MinSoundLocationUpdatePriority = ESAISoundType::FriendlyAttack;
    this->MinSoundSwitchAge = 7.00f;
    this->bEnableCrowdSimulation = false;
    this->bEnableSlowDownAtGoal = true;
    this->bEnableCrowdSeparation = true;
    this->bEnableCrowdObstacleAvoidance = true;
    this->bEnableCrowdAnticipateTurns = true;
    this->bEnableCrowdOptimizeVisibility = true;
    this->bEnableCrowdPathOffset = true;
    this->CrowdSeparationWeight = 1.00f;
}

void ASAIController::UpdateCurrentTarget_Implementation(AActor* NewTarget, bool bLockTarget) {
}

void ASAIController::UpdateBlackBoardParameters_Implementation() {
}

void ASAIController::UnIgnoreTarget(AActor* Actor) {
}

void ASAIController::TickTargets() {
}

void ASAIController::StopInvestigating_Implementation() {
}

void ASAIController::StartInvestigating_Implementation(FSAISound& NewSound) {
}

void ASAIController::StartIdle(ESAIState PreviousState) {
}

bool ASAIController::SetState(ESAIState NewState) {
    return false;
}

AActor* ASAIController::PickTarget() const {
    return NULL;
}

void ASAIController::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

void ASAIController::OnAISenseSuppression_Implementation(AActor* Actor, FVector Location, bool bSuperSonic) {
}

void ASAIController::OnAISenseSight_Implementation(AActor* Actor, FAIStimulus Stimulus) {
}

void ASAIController::OnAISenseHearing_Implementation(AActor* Actor, FAIStimulus Stimulus) {
}

void ASAIController::OnAISenseDamage_Implementation(AActor* Actor, FAIStimulus Stimulus) {
}

bool ASAIController::IsTargetDead(AActor* Actor) const {
    return false;
}

bool ASAIController::IsInvestigating() const {
    return false;
}

bool ASAIController::IsAlert() const {
    return false;
}


void ASAIController::IgnoreTarget(AActor* Actor) {
}

bool ASAIController::HasCurrentTarget() const {
    return false;
}

float ASAIController::GetTargetStrength(AActor* Actor, float& LightStrength, float& DistanceStrength) {
    return 0.0f;
}

float ASAIController::GetTargetScore(FSAITarget Target, float Factor) const {
    return 0.0f;
}

TArray<FSAITarget> ASAIController::GetTargets() const {
    return TArray<FSAITarget>();
}

bool ASAIController::GetTargetRef(AActor* Actor, FSAITarget& Target) const {
    return false;
}

ESAIState ASAIController::GetState() const {
    return ESAIState::None;
}

TArray<AActor*> ASAIController::GetIgnoredTargets() const {
    return TArray<AActor*>();
}

AActor* ASAIController::GetCurrentTarget() const {
    return NULL;
}

void ASAIController::EndIdle(ESAIState NewState) {
}

TEnumAsByte<ETeamAttitude::Type> ASAIController::BlueprintGetTeamAttitudeTowards(const AActor* Other) const {
    return ETeamAttitude::Friendly;
}

void ASAIController::AddTarget(FSAITarget Target) {
}

void ASAIController::AddDetection(AActor* Actor, float Amount) {
}

void ASAIController::AddAlertness(float Amount) {
}


