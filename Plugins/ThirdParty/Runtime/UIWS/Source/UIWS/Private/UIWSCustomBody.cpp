#include "UIWSCustomBody.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

AUIWSCustomBody::AUIWSCustomBody(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableAutomaticInteraction = true;
    this->CustomMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CustomMeshComp"));
    this->CustomWaterVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("Custom Post Process Volume"));
    this->AllowCameraUnder = false;
    this->CustomMeshComp->SetupAttachment(RootComponent);
    this->CustomWaterVolume->SetupAttachment(RootComponent);
}


