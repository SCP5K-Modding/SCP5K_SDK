#include "GameUIState.h"

FGameUIState::FGameUIState() {
    this->bWantsRemoveHUD = false;
    this->bWantsFade = false;
    this->bWantsMusic = false;
    this->bWantsLockedInput = false;
    this->UIBehavior = EGameUIBehavior::None;
}

