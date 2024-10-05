#include "TheatreAnomalyTarget.h"

FTheatreAnomalyTarget::FTheatreAnomalyTarget() {
    this->Target = NULL;
    this->DetectionLevel = 0.00f;
    this->SmoothDetectionLevel = 0.00f;
    this->bCurrentlyVisible = false;
}

