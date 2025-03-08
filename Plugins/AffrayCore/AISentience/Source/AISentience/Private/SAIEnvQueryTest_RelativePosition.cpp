#include "SAIEnvQueryTest_RelativePosition.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Item.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

USAIEnvQueryTest_RelativePosition::USAIEnvQueryTest_RelativePosition() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->TestComment = TEXT("Use to test the relative position of the test item to a context and the querier");
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->RelativeType = ERelativeType::Error;
    this->RelativeTo = UEnvQueryContext_Item::StaticClass();
    this->Querier = UEnvQueryContext_Querier::StaticClass();
}


