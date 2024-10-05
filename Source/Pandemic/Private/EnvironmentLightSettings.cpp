#include "EnvironmentLightSettings.h"

FEnvironmentLightSettings::FEnvironmentLightSettings() {
    this->bUseDirectionalLight = false;
    this->LightIntensity = 0.00f;
    this->FogLightIntensity = 0.00f;
    this->SunLightIntensity = 0.00f;
    this->SkyLightIntensity = 0.00f;
    this->SunRadius = 0.00f;
    this->SoftSunRadius = 0.00f;
    this->bShadows = false;
}

