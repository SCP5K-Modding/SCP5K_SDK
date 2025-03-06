#include "SCP173Subsystem.h"

USCP173Subsystem::USCP173Subsystem() {
}

void USCP173Subsystem::RemovePotentialObservers(const TArray<USCP173ObserverComponent*>& ObserversToRemove) {
}

void USCP173Subsystem::RemovePotentialObserver(USCP173ObserverComponent* ObserverToRemove) {
}

void USCP173Subsystem::RemoveInterestActor(ASCP173InterestActor* InterestActorToRemove) {
}

TArray<USCP173ObserverComponent*> USCP173Subsystem::GetPotentialObservers() const {
    return TArray<USCP173ObserverComponent*>();
}

TArray<AActor*> USCP173Subsystem::GetPotentialObserverActors() const {
    return TArray<AActor*>();
}

USCP173ObserverComponent* USCP173Subsystem::GetObserverClosestToLocation(FVector TargetLocation) const {
    return NULL;
}

void USCP173Subsystem::DeactivateInterestActors(FName GroupName, bool bDeactivateAll) {
}

void USCP173Subsystem::AddPotentialObservers(const TArray<USCP173ObserverComponent*>& NewObservers) {
}

void USCP173Subsystem::AddPotentialObserver(USCP173ObserverComponent* NewObserver) {
}

void USCP173Subsystem::AddInterestActor(ASCP173InterestActor* NewInterestActor) {
}

void USCP173Subsystem::ActivateInterestActors(FName GroupName, bool bDeactivateOthers) {
}


