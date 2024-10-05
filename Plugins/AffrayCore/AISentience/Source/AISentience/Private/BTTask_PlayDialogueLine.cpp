#include "BTTask_PlayDialogueLine.h"

UBTTask_PlayDialogueLine::UBTTask_PlayDialogueLine() {
    this->bWaitForCompletion = false;
}

void UBTTask_PlayDialogueLine::DialogueInterrupted(UDialogueComponent* Component, FName InDialogueID) {
}

void UBTTask_PlayDialogueLine::DialogueCompleted(UDialogueComponent* Component, FName InDialogueID) {
}


