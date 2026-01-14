#pragma once
#include "CoreMinimal.h"
#include "Nodes/FlowNode.h"

#include "FlowNode_GameAction.generated.h"

class UGameAction;

UCLASS(Blueprintable)
class PANDEMIC_API UFlowNode_GameAction : public UFlowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameAction* GameAction;
    
public:
    UFlowNode_GameAction();

};

