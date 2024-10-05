#include "ObjectiveGameAction.h"

UObjectiveGameAction::UObjectiveGameAction() {
    this->Action = EObjectiveTriggerAction::Complete;
    this->bSucceed = true;
    this->bCompleteEvenIfNotActivated = false;
    this->bStart = false;
    this->bDisplayOnUI = true;
    this->bReset = false;
}


