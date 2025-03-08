#include "DynamicAudioVolume.h"

ADynamicAudioVolume::ADynamicAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
}

void ADynamicAudioVolume::PlayerLeftTrigger_Implementation(APawn* Pawn, bool bIsLocalPlayer) {
}

void ADynamicAudioVolume::PlayerEnteredTrigger_Implementation(APawn* Pawn, bool bIsLocalPlayer) {
}

void ADynamicAudioVolume::OtherLeftTrigger_Implementation(APawn* Pawn) {
}

void ADynamicAudioVolume::OtherEnteredTrigger_Implementation(APawn* Pawn) {
}

void ADynamicAudioVolume::OnPlayerUnpossessed(APawn* Pawn) {
}

void ADynamicAudioVolume::OnPlayerPossessed(APawn* Pawn) {
}


