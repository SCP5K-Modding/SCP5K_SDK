#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AnimCharacterMovementLibrary.generated.h"

UCLASS(Blueprintable)
class FPSCONTROLLER_API UAnimCharacterMovementLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimCharacterMovementLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector PredictGroundMovementStopLocation(const FVector& Velocity, bool bUseSeparateBrakingFriction, float BrakingFriction, float GroundFriction, float BrakingFrictionFactor, float BrakingDecelerationWalking);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector PredictGroundMovementPivotLocation(const FVector& Acceleration, const FVector& Velocity, float GroundFriction);
    
};

