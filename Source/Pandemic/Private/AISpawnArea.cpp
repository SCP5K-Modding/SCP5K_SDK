#include "AISpawnArea.h"
#include "Components/SceneComponent.h"

AAISpawnArea::AAISpawnArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = UObjectBase::GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Attempts = 10;
    this->ChanceToSpawn = 1.00f;
    this->SpawnSound = NULL;
    this->MaxActorsSpawnedPerFrame = 5;
    this->bProjectToNavigation = true;
    this->bProjectToGround = true;
    this->bEnabled = true;
    this->bCanBeUsedForWaves = false;
    this->bDisableOnSpawn = true;
    this->ReEnableTime = 0.00f;
    this->SpawnCollisionHandling = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    this->QueryFilterClass = NULL;
}

void AAISpawnArea::SpawnActors(int32 Amount, TArray<FSpawnClass> AvailableClasses) {
}

APawn* AAISpawnArea::SpawnActor(TSoftClassPtr<APawn> Class) {
    return NULL;
}

void AAISpawnArea::Spawn() {
}

void AAISpawnArea::SetSpawnSound(UFMODEvent* InSpawnSound) {
}

void AAISpawnArea::SetEnabled(bool bNewEnabled) {
}

void AAISpawnArea::SetDefaultSpawn(const FWaveSpawn& InDefaultSpawn) {
}

void AAISpawnArea::MulticastSpawn_Implementation() {
}

FTransform AAISpawnArea::GetSpawnTransform(TSoftClassPtr<APawn>& Class, AAISpawnLocation*& UsedSpawnLocation) {
    return FTransform{};
}

float AAISpawnArea::GetSpawnMultiplier(UObject* WorldContext, ESpawnScaling Scaling) {
    return 0.0f;
}

FName AAISpawnArea::GetSpawnerTag() const {
    return NAME_None;
}

FVector AAISpawnArea::GetHalfExtent() const {
    return FVector{};
}

bool AAISpawnArea::GetEnabled() const {
    return false;
}

FWaveSpawn AAISpawnArea::GetDefaultSpawn() const {
    return FWaveSpawn{};
}

FVector AAISpawnArea::GetClosestPointInSpawnBounds(FVector Location) const {
    return FVector{};
}

TSoftClassPtr<APawn> AAISpawnArea::GetClass(const TArray<FSpawnClass>& AvailableClasses) {
    return NULL;
}

bool AAISpawnArea::GetCanBeUsedForWaves() const {
    return false;
}

void AAISpawnArea::Disable() {
}


