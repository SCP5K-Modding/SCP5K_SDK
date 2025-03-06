#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OnDirectionCompletedDynamicDelegateDelegate.h"
#include "SAIDirectionContainer.h"
#include "ApplyAIDirectionAsyncAction.generated.h"

class AAIController;
class AActor;
class UApplyAIDirectionAsyncAction;
class USAIDirection;

UCLASS(Blueprintable)
class AISENTIENCE_API UApplyAIDirectionAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDirectionCompletedDynamicDelegate Completed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USAIDirection* Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAIController*> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Instigator;
    
    UApplyAIDirectionAsyncAction();

    UFUNCTION(BlueprintCallable)
    static UApplyAIDirectionAsyncAction* ApplyDirectionContainer(FSAIDirectionContainer Container, const TArray<AAIController*>& InTargets, AActor* InInstigator);
    
    UFUNCTION(BlueprintCallable)
    static UApplyAIDirectionAsyncAction* ApplyDirection(USAIDirection* InDirection, const TArray<AAIController*>& InTargets, AActor* InInstigator);
    
};

