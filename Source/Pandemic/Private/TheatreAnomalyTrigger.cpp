#include "TheatreAnomalyTrigger.h"

ATheatreAnomalyTrigger::ATheatreAnomalyTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTriggerOnlyOnServer = true;
    this->Screen = NULL;
    this->bTeleport = false;
}


