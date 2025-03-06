#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
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

