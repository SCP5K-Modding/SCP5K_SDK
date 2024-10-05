#include "AdaptiveMusicSubsystem.h"

UAdaptiveMusicSubsystem::UAdaptiveMusicSubsystem() {
    this->UpdateDelay = 2.00f;
}

void UAdaptiveMusicSubsystem::StopTrack() {
}

void UAdaptiveMusicSubsystem::RegisterMusicPlayerController(APlayerController* Controller) {
}

void UAdaptiveMusicSubsystem::PlayTrack(UFMODEvent* Track) {
}

void UAdaptiveMusicSubsystem::PlayAreaTrack() {
}

float UAdaptiveMusicSubsystem::GetTeamProximity_Implementation() const {
    return 0.0f;
}

TArray<uint8> UAdaptiveMusicSubsystem::GetSurroundingEnemyTypes_Implementation() const {
    return TArray<uint8>();
}

float UAdaptiveMusicSubsystem::GetIntensityLevel_Implementation() const {
    return 0.0f;
}

float UAdaptiveMusicSubsystem::GetHealth_Implementation() const {
    return 0.0f;
}

float UAdaptiveMusicSubsystem::GetEnemyProximity_Implementation() const {
    return 0.0f;
}

float UAdaptiveMusicSubsystem::GetDangerLevel_Implementation() const {
    return 0.0f;
}

void UAdaptiveMusicSubsystem::ExitArea(AAdaptiveMusicVolume* Area) {
}

void UAdaptiveMusicSubsystem::EnterArea(AAdaptiveMusicVolume* Area) {
}

void UAdaptiveMusicSubsystem::EndEncounter() {
}

void UAdaptiveMusicSubsystem::BeginEncounter(UFMODEvent* Track) {
}


