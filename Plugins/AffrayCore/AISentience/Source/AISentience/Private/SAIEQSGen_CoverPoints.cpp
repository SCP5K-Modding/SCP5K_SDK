#include "SAIEQSGen_CoverPoints.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
#include "SAIEnvQueryItemType_Cover.h"

USAIEQSGen_CoverPoints::USAIEQSGen_CoverPoints() {
    this->ItemType = USAIEnvQueryItemType_Cover::StaticClass();
    this->QueryContext = UEnvQueryContext_Querier::StaticClass();
}


