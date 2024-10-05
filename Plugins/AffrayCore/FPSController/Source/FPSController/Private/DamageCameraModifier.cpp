#include "DamageCameraModifier.h"

UDamageCameraModifier::UDamageCameraModifier() {
    this->VignetteAmount = 0.60f;
    this->AberrationAmount = 1.50f;
}

float UDamageCameraModifier::GetAlpha() const {
    return 0.0f;
}


