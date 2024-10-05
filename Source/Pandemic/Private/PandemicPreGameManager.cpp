#include "PandemicPreGameManager.h"
#include "Camera/CameraComponent.h"

APandemicPreGameManager::APandemicPreGameManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->CameraComponent = (UCameraComponent*)RootComponent;
}

void APandemicPreGameManager::SpawnCharacterForPlayer_Implementation(APandemicPlayerState* Player, bool bForceRespawn) {
}

void APandemicPreGameManager::SetupCharacterForPlayer_Implementation(AActor* Character, APandemicPlayerState* Player) {
}

void APandemicPreGameManager::RemovePlayer_Implementation(APandemicPlayerState* Player) {
}

void APandemicPreGameManager::RemoveAllPlayers_Implementation() {
}

FTransform APandemicPreGameManager::PickTransformForPlayer_Implementation(APandemicPlayerState* Player, int32& Index) {
    return FTransform{};
}

TSoftClassPtr<APawn> APandemicPreGameManager::PickClassForPlayer_Implementation(APandemicPlayerState* Player) {
    return NULL;
}

void APandemicPreGameManager::OnCharacterClassLoaded(TSoftClassPtr<APawn> SoftClass, APandemicPlayerState* PlayerState, bool bForceRespawn) {
}

APawn* APandemicPreGameManager::GetCharacterForPlayer(APandemicPlayerState* Player) const {
    return NULL;
}


