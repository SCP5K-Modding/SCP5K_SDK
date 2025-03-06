#include "EnvQueryContext_VisibleActors.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISense_Sight -FallbackName=AISense_Sight

UEnvQueryContext_VisibleActors::UEnvQueryContext_VisibleActors() {
    this->SenseClass = UAISense_Sight::StaticClass();
}


