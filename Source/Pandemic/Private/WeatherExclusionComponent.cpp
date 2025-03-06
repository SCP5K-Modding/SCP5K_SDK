#include "WeatherExclusionComponent.h"

UWeatherExclusionComponent::UWeatherExclusionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UWeatherExclusionComponent::RemoveOverlappingActor(AActor* InOtherActor) {
}

TArray<AActor*> UWeatherExclusionComponent::GetExcludedActors() const {
    return TArray<AActor*>();
}

void UWeatherExclusionComponent::AddOverlappingActor(AActor* InOtherActor) {
}


