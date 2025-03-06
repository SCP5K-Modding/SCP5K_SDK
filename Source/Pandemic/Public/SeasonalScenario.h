#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RandomScenarios -ObjectName=Scenario -FallbackName=Scenario
#include "SeasonalScenario.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API ASeasonalScenario : public AScenario {
    GENERATED_BODY()
public:
    ASeasonalScenario(const FObjectInitializer& ObjectInitializer);

};

