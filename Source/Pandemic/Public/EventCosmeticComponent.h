#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EventCosmeticComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UEventCosmeticComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEventCosmeticComponent(const FObjectInitializer& ObjectInitializer);

};

