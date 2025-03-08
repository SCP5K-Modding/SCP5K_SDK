#include "AmbientAudioComponent.h"

UAmbientAudioComponent::UAmbientAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Controller = NULL;
    this->Pawn = NULL;
    this->CurrentAudioVolume = NULL;
}

void UAmbientAudioComponent::OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UAmbientAudioComponent::OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UAmbientAudioComponent::Initialize() {
}


