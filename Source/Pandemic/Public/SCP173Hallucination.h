#pragma once
#include "CoreMinimal.h"
#include "Hallucination.h"
#include "SCP173Hallucination.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API USCP173Hallucination : public UHallucination {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanStack;
    
public:
    USCP173Hallucination();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasExpendedDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStack() const;
    
};

