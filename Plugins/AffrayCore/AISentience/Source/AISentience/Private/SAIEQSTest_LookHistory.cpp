#include "SAIEQSTest_LookHistory.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
#include "EnvQueryContext_LookHistory.h"

USAIEQSTest_LookHistory::USAIEQSTest_LookHistory() {
    this->Querier = UEnvQueryContext_Querier::StaticClass();
    this->HistoryContext = UEnvQueryContext_LookHistory::StaticClass();
}


