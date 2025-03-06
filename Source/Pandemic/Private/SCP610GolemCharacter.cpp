#include "SCP610GolemCharacter.h"

ASCP610GolemCharacter::ASCP610GolemCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SiegeRageLevelLimit = 1;
}

float ASCP610GolemCharacter::GetSiegeRageLevelLimit() const {
    return 0.0f;
}


