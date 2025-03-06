#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIPerceptionComponent -FallbackName=AIPerceptionComponent
#include "Templates/SubclassOf.h"
#include "SAIPerceptionComponent.generated.h"

class AActor;
class UAISense;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AISENTIENCE_API USAIPerceptionComponent : public UAIPerceptionComponent {
    GENERATED_BODY()
public:
    USAIPerceptionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHostileActorsBySenseNew(TSubclassOf<UAISense> SenseToFilterBy, TArray<AActor*>& OutActors) const;
    
};

