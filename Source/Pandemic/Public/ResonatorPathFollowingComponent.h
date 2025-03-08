#pragma once
#include "CoreMinimal.h"
#include "SAIPathFollowingComponent.h"
#include "ResonatorPathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UResonatorPathFollowingComponent : public USAIPathFollowingComponent {
    GENERATED_BODY()
public:
    UResonatorPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

