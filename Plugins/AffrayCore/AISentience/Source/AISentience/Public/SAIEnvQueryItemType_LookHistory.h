#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryItemType_VectorBase -FallbackName=EnvQueryItemType_VectorBase
#include "SAIEnvQueryItemType_LookHistory.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API USAIEnvQueryItemType_LookHistory : public UEnvQueryItemType_VectorBase {
    GENERATED_BODY()
public:
    USAIEnvQueryItemType_LookHistory();

};

