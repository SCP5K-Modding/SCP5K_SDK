#include "AnimNotifyState_SetMovementMode.h"

UAnimNotifyState_SetMovementMode::UAnimNotifyState_SetMovementMode() {
    this->bResetMovementModeAtEnd = true;
    this->MovementMode = MOVE_None;
    this->CustomMovementMode = 0;
}


