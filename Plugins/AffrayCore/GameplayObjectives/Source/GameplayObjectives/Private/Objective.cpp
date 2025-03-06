#include "Objective.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UObjective::UObjective() {
    this->Manager = NULL;
    this->Parent = NULL;
    this->bActive = false;
    this->bStarted = false;
    this->bHasBeenStarted = false;
    this->bCompleted = false;
    this->bSucceeded = true;
    this->bDisplayOnUI = true;
    this->ObjectiveName = TEXT("NewObjective");
    this->bIsMajorObjective = false;
    this->bUseTimer = false;
    this->bTimerSucceeds = false;
    this->CurrentTime = 0.00f;
    this->MaxTime = 0.00f;
    this->bAutoActivateWithParent = true;
    this->bStartChildren = true;
    this->bCompleteWithChildren = true;
    this->PreviousObjective = NULL;
}

void UObjective::UpdateObjective() {
}

void UObjective::StopObjective() {
}

void UObjective::StartObjective() {
}

void UObjective::SetupSimpleObjectiveData(FSimpleObjectiveData& Data) const {
}

void UObjective::SetupFromSimpleObjectiveData(const FSimpleObjectiveData& Data) {
}

void UObjective::ResetObjective() {
}

void UObjective::RemoveChildObjective(FName ChildObjectiveName) {
}

void UObjective::PreviousObjectiveCompleted(UObjective* Objective, bool bInSucceeded) {
}

void UObjective::OnRep_ObjectiveName() {
}

void UObjective::OnRep_bStarted() {
}

void UObjective::OnRep_bCompleted() {
}

void UObjective::OnRep_bActive() {
}

void UObjective::InitializeObjective() {
}

bool UObjective::GetUsesTimer() const {
    return false;
}

bool UObjective::GetTimerSucceeds() const {
    return false;
}

bool UObjective::GetSucceeded() const {
    return false;
}

bool UObjective::GetStarted() const {
    return false;
}

UObjective* UObjective::GetParent() const {
    return NULL;
}

AActor* UObjective::GetOwningActor() const {
    return NULL;
}

FName UObjective::GetObjectiveName() const {
    return NAME_None;
}

FText UObjective::GetObjectiveDisplayName() const {
    return FText::GetEmpty();
}

FText UObjective::GetObjectiveDescription() const {
    return FText::GetEmpty();
}

int32 UObjective::GetNumChildObjectives() const {
    return 0;
}

float UObjective::GetMaxTime() const {
    return 0.0f;
}

bool UObjective::GetIsMajorObjective() const {
    return false;
}

bool UObjective::GetDisplayOnUI() const {
    return false;
}

float UObjective::GetCurrentTime() const {
    return 0.0f;
}

bool UObjective::GetCompleted() const {
    return false;
}

UObjective* UObjective::GetChildObjective(FName ChildObjectiveName) {
    return NULL;
}

bool UObjective::GetAutoActivateWithParent() const {
    return false;
}

bool UObjective::GetActive() const {
    return false;
}

void UObjective::Destroy() {
}

void UObjective::DeactivateObjective() {
}

UObjective* UObjective::CreateEmptyObjective(TSubclassOf<UObjective> ObjectiveClass, UObject* Outer, FName Name, FText DisplayName, FText Description, bool bShouldUseTimer, bool bTimerShouldSucceed, float TimerLength, bool bShouldAutoActivateWithParent, bool bMajorObjective, bool bShouldStartChildren) {
    return NULL;
}

bool UObjective::CompleteObjective(bool bSucceed) {
    return false;
}

bool UObjective::ChildrenAreCompleted() {
    return false;
}

bool UObjective::CheckRequirements() {
    return false;
}

void UObjective::AddObjective(AObjectiveManager* ObjectiveManager) {
}

void UObjective::AddChildObjective(UObjective* Child, bool AutoActivate) {
}

void UObjective::ActivateObjective(bool bStart, bool bShouldDisplayOnUI, bool bReset) {
}

void UObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UObjective, Manager);
    DOREPLIFETIME(UObjective, Parent);
    DOREPLIFETIME(UObjective, bActive);
    DOREPLIFETIME(UObjective, bStarted);
    DOREPLIFETIME(UObjective, bCompleted);
    DOREPLIFETIME(UObjective, bSucceeded);
    DOREPLIFETIME(UObjective, bDisplayOnUI);
    DOREPLIFETIME(UObjective, ObjectiveName);
    DOREPLIFETIME(UObjective, ObjectiveDisplayName);
    DOREPLIFETIME(UObjective, ObjectiveDescription);
    DOREPLIFETIME(UObjective, bIsMajorObjective);
    DOREPLIFETIME(UObjective, bUseTimer);
    DOREPLIFETIME(UObjective, bTimerSucceeds);
    DOREPLIFETIME(UObjective, ChildObjectives);
    DOREPLIFETIME(UObjective, CurrentTime);
    DOREPLIFETIME(UObjective, MaxTime);
}


