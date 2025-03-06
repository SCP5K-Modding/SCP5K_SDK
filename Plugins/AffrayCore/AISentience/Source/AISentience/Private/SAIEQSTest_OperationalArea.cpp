#include "SAIEQSTest_OperationalArea.h"

USAIEQSTest_OperationalArea::USAIEQSTest_OperationalArea() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->OperationType = 0;
    this->bDoComplexVolumeTest = true;
}


