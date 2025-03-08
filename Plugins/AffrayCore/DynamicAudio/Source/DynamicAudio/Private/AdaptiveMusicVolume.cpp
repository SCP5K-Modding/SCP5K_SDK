#include "AdaptiveMusicVolume.h"

AAdaptiveMusicVolume::AAdaptiveMusicVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->Event = NULL;
    this->Priority = 0;
}

int32 AAdaptiveMusicVolume::GetPriority() const {
    return 0;
}

UFMODEvent* AAdaptiveMusicVolume::GetEvent() const {
    return NULL;
}


