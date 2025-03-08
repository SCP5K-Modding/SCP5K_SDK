#pragma once
#include "CoreMinimal.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "SAIPathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AISENTIENCE_API USAIPathFollowingComponent : public UCrowdFollowingComponent {
    GENERATED_BODY()
public:
    USAIPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

