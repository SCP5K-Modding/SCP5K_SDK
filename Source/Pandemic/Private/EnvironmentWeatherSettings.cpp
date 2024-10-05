#include "EnvironmentWeatherSettings.h"

FEnvironmentWeatherSettings::FEnvironmentWeatherSettings() {
    this->CloudCoverage = 0.00f;
    this->Wetness = 0.00f;
    this->FogMax = 0.00f;
    this->FogDensityLower = 0.00f;
    this->LowerFogExponent = 0.00f;
    this->FogDensityGlobal = 0.00f;
    this->WindIntensity = 0.00f;
    this->bRaining = false;
    this->bLimitFogToSkybox = false;
    this->DepthBlurRadius = 0.00f;
    this->DepthBlurDistance = 0.00f;
}

