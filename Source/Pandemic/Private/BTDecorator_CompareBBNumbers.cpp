#include "BTDecorator_CompareBBNumbers.h"

UBTDecorator_CompareBBNumbers::UBTDecorator_CompareBBNumbers() {
    this->NodeName = TEXT("Compare BB Numerical Entries");
    this->NumericalOperator = EBlackBoardNumericalEntryComparison::Equal;
    this->NotifyObserver = EBTBlackboardRestart::ResultChange;
}


