#include "SAIEnvQueryTest_RelativePosition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Item -FallbackName=EnvQueryContext_Item
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

USAIEnvQueryTest_RelativePosition::USAIEnvQueryTest_RelativePosition() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->TestComment = TEXT("Use to test the relative position of the test item to a context and the querier");
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->RelativeType = ERelativeType::Error;
    this->RelativeTo = UEnvQueryContext_Item::StaticClass();
    this->Querier = UEnvQueryContext_Querier::StaticClass();
}


