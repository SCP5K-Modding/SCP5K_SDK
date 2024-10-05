#include "3199NavmeshWorldData.h"

F3199NavmeshWorldData::F3199NavmeshWorldData() {
    this->Current3199ActionState = ESCP3199ActionState::CalmIdle;
    this->GeneralSightLineCost = 0.00f;
    this->DirectSightLineCost = 0.00f;
    this->DirectSightLineDot = 0.00f;
    this->NearProximityCost = 0.00f;
    this->NearProximityRange = 0.00f;
    this->SightWeight = 0.00f;
    this->ProximityWeight = 0.00f;
    this->InlineWeight = 0.00f;
}

