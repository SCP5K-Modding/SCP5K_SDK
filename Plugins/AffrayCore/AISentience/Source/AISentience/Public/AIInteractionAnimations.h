#pragma once
#include "CoreMinimal.h"
#include "AIInteractionAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FAIInteractionAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InteractBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InteractLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InteractEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InteractInterupt;
    
    AISENTIENCE_API FAIInteractionAnimations();
};

