#include "DialogueComponent.h"
#include "Net/UnrealNetwork.h"

UDialogueComponent::UDialogueComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = false;
    this->DialogueTable = NULL;
    this->DefaultAudibleDistance = 5000.00f;
    this->MaxPreferredDistance = 1500.00f;
}

void UDialogueComponent::TriggerDialogueCooldown(FName DialogueID, float Cooldown) {
}

bool UDialogueComponent::ShouldBeInterrupted_Implementation(UDialogueComponent* InterruptingComponent, float InterruptDistance) const {
    return false;
}

void UDialogueComponent::SetDialogueTable(const UDataTable* NewDialogueTable) {
}

void UDialogueComponent::RemoveDialogueCooldown(FName DialogueID) {
}

void UDialogueComponent::QueueResponse(UDialogueComponent* Target, FName ResponseID) {
}

void UDialogueComponent::OnResponseAcknowledged_Implementation(bool bCanRespond) {
}

void UDialogueComponent::OnRep_NextOverlayedDialogueID() {
}

void UDialogueComponent::OnRep_CurrentDialogue() {
}

void UDialogueComponent::OnInterruptAttempt_Implementation(UDialogueComponent* InterruptingComponent, float InterruptDistance, bool bWasInterrupted) {
}

void UDialogueComponent::OnFinishSpeaking_Internal(bool bForceStop) {
}

void UDialogueComponent::OnFinishSpeaking_Implementation() {
}

void UDialogueComponent::OnDialogueBroadcasted_Implementation(UDialogueComponent* BroadcastingComponent, FName DialogueID, float AudibleDistance, bool bSkipDistanceCheck) {
}

bool UDialogueComponent::IsSpeaking() const {
    return false;
}

bool UDialogueComponent::IsAwaitingFinish() const {
    return false;
}

bool UDialogueComponent::IsAttemptingToRespond() const {
    return false;
}

void UDialogueComponent::Interrupt() {
}

FName UDialogueComponent::GetSpeakerName() const {
    return NAME_None;
}

TArray<FName> UDialogueComponent::GetPossibleResponses_Implementation(FName DialogueID) const {
    return TArray<FName>();
}

FName UDialogueComponent::GetCurrentResponseID() const {
    return NAME_None;
}

FName UDialogueComponent::GetCurrentDialogueID() const {
    return NAME_None;
}

FDialogue UDialogueComponent::GetCurrentDialogue() const {
    return FDialogue{};
}

void UDialogueComponent::ChangeResponse(FName NewResponseID) {
}

void UDialogueComponent::CancelResponse() {
}

void UDialogueComponent::BroadcastInterrupt(FName DialogueID, float InterruptRange) {
}

void UDialogueComponent::BroadcastDialogue(FName DialogueID) {
}

void UDialogueComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDialogueComponent, DialogueTable);
    DOREPLIFETIME(UDialogueComponent, CurrentDialogue);
    DOREPLIFETIME(UDialogueComponent, NextOverlayedDialogueID);
}


