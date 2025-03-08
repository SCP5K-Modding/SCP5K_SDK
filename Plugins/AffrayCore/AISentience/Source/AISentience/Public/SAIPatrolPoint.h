#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SAIPatrolPoint.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AISENTIENCE_API ASAIPatrolPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PatrolWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PatrolPoint;
    
public:
    ASAIPatrolPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPatrolWaitTime() const;
    
};

