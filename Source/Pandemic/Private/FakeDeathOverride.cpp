#include "FakeDeathOverride.h"

FFakeDeathOverride::FFakeDeathOverride() {
    this->bIsFakeDeathPossible = false;
    this->FakeDeathChance = 0.00f;
    this->FakeDeathHealthPercentageThreshold = 0.00f;
    this->ReanimationStartDelayMin = 0.00f;
    this->ReanimationStartDelayMax = 0.00f;
}

