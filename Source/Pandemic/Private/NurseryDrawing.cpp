#include "NurseryDrawing.h"

ANurseryDrawing::ANurseryDrawing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOnlyLocalPlayer = true;
    this->bOneUse = true;
    this->bRandomizeEnable = true;
    this->AmbientSound = NULL;
    this->EventSound = NULL;
}


