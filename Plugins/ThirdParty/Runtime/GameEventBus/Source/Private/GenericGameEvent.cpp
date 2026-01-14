#include "GenericGameEvent.h"

UGenericGameEvent::UGenericGameEvent() {
}

UGenericGameEvent* UGenericGameEvent::MakeGenericGameEvent(UObject* InInstigator, UObject* InSubject, const FGameplayTagContainer& InID) {
    return NULL;
}

void UGenericGameEvent::BreakGenericGameEvent(FGameplayTagContainer& OutID, UObject*& OutInstigator, UObject*& OutSubject) const {
}


