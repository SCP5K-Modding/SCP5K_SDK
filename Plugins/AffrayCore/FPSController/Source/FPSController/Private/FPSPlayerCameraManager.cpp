#include "FPSPlayerCameraManager.h"

AFPSPlayerCameraManager::AFPSPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
}

void AFPSPlayerCameraManager::OnVideoSettingsUpdated(EVideoSetting Setting) {
}


