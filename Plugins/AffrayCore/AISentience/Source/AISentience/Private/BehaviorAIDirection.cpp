#include "BehaviorAIDirection.h"

UBehaviorAIDirection::UBehaviorAIDirection() {
    this->Behavior = NULL;
    this->DynamicBehaviorKeyName = TEXT("WantsDynamicBehavior");
    this->DynamicBehaviorInstigatorKeyName = TEXT("DynamicBehaviorInstigator");
    this->bRestartBehavior = false;
}


