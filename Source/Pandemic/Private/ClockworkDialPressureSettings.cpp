#include "ClockworkDialPressureSettings.h"

FClockworkDialPressureSettings::FClockworkDialPressureSettings() {
    this->DialSetting = EClockworkDialSetting::DS_Rough;
    this->TokenCost = 0;
    this->BasePressure = 0.00f;
    this->PressureIncrementation = 0.00f;
    this->CurrentPressure = 0.00f;
}

