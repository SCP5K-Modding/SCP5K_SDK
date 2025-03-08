#include "SAIEQSTest_LimitDistanceOffset.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

USAIEQSTest_LimitDistanceOffset::USAIEQSTest_LimitDistanceOffset() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->MaxDistance = 0.00f;
}


