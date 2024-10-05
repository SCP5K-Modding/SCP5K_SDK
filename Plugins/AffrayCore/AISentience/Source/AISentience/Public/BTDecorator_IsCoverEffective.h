#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsCoverEffective.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API UBTDecorator_IsCoverEffective : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeBeforeMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DotThreshold;
    
public:
    UBTDecorator_IsCoverEffective();

};

