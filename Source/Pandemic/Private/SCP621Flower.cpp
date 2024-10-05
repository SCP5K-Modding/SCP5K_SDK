#include "SCP621Flower.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "FMODAudioComponent.h"
#include "HealthComponent.h"
#include "Net/UnrealNetwork.h"

ASCP621Flower::ASCP621Flower(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bIsOpen = false;
    this->AudioFlowerOpenEvent = NULL;
    this->AudioFlowerCloseEvent = NULL;
    this->AudioFlowerHitEvent = NULL;
    this->AudioFlowerPainEvent = NULL;
    this->AudioFlowerLoopingOpenEvent = NULL;
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->AudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("Audio Component"));
    this->LoopingAudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("Looping Audio Component"));
    this->AudioComponent->SetupAttachment(RootComponent);
    this->LoopingAudioComponent->SetupAttachment(RootComponent);
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
}

void ASCP621Flower::Open() {
}

void ASCP621Flower::OnRep_bIsOpen() {
}

void ASCP621Flower::HealthComponentDied(UHealthComponent* InHealthComponent) {
}

void ASCP621Flower::HealthComponentDamaged(UHealthComponent* InHealthComponent, FSimpleHitData HitData) {
}

void ASCP621Flower::CosmeticOpen_Implementation() {
}

void ASCP621Flower::CosmeticClose_Implementation() {
}

void ASCP621Flower::Close() {
}

void ASCP621Flower::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASCP621Flower, bIsOpen);
}


