#include "FPSAnimationFunctionLibrary.h"

UFPSAnimationFunctionLibrary::UFPSAnimationFunctionLibrary() {
}

FName UFPSAnimationFunctionLibrary::GetClosestSyncMarker(UAnimInstance* AnimInstance, FName SyncGroupName) {
    return NAME_None;
}

float UFPSAnimationFunctionLibrary::FindPositionFromDistanceCurve(UAnimSequence* Animation, float TargetValue, FName CurveName) {
    return 0.0f;
}

float UFPSAnimationFunctionLibrary::FindPositionFromCurve(UAnimSequence* Animation, float TargetValue, FName CurveName, int32 ZeroCurveIndex) {
    return 0.0f;
}

FVector UFPSAnimationFunctionLibrary::CubicInterpVector(FVector A, FVector B, float Alpha) {
    return FVector{};
}

float UFPSAnimationFunctionLibrary::CubicInterpFloat(float A, float B, float Alpha) {
    return 0.0f;
}


