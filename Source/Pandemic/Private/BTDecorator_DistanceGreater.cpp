#include "BTDecorator_DistanceGreater.h"

UBTDecorator_DistanceGreater::UBTDecorator_DistanceGreater() {
    this->NodeName = TEXT("Blackboard Keys Distance Greater");
    this->MinimumDistance = 0.00f;
    this->NotifyObserver = EBTBlackboardRestart::ResultChange;
}


