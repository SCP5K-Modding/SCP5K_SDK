#include "BoxSelect.h"
#include "BoxSelectComponent.h"

ABoxSelect::ABoxSelect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxSelectComponent>(TEXT("Root"));
    this->BoxComponent = (UBoxSelectComponent*)RootComponent;
}

void ABoxSelect::SelectObjects() {
}

void ABoxSelect::DepositObjects() {
}


