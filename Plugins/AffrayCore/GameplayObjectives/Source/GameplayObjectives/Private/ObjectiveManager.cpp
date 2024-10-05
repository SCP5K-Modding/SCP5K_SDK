#include "ObjectiveManager.h"
#include "Net/UnrealNetwork.h"

AObjectiveManager::AObjectiveManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bHasActivatedObjectives = false;
}

void AObjectiveManager::UpdateCachedObjectiveNames() {
}

void AObjectiveManager::SyncObjectives() {
}

void AObjectiveManager::RemoveObjectiveWithName(FName ObjectiveName) {
}

void AObjectiveManager::RemoveObjective(UObjective* Objective) {
}

void AObjectiveManager::InitializeObjectives_Implementation() {
}

bool AObjectiveManager::HasActiveObjective() const {
    return false;
}

TArray<FString> AObjectiveManager::GetObjectiveNames() {
    return TArray<FString>();
}

UObjective* AObjectiveManager::GetObjective(FName ObjectiveName) const {
    return NULL;
}

int32 AObjectiveManager::GetNumActiveObjectives() const {
    return 0;
}

TArray<FString> AObjectiveManager::GetActiveObjectiveNames() {
    return TArray<FString>();
}

UObjective* AObjectiveManager::DeactivateObjectiveWithName(FName ObjectiveName) {
    return NULL;
}

void AObjectiveManager::DeactivateObjective(UObjective* Objective) {
}

void AObjectiveManager::AddObjective(UObjective* Objective) {
}

void AObjectiveManager::AddCachedObjectiveName(const FString& ObjectiveName) {
}

void AObjectiveManager::ActivateSimpleObjectives(const TArray<FSimpleObjectiveData>& InObjectives) {
}

UObjective* AObjectiveManager::ActivateObjectiveWithName(FName ObjectiveName, bool bStart, bool bDisplayOnUI, bool bReset) {
    return NULL;
}

void AObjectiveManager::ActivateObjectives_Implementation() {
}

void AObjectiveManager::ActivateObjective(UObjective* Objective, bool bStart, bool bDisplayOnUI, bool bReset) {
}

void AObjectiveManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AObjectiveManager, Objectives);
}


