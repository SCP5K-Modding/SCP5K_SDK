#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=PathFollowingComponent -FallbackName=PathFollowingComponent
#include "SCP173PathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API USCP173PathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    USCP173PathFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

