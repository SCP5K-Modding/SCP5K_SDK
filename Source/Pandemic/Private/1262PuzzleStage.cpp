#include "1262PuzzleStage.h"

F1262PuzzleStage::F1262PuzzleStage() {
    this->NumTargets = 0;
    this->NumSpitters = 0;
    this->bRequireKillCore = false;
    this->Timer = 0.00f;
    this->bKillSpittersOnCompletion = false;
    this->bUpdateWaterLevel = false;
    this->TargetWaterLevel = 0.00f;
}

