#include "WallStripe.h"
#include "WallStripeMetadata.h"
#include "WallStripeSplineComponent.h"

AWallStripe::AWallStripe(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UWallStripeSplineComponent>(TEXT("Spline"));
    this->SplineComponent = (UWallStripeSplineComponent*)RootComponent;
    this->Mesh = NULL;
    this->CornerRadius = 100.00f;
    this->Offset = 1.00f;
    this->WallStripeSplineMetadata = CreateDefaultSubobject<UWallStripeMetadata>(TEXT("MySplineMetadata"));
}

float AWallStripe::GetScaleAtSplinePoint(int32 PointIndex) {
    return 0.0f;
}

bool AWallStripe::GetFlipSideAtSplinePoint(int32 PointIndex) {
    return false;
}

float AWallStripe::GetCornerRadiusAtSplinePoint(int32 PointIndex) {
    return 0.0f;
}


