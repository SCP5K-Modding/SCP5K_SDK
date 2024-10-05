#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AgentSpawn.generated.h"

class AHordeAgent;

USTRUCT(BlueprintType)
struct AIHORDES_API FAgentSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHordeAgent> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FAgentSpawn();
};

