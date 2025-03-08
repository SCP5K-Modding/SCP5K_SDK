#include "SAIEQSGen_CoverPoints.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "SAIEnvQueryItemType_Cover.h"

USAIEQSGen_CoverPoints::USAIEQSGen_CoverPoints() {
    this->ItemType = USAIEnvQueryItemType_Cover::StaticClass();
    this->QueryContext = UEnvQueryContext_Querier::StaticClass();
}


