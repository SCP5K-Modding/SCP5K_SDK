#include "SAIEQSGen_Target.h"
#include "SAIEnvQueryItemType_Target.h"

USAIEQSGen_Target::USAIEQSGen_Target() {
    this->ItemType = USAIEnvQueryItemType_Target::StaticClass();
    this->QueryContext = NULL;
}


