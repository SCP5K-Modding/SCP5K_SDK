#include "SAIEQSGen_LookAt.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
#include "SAEnvQueryItemType_LookAt.h"

USAIEQSGen_LookAt::USAIEQSGen_LookAt() {
    this->ItemType = USAEnvQueryItemType_LookAt::StaticClass();
    this->QueryContext = UEnvQueryContext_Querier::StaticClass();
}


