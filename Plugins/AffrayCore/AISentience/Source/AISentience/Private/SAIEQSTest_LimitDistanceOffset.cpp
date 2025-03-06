#include "SAIEQSTest_LimitDistanceOffset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

USAIEQSTest_LimitDistanceOffset::USAIEQSTest_LimitDistanceOffset() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->MaxDistance = 0.00f;
}


