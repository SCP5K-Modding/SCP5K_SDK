#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ESAIDirectionResult.h"
#include "SAIDirection.generated.h"

class AAIController;
class AActor;
class APawn;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class AISENTIENCE_API USAIDirection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExecutionDelay;
    
    USAIDirection();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ESAIDirectionResult ReceiveApply(const TArray<AAIController*>& Targets, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwningActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AAIController*> GetControllersFromPawns(TArray<APawn*> Pawns);
    
};

