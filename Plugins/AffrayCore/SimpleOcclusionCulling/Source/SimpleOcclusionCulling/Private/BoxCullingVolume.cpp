#include "BoxCullingVolume.h"

ABoxCullingVolume::ABoxCullingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxDistance = 3000.00f;
    this->MaxBoundsSize = 1000.00f;
}


