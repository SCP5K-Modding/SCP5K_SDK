#include "FPSDamageType.h"

UFPSDamageType::UFPSDamageType() {
    this->CameraModifier = NULL;
    this->DisplayTimeType = ECameraModifierDisplayTimeType::Exact;
    this->DisplayTime = 3.00f;
    this->DisplayTimeVariationAmount = 0.00f;
    this->MinDisplayTime = 0.00f;
    this->MaxDisplayTime = 3.00f;
    this->AudioEvent = NULL;
    this->Delay = 0.00f;
    this->bIsLooping = false;
}


