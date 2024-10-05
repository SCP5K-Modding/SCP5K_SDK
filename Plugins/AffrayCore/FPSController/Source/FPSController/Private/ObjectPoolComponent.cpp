#include "ObjectPoolComponent.h"
#include "Net/UnrealNetwork.h"

UObjectPoolComponent::UObjectPoolComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObjectClass = NULL;
}

bool UObjectPoolComponent::ReturnObject(AActor* Object) {
    return false;
}

bool UObjectPoolComponent::CreateObject(AActor*& Object, FTransform Transform) {
    return false;
}

void UObjectPoolComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UObjectPoolComponent, UsedPool);
    DOREPLIFETIME(UObjectPoolComponent, AvailablePool);
}


