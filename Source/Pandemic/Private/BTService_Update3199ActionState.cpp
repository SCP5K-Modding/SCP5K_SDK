#include "BTService_Update3199ActionState.h"

UBTService_Update3199ActionState::UBTService_Update3199ActionState() {
    this->NodeName = TEXT("Update SCP3199 Action State");
    this->bUseCeaseRelevant = false;
    this->BecomeRelevantActionState = ESCP3199ActionState::CalmIdle;
    this->CeaseRelevantActionState = ESCP3199ActionState::CalmIdle;
}


