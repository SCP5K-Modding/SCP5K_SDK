#include "FPSPlayerControllerBase.h"
#include "FPSPlayerCameraManager.h"

AFPSPlayerControllerBase::AFPSPlayerControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = AFPSPlayerCameraManager::StaticClass();
    this->bAutoManageActiveCameraTarget = false;
    this->ClickEventKeys.AddDefaulted(1);
    this->LookSensitivity = 1.00f;
    this->LookSensitivityMultiplier = 1.00f;
    this->bToggleSprint = false;
    this->bToggleCrouch = false;
    this->bToggleAim = false;
    this->bToggleLean = false;
    this->bToggleLowReady = false;
    this->bToggleBracedAim = false;
    this->bIsInputEnabled = true;
    this->bInvertHorizontalLook = false;
    this->bInvertVerticalLook = false;
    this->FPSCharacterBase = NULL;
    this->AITeam = 0;
    this->LastActionTimestamp = 0;
}

void AFPSPlayerControllerBase::UpdateCameraTarget_Implementation() {
}

ASpectatorPawn* AFPSPlayerControllerBase::Spectate() {
    return NULL;
}

void AFPSPlayerControllerBase::SetTeam(uint8 NewTeam) {
}

void AFPSPlayerControllerBase::SetLookY(float InLookY) {
}

void AFPSPlayerControllerBase::SetLookX(float InLookX) {
}

void AFPSPlayerControllerBase::ServerSetLookY_Implementation(uint8 InLookY) {
}

void AFPSPlayerControllerBase::ServerSetLookX_Implementation(uint8 InLookX) {
}




void AFPSPlayerControllerBase::PlayerStateUpdated_Implementation() {
}

float AFPSPlayerControllerBase::GetVerticalSensitivity() {
    return 0.0f;
}

float AFPSPlayerControllerBase::GetLookY() const {
    return 0.0f;
}

float AFPSPlayerControllerBase::GetLookX() const {
    return 0.0f;
}

float AFPSPlayerControllerBase::GetHorizontalSensitivity() {
    return 0.0f;
}

bool AFPSPlayerControllerBase::CanUseCosmetic_Implementation(int32 Index, FFPSCosmetic Cosmetic) {
    return false;
}


