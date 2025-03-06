#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryItemType_VectorBase -FallbackName=EnvQueryItemType_VectorBase
#include "SAEnvQueryItemType_LookAt.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API USAEnvQueryItemType_LookAt : public UEnvQueryItemType_VectorBase {
    GENERATED_BODY()
public:
    USAEnvQueryItemType_LookAt();

};

