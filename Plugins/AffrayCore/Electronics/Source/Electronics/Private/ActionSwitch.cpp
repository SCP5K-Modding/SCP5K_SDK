#include "ActionSwitch.h"

AActionSwitch::AActionSwitch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAffectLocked = false;
    this->bLock = false;
    this->bAffectEnabled = true;
    this->bBreak = false;
}


