#include "Subtitle.h"

FSubtitle::FSubtitle() {
    this->AudibleDistance = 0.00f;
    this->Category = ESubtitleCategory::SC_None;
    this->bIsStoryRelevant = false;
    this->bIsNonPositional = false;
    this->OnScreenIndex = 0;
}

