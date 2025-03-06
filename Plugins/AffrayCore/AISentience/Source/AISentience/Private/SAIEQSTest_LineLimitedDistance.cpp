#include "SAIEQSTest_LineLimitedDistance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

USAIEQSTest_LineLimitedDistance::USAIEQSTest_LineLimitedDistance() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->MaxDistance = 0.00f;
}


