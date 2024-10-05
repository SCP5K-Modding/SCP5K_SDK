#include "PostProcessLensFlareAsset.h"

UPostProcessLensFlareAsset::UPostProcessLensFlareAsset() {
    this->FlareIntensity = 1.00f;
    this->FlareGradient = NULL;
    this->GhostIntensity = 1.00f;
    this->GhostChromaShift = 0.01f;
    this->HaloIntensity = 1.00f;
    this->HaloWidth = 0.60f;
    this->HaloMask = 0.50f;
    this->HaloCompression = 0.65f;
    this->HaloChromaShift = 0.01f;
    this->GlareIntensity = 0.02f;
    this->GlareDivider = 60.00f;
    this->GlareLineMask = NULL;
}


