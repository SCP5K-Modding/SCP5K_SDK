#pragma once
#include "CoreMinimal.h"
#include "SAIPerceivedActorData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSAIPerceivedActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    AISENTIENCE_API FSAIPerceivedActorData();
};

