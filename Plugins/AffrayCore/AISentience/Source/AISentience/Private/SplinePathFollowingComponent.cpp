#include "SplinePathFollowingComponent.h"

USplinePathFollowingComponent::USplinePathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinDistance = 500.00f;
    this->NumSubdivisions = 3;
    this->bNormalizeTangents = false;
    this->TangentScaling = 1.00f;
    this->bShowDebugSplineInputs = false;
    this->bShowDebugSplineOutputs = false;
}


