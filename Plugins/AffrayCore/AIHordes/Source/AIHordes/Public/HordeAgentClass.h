#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HordeAgentClass.generated.h"

class AHordeAgent;

USTRUCT(BlueprintType)
struct AIHORDES_API FHordeAgentClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHordeAgent> AgentClass;
    
    FHordeAgentClass();
};

