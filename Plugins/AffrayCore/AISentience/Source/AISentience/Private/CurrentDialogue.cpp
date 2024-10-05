#include "CurrentDialogue.h"

FCurrentDialogue::FCurrentDialogue() {
    this->DialogueIndex = 0;
    this->StartTime = 0.00f;
    this->Cooldown = 0.00f;
    this->bWasInterrupted = false;
}

