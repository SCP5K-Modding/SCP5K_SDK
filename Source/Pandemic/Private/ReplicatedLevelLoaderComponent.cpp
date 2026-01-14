#include "ReplicatedLevelLoaderComponent.h"
#include "Net/UnrealNetwork.h"

UReplicatedLevelLoaderComponent::UReplicatedLevelLoaderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LevelPrefix = TEXT("ReplicatedLevel");
    this->UnloadOldLevelsTime = 5.00f;
}

void UReplicatedLevelLoaderComponent::OnRep_SpawnedLevels(const FSpawnedLevelList& PreviousSpawnedLevels) {
}

void UReplicatedLevelLoaderComponent::LoadLevelList(const TArray<TSoftObjectPtr<UWorld>>& LevelList, const FTransform& SpawnTransform, bool bSpawnRelative) {
}

void UReplicatedLevelLoaderComponent::LevelFinishedLoading() {
}

void UReplicatedLevelLoaderComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReplicatedLevelLoaderComponent, SpawnedLevels);
}


