#include "SequencerTrigger.h"

ASequencerTrigger::ASequencerTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOneUse = true;
    this->LevelSequenceActor = NULL;
}


