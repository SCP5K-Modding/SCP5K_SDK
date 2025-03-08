#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FPSAnimationFunctionLibrary.generated.h"

class UAnimInstance;
class UAnimSequence;

UCLASS(Blueprintable)
class FPSCONTROLLER_API UFPSAnimationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFPSAnimationFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetClosestSyncMarker(UAnimInstance* AnimInstance, FName SyncGroupName);
    
    UFUNCTION(BlueprintCallable)
    static float FindPositionFromDistanceCurve(UAnimSequence* Animation, float TargetValue, FName CurveName);
    
    UFUNCTION(BlueprintCallable)
    static float FindPositionFromCurve(UAnimSequence* Animation, float TargetValue, FName CurveName, int32 ZeroCurveIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector CubicInterpVector(FVector A, FVector B, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CubicInterpFloat(float A, float B, float Alpha);
    
};

