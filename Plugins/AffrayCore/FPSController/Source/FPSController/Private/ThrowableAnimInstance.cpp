#include "ThrowableAnimInstance.h"

UThrowableAnimInstance::UThrowableAnimInstance() {
    this->FPSCharacter = NULL;
    this->ItemData = NULL;
    this->WeaponData = NULL;
    this->ThrowableData = NULL;
    this->BasePoseAnim = NULL;
    this->MoveAnim = NULL;
    this->SprintAnim = NULL;
    this->ReadyBasePoseAnim = NULL;
    this->bReady = false;
}


