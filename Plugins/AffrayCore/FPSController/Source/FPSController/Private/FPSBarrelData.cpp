#include "FPSBarrelData.h"

UFPSBarrelData::UFPSBarrelData() {
    this->LoudnessMultiplier = 1.00f;
    this->Length = 10.00f;
    this->bIsSuppressed = false;
    this->bIsCompensator = false;
    this->OverrideMuzzleFlashParticle = NULL;
}


