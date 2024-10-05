#include "Credit.h"

FCredit::FCredit() {
    this->Category = ECreditCategory::Studio;
    this->Company = ECreditCompany::Internal;
    this->Priority = ECreditPriority::Highest;
    this->bFormer = false;
}

