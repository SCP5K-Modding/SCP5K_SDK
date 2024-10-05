#include "RandomScenarioManager.h"
#include "ScenarioManagerComponent.h"

ARandomScenarioManager::ARandomScenarioManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UScenarioManagerComponent>(TEXT("ScenarioManager"));
    this->ScenarioManagerComponent = (UScenarioManagerComponent*)RootComponent;
}

void ARandomScenarioManager::SelectRandomScenario() {
}

void ARandomScenarioManager::SelectNextScenario() {
}


