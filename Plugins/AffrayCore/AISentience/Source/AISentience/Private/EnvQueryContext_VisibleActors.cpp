#include "EnvQueryContext_VisibleActors.h"
#include "Perception/AISense_Sight.h"

UEnvQueryContext_VisibleActors::UEnvQueryContext_VisibleActors() {
    this->SenseClass = UAISense_Sight::StaticClass();
}


