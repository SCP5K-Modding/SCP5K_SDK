#include "GameAction.h"

UGameAction::UGameAction() {
    this->ExecuteDelay = 0.00f;
}

bool UGameAction::OnExecute_Implementation(UObject* WorldContextObject, AActor* Owner, AActor* Instigator) {
    return false;
}

AActor* UGameAction::GetOwningActor() const {
    return NULL;
}

void UGameAction::ExecuteDelayed(UObject* WorldContextObject, AActor* Owner, AActor* Instigator) {
}

void UGameAction::Execute(UObject* WorldContextObject, AActor* Owner, AActor* Instigator) {
}


