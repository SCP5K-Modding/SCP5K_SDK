#include "Dialogue.h"

FDialogue::FDialogue() {
    this->DialogueType = EDialogueType::DT_None;
    this->MoraleLevel = EMoraleLevelType::MLT_None;
    this->bOverWriteAudibleDistance = false;
    this->bIsStoryRelevant = false;
    this->PriorityType = EDialoguePriorityType::DPT_Wait;
    this->Priority = 0;
    this->MaxWaitTime = 0.00f;
    this->bUseChanceToRespond = false;
    this->ChanceToRespond = 0.00f;
    this->AudibleDistance = 0.00f;
}

