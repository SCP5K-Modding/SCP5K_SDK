#pragma once
#include "CoreMinimal.h"
#include "Nodes/FlowNode.h"
#include "GameplayTagContainer.h"
#include "FlowNode_NotifyBus.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UFlowNode_NotifyBus : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NotifyTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlowNetMode NetMode;
    
public:
    UFlowNode_NotifyBus();

};

