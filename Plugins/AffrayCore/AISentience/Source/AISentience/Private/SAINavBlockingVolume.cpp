#include "SAINavBlockingVolume.h"

ASAINavBlockingVolume::ASAINavBlockingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMaskFillCollisionUnderneathForNavmesh = false;
}


