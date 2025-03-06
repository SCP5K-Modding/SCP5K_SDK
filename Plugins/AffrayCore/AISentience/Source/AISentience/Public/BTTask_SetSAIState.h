#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "ESAIState.h"
#include "BTTask_SetSAIState.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API UBTTask_SetSAIState : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESAIState NewState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFailIfAlreadyInState;
    
    UBTTask_SetSAIState();

};

