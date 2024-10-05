#include "SAIEQSTest_LineLimitedDistance.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

USAIEQSTest_LineLimitedDistance::USAIEQSTest_LineLimitedDistance() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->MaxDistance = 0.00f;
}


