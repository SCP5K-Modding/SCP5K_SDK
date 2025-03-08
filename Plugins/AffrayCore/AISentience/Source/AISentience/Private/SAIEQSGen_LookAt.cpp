#include "SAIEQSGen_LookAt.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "SAEnvQueryItemType_LookAt.h"

USAIEQSGen_LookAt::USAIEQSGen_LookAt() {
    this->ItemType = USAEnvQueryItemType_LookAt::StaticClass();
    this->QueryContext = UEnvQueryContext_Querier::StaticClass();
}


