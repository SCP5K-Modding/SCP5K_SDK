#include "DoorSquidAlternateSpawnPoint.h"
#include "Net/UnrealNetwork.h"

ADoorSquidAlternateSpawnPoint::ADoorSquidAlternateSpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorToReplace = NULL;
    this->bShowDefaultDoor = true;
    this->bHasChangedInPreInit = false;
    this->bHideForRealSquid = true;
    this->bHasSquidInitialized = false;
}

void ADoorSquidAlternateSpawnPoint::SetShowDefaultDoor(bool bInShowDefaultDoor) {
}

void ADoorSquidAlternateSpawnPoint::SetSecondaryActorsToRevealWithSquid(TArray<AActor*> NewSecondaryActorsToRevealWithSquid) {
}

void ADoorSquidAlternateSpawnPoint::SetSecondaryActorsToHide(TArray<AActor*> NewSecondaryActorsToHide) {
}

void ADoorSquidAlternateSpawnPoint::SetHideForRealSquid(bool bInHideForRealSquid) {
}

void ADoorSquidAlternateSpawnPoint::SetHasSquidInitialized(bool bInHasSquidInitialized) {
}

void ADoorSquidAlternateSpawnPoint::SetHasChangedInPreInit(bool bInHaasChangedInPreInit) {
}

void ADoorSquidAlternateSpawnPoint::SetAsRealDoorSquid_Implementation() {
}

void ADoorSquidAlternateSpawnPoint::SetAsNotDoorSquid_Implementation() {
}

void ADoorSquidAlternateSpawnPoint::SetActorToReplace(AActor* NewActorToReplace) {
}

void ADoorSquidAlternateSpawnPoint::OnRep_ShowDefaultDoor_Implementation() {
}

void ADoorSquidAlternateSpawnPoint::OnRep_SecondaryActorsToRevealWithSquid_Implementation() {
}

void ADoorSquidAlternateSpawnPoint::OnRep_SecondaryActorsToHide_Implementation() {
}

void ADoorSquidAlternateSpawnPoint::OnRep_HideForRealSquid_Implementation() {
}

void ADoorSquidAlternateSpawnPoint::OnRep_HasSquidInitialized_Implementation() {
}

void ADoorSquidAlternateSpawnPoint::OnRep_HasChangedInPreInit_Implementation() {
}

void ADoorSquidAlternateSpawnPoint::OnRep_ActorToReplace_Implementation(AActor* OldActorToReplace) {
}

void ADoorSquidAlternateSpawnPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADoorSquidAlternateSpawnPoint, ActorToReplace);
    DOREPLIFETIME(ADoorSquidAlternateSpawnPoint, SecondaryActorsToHide);
    DOREPLIFETIME(ADoorSquidAlternateSpawnPoint, SecondaryActorsToRevealWithSquid);
    DOREPLIFETIME(ADoorSquidAlternateSpawnPoint, bShowDefaultDoor);
    DOREPLIFETIME(ADoorSquidAlternateSpawnPoint, bHasChangedInPreInit);
    DOREPLIFETIME(ADoorSquidAlternateSpawnPoint, bHideForRealSquid);
    DOREPLIFETIME(ADoorSquidAlternateSpawnPoint, bHasSquidInitialized);
}


