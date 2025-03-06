#include "PandemicPlayerStart.h"

APandemicPlayerStart::APandemicPlayerStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnType = EPlayerSpawnType::Default;
    this->Team = 0;
}


