#include "GameEventBusCoprocessor.h"
#include "GameEventBusComponent.h"

UGameEventBusCoprocessor::UGameEventBusCoprocessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EventBus = CreateDefaultSubobject<UGameEventBusComponent>(TEXT("EventBus"));
}


