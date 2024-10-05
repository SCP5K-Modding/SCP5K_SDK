#include "ElectronicDoor.h"
#include "DoorLinkComponent.h"
#include "Net/UnrealNetwork.h"

AElectronicDoor::AElectronicDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeBroken = false;
    this->bDoorLinkIsRelevant = true;
    this->TargetValue = 0.00f;
    this->CurrentValue = 0.00f;
    this->SmoothValue = 0.00f;
    this->bMoving = false;
    this->InterpolationSpeed = 15.00f;
    this->TimeToOpen = 1.00f;
    this->bCanInterrupt = true;
    this->bCanBeBreached = true;
    this->HingeBreakParticle = NULL;
    this->HingeBreakSound = NULL;
    this->BreachSound = NULL;
    this->BreakForce = 1000.00f;
    this->WeakPointDamageThreshold = 70.00f;
    this->BreachSpeedMultiplier = 10.00f;
    this->bIsBreaching = false;
    this->DoorLinkComp = CreateDefaultSubobject<UDoorLinkComponent>(TEXT("DoorLinkComp"));
    this->EnabledLinkAreaClass = NULL;
    this->DisabledLinkAreaClass = NULL;
}

void AElectronicDoor::UpdateDoorInteractors(AActor* PathOwner, const FVector& DestinationPoint) {
}

void AElectronicDoor::SetDoorLinkEnabled(bool bIsDoorLinkEnabled) {
}

void AElectronicDoor::ResumePathFollowing(AActor* Agent) {
}


void AElectronicDoor::OnDoorUpdateValue_Implementation(float Value) {
}

void AElectronicDoor::OnDoorFinishedOpening_Implementation() {
}

void AElectronicDoor::OnDoorFinishedClosing_Implementation() {
}

void AElectronicDoor::MulticastDestroyHinge_Implementation(FVector_NetQuantize position) {
}

bool AElectronicDoor::IsDoorLinkEnabled() const {
    return false;
}

bool AElectronicDoor::HasMovingAgents() const {
    return false;
}

float AElectronicDoor::GetSmoothValue() const {
    return 0.0f;
}

bool AElectronicDoor::GetMoving() const {
    return false;
}

bool AElectronicDoor::GetCanDoorBreak() const {
    return false;
}

void AElectronicDoor::Breach(AActor* Caller) {
}

void AElectronicDoor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AElectronicDoor, bIsBreaching);
}


