#pragma once
#include "CoreMinimal.h"
#include "ObjectiveTrigger.h"
#include "DeactivateObjectiveTrigger.generated.h"

UCLASS(Blueprintable)
class GAMEPLAYOBJECTIVES_API ADeactivateObjectiveTrigger : public AObjectiveTrigger {
    GENERATED_BODY()
public:
    ADeactivateObjectiveTrigger(const FObjectInitializer& ObjectInitializer);

};

