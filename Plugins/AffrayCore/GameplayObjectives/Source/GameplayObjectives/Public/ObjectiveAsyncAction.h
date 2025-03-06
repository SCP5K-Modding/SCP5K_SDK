#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "ObjectiveAsyncOutputPinDelegate.h"
#include "ObjectiveAsyncAction.generated.h"

class UObjective;
class UObjectiveAsyncAction;

UCLASS(Blueprintable)
class GAMEPLAYOBJECTIVES_API UObjectiveAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjective* CurrentObjective;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveAsyncOutputPin Activated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveAsyncOutputPin Deactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveAsyncOutputPin Succeeded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveAsyncOutputPin Failed;
    
    UPROPERTY(AdvancedDisplay, BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveAsyncOutputPin Updated;
    
    UPROPERTY(AdvancedDisplay, BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveAsyncOutputPin Started;
    
    UPROPERTY(AdvancedDisplay, BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveAsyncOutputPin Stopped;
    
    UPROPERTY(AdvancedDisplay, BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveAsyncOutputPin Reset;
    
    UObjectiveAsyncAction();

private:
    UFUNCTION(BlueprintCallable)
    void ObjectiveUpdated(UObjective* Objective);
    
    UFUNCTION(BlueprintCallable)
    void ObjectiveStopped(UObjective* Objective, bool bWasStarted);
    
    UFUNCTION(BlueprintCallable)
    void ObjectiveStarted(UObjective* Objective, bool bWasStarted);
    
    UFUNCTION(BlueprintCallable)
    void ObjectiveReset(UObjective* Objective);
    
public:
    UFUNCTION(BlueprintCallable)
    static UObjectiveAsyncAction* ObjectiveEvents(UObjective* InObjective);
    
private:
    UFUNCTION(BlueprintCallable)
    void ObjectiveDeactivated(UObjective* Objective);
    
    UFUNCTION(BlueprintCallable)
    void ObjectiveCompleted(UObjective* Objective, bool bSucceded);
    
    UFUNCTION(BlueprintCallable)
    void ObjectiveActivated(UObjective* Objective);
    
};

