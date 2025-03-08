#include "SAIEQSTest_CanLookAt.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

USAIEQSTest_CanLookAt::USAIEQSTest_CanLookAt() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Querier = UEnvQueryContext_Querier::StaticClass();
}


