#include "AdaptiveMusicSubsystem.h"

UAdaptiveMusicSubsystem::UAdaptiveMusicSubsystem() {
    this->UpdateInterval = 2.00f;
}

void UAdaptiveMusicSubsystem::UpdateAreaTrack() {
}

void UAdaptiveMusicSubsystem::StartCustomTrack(UFMODEvent* Track, EAdaptiveMusicCustomTrackPriority Priority) {
}

void UAdaptiveMusicSubsystem::SetPlayerSuppression(float InSuppression) {
}

void UAdaptiveMusicSubsystem::SetObjectivePositions(const TArray<FVector>& NewObjectivePositions) {
}

void UAdaptiveMusicSubsystem::SetObjectivePosition(FVector NewObjectivePosition) {
}

void UAdaptiveMusicSubsystem::SetEncounterStage(EAdaptiveMusicEncounterStage NewEncounterStage) {
}

void UAdaptiveMusicSubsystem::SetClosestEnemyDistance(float InEnemyDistance) {
}

void UAdaptiveMusicSubsystem::RegisterMusicPlayerController(APlayerController* Controller) {
}

float UAdaptiveMusicSubsystem::GetTeamProximity() const {
    return 0.0f;
}

TArray<uint8> UAdaptiveMusicSubsystem::GetSurroundingEnemyTypes() const {
    return TArray<uint8>();
}

float UAdaptiveMusicSubsystem::GetSuppression() const {
    return 0.0f;
}

float UAdaptiveMusicSubsystem::GetObjectiveProximity() const {
    return 0.0f;
}

float UAdaptiveMusicSubsystem::GetObjectiveDistance() const {
    return 0.0f;
}

float UAdaptiveMusicSubsystem::GetIntensityLevel() const {
    return 0.0f;
}

float UAdaptiveMusicSubsystem::GetHealth() const {
    return 0.0f;
}

float UAdaptiveMusicSubsystem::GetEnemyProximity() const {
    return 0.0f;
}

float UAdaptiveMusicSubsystem::GetEnemyDistance() const {
    return 0.0f;
}

EAdaptiveMusicEncounterStage UAdaptiveMusicSubsystem::GetEncounterStage() const {
    return EAdaptiveMusicEncounterStage::None;
}

float UAdaptiveMusicSubsystem::GetDangerLevel() const {
    return 0.0f;
}

void UAdaptiveMusicSubsystem::ExitArea(AAdaptiveMusicVolume* Area) {
}

void UAdaptiveMusicSubsystem::EnterArea(AAdaptiveMusicVolume* Area) {
}

void UAdaptiveMusicSubsystem::EndEncounter(UFMODEvent* Track) {
}

bool UAdaptiveMusicSubsystem::EndCustomTrack(UFMODEvent* Track) {
    return false;
}

void UAdaptiveMusicSubsystem::EndCurrentEncounter() {
}

void UAdaptiveMusicSubsystem::EndCurrentCustomTrackWithPriority(EAdaptiveMusicCustomTrackPriority Priority) {
}

void UAdaptiveMusicSubsystem::BeginEncounter(UFMODEvent* Track) {
}

void UAdaptiveMusicSubsystem::AddObjectivePosition(FVector NewObjectivePosition) {
}


