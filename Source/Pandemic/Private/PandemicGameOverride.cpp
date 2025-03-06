#include "PandemicGameOverride.h"

FPandemicGameOverride::FPandemicGameOverride() {
    this->bIsValid = false;
    this->ObjectiveManagerClass = NULL;
    this->bOverrideMissionEndMusic = false;
    this->MissionSuccessMusic = NULL;
    this->MissionFailedMusic = NULL;
}

