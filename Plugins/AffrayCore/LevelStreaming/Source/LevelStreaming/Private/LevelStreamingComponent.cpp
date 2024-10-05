#include "LevelStreamingComponent.h"

ULevelStreamingComponent::ULevelStreamingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultLoadedState = EStreamingState::Loaded;
    this->bTryInitializeEveryFrame = false;
    this->bIsMasterStreamingComponent = false;
}

void ULevelStreamingComponent::RecalculateLevels(bool bAddOnly) {
}

void ULevelStreamingComponent::OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ULevelStreamingComponent::OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

bool ULevelStreamingComponent::IsLevelVisible(FName LevelName) const {
    return false;
}

bool ULevelStreamingComponent::IsLevelLoaded(FName LevelName) const {
    return false;
}

void ULevelStreamingComponent::Initialize() {
}

void ULevelStreamingComponent::CallLevelUnloaded(ULevel* Level, UWorld* World) {
}

void ULevelStreamingComponent::CallLevelLoaded(ULevel* Level, UWorld* World) {
}


