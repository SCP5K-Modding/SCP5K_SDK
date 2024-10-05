#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_PlayBlockingIdle.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class UBTTask_PlayBlockingIdle : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> BlockingAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector PlayedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayOnce;
    
    UBTTask_PlayBlockingIdle();

};

