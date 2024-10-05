#pragma once
#include "CoreMinimal.h"
#include "ObjectiveTrigger.h"
#include "ResetObjectiveTrigger.generated.h"

UCLASS(Blueprintable)
class GAMEPLAYOBJECTIVES_API AResetObjectiveTrigger : public AObjectiveTrigger {
    GENERATED_BODY()
public:
    AResetObjectiveTrigger(const FObjectInitializer& ObjectInitializer);

};

