#include "BTTask_SetSAIState.h"

UBTTask_SetSAIState::UBTTask_SetSAIState() {
    this->NewState = ESAIState::None;
    this->bFailIfAlreadyInState = false;
}


