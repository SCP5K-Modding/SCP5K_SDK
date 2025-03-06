#include "AnimCharacterMovementLibrary.h"

UAnimCharacterMovementLibrary::UAnimCharacterMovementLibrary() {
}

FVector UAnimCharacterMovementLibrary::PredictGroundMovementStopLocation(const FVector& Velocity, bool bUseSeparateBrakingFriction, float BrakingFriction, float GroundFriction, float BrakingFrictionFactor, float BrakingDecelerationWalking) {
    return FVector{};
}

FVector UAnimCharacterMovementLibrary::PredictGroundMovementPivotLocation(const FVector& Acceleration, const FVector& Velocity, float GroundFriction) {
    return FVector{};
}


