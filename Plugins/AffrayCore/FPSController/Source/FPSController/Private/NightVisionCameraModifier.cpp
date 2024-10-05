#include "NightVisionCameraModifier.h"

UNightVisionCameraModifier::UNightVisionCameraModifier() {
    this->NightVisionMaterial = NULL;
    this->BloomAmount = 0.50f;
    this->DepthOfFieldAperature = 1.20f;
    this->DepthOfFieldFocalDistance = 1000.00f;
    this->Aberration = 1.00f;
    this->Vignette = 0.50f;
}


