#include "ObjectiveSubsystem.h"

UObjectiveSubsystem::UObjectiveSubsystem() {
    this->CachedAlivePlayers = 0;
}

void UObjectiveSubsystem::UpdateAlivePlayers(int32 AlivePlayers) {
}

void UObjectiveSubsystem::RegisterObjectiveManager(AObjectiveManager* NewObjectiveManager) {
}

AObjectiveManager* UObjectiveSubsystem::GetObjectiveManager() const {
    return NULL;
}


