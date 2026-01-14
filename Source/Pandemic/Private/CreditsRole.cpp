#include "CreditsRole.h"

UCreditsRole::UCreditsRole() {
    this->Department = ECreditDepartment::Studio;
    this->Seniority = ECreditSeniority::Normal;
    this->PriorityOffset = 0;
    this->bDoNotCategorize = false;
}


