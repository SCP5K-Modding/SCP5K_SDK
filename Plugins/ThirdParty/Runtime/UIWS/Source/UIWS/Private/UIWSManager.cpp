#include "UIWSManager.h"
#include "Components/PostProcessComponent.h"

AUIWSManager::AUIWSManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UpdateLightInfo = false;
    this->bShouldSpawnGlobalPostProcess = true;
    this->ContinuousLightUpdate = false;
    this->CenterSimOnPawn = true;
    this->bCustomCollisionProfile = false;
    this->WindTurbulence = 3.00f;
    this->CausticBrightnessMult = 1.00f;
    this->PostProcessComp = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PPComp"));
    this->CurrentPriorityBody = NULL;
    this->LastPriorityBody = NULL;
}


