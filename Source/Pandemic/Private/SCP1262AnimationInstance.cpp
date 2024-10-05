#include "SCP1262AnimationInstance.h"

USCP1262AnimationInstance::USCP1262AnimationInstance() {
    this->HeadDistance = 400.00f;
    this->TangentLength = 200.00f;
    this->bIsDead = false;
    this->RandomStartPosition = 0.00f;
    this->StaggerFrontMontage = NULL;
    this->StaggerLeftMontage = NULL;
    this->StaggerRightMontage = NULL;
    this->bAlert = false;
    this->SpitterPawn = NULL;
}

void USCP1262AnimationInstance::PlayShootAnimation_Implementation() {
}

void USCP1262AnimationInstance::PlayReviveAnimation() {
}

void USCP1262AnimationInstance::PlayDeathAnimation() {
}


