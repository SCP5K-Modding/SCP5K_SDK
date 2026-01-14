#include "TVComponent.h"

UTVComponent::UTVComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScreenMesh = NULL;
    this->ScreenMaterialIndex = 0;
    this->OffScreenMaterial = NULL;
    this->OnScreenMaterial = NULL;
    this->MediaPlayer = NULL;
    this->Video = NULL;
    this->TurnOnAudioEvent = NULL;
    this->TurnOffAudioEvent = NULL;
    this->FocusCamera = NULL;
    this->bLoopVideo = false;
    this->bFocusCamera = false;
    this->FocusTime = 3.00f;
    this->UnfocusTime = 1.00f;
}

void UTVComponent::UseTV(APlayerController* InstigatingController) {
}

void UTVComponent::UnfocusPlayer(APlayerController* Controller) {
}

void UTVComponent::ToggleScreenMaterial(bool bIsScreenOn) {
}

void UTVComponent::SetScreenMesh(UStaticMeshComponent* Mesh) {
}

void UTVComponent::SetFocusCamera(UCameraComponent* Camera) {
}

void UTVComponent::PlayVideo() {
}

void UTVComponent::OnVideoFinished() {
}

void UTVComponent::FocusPlayer(APlayerController* Controller) {
}


