#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=CrowdFollowingComponent -FallbackName=CrowdFollowingComponent
#include "SAIPathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AISENTIENCE_API USAIPathFollowingComponent : public UCrowdFollowingComponent {
    GENERATED_BODY()
public:
    USAIPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

