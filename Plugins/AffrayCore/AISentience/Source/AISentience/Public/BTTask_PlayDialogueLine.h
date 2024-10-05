#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_PlayDialogueLine.generated.h"

class UDialogueComponent;

UCLASS(Blueprintable)
class AISENTIENCE_API UBTTask_PlayDialogueLine : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DialogueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForCompletion;
    
    UBTTask_PlayDialogueLine();

    UFUNCTION(BlueprintCallable)
    void DialogueInterrupted(UDialogueComponent* Component, FName InDialogueID);
    
    UFUNCTION(BlueprintCallable)
    void DialogueCompleted(UDialogueComponent* Component, FName InDialogueID);
    
};

