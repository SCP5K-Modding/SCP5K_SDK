#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryItemType_ActorBase -FallbackName=EnvQueryItemType_ActorBase
#include "SAIEnvQueryItemType_Target.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API USAIEnvQueryItemType_Target : public UEnvQueryItemType_ActorBase {
    GENERATED_BODY()
public:
    USAIEnvQueryItemType_Target();

};

