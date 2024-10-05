#pragma once
#include "CoreMinimal.h"
#include "SplinePathFollowingComponent.h"
#include "ResonatorPathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UResonatorPathFollowingComponent : public USplinePathFollowingComponent {
    GENERATED_BODY()
public:
    UResonatorPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

