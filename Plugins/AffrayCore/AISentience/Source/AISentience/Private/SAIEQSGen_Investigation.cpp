#include "SAIEQSGen_Investigation.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "SAIEnvQueryItemType_Investigation.h"

USAIEQSGen_Investigation::USAIEQSGen_Investigation() {
    this->ItemType = USAIEnvQueryItemType_Investigation::StaticClass();
    this->QueryContext = UEnvQueryContext_Querier::StaticClass();
}


