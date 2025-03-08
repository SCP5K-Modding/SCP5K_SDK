#include "MissionItemPickup.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "InteractableComponent.h"
#include "Net/UnrealNetwork.h"

AMissionItemPickup::AMissionItemPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Mesh = NULL;
    this->PickupSound = NULL;
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable"));
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->bOneUse = false;
    this->bIsActive = true;
    this->bStartsActive = true;
    this->PickupGameAction = NULL;
    this->InteractableComponent->SetupAttachment(RootComponent);
    this->MeshComponent->SetupAttachment(RootComponent);
}

void AMissionItemPickup::SetActive(bool bNewActive) {
}

void AMissionItemPickup::Pickup_Implementation(AController* Controller) {
}

void AMissionItemPickup::OnRep_IsActive_Implementation() {
}

void AMissionItemPickup::OnInteract_Implementation(AActor* EventInstigator) {
}

void AMissionItemPickup::OnFailed_Implementation(AController* Controller) {
}

void AMissionItemPickup::MulticastPickup_Implementation() {
}

void AMissionItemPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMissionItemPickup, bIsActive);
}


