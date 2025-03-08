#include "SAIEQSTest_LookHistory.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvQueryContext_LookHistory.h"

USAIEQSTest_LookHistory::USAIEQSTest_LookHistory() {
    this->Querier = UEnvQueryContext_Querier::StaticClass();
    this->HistoryContext = UEnvQueryContext_LookHistory::StaticClass();
}


