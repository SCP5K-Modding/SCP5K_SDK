#pragma once
#include "CoreMinimal.h"
#include "SAIAwarenessTarget.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSAIAwarenessTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    AISENTIENCE_API FSAIAwarenessTarget();
};

