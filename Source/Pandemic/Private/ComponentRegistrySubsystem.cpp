#include "ComponentRegistrySubsystem.h"
#include "Templates/SubclassOf.h"

UComponentRegistrySubsystem::UComponentRegistrySubsystem() {
}

void UComponentRegistrySubsystem::RemoveComponent(UActorComponent* ComponentToRemove) {
}

TArray<UActorComponent*> UComponentRegistrySubsystem::GetComponents(TSubclassOf<UActorComponent> ComponentsClass) const {
    return TArray<UActorComponent*>();
}

TArray<AActor*> UComponentRegistrySubsystem::GetComponentActors(TSubclassOf<UActorComponent> ComponentsClass) const {
    return TArray<AActor*>();
}

void UComponentRegistrySubsystem::AddComponent(UActorComponent* NewComponent) {
}


