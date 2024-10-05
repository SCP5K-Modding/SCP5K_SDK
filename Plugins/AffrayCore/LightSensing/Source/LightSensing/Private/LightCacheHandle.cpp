#include "LightCacheHandle.h"

FLightCacheHandle::FLightCacheHandle() {
    this->LastIntensity = 0.00f;
    this->CurrentIntensity = 0.00f;
    this->Subject = NULL;
    this->bDeleteOnZeroUsers = false;
}

