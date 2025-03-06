#include "SAIEQSTest_CanLookAt.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

USAIEQSTest_CanLookAt::USAIEQSTest_CanLookAt() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Querier = UEnvQueryContext_Querier::StaticClass();
}


