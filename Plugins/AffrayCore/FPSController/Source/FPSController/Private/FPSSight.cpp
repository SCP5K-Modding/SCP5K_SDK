#include "FPSSight.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

AFPSSight::AFPSSight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SightData = NULL;
    this->bVisualsEnabled = false;
    this->ParameterCollection = NULL;
    this->SightDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("Sight"));
    this->SightDirection->SetupAttachment(Mesh);
}

void AFPSSight::UpdateEffects_Implementation() {
}

UFPSSightData* AFPSSight::GetSightData() const {
    return NULL;
}

UArrowComponent* AFPSSight::GetSight() const {
    return NULL;
}


