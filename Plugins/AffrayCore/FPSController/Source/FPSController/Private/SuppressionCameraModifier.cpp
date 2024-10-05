#include "SuppressionCameraModifier.h"

USuppressionCameraModifier::USuppressionCameraModifier() {
    this->SuppressionMaterial = NULL;
    this->MaxSuppression = 20.00f;
    this->AberrationIntensity = 2.00f;
    this->BloomIntensity = 1.00f;
    this->VignetteIntensity = 2.00f;
    this->DepthOfFieldAperature = 2.00f;
    this->DepthOfFieldFocalDistance = 300.00f;
    this->DepthBlurDistance = 0.20f;
    this->DepthBlurSuppressionLevel = 10.00f;
}


