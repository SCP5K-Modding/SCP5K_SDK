#include "NumberObjective.h"
#include "Net/UnrealNetwork.h"

UNumberObjective::UNumberObjective() {
    this->MaxValue = 0;
    this->CurrentValue = 0;
}

void UNumberObjective::SetMaxAmount(int32 Amount) {
}

void UNumberObjective::SetAmount(int32 Amount) {
}

int32 UNumberObjective::GetMaxValue() const {
    return 0;
}

int32 UNumberObjective::GetCurrentValue() const {
    return 0;
}

UNumberObjective* UNumberObjective::CreateNumberObjective(UObject* Outer, FName Name, FText DisplayName, FText Description, int32 NewMaxValue, bool UseTimer, float TimerLength, bool bShouldAutoActivateWithParent, bool bMajorObjective, bool bShouldStartChildren) {
    return NULL;
}

void UNumberObjective::AddAmount(int32 Amount) {
}

void UNumberObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UNumberObjective, MaxValue);
    DOREPLIFETIME(UNumberObjective, CurrentValue);
}


