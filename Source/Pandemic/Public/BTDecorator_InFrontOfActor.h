#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_InFrontOfActor.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UBTDecorator_InFrontOfActor : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Blackboard_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReverseResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UBTDecorator_InFrontOfActor();

};

