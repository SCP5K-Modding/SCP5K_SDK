#include "SAIEQSGen_Investigation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
#include "SAIEnvQueryItemType_Investigation.h"

USAIEQSGen_Investigation::USAIEQSGen_Investigation() {
    this->ItemType = USAIEnvQueryItemType_Investigation::StaticClass();
    this->QueryContext = UEnvQueryContext_Querier::StaticClass();
}


