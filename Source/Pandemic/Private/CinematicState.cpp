#include "CinematicState.h"

FCinematicState::FCinematicState() {
    this->bIsInCinematic = false;
    this->bIsSkippable = false;
    this->Duration = 0.00f;
    this->LevelSequenceActor = NULL;
    this->bLocalHasSkippedCinematic = false;
}

