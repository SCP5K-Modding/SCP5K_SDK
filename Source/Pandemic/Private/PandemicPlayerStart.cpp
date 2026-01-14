#include "PandemicPlayerStart.h"

APandemicPlayerStart::APandemicPlayerStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnType = EPlayerSpawnType::Default;
    this->Team = 0;
    this->bUseCustomSpawnDelayTime = false;
    this->CustomSpawnDelayTime = 6.00f;
    this->bWasRecentlyUsed = false;
    this->bIsLocked = false;
}

void APandemicPlayerStart::OnUse() {
}

bool APandemicPlayerStart::IsVisibleByPlayers(const TArray<APandemicPlayerState*> Players) const {
    return false;
}


