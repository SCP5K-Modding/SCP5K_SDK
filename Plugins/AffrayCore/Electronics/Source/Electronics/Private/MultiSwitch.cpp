#include "MultiSwitch.h"

AMultiSwitch::AMultiSwitch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RequiredInputs = 2;
    this->bAutoReset = false;
    this->ResetMode = ActivateTimerEachInput;
    this->bResetSwitchesOnClear = true;
    this->bDisableTimerOnEnable = true;
    this->ResetTime = 10.00f;
}

void AMultiSwitch::SetTimer() {
}

float AMultiSwitch::GetTimeTillReset() const {
    return 0.0f;
}

void AMultiSwitch::ClearInputs() {
}

void AMultiSwitch::CheckInputs() {
}


