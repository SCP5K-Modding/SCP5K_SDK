#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "WallStripeSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MODULARASSETS_API UWallStripeSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UWallStripeSplineComponent(const FObjectInitializer& ObjectInitializer);

};

