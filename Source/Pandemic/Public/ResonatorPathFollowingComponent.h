#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AISentience -ObjectName=SAIPathFollowingComponent -FallbackName=SAIPathFollowingComponent
#include "ResonatorPathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UResonatorPathFollowingComponent : public USAIPathFollowingComponent {
    GENERATED_BODY()
public:
    UResonatorPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

