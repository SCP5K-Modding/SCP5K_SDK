#include "PandemicPreGameManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

APandemicPreGameManager::APandemicPreGameManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->MoveableCameraComponent = NULL;
    this->ChestPatchCamera = NULL;
    this->LeftShoulderPatchCamera = NULL;
    this->RightShoulderPatchCamera = NULL;
    this->HelmetPatchCamera = NULL;
    this->BackPatchCamera = NULL;
    this->CameraComponent->SetupAttachment(RootComponent);
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


