#include "SeasonalScenario.h"
#include "SeasonalScenarioComponent.h"

ASeasonalScenario::ASeasonalScenario(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USeasonalScenarioComponent>(TEXT("Scenario"))) {
    this->ScenarioComponent = (UScenarioComponent*)RootComponent;
}


