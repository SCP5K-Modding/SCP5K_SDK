#include "ButtonTextStateOverride.h"

FButtonTextStateOverride::FButtonTextStateOverride() {
    this->bOverrideColour = false;
    this->bOverrideFont = false;
    this->bOverrideTransform = false;
    this->TransformPolicy = ETextTransformPolicy::None;
    this->bOverridePadding = false;
}

