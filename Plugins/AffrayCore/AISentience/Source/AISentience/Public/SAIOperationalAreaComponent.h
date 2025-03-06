#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SAIOperationalAreaComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AISENTIENCE_API USAIOperationalAreaComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USAIOperationalAreaComponent(const FObjectInitializer& ObjectInitializer);

};

