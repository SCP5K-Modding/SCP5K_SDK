#pragma once
#include "CoreMinimal.h"
#include "Scenario.h"
#include "SeasonalScenario.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API ASeasonalScenario : public AScenario {
    GENERATED_BODY()
public:
    ASeasonalScenario(const FObjectInitializer& ObjectInitializer);

};

