#include "UIWSRiver.h"
#include "Components/SplineComponent.h"

AUIWSRiver::AUIWSRiver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableAutomaticInteraction = true;
    this->bSupportsEdgeReflection = false;
    this->SplineComp = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComp"));
    this->AllowCameraUnder = false;
    this->SplineComp->SetupAttachment(RootComponent);
}


