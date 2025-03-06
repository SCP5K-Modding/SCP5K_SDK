#include "SAIDirection.h"

USAIDirection::USAIDirection() {
    this->ExecutionDelay = 0.00f;
}


AActor* USAIDirection::GetOwningActor() const {
    return NULL;
}

TArray<AAIController*> USAIDirection::GetControllersFromPawns(TArray<APawn*> Pawns) {
    return TArray<AAIController*>();
}


