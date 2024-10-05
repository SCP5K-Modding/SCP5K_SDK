#include "FPSBarrel.h"
#include "Components/ArrowComponent.h"

AFPSBarrel::AFPSBarrel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BarrelData = NULL;
    this->BarrelEnd = CreateDefaultSubobject<UArrowComponent>(TEXT("Barrel"));
    this->BarrelEnd->SetupAttachment(Mesh);
}

UFPSBarrelData* AFPSBarrel::GetBarrelData() const {
    return NULL;
}

UArrowComponent* AFPSBarrel::GetBarrel() const {
    return NULL;
}


