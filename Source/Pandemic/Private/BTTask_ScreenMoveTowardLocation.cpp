#include "BTTask_ScreenMoveTowardLocation.h"

UBTTask_ScreenMoveTowardLocation::UBTTask_ScreenMoveTowardLocation() {
    this->AcceptedDistance = 800.00f;
    this->bIgnoreVisibility = false;
}

void UBTTask_ScreenMoveTowardLocation::PathfindCompleted(ATheatreAnomalyController* Controller) {
}

void UBTTask_ScreenMoveTowardLocation::PathfindCancelled(ATheatreAnomalyController* Controller) {
}


