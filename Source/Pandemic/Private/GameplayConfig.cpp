#include "GameplayConfig.h"

FGameplayConfig::FGameplayConfig() {
    this->bOverrideDefaults = false;
    this->RecoilMultiplier = 0.00f;
    this->SpreadMultiplier = 0.00f;
    this->bCanSprint = false;
    this->MovementSpeedMultiplier = 0.00f;
    this->CharacterDamageMultiplier = 0.00f;
    this->CharacterHealthMultiplier = 0.00f;
    this->bForceFreeAimMultiplier = false;
    this->FreeAimMultiplier = 0.00f;
    this->ADSFreeAimMultiplier = 0.00f;
    this->bForceCanReloadWhileAiming = false;
    this->bForceNoReloadWhileSprinting = false;
    this->ReloadSpeedMultiplier = 0.00f;
    this->ADSSpeedMultiplier = 0.00f;
    this->SmoothAimMultiplier = 0.00f;
    this->bCanADSInNightVision = false;
    this->bCanBracedAim = false;
}

