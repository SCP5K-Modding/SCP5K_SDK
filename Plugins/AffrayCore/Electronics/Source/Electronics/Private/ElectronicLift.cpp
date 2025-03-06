#include "ElectronicLift.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent
#include "Net/UnrealNetwork.h"

AElectronicLift::AElectronicLift(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeBroken = false;
    this->Time = 0.00f;
    this->SmoothTime = 0.00f;
    this->ReplicatedTime = 0.00f;
    this->bUseFloors = false;
    this->Floors.AddDefaulted(2);
    this->PreviousFloor = 0;
    this->NextFloor = 0;
    this->TargetFloor = 0;
    this->ClosestFloor = 0;
    this->ReplicatedPreviousFloor = 0;
    this->bUseElevatorDoors = false;
    this->ElevatorDoorTime = 1.00f;
    this->CurrentDoorValue = 0.00f;
    this->bDoorOpen = false;
    this->MaxReplicatedTimeDifference = 0.50f;
    this->bIsMoving = false;
    this->LiftComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Lift"));
    this->MovementTime = 15.00f;
    this->bUseConstantMovementSpeed = false;
    this->MovementSpeed = 200.00f;
    this->LiftStoppedSound = NULL;
    this->LiftMusic = NULL;
    this->MusicComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("Music"));
    this->LiftComponent->SetupAttachment(RootComponent);
    this->MusicComponent->SetupAttachment(LiftComponent);
}

void AElectronicLift::StartMoving(float CurrentTime, int32 Floor) {
}

void AElectronicLift::OnRep_TargetFloor() {
}

void AElectronicLift::OnRep_bDoorOpen() {
}

void AElectronicLift::LiftUpdatedPosition_Implementation(float CurrentTime, FTransform Transform) {
}

void AElectronicLift::LiftStartedMoving_Implementation(float CurrentTime, int32 Floor, FTransform Transform) {
}

void AElectronicLift::LiftReachedStart_Implementation(FTransform Transform) {
}

void AElectronicLift::LiftReachedFloor_Implementation(int32 Floor, FTransform Transform) {
}

void AElectronicLift::LiftReachedEnd_Implementation(FTransform Transform) {
}

void AElectronicLift::LiftPassedFloor_Implementation(int32 Floor, FTransform Transform) {
}

void AElectronicLift::LiftDoorUpdatedValue_Implementation(float Value) {
}

void AElectronicLift::LiftClosestFloorUpdated_Implementation(int32 Floor, FTransform Transform) {
}

void AElectronicLift::GoToFloor(int32 Floor, AActor* Caller) {
}

FTransform AElectronicLift::GetDesiredTransform(float InTime) const {
    return FTransform{};
}

void AElectronicLift::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AElectronicLift, ReplicatedTime);
    DOREPLIFETIME(AElectronicLift, TargetFloor);
    DOREPLIFETIME(AElectronicLift, ReplicatedPreviousFloor);
    DOREPLIFETIME(AElectronicLift, ReplicatedState);
    DOREPLIFETIME(AElectronicLift, bDoorOpen);
}


