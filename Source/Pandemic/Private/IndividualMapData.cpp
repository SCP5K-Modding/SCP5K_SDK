#include "IndividualMapData.h"

FIndividualMapData::FIndividualMapData() {
    this->bIsLocked = false;
    this->UnlockCondition = EMapUnlockCondition::None;
}

