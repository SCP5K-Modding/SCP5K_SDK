#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ESCP173BehaviorState.h"
#include "BTTask_SetBehaviorState173.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UBTTask_SetBehaviorState173 : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCP173BehaviorState State;
    
public:
    UBTTask_SetBehaviorState173();

};

