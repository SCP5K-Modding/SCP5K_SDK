#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
#include "WallStripeSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MODULARASSETS_API UWallStripeSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UWallStripeSplineComponent(const FObjectInitializer& ObjectInitializer);

};

