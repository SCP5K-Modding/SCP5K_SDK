#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EventCosmeticComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UEventCosmeticComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEventCosmeticComponent(const FObjectInitializer& ObjectInitializer);

};

