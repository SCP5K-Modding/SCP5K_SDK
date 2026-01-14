#pragma once
#include "CoreMinimal.h"
#include "AnimInteraction.h"
#include "GameplayTagContainer.h"
#include "AnimInteractionRepl.generated.h"

USTRUCT(BlueprintType)
struct FAnimInteractionRepl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimInteraction Value;
    
    ANIMATIONINTERACTIONS_API FAnimInteractionRepl();
};

