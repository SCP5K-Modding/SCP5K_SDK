#pragma once
#include "CoreMinimal.h"
#include "ObjectiveTrigger.h"
#include "StartObjectiveTrigger.generated.h"

UCLASS(Blueprintable)
class GAMEPLAYOBJECTIVES_API AStartObjectiveTrigger : public AObjectiveTrigger {
    GENERATED_BODY()
public:
    AStartObjectiveTrigger(const FObjectInitializer& ObjectInitializer);

};

