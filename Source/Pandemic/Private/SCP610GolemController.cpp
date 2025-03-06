#include "SCP610GolemController.h"

ASCP610GolemController::ASCP610GolemController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SiegeRageLimitKeyName = TEXT("SiegeRageLevelLimit");
    this->GolemCharacter = NULL;
}


