#include "Scenario.h"
#include "ScenarioComponent.h"

AScenario::AScenario(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UScenarioComponent>(TEXT("Scenario"));
    this->ScenarioComponent = (UScenarioComponent*)RootComponent;
}

UScenarioComponent* AScenario::GetScenarioComponent() const {
    return NULL;
}


